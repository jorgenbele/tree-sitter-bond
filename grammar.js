/**
 * @file Tree-sitter parser for the bond file format
 * @author Jørgen Bele Reinfjell <jorgen.bele@gmail.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "bond",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
