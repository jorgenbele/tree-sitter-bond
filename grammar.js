/**
 * @file Tree-sitter parser for the bond file format
 * @author Jørgen Bele Reinfjell <jorgen.bele@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
//

// Based on https://microsoft.github.io/bond/manual/compiler.html#idl-syntax

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

    namespace: $ => seq('namespace', field('path', $.full_ident)),

    import: $ => seq('import', field('path', $.string)),

    forward_decl: $ => seq('struct', $.struct_name, ';'),

    using: $ => seq(
      "using",
      $.using_defined_type,
      "=",
      $.type,
      ";"
    ),

    using_defined_type: $ => $.user_defined_type,

    attribute: $ => seq(
      "[",
      $.attribute_name,
      "(",
      $.attribute_value,
      ")",
      "]",
    ),

    attribute_name: $ => $.identifier,
    attribute_value: $ => $.string,

    block_begin: $ => "{",
    block_end: $ => "}",

    struct_view: $ => seq(
      optional($.attribute),
      "struct",
      $.struct_name,
      "view_of",
      $.struct_name,
      optional($.struct_view_body),
    ),

    // TODO: fix struct body
    struct_view_body: $ => seq(
      $.block_begin,
      $.identifier,
      optional(repeat(seq(
        ",",
        $.identifier
      ))),
      ";",
      $.block_end,
    ),

    enum: $ => seq(
      optional($.attribute),
      'enum',
      $.enum_name,
      optional($.enum_body),
    ),

    enum_name: $ => $.identifier,

    enum_body: $ => seq(
        $.block_begin,
        $.enum_field,
        repeat(seq(
          ",",
          $.enum_field)),

        $.block_end,
     ),

    enum_field: $ => seq(
      // optional($.attribute),
      $.enum_constant_name,
      optional(
        seq(
          '=', 
          $.default_value,
        )
      ),
    ),

    enum_constant_name: $ => $.identifier,

    struct: $ => seq(
      optional($.attribute),
      'struct',
      $.struct_name,
      optional($.generic_type_decl),
      optional(seq(
        ':',
        $.base_struct
      )),
      optional($.struct_body),
    ),

    base_struct: $ => $.struct_name,

    field_type: $ => $.type,

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
      $.type,
      optional(
        repeat(seq(
          ",",
          $.type,
        ))
      ),
      ">",
    ),

    generic_type: $ => seq(
      choice($.builtin_type, $.user_defined_type),
      "<",
      $.type,
      optional(
        repeat(seq(
          ",",
          $.type,
        ))
      ),
      ">",
    ),

    struct_name: $ => $.identifier,

    // TODO: fix struct body
    struct_body: $ => seq($.block_begin, $.struct_field, optional(repeat($.struct_field)), $.block_end),

    struct_field: $ => seq(
      optional($.attribute),
      $.ordinal,
      ':',
      $.field_type,
      $.field_name,
      optional(
        seq(
          '=', 
          $.default_value,
        )
      ),
      ';'
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

    ordinal: $ => $.integer,

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

    // TODO: replace this and escape_sequence
    // was copied from https://github.com/mitchellh/tree-sitter-proto/blob/main/grammar.js#L448
    string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(1, /[^"\\]+/)),
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          token.immediate(prec(1, /[^'\\]+/)),
          $.escape_sequence
        )),
        "'",
      ),
    ),

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
