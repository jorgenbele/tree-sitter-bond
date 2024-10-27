#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 150
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
  [148] = 148,
  [149] = 149,
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
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 56},
  [28] = {.lex_state = 56},
  [29] = {.lex_state = 56},
  [30] = {.lex_state = 56},
  [31] = {.lex_state = 56},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 56},
  [34] = {.lex_state = 56},
  [35] = {.lex_state = 56},
  [36] = {.lex_state = 56},
  [37] = {.lex_state = 56},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 56},
  [40] = {.lex_state = 56},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 9},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 56},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 56},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 56},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 56},
  [56] = {.lex_state = 56},
  [57] = {.lex_state = 56},
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
  [69] = {.lex_state = 56},
  [70] = {.lex_state = 56},
  [71] = {.lex_state = 56},
  [72] = {.lex_state = 56},
  [73] = {.lex_state = 56},
  [74] = {.lex_state = 56},
  [75] = {.lex_state = 56},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 56},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 7},
  [80] = {.lex_state = 56},
  [81] = {.lex_state = 56},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 56},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 56},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 56},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 7},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 7},
  [118] = {.lex_state = 7},
  [119] = {.lex_state = 56},
  [120] = {.lex_state = 7},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 7},
  [126] = {.lex_state = 7},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 7},
  [129] = {.lex_state = 7},
  [130] = {.lex_state = 7},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 7},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 7},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 7},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
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
    [sym_source_file] = STATE(140),
    [sym_namespace] = STATE(9),
    [anon_sym_namespace] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(91), 1,
      sym_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
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
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(104), 1,
      sym_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
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
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(133), 1,
      sym_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
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
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(97), 1,
      sym_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
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
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(107), 1,
      sym_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
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
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(118), 1,
      sym_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
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
    ACTIONS(11), 1,
      sym_identifier,
    STATE(53), 1,
      sym_primitive_type,
    STATE(54), 1,
      sym_user_defined_type,
    STATE(76), 1,
      sym_generic_type,
    STATE(116), 1,
      sym_type,
    STATE(132), 1,
      sym_builtin_type,
    STATE(148), 1,
      sym_container_type,
    ACTIONS(7), 8,
      anon_sym_string,
      anon_sym_wstring,
      aux_sym_primitive_type_token1,
      aux_sym_primitive_type_token2,
      anon_sym_blob,
      anon_sym_float,
      anon_sym_double,
      anon_sym_bool,
    ACTIONS(9), 8,
      anon_sym_list,
      anon_sym_vector,
      anon_sym_set,
      anon_sym_map,
      anon_sym_optional,
      anon_sym_nullable,
      anon_sym_maybe,
      anon_sym_bonded,
  [315] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_using,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_enum,
    STATE(119), 1,
      sym_attribute,
    STATE(10), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(12), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [352] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_import,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_using,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_attribute,
    STATE(17), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    STATE(11), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [389] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_using,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_attribute,
    STATE(13), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [419] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_struct,
    ACTIONS(19), 1,
      anon_sym_using,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_enum,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(119), 1,
      sym_attribute,
    STATE(13), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [449] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_struct,
    ACTIONS(34), 1,
      anon_sym_using,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      anon_sym_enum,
    STATE(119), 1,
      sym_attribute,
    STATE(13), 6,
      sym_forward_decl,
      sym_using,
      sym_struct,
      sym_struct_view,
      sym_enum,
      aux_sym_source_file_repeat2,
  [479] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    ACTIONS(47), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      anon_sym_COLON,
    ACTIONS(51), 1,
      anon_sym_view_of,
    ACTIONS(53), 1,
      anon_sym_LT,
    STATE(18), 1,
      sym_generic_type_decl,
    STATE(63), 1,
      sym_struct_body,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [511] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    ACTIONS(53), 1,
      anon_sym_LT,
    ACTIONS(57), 1,
      anon_sym_COLON,
    ACTIONS(59), 1,
      anon_sym_view_of,
    STATE(20), 1,
      sym_generic_type_decl,
    STATE(57), 1,
      sym_struct_body,
    ACTIONS(55), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [540] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_block_end,
    ACTIONS(63), 1,
      anon_sym_LBRACK,
    ACTIONS(66), 1,
      aux_sym_integer_token1,
    ACTIONS(69), 1,
      anon_sym_0,
    STATE(103), 1,
      sym_attribute,
    STATE(146), 1,
      sym_integer,
    STATE(16), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [566] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_import,
    STATE(17), 2,
      sym_import,
      aux_sym_source_file_repeat1,
    ACTIONS(72), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [584] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    ACTIONS(79), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_struct_body,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [604] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(23), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    ACTIONS(87), 1,
      anon_sym_COLON,
    STATE(64), 1,
      sym_struct_body,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [642] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(89), 1,
      sym_block_end,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    STATE(103), 1,
      sym_attribute,
    STATE(146), 1,
      sym_integer,
    STATE(16), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [668] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    ACTIONS(95), 1,
      sym_block_end,
    STATE(103), 1,
      sym_attribute,
    STATE(146), 1,
      sym_integer,
    STATE(21), 2,
      sym_struct_field,
      aux_sym_struct_body_repeat1,
  [694] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(97), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_DOT,
    STATE(24), 1,
      aux_sym_full_ident_repeat1,
    ACTIONS(99), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [730] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_block_begin,
    STATE(58), 1,
      sym_enum_body,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [747] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    ACTIONS(108), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(110), 1,
      sym_nothing,
    STATE(147), 1,
      sym_default_value,
    STATE(95), 2,
      sym_enum_constant,
      sym_integer,
  [770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    STATE(51), 1,
      sym_struct_body,
    ACTIONS(112), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_block_begin,
    STATE(60), 1,
      sym_struct_view_body,
    ACTIONS(114), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_block_begin,
    STATE(66), 1,
      sym_enum_body,
    ACTIONS(118), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_enum,
  [834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 7,
      ts_builtin_sym_end,
      sym_block_begin,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_enum,
  [847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    ACTIONS(108), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(110), 1,
      sym_nothing,
    STATE(108), 1,
      sym_default_value,
    STATE(95), 2,
      sym_enum_constant,
      sym_integer,
  [870] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    STATE(69), 1,
      sym_struct_body,
    ACTIONS(124), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(116), 1,
      sym_block_begin,
    STATE(70), 1,
      sym_struct_view_body,
    ACTIONS(126), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
      anon_sym_DOT,
  [917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    STATE(67), 1,
      sym_struct_body,
    ACTIONS(128), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      sym_block_begin,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_enum,
  [947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(132), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(134), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [964] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_block_begin,
    STATE(72), 1,
      sym_struct_body,
    ACTIONS(136), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_enum,
  [994] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(140), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(142), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [1011] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    ACTIONS(108), 1,
      aux_sym_enum_constant_token1,
    ACTIONS(110), 1,
      sym_nothing,
    STATE(145), 1,
      sym_default_value,
    STATE(95), 2,
      sym_enum_constant,
      sym_integer,
  [1034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    STATE(43), 1,
      aux_sym_enum_constant_repeat1,
    ACTIONS(144), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
    ACTIONS(146), 3,
      aux_sym_enum_constant_token1,
      aux_sym_enum_constant_token2,
      anon_sym__,
  [1051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 6,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1075] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_enum_constant_token2,
    STATE(50), 1,
      aux_sym_integer_repeat1,
    ACTIONS(153), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1091] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    STATE(22), 1,
      sym_struct_field,
    STATE(103), 1,
      sym_attribute,
    STATE(146), 1,
      sym_integer,
  [1113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 6,
      anon_sym_SEMI,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [1125] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      aux_sym_enum_constant_token2,
    STATE(46), 1,
      aux_sym_integer_repeat1,
    ACTIONS(159), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1141] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      aux_sym_enum_constant_token2,
    STATE(50), 1,
      aux_sym_integer_repeat1,
    ACTIONS(163), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1157] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_LT,
      anon_sym_GT,
      sym_identifier,
  [1179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LT,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LT,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1227] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1260] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1271] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1282] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1304] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1315] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1337] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1348] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1370] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1414] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 5,
      ts_builtin_sym_end,
      anon_sym_struct,
      anon_sym_using,
      anon_sym_LBRACK,
      anon_sym_enum,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1446] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1456] = 4,
    ACTIONS(218), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_comment,
    STATE(78), 1,
      aux_sym__string_content,
    ACTIONS(220), 2,
      sym_string_content,
      sym_escape_sequence,
  [1470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 4,
      anon_sym_struct,
      anon_sym_enum,
      aux_sym_integer_token1,
      anon_sym_0,
  [1490] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 4,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1510] = 4,
    ACTIONS(223), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_DQUOTE,
    STATE(86), 1,
      aux_sym__string_content,
    ACTIONS(233), 2,
      sym_string_content,
      sym_escape_sequence,
  [1524] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1544] = 4,
    ACTIONS(223), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym__string_content,
    ACTIONS(241), 2,
      sym_string_content,
      sym_escape_sequence,
  [1558] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 4,
      sym_block_end,
      anon_sym_LBRACK,
      aux_sym_integer_token1,
      anon_sym_0,
  [1568] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(248), 1,
      anon_sym_GT,
    STATE(88), 1,
      aux_sym_generic_type_decl_repeat1,
  [1581] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      anon_sym_EQ,
    ACTIONS(250), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1592] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_block_end,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    STATE(92), 1,
      aux_sym_enum_body_repeat1,
  [1605] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_GT,
    STATE(100), 1,
      aux_sym_generic_type_repeat1,
  [1618] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      sym_block_end,
    STATE(96), 1,
      aux_sym_enum_body_repeat1,
  [1631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    STATE(101), 1,
      aux_sym_struct_view_body_repeat1,
  [1644] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_block_end,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(90), 1,
      sym_enum_field,
  [1657] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 3,
      sym_block_end,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_block_end,
    ACTIONS(276), 1,
      anon_sym_COMMA,
    STATE(96), 1,
      aux_sym_enum_body_repeat1,
  [1679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(281), 1,
      anon_sym_GT,
    STATE(102), 1,
      aux_sym_generic_type_decl_repeat1,
  [1692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_GT,
    STATE(98), 1,
      aux_sym_generic_type_repeat1,
  [1705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_struct_view_body_repeat1,
  [1718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
    ACTIONS(293), 1,
      anon_sym_GT,
    STATE(98), 1,
      aux_sym_generic_type_repeat1,
  [1731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_SEMI,
    STATE(99), 1,
      aux_sym_struct_view_body_repeat1,
  [1744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_GT,
    STATE(88), 1,
      aux_sym_generic_type_decl_repeat1,
  [1757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      aux_sym_integer_token1,
    ACTIONS(93), 1,
      anon_sym_0,
    STATE(121), 1,
      sym_integer,
  [1770] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(115), 1,
      sym_field_name,
  [1780] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(134), 1,
      sym_string,
  [1790] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_identifier,
    STATE(109), 1,
      sym_enum_field,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1816] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 2,
      sym_block_end,
      anon_sym_COMMA,
  [1824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(301), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      sym_string,
  [1834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [1842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      anon_sym_SEMI,
    ACTIONS(311), 1,
      sym_identifier,
  [1852] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      anon_sym_EQ,
  [1862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 2,
      anon_sym_SEMI,
      anon_sym_COMMA,
  [1870] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      anon_sym_EQ,
  [1880] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(323), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [1888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_identifier,
    STATE(44), 1,
      sym_full_ident,
  [1898] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(113), 1,
      sym_field_name,
  [1908] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(327), 1,
      anon_sym_struct,
    ACTIONS(329), 1,
      anon_sym_enum,
  [1918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_identifier,
    STATE(122), 1,
      sym_user_defined_type,
  [1928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(333), 1,
      anon_sym_COLON,
  [1935] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      anon_sym_EQ,
  [1942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      sym_identifier,
  [1949] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      sym_block_end,
  [1956] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      sym_identifier,
  [1963] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(343), 1,
      sym_identifier,
  [1970] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(345), 1,
      anon_sym_LT,
  [1977] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_identifier,
  [1984] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_identifier,
  [1991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      sym_identifier,
  [1998] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(353), 1,
      sym_identifier,
  [2005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_LT,
  [2012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(355), 1,
      anon_sym_SEMI,
  [2019] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_RPAREN,
  [2026] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      sym_identifier,
  [2033] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(361), 1,
      sym_identifier,
  [2040] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(363), 1,
      sym_block_end,
  [2047] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(365), 1,
      sym_block_end,
  [2054] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(367), 1,
      sym_identifier,
  [2061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(369), 1,
      ts_builtin_sym_end,
  [2068] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(371), 1,
      sym_identifier,
  [2075] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(373), 1,
      sym_identifier,
  [2082] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(375), 1,
      sym_identifier,
  [2089] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(377), 1,
      anon_sym_LPAREN,
  [2096] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_SEMI,
  [2103] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_COLON,
  [2110] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_SEMI,
  [2117] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_LT,
  [2124] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
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
  [SMALL_STATE(10)] = 352,
  [SMALL_STATE(11)] = 389,
  [SMALL_STATE(12)] = 419,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 479,
  [SMALL_STATE(15)] = 511,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 566,
  [SMALL_STATE(18)] = 584,
  [SMALL_STATE(19)] = 604,
  [SMALL_STATE(20)] = 622,
  [SMALL_STATE(21)] = 642,
  [SMALL_STATE(22)] = 668,
  [SMALL_STATE(23)] = 694,
  [SMALL_STATE(24)] = 712,
  [SMALL_STATE(25)] = 730,
  [SMALL_STATE(26)] = 747,
  [SMALL_STATE(27)] = 770,
  [SMALL_STATE(28)] = 787,
  [SMALL_STATE(29)] = 804,
  [SMALL_STATE(30)] = 821,
  [SMALL_STATE(31)] = 834,
  [SMALL_STATE(32)] = 847,
  [SMALL_STATE(33)] = 870,
  [SMALL_STATE(34)] = 887,
  [SMALL_STATE(35)] = 904,
  [SMALL_STATE(36)] = 917,
  [SMALL_STATE(37)] = 934,
  [SMALL_STATE(38)] = 947,
  [SMALL_STATE(39)] = 964,
  [SMALL_STATE(40)] = 981,
  [SMALL_STATE(41)] = 994,
  [SMALL_STATE(42)] = 1011,
  [SMALL_STATE(43)] = 1034,
  [SMALL_STATE(44)] = 1051,
  [SMALL_STATE(45)] = 1063,
  [SMALL_STATE(46)] = 1075,
  [SMALL_STATE(47)] = 1091,
  [SMALL_STATE(48)] = 1113,
  [SMALL_STATE(49)] = 1125,
  [SMALL_STATE(50)] = 1141,
  [SMALL_STATE(51)] = 1157,
  [SMALL_STATE(52)] = 1168,
  [SMALL_STATE(53)] = 1179,
  [SMALL_STATE(54)] = 1192,
  [SMALL_STATE(55)] = 1205,
  [SMALL_STATE(56)] = 1216,
  [SMALL_STATE(57)] = 1227,
  [SMALL_STATE(58)] = 1238,
  [SMALL_STATE(59)] = 1249,
  [SMALL_STATE(60)] = 1260,
  [SMALL_STATE(61)] = 1271,
  [SMALL_STATE(62)] = 1282,
  [SMALL_STATE(63)] = 1293,
  [SMALL_STATE(64)] = 1304,
  [SMALL_STATE(65)] = 1315,
  [SMALL_STATE(66)] = 1326,
  [SMALL_STATE(67)] = 1337,
  [SMALL_STATE(68)] = 1348,
  [SMALL_STATE(69)] = 1359,
  [SMALL_STATE(70)] = 1370,
  [SMALL_STATE(71)] = 1381,
  [SMALL_STATE(72)] = 1392,
  [SMALL_STATE(73)] = 1403,
  [SMALL_STATE(74)] = 1414,
  [SMALL_STATE(75)] = 1425,
  [SMALL_STATE(76)] = 1436,
  [SMALL_STATE(77)] = 1446,
  [SMALL_STATE(78)] = 1456,
  [SMALL_STATE(79)] = 1470,
  [SMALL_STATE(80)] = 1480,
  [SMALL_STATE(81)] = 1490,
  [SMALL_STATE(82)] = 1500,
  [SMALL_STATE(83)] = 1510,
  [SMALL_STATE(84)] = 1524,
  [SMALL_STATE(85)] = 1534,
  [SMALL_STATE(86)] = 1544,
  [SMALL_STATE(87)] = 1558,
  [SMALL_STATE(88)] = 1568,
  [SMALL_STATE(89)] = 1581,
  [SMALL_STATE(90)] = 1592,
  [SMALL_STATE(91)] = 1605,
  [SMALL_STATE(92)] = 1618,
  [SMALL_STATE(93)] = 1631,
  [SMALL_STATE(94)] = 1644,
  [SMALL_STATE(95)] = 1657,
  [SMALL_STATE(96)] = 1666,
  [SMALL_STATE(97)] = 1679,
  [SMALL_STATE(98)] = 1692,
  [SMALL_STATE(99)] = 1705,
  [SMALL_STATE(100)] = 1718,
  [SMALL_STATE(101)] = 1731,
  [SMALL_STATE(102)] = 1744,
  [SMALL_STATE(103)] = 1757,
  [SMALL_STATE(104)] = 1770,
  [SMALL_STATE(105)] = 1780,
  [SMALL_STATE(106)] = 1790,
  [SMALL_STATE(107)] = 1800,
  [SMALL_STATE(108)] = 1808,
  [SMALL_STATE(109)] = 1816,
  [SMALL_STATE(110)] = 1824,
  [SMALL_STATE(111)] = 1834,
  [SMALL_STATE(112)] = 1842,
  [SMALL_STATE(113)] = 1852,
  [SMALL_STATE(114)] = 1862,
  [SMALL_STATE(115)] = 1870,
  [SMALL_STATE(116)] = 1880,
  [SMALL_STATE(117)] = 1888,
  [SMALL_STATE(118)] = 1898,
  [SMALL_STATE(119)] = 1908,
  [SMALL_STATE(120)] = 1918,
  [SMALL_STATE(121)] = 1928,
  [SMALL_STATE(122)] = 1935,
  [SMALL_STATE(123)] = 1942,
  [SMALL_STATE(124)] = 1949,
  [SMALL_STATE(125)] = 1956,
  [SMALL_STATE(126)] = 1963,
  [SMALL_STATE(127)] = 1970,
  [SMALL_STATE(128)] = 1977,
  [SMALL_STATE(129)] = 1984,
  [SMALL_STATE(130)] = 1991,
  [SMALL_STATE(131)] = 1998,
  [SMALL_STATE(132)] = 2005,
  [SMALL_STATE(133)] = 2012,
  [SMALL_STATE(134)] = 2019,
  [SMALL_STATE(135)] = 2026,
  [SMALL_STATE(136)] = 2033,
  [SMALL_STATE(137)] = 2040,
  [SMALL_STATE(138)] = 2047,
  [SMALL_STATE(139)] = 2054,
  [SMALL_STATE(140)] = 2061,
  [SMALL_STATE(141)] = 2068,
  [SMALL_STATE(142)] = 2075,
  [SMALL_STATE(143)] = 2082,
  [SMALL_STATE(144)] = 2089,
  [SMALL_STATE(145)] = 2096,
  [SMALL_STATE(146)] = 2103,
  [SMALL_STATE(147)] = 2110,
  [SMALL_STATE(148)] = 2117,
  [SMALL_STATE(149)] = 2124,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(128),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(120),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(141),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, 0, 0), SHIFT_REPEAT(129),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 2, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(141),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_body_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(110),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 3, 0, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 3),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_full_ident, 2, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_full_ident_repeat1, 2, 0, 0), SHIFT_REPEAT(126),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 4, 0, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 2, 0, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_decl, 3, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 9),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 5, 0, 10),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 7),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type_decl, 4, 0, 11),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constant, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 15),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_constant, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_constant_repeat1, 2, 0, 0),
  [146] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_constant_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, 0, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import, 2, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_type, 1, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 4),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin_type, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 4, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 4, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 5, 0, 5),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_forward_decl, 3, 0, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_using, 5, 0, 8),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 3),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_body, 4, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 3, 0, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 7),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 4, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 9),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view, 6, 0, 10),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 3, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 7, 0, 15),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 4, 0, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_view_body, 5, 0, 11),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_body, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 8, 0, 21),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(78),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 4, 0, 16),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 6, 0, 13),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 5, 0, 17),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_type, 5, 0, 19),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 6, 0, 21),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_field, 7, 0, 17),
  [245] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 12), SHIFT_REPEAT(6),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 12),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 1, 0, 6),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_default_value, 1, 0, 0),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0),
  [276] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_body_repeat1, 2, 0, 0), SHIFT_REPEAT(106),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 20), SHIFT_REPEAT(8),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 20),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 12),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 12), SHIFT_REPEAT(125),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_decl_repeat1, 2, 0, 2),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_field, 3, 0, 14),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_name, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_view_body_repeat1, 2, 0, 2),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_generic_type_repeat1, 2, 0, 18),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_container_type, 1, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [369] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
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