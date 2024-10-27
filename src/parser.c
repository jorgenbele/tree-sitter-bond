#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 148
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 47
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 22

enum ts_symbol_identifiers {
  sym_block_begin = 1,
  sym_block_end = 2,
  anon_sym_namespace = 3,
  anon_sym_import = 4,
  anon_sym_struct = 5,
  anon_sym_SEMI = 6,
  anon_sym_using = 7,
  anon_sym_EQ = 8,
  anon_sym_LBRACK = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_RBRACK = 12,
  anon_sym_COLON = 13,
  anon_sym_view_of = 14,
  anon_sym_COMMA = 15,
  anon_sym_enum = 16,
  anon_sym_string = 17,
  anon_sym_wstring = 18,
  aux_sym_primitive_type_token1 = 19,
  aux_sym_primitive_type_token2 = 20,
  anon_sym_blob = 21,
  anon_sym_float = 22,
  anon_sym_double = 23,
  anon_sym_bool = 24,
  anon_sym_list = 25,
  anon_sym_vector = 26,
  anon_sym_set = 27,
  anon_sym_map = 28,
  anon_sym_optional = 29,
  anon_sym_nullable = 30,
  anon_sym_maybe = 31,
  anon_sym_bonded = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  aux_sym_enum_constant_token1 = 35,
  aux_sym_enum_constant_token2 = 36,
  anon_sym__ = 37,
  sym_nothing = 38,
  aux_sym_integer_token1 = 39,
  anon_sym_0 = 40,
  anon_sym_DOT = 41,
  anon_sym_DQUOTE = 42,
  sym_string_content = 43,
  sym_escape_sequence = 44,
  sym_identifier = 45,
  sym_comment = 46,
  sym_source_file = 47,
  sym_namespace = 48,
  sym_import = 49,
  sym_forward_decl = 50,
  sym_using = 51,
  sym_attribute = 52,
  sym_struct = 53,
  sym_struct_body = 54,
  sym_struct_field = 55,
  sym_struct_view = 56,
  sym_struct_view_body = 57,
  sym_enum = 58,
  sym_enum_body = 59,
  sym_enum_field = 60,
  sym_type = 61,
  sym_primitive_type = 62,
  sym_container_type = 63,
  sym_builtin_type = 64,
  sym_user_defined_type = 65,
  sym_generic_type_decl = 66,
  sym_generic_type = 67,
  sym_default_value = 68,
  sym_enum_constant = 69,
  sym_field_name = 70,
  sym_integer = 71,
  sym_full_ident = 72,
  sym_string = 73,
  aux_sym__string_content = 74,
  aux_sym_source_file_repeat1 = 75,
  aux_sym_source_file_repeat2 = 76,
  aux_sym_struct_body_repeat1 = 77,
  aux_sym_struct_view_body_repeat1 = 78,
  aux_sym_enum_body_repeat1 = 79,
  aux_sym_generic_type_decl_repeat1 = 80,
  aux_sym_generic_type_repeat1 = 81,
  aux_sym_enum_constant_repeat1 = 82,
  aux_sym_integer_repeat1 = 83,
  aux_sym_full_ident_repeat1 = 84,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_block_begin] = "block_begin",
  [sym_block_end] = "block_end",
  [anon_sym_namespace] = "namespace",
  [anon_sym_import] = "import",
  [anon_sym_struct] = "struct",
  [anon_sym_SEMI] = ";",
  [anon_sym_using] = "using",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [anon_sym_view_of] = "view_of",
  [anon_sym_COMMA] = ",",
  [anon_sym_enum] = "enum",
  [anon_sym_string] = "string",
  [anon_sym_wstring] = "wstring",
  [aux_sym_primitive_type_token1] = "primitive_type_token1",
  [aux_sym_primitive_type_token2] = "primitive_type_token2",
  [anon_sym_blob] = "blob",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_bool] = "bool",
  [anon_sym_list] = "list",
  [anon_sym_vector] = "vector",
  [anon_sym_set] = "set",
  [anon_sym_map] = "map",
  [anon_sym_optional] = "optional",
  [anon_sym_nullable] = "nullable",
  [anon_sym_maybe] = "maybe",
  [anon_sym_bonded] = "bonded",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_enum_constant_token1] = "enum_constant_token1",
  [aux_sym_enum_constant_token2] = "enum_constant_token2",
  [anon_sym__] = "_",
  [sym_nothing] = "nothing",
  [aux_sym_integer_token1] = "integer_token1",
  [anon_sym_0] = "0",
  [anon_sym_DOT] = ".",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_namespace] = "namespace",
  [sym_import] = "import",
  [sym_forward_decl] = "forward_decl",
  [sym_using] = "using",
  [sym_attribute] = "attribute",
  [sym_struct] = "struct",
  [sym_struct_body] = "struct_body",
  [sym_struct_field] = "struct_field",
  [sym_struct_view] = "struct_view",
  [sym_struct_view_body] = "struct_view_body",
  [sym_enum] = "enum",
  [sym_enum_body] = "enum_body",
  [sym_enum_field] = "enum_field",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [sym_container_type] = "container_type",
  [sym_builtin_type] = "builtin_type",
  [sym_user_defined_type] = "user_defined_type",
  [sym_generic_type_decl] = "generic_type_decl",
  [sym_generic_type] = "generic_type",
  [sym_default_value] = "default_value",
  [sym_enum_constant] = "enum_constant",
  [sym_field_name] = "field_name",
  [sym_integer] = "integer",
  [sym_full_ident] = "full_ident",
  [sym_string] = "string",
  [aux_sym__string_content] = "_string_content",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_struct_body_repeat1] = "struct_body_repeat1",
  [aux_sym_struct_view_body_repeat1] = "struct_view_body_repeat1",
  [aux_sym_enum_body_repeat1] = "enum_body_repeat1",
  [aux_sym_generic_type_decl_repeat1] = "generic_type_decl_repeat1",
  [aux_sym_generic_type_repeat1] = "generic_type_repeat1",
  [aux_sym_enum_constant_repeat1] = "enum_constant_repeat1",
  [aux_sym_integer_repeat1] = "integer_repeat1",
  [aux_sym_full_ident_repeat1] = "full_ident_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_block_begin] = sym_block_begin,
  [sym_block_end] = sym_block_end,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_using] = anon_sym_using,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_view_of] = anon_sym_view_of,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_wstring] = anon_sym_wstring,
  [aux_sym_primitive_type_token1] = aux_sym_primitive_type_token1,
  [aux_sym_primitive_type_token2] = aux_sym_primitive_type_token2,
  [anon_sym_blob] = anon_sym_blob,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_nullable] = anon_sym_nullable,
  [anon_sym_maybe] = anon_sym_maybe,
  [anon_sym_bonded] = anon_sym_bonded,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_enum_constant_token1] = aux_sym_enum_constant_token1,
  [aux_sym_enum_constant_token2] = aux_sym_enum_constant_token2,
  [anon_sym__] = anon_sym__,
  [sym_nothing] = sym_nothing,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [anon_sym_0] = anon_sym_0,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_namespace] = sym_namespace,
  [sym_import] = sym_import,
  [sym_forward_decl] = sym_forward_decl,
  [sym_using] = sym_using,
  [sym_attribute] = sym_attribute,
  [sym_struct] = sym_struct,
  [sym_struct_body] = sym_struct_body,
  [sym_struct_field] = sym_struct_field,
  [sym_struct_view] = sym_struct_view,
  [sym_struct_view_body] = sym_struct_view_body,
  [sym_enum] = sym_enum,
  [sym_enum_body] = sym_enum_body,
  [sym_enum_field] = sym_enum_field,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_container_type] = sym_container_type,
  [sym_builtin_type] = sym_builtin_type,
  [sym_user_defined_type] = sym_user_defined_type,
  [sym_generic_type_decl] = sym_generic_type_decl,
  [sym_generic_type] = sym_generic_type,
  [sym_default_value] = sym_default_value,
  [sym_enum_constant] = sym_enum_constant,
  [sym_field_name] = sym_field_name,
  [sym_integer] = sym_integer,
  [sym_full_ident] = sym_full_ident,
  [sym_string] = sym_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_struct_body_repeat1] = aux_sym_struct_body_repeat1,
  [aux_sym_struct_view_body_repeat1] = aux_sym_struct_view_body_repeat1,
  [aux_sym_enum_body_repeat1] = aux_sym_enum_body_repeat1,
  [aux_sym_generic_type_decl_repeat1] = aux_sym_generic_type_decl_repeat1,
  [aux_sym_generic_type_repeat1] = aux_sym_generic_type_repeat1,
  [aux_sym_enum_constant_repeat1] = aux_sym_enum_constant_repeat1,
  [aux_sym_integer_repeat1] = aux_sym_integer_repeat1,
  [aux_sym_full_ident_repeat1] = aux_sym_full_ident_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_block_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_block_end] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_using] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_view_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_wstring] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_primitive_type_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_primitive_type_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_blob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nullable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_maybe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bonded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_enum_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constant_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_nothing] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_forward_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_using] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_body] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_field] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_view] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_view_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_body] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_field] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_container_type] = {
    .visible = true,
    .named = true,
  },
  [sym_builtin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_type] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_default_value] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_field_name] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_full_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_view_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_type_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_generic_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_constant_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_full_ident_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_base_struct = 1,
  field_constant_name = 2,
  field_name = 3,
  field_ordinal = 4,
  field_path = 5,
  field_type = 6,
  field_type_alias = 7,
  field_value = 8,
  field_view_name = 9,
  field_view_of_name = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_base_struct] = "base_struct",
  [field_constant_name] = "constant_name",
  [field_name] = "name",
  [field_ordinal] = "ordinal",
  [field_path] = "path",
  [field_type] = "type",
  [field_type_alias] = "type_alias",
  [field_value] = "value",
  [field_view_name] = "view_name",
  [field_view_of_name] = "view_of_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 2},
  [6] = {.index = 7, .length = 1},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 2},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 2},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 1},
  [17] = {.index = 27, .length = 2},
  [18] = {.index = 29, .length = 1},
  [19] = {.index = 30, .length = 2},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 2},
  [3] =
    {field_base_struct, 3},
    {field_name, 1},
  [5] =
    {field_view_name, 1},
    {field_view_of_name, 3},
  [7] =
    {field_constant_name, 0},
  [8] =
    {field_base_struct, 4},
    {field_name, 1},
  [10] =
    {field_type, 3},
    {field_type_alias, 1},
  [12] =
    {field_base_struct, 4},
    {field_name, 2},
  [14] =
    {field_view_name, 2},
    {field_view_of_name, 4},
  [16] =
    {field_name, 1},
    {field_name, 2, .inherited = true},
  [18] =
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [20] =
    {field_name, 1},
    {field_value, 3},
  [22] =
    {field_constant_name, 0},
    {field_value, 2},
  [24] =
    {field_base_struct, 5},
    {field_name, 2},
  [26] =
    {field_type, 2},
  [27] =
    {field_ordinal, 0},
    {field_type, 2},
  [29] =
    {field_type, 1},
  [30] =
    {field_type, 2},
    {field_type, 3, .inherited = true},
  [32] =
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [34] =
    {field_ordinal, 1},
    {field_type, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '"', 102,
        '(', 67,
        ')', 68,
        ',', 72,
        '.', 101,
        '/', 3,
        '0', 100,
        ':', 70,
        ';', 63,
        '<', 92,
        '=', 65,
        '>', 93,
        '[', 66,
        '\\', 10,
        ']', 69,
        '_', 97,
        'n', 95,
        '{', 58,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0) ADVANCE(107);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(102);
      if (lookahead == '/') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(177);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        ',', 72,
        '/', 3,
        ':', 70,
        ';', 63,
        'b', 141,
        'd', 155,
        'f', 142,
        'i', 147,
        'l', 138,
        'm', 115,
        'n', 173,
        'o', 159,
        's', 131,
        'u', 137,
        'v', 126,
        'w', 163,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '<') ADVANCE(92);
      if (lookahead == '=') ADVANCE(65);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead == '}') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 8:
      if (lookahead == ',') ADVANCE(72);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(63);
      if (lookahead == '_') ADVANCE(97);
      if (lookahead == '}') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead == 'n') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(9);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 10:
      if (lookahead == 'U') ADVANCE(54);
      if (lookahead == 'u') ADVANCE(50);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(98);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(64);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == 'w') ADVANCE(11);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 55:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        '"', 102,
        '(', 67,
        ')', 68,
        ',', 72,
        '.', 101,
        '/', 3,
        '0', 100,
        ':', 70,
        ';', 63,
        '<', 92,
        '=', 65,
        '>', 93,
        '[', 66,
        ']', 69,
        '_', 97,
        'n', 95,
        '{', 58,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(55);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(94);
      END_STATE();
    case 56:
      if (eof) ADVANCE(57);
      ADVANCE_MAP(
        ')', 68,
        '.', 101,
        '/', 3,
        '0', 100,
        ':', 70,
        ';', 63,
        '<', 92,
        '[', 66,
        'e', 30,
        'i', 26,
        'n', 12,
        's', 41,
        'u', 39,
        'v', 24,
        '{', 58,
        '}', 59,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(56);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_block_begin);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_block_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_using);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_view_of);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_wstring);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (lookahead == '3') ADVANCE(111);
      if (lookahead == '6') ADVANCE(113);
      if (lookahead == '8') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_primitive_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == '6') ADVANCE(114);
      if (lookahead == '8') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_primitive_type_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_blob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_list);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_set);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_optional);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_nullable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_maybe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_bonded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_enum_constant_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_enum_constant_token1);
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_enum_constant_token2);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_nothing);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_0);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(106);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 't') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'o') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(125);
      if (lookahead == 'o') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 'y') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(175);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 56},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 56},
  [10] = {.lex_state = 56},
  [11] = {.lex_state = 56},
  [12] = {.lex_state = 56},
  [13] = {.lex_state = 56},
  [14] = {.lex_state = 56},
  [15] = {.lex_state = 56},
  [16] = {.lex_state = 56},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 56},
  [19] = {.lex_state = 56},
  [20] = {.lex_state = 56},
  [21] = {.lex_state = 56},
  [22] = {.lex_state = 56},
  [23] = {.lex_state = 56},
  [24] = {.lex_state = 56},
  [25] = {.lex_state = 56},
  [26] = {.lex_state = 56},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 56},
  [33] = {.lex_state = 56},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 9},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 56},
  [50] = {.lex_state = 56},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 56},
  [54] = {.lex_state = 56},
  [55] = {.lex_state = 56},
  [56] = {.lex_state = 56},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 56},
  [59] = {.lex_state = 56},
  [60] = {.lex_state = 56},
  [61] = {.lex_state = 56},
  [62] = {.lex_state = 56},
  [63] = {.lex_state = 56},
  [64] = {.lex_state = 56},
  [65] = {.lex_state = 56},
  [66] = {.lex_state = 56},
  [67] = {.lex_state = 56},
  [68] = {.lex_state = 56},
  [69] = {.lex_state = 7},
  [70] = {.lex_state = 56},
  [71] = {.lex_state = 56},
  [72] = {.lex_state = 56},
  [73] = {.lex_state = 56},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 56},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 56},
  [81] = {.lex_state = 56},
  [82] = {.lex_state = 7},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 56},
  [85] = {.lex_state = 56},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 56},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 7},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
  [115] = {.lex_state = 56},
  [116] = {.lex_state = 7},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 7},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 7},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 7},
  [133] = {.lex_state = 7},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 7},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_block_begin] = ACTIONS(1),
    [sym_block_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_enum_constant_token1] = ACTIONS(1),
    [aux_sym_enum_constant_token2] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_nothing] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [anon_sym_0] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(134),
    [sym_namespace] = STATE(9),
    [sym_import] = STATE(9),
    [sym_forward_decl] = STATE(12),
    [sym_using] = STATE(12),
    [sym_attribute] = STATE(115),
    [sym_struct] = STATE(12),
    [sym_struct_view] = STATE(12),
    [sym_enum] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(9),
    [aux_sym_source_file_repeat2] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_namespace] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_struct] = ACTIONS(11),
    [anon_sym_using] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_enum] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(91), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [45] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(121), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [90] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(92), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [135] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(103), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [180] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(116), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [225] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(102), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [270] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(52), 1,
      sym_primitive_type,
    STATE(57), 1,
      sym_user_defined_type,
    STATE(82), 1,
      sym_generic_type,
    STATE(113), 1,
      sym_type,
    STATE(124), 1,
      sym_container_type,
    STATE(146), 1,
      sym_builtin_type,
    ACTIONS(19), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(21), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [315] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_namespace,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_attribute,
    STATE(15), 3,
      sym_namespace,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(10), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [356] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_attribute,
    STATE(13), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [386] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    ACTIONS(33), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      anon_sym_view_of,
    ACTIONS(39), 1,
      anon_sym_LT,
    STATE(21), 1,
      sym_generic_type_decl,
    STATE(49), 1,
      sym_struct_body,
    ACTIONS(29), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [418] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_using,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(115), 1,
      sym_attribute,
    STATE(13), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [448] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      anon_sym_struct,
    ACTIONS(46), 1,
      anon_sym_using,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_enum,
    STATE(115), 1,
      sym_attribute,
    STATE(13), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [478] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    ACTIONS(39), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(59), 1,
      anon_sym_view_of,
    STATE(25), 1,
      sym_generic_type_decl,
    STATE(54), 1,
      sym_struct_body,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [507] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_namespace,
    ACTIONS(66), 1,
      anon_sym_import,
    STATE(15), 3,
      sym_namespace,
      sym_import,
      aux_sym_source_file_repeat1,
    ACTIONS(61), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [529] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(17), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [548] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(73), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_DOT,
    STATE(18), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(75), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [586] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 8,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_enum,
  [600] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(82), 1,
      sym_block_end,
    ACTIONS(84), 1,
      aux_sym_integer_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    STATE(87), 1,
      sym_attribute,
    STATE(137), 1,
      sym_integer,
    STATE(26), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [626] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    ACTIONS(90), 1,
      anon_sym_COLON,
    STATE(50), 1,
      sym_struct_body,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 8,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_enum,
  [660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 8,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
      anon_sym_DOT,
  [674] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      sym_block_end,
    ACTIONS(96), 1,
      anon_sym_LBRACK,
    ACTIONS(99), 1,
      aux_sym_integer_token1,
    ACTIONS(102), 1,
      anon_sym_0,
    STATE(87), 1,
      sym_attribute,
    STATE(137), 1,
      sym_integer,
    STATE(24), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [700] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    ACTIONS(107), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_struct_body,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [720] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      aux_sym_integer_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    ACTIONS(109), 1,
      sym_block_end,
    STATE(87), 1,
      sym_attribute,
    STATE(137), 1,
      sym_integer,
    STATE(24), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [759] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    STATE(71), 1,
      sym_struct_body,
    ACTIONS(113), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [776] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_block_begin,
    STATE(72), 1,
      sym_struct_view_body,
    ACTIONS(115), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [793] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_block_begin,
    STATE(59), 1,
      sym_enum_body,
    ACTIONS(119), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 7,
      ts_builtin_sym_end,
      anon_sym_namespace,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [823] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 7,
      ts_builtin_sym_end,
      sym_block_begin,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_enum,
  [836] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_block_begin,
    STATE(55), 1,
      sym_enum_body,
    ACTIONS(127), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [853] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_integer_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    ACTIONS(129), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(131), 1,
      sym_nothing,
    STATE(106), 1,
      sym_default_value,
    STATE(94), 2,
      sym_enum_constant,
      sym_integer,
  [876] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    STATE(62), 1,
      sym_struct_body,
    ACTIONS(133), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [893] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_block_begin,
    STATE(66), 1,
      sym_struct_view_body,
    ACTIONS(135), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 7,
      ts_builtin_sym_end,
      sym_block_begin,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_enum,
  [923] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(40), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(139), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(141), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [940] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    STATE(68), 1,
      sym_struct_body,
    ACTIONS(143), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [957] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(145), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(147), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [974] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_integer_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    ACTIONS(129), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(131), 1,
      sym_nothing,
    STATE(143), 1,
      sym_default_value,
    STATE(94), 2,
      sym_enum_constant,
      sym_integer,
  [997] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(42), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(149), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(151), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [1014] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_integer_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    ACTIONS(129), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(131), 1,
      sym_nothing,
    STATE(145), 1,
      sym_default_value,
    STATE(94), 2,
      sym_enum_constant,
      sym_integer,
  [1037] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_block_begin,
    STATE(60), 1,
      sym_struct_body,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [1066] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      aux_sym_enum_constant_token2,
    STATE(46), 1,
      aux_sym_integer_repeat1,
    ACTIONS(158), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_enum_constant_token2,
    STATE(46), 1,
      aux_sym_integer_repeat1,
    ACTIONS(163), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1098] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_enum_constant_token2,
    STATE(47), 1,
      aux_sym_integer_repeat1,
    ACTIONS(167), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1136] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LT,
    ACTIONS(175), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1171] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LT,
    ACTIONS(175), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1217] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1239] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1261] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1283] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1294] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1316] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1338] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [1349] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1360] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1393] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1413] = 4,
    ACTIONS(223), 1,
      anon_sym_DQUOTE,
    ACTIONS(228), 1,
      sym_comment,
    STATE(76), 1,
      aux_sym__string_content,
    ACTIONS(225), 2,
      sym_string_content,
      sym_escape_sequence,
  [1427] = 4,
    ACTIONS(228), 1,
      sym_comment,
    ACTIONS(230), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym__string_content,
    ACTIONS(232), 2,
      sym_string_content,
      sym_escape_sequence,
  [1441] = 4,
    ACTIONS(228), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(76), 1,
      aux_sym__string_content,
    ACTIONS(236), 2,
      sym_string_content,
      sym_escape_sequence,
  [1455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 4,
      anon_sym_struct,
      anon_sym_enum,
      aux_sym_integer_token1,
      anon_sym_0,
  [1475] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1495] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1525] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(250), 1,
      anon_sym_GT,
    STATE(90), 1,
      aux_sym_generic_type_decl_repeat1,
  [1538] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_integer_token1,
    ACTIONS(86), 1,
      anon_sym_0,
    STATE(123), 1,
      sym_integer,
  [1551] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_block_end,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_enum_body_repeat1,
  [1564] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_struct_view_body_repeat1,
  [1577] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_GT,
    STATE(90), 1,
      aux_sym_generic_type_decl_repeat1,
  [1590] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COMMA,
    ACTIONS(265), 1,
      anon_sym_GT,
    STATE(86), 1,
      aux_sym_generic_type_decl_repeat1,
  [1603] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(269), 1,
      anon_sym_GT,
    STATE(96), 1,
      aux_sym_generic_type_repeat1,
  [1616] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      sym_block_end,
    ACTIONS(273), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_enum_body_repeat1,
  [1629] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      sym_block_end,
    STATE(88), 1,
      aux_sym_enum_body_repeat1,
  [1651] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_GT,
    STATE(99), 1,
      aux_sym_generic_type_repeat1,
  [1664] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    ACTIONS(284), 1,
      anon_sym_COMMA,
    STATE(97), 1,
      aux_sym_struct_view_body_repeat1,
  [1677] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    STATE(97), 1,
      aux_sym_struct_view_body_repeat1,
  [1690] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_COMMA,
    ACTIONS(292), 1,
      anon_sym_GT,
    STATE(99), 1,
      aux_sym_generic_type_repeat1,
  [1703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_EQ,
    ACTIONS(294), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_block_end,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(95), 1,
      sym_enum_field,
  [1727] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(111), 1,
      sym_field_name,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1745] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      sym_string,
  [1755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      sym_identifier,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1781] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_EQ,
  [1799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      sym_identifier,
    STATE(107), 1,
      sym_enum_field,
  [1809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_EQ,
  [1819] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
    STATE(141), 1,
      sym_user_defined_type,
  [1845] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_struct,
    ACTIONS(332), 1,
      anon_sym_enum,
  [1855] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      sym_identifier,
    STATE(109), 1,
      sym_field_name,
  [1865] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      anon_sym_DQUOTE,
    STATE(125), 1,
      sym_string,
  [1875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      sym_identifier,
    STATE(27), 1,
      sym_full_ident,
  [1885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      sym_identifier,
  [1892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_identifier,
  [1899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_SEMI,
  [1906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_block_end,
  [1913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_COLON,
  [1920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_LT,
  [1927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_RPAREN,
  [1934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      anon_sym_LPAREN,
  [1941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_identifier,
  [1948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_identifier,
  [1955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_identifier,
  [1962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      sym_identifier,
  [1969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_identifier,
  [1976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_identifier,
  [1983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_identifier,
  [1990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
  [1997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_block_end,
  [2004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      sym_identifier,
  [2011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      anon_sym_COLON,
  [2018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_LT,
  [2025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_identifier,
  [2032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      sym_identifier,
  [2039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_EQ,
  [2046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_identifier,
  [2053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      anon_sym_SEMI,
  [2060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(384), 1,
      sym_block_end,
  [2067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_SEMI,
  [2074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_LT,
  [2081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 1,
      anon_sym_RBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 180,
  [SMALL_STATE(7)] = 225,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 356,
  [SMALL_STATE(11)] = 386,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 448,
  [SMALL_STATE(14)] = 478,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 529,
  [SMALL_STATE(17)] = 548,
  [SMALL_STATE(18)] = 567,
  [SMALL_STATE(19)] = 586,
  [SMALL_STATE(20)] = 600,
  [SMALL_STATE(21)] = 626,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 660,
  [SMALL_STATE(24)] = 674,
  [SMALL_STATE(25)] = 700,
  [SMALL_STATE(26)] = 720,
  [SMALL_STATE(27)] = 746,
  [SMALL_STATE(28)] = 759,
  [SMALL_STATE(29)] = 776,
  [SMALL_STATE(30)] = 793,
  [SMALL_STATE(31)] = 810,
  [SMALL_STATE(32)] = 823,
  [SMALL_STATE(33)] = 836,
  [SMALL_STATE(34)] = 853,
  [SMALL_STATE(35)] = 876,
  [SMALL_STATE(36)] = 893,
  [SMALL_STATE(37)] = 910,
  [SMALL_STATE(38)] = 923,
  [SMALL_STATE(39)] = 940,
  [SMALL_STATE(40)] = 957,
  [SMALL_STATE(41)] = 974,
  [SMALL_STATE(42)] = 997,
  [SMALL_STATE(43)] = 1014,
  [SMALL_STATE(44)] = 1037,
  [SMALL_STATE(45)] = 1054,
  [SMALL_STATE(46)] = 1066,
  [SMALL_STATE(47)] = 1082,
  [SMALL_STATE(48)] = 1098,
  [SMALL_STATE(49)] = 1114,
  [SMALL_STATE(50)] = 1125,
  [SMALL_STATE(51)] = 1136,
  [SMALL_STATE(52)] = 1147,
  [SMALL_STATE(53)] = 1160,
  [SMALL_STATE(54)] = 1171,
  [SMALL_STATE(55)] = 1182,
  [SMALL_STATE(56)] = 1193,
  [SMALL_STATE(57)] = 1204,
  [SMALL_STATE(58)] = 1217,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1239,
  [SMALL_STATE(61)] = 1250,
  [SMALL_STATE(62)] = 1261,
  [SMALL_STATE(63)] = 1272,
  [SMALL_STATE(64)] = 1283,
  [SMALL_STATE(65)] = 1294,
  [SMALL_STATE(66)] = 1305,
  [SMALL_STATE(67)] = 1316,
  [SMALL_STATE(68)] = 1327,
  [SMALL_STATE(69)] = 1338,
  [SMALL_STATE(70)] = 1349,
  [SMALL_STATE(71)] = 1360,
  [SMALL_STATE(72)] = 1371,
  [SMALL_STATE(73)] = 1382,
  [SMALL_STATE(74)] = 1393,
  [SMALL_STATE(75)] = 1403,
  [SMALL_STATE(76)] = 1413,
  [SMALL_STATE(77)] = 1427,
  [SMALL_STATE(78)] = 1441,
  [SMALL_STATE(79)] = 1455,
  [SMALL_STATE(80)] = 1465,
  [SMALL_STATE(81)] = 1475,
  [SMALL_STATE(82)] = 1485,
  [SMALL_STATE(83)] = 1495,
  [SMALL_STATE(84)] = 1505,
  [SMALL_STATE(85)] = 1515,
  [SMALL_STATE(86)] = 1525,
  [SMALL_STATE(87)] = 1538,
  [SMALL_STATE(88)] = 1551,
  [SMALL_STATE(89)] = 1564,
  [SMALL_STATE(90)] = 1577,
  [SMALL_STATE(91)] = 1590,
  [SMALL_STATE(92)] = 1603,
  [SMALL_STATE(93)] = 1616,
  [SMALL_STATE(94)] = 1629,
  [SMALL_STATE(95)] = 1638,
  [SMALL_STATE(96)] = 1651,
  [SMALL_STATE(97)] = 1664,
  [SMALL_STATE(98)] = 1677,
  [SMALL_STATE(99)] = 1690,
  [SMALL_STATE(100)] = 1703,
  [SMALL_STATE(101)] = 1714,
  [SMALL_STATE(102)] = 1727,
  [SMALL_STATE(103)] = 1737,
  [SMALL_STATE(104)] = 1745,
  [SMALL_STATE(105)] = 1755,
  [SMALL_STATE(106)] = 1765,
  [SMALL_STATE(107)] = 1773,
  [SMALL_STATE(108)] = 1781,
  [SMALL_STATE(109)] = 1789,
  [SMALL_STATE(110)] = 1799,
  [SMALL_STATE(111)] = 1809,
  [SMALL_STATE(112)] = 1819,
  [SMALL_STATE(113)] = 1827,
  [SMALL_STATE(114)] = 1835,
  [SMALL_STATE(115)] = 1845,
  [SMALL_STATE(116)] = 1855,
  [SMALL_STATE(117)] = 1865,
  [SMALL_STATE(118)] = 1875,
  [SMALL_STATE(119)] = 1885,
  [SMALL_STATE(120)] = 1892,
  [SMALL_STATE(121)] = 1899,
  [SMALL_STATE(122)] = 1906,
  [SMALL_STATE(123)] = 1913,
  [SMALL_STATE(124)] = 1920,
  [SMALL_STATE(125)] = 1927,
  [SMALL_STATE(126)] = 1934,
  [SMALL_STATE(127)] = 1941,
  [SMALL_STATE(128)] = 1948,
  [SMALL_STATE(129)] = 1955,
  [SMALL_STATE(130)] = 1962,
  [SMALL_STATE(131)] = 1969,
  [SMALL_STATE(132)] = 1976,
  [SMALL_STATE(133)] = 1983,
  [SMALL_STATE(134)] = 1990,
  [SMALL_STATE(135)] = 1997,
  [SMALL_STATE(136)] = 2004,
  [SMALL_STATE(137)] = 2011,
  [SMALL_STATE(138)] = 2018,
  [SMALL_STATE(139)] = 2025,
  [SMALL_STATE(140)] = 2032,
  [SMALL_STATE(141)] = 2039,
  [SMALL_STATE(142)] = 2046,
  [SMALL_STATE(143)] = 2053,
  [SMALL_STATE(144)] = 2060,
  [SMALL_STATE(145)] = 2067,
  [SMALL_STATE(146)] = 2074,
  [SMALL_STATE(147)] = 2081,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(130),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(114),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(129),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(104),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(139),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(128),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(79),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, 0, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 4, 0, 5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_decl, 3, 0, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 2, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 9),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 5, 0, 10),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_decl, 4, 0, 11),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constant, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 15),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constant, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constant_repeat1, 2, 0, 0),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 7),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, 0, 8),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 3),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 7),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 9),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_decl, 3, 0, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 3, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 2, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 6, 0, 10),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 7, 0, 15),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 4, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 4),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 5, 0, 5),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 5, 0, 11),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4, 0, 16),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 8, 0, 21),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(76),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6, 0, 13),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 6, 0, 21),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 5, 0, 19),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5, 0, 17),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 7, 0, 17),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 12), SHIFT_REPEAT(5),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 12),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 1, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 12),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 12), SHIFT_REPEAT(119),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 20), SHIFT_REPEAT(8),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 20),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 6),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 2),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 14),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 18),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [364] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_type, 1, 0, 0),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bond(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
