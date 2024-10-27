/**
 * @file Tree-sitter parser for the bond file format
 * @author Jørgen Bele Reinfjell <jorgen.bele@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

// Based on spec found here: https://microsoft.github.io/bond/manual/compiler.html#idl-syntax

const letter = /[a-zA-Z]/;
const decimal_digit = /[0-9]/;

module.exports = grammar({
  name: "bond",

  extras: $ => [$.comment, /\s/],

  rules: {
    // Syntax:
    source_file: $ => seq(
      $.namespace,
      optional(repeat(choice(
        $.import
      ))),
      optional(repeat(choice(
        $.using,
        $.forward_decl,
        $.struct,
        $.struct_view,
        $.enum,
      )))
    ),

    block_begin: $ => "{",
    block_end: $ => "}",

    // https://microsoft.github.io/bond/manual/compiler.html#namespace-definition
    namespace: $ => seq('namespace', field('path', $.full_ident)),

    // https://microsoft.github.io/bond/manual/compiler.html#import-statements
    import: $ => seq('import', field('path', $.string)),

    // https://microsoft.github.io/bond/manual/compiler.html#forward-declaration
    forward_decl: $ => seq('struct', field("name", $.identifier), ';'),

    // https://microsoft.github.io/bond/manual/compiler.html#type-aliases
    using: $ => seq(
      "using",
      field("type_alias", $.user_defined_type),
      "=",
      field("type", $.type),
      ";"
    ),

    // https://microsoft.github.io/bond/manual/compiler.html#custom-attributes
    attribute: $ => seq(
      "[",
      field("name", $.identifier),
      "(",
      field("value", $.string),
      ")",
      "]",
    ),

    /*
     * Struct:
     * https://microsoft.github.io/bond/manual/compiler.html#generic-struct
     */
    struct: $ => seq(
      optional($.attribute),
      'struct',
      field("name", $.identifier),
      optional($.generic_type_decl),
      optional(seq(
        ':',
        field("base_struct", $.identifier),
      )),
      optional($.struct_body),
    ),

    struct_body: $ => seq(
      $.block_begin,
      $.struct_field,
      optional(
        repeat(
          $.struct_field
        )
      ),
      $.block_end),

    struct_field: $ => seq(
      optional($.attribute),
      field("ordinal", $.integer),
      ':',
      field("type", $.type),
      $.field_name,
      optional(
        seq(
          '=', 
          $.default_value,
        )
      ),
      ';'
    ),

    /*
     * Struct view
     */
    struct_view: $ => seq(
      optional($.attribute),
      "struct",
      field("view_name", $.identifier),
      "view_of",
      field("view_of_name", $.identifier),
      optional($.struct_view_body),
    ),

    struct_view_body: $ => seq(
      $.block_begin,
      commaSep(field("name", $.identifier)),
      ";",
      $.block_end,
    ),

    /*
     * Enum:
     * https://microsoft.github.io/bond/manual/compiler.html#enum-definition
     */
    enum: $ => seq(
      optional($.attribute),
      'enum',
      field("name", $.identifier),
      optional($.enum_body),
    ),

    enum_body: $ => seq(
      $.block_begin,
      commaSep($.enum_field),
      $.block_end,
    ),

    enum_field: $ => seq(
      // optional($.attribute),
      field("constant_name", $.identifier),
      optional(
        seq(
          '=', 
          field("value", $.default_value),
        )
      ),
    ),

    /*
     * Types
     */

    type: $ => choice(
      $.primitive_type,
      $.user_defined_type,
      $.generic_type,
    ),

    primitive_type: $ => choice(
      "string",
      "wstring",
      /int(8|32|64)?/,
      /uint(8|32|64)?/,
      "blob",
      "float",
      "double",
      "bool"
    ),

    container_type: $ => choice(
      "list",
      "vector",
      "set",
      "map",
      "optional", 
      "nullable",
      "maybe",
      "bonded",
    ),

    builtin_type: $ => choice(
      $.container_type,
      $.primitive_type
    ),

    user_defined_type: $ => $.identifier,

    generic_type_decl: $ => seq(
      "<",
      commaSep1(field("name", $.type)),
      ">",
    ),

    generic_type: $ => seq(
      choice($.builtin_type, $.user_defined_type),
      "<",
      commaSep1(field("type", $.type)),
      ">",
    ),

    default_value: $ => choice(
      $.nothing,
      $.enum_constant,
      $.integer,
    ),

    enum_constant: $ => seq(
      letter,
      optional(repeat(choice(
        letter,
        decimal_digit,
        '_',
      )))),

    field_name: $ => $.identifier,

    nothing: $ => "nothing",

    integer: $ => choice(
      seq(
        /[1-9]/,
        optional(repeat(
          /[0-9]/)
        )
      ),
      "0" 
    ),

    full_ident: $ => seq(
      $.identifier,
      optional(repeat(seq('.', $.identifier)))
    ),

    // String parsing was copied from tree-sitter-json
    string: $ => choice(
      seq('"', '"'),
      seq('"', $._string_content, '"'),
    ),

    _string_content: $ => repeat1(choice(
      $.string_content,
      $.escape_sequence,
    )),

    string_content: _ => token.immediate(prec(1, /[^\\"\n]+/)),

    escape_sequence: _ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/,
    )),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xuU]/,
        /\d{2,3}/,
        /x[0-9a-fA-F]{2,}/,
        /u[0-9a-fA-F]{4}/,
        /U[0-9a-fA-F]{8}/
      )
    )),

    identifier: $ => token(seq(
      letter,
      optional(repeat(choice(
        letter,
        decimal_digit,
        '_',
      ))),
    )),

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
});

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {RuleOrLiteral} rule
 *
 * @returns {ChoiceRule}
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}
