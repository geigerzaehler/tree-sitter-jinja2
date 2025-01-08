#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 209
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 1
#define TOKEN_COUNT 49
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 19

enum ts_symbol_identifiers {
  sym_identifier = 1,
  aux_sym_text_token1 = 2,
  aux_sym_text_token2 = 3,
  anon_sym_LBRACE_POUND = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND_RBRACE = 6,
  anon_sym_LBRACE_LBRACE = 7,
  anon_sym_RBRACE_RBRACE = 8,
  aux_sym__output_code_token1 = 9,
  aux_sym__expression_in_statement_token1 = 10,
  aux_sym_for_statement_token1 = 11,
  anon_sym_for = 12,
  aux_sym_for_statement_token2 = 13,
  anon_sym_endfor = 14,
  anon_sym_else = 15,
  anon_sym_if = 16,
  anon_sym_endif = 17,
  anon_sym_elif = 18,
  anon_sym_macro = 19,
  anon_sym_endmacro = 20,
  anon_sym_call = 21,
  anon_sym_endcall = 22,
  anon_sym_filter = 23,
  anon_sym_endfilter = 24,
  anon_sym_set = 25,
  anon_sym_endset = 26,
  anon_sym_extends = 27,
  anon_sym_block = 28,
  anon_sym_scoped = 29,
  anon_sym_required = 30,
  anon_sym_endblock = 31,
  anon_sym_include = 32,
  anon_sym_ignoremissing = 33,
  anon_sym_withcontext = 34,
  anon_sym_withoutcontext = 35,
  anon_sym_import = 36,
  anon_sym_as = 37,
  anon_sym_from = 38,
  anon_sym_as2 = 39,
  anon_sym_COMMA = 40,
  anon_sym_with = 41,
  anon_sym_endwith = 42,
  aux_sym_raw_statement_token1 = 43,
  aux_sym_raw_statement_token2 = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_string_token1 = 46,
  anon_sym_SQUOTE = 47,
  aux_sym_string_token2 = 48,
  sym_template = 49,
  sym__item = 50,
  sym_text = 51,
  sym_comment = 52,
  sym_output = 53,
  sym__output_code = 54,
  aux_sym__expression_in_statement = 55,
  sym__statement = 56,
  sym_for_statement = 57,
  sym_for_else_statement = 58,
  sym_if_statement = 59,
  sym_elif_statement = 60,
  sym_else_statement = 61,
  sym_macro_statement = 62,
  sym_call_statement = 63,
  sym_filter_statement = 64,
  sym_assignment_statement = 65,
  sym_end_assignment_statement = 66,
  sym_extends_statement = 67,
  sym_block_statement = 68,
  sym_include_statement = 69,
  sym_import_statement = 70,
  sym_with_statement = 71,
  sym_raw_statement = 72,
  sym_custom_statement = 73,
  sym_string = 74,
  aux_sym_template_repeat1 = 75,
  aux_sym_text_repeat1 = 76,
  aux_sym_comment_repeat1 = 77,
  aux_sym__output_code_repeat1 = 78,
  aux_sym_if_statement_repeat1 = 79,
  aux_sym_import_statement_repeat1 = 80,
  alias_sym_custom_tag = 81,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_LBRACE_POUND] = "{#",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND_RBRACE] = "#}",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [aux_sym__output_code_token1] = "_output_code_token1",
  [aux_sym__expression_in_statement_token1] = "_expression_in_statement_token1",
  [aux_sym_for_statement_token1] = "statement_start",
  [anon_sym_for] = "_keyword",
  [aux_sym_for_statement_token2] = "statement_end",
  [anon_sym_endfor] = "_keyword",
  [anon_sym_else] = "_keyword",
  [anon_sym_if] = "_keyword",
  [anon_sym_endif] = "_keyword",
  [anon_sym_elif] = "_keyword",
  [anon_sym_macro] = "_keyword",
  [anon_sym_endmacro] = "_keyword",
  [anon_sym_call] = "_keyword",
  [anon_sym_endcall] = "_keyword",
  [anon_sym_filter] = "_keyword",
  [anon_sym_endfilter] = "_keyword",
  [anon_sym_set] = "_keyword",
  [anon_sym_endset] = "_keyword",
  [anon_sym_extends] = "_keyword",
  [anon_sym_block] = "_keyword",
  [anon_sym_scoped] = "_keyword",
  [anon_sym_required] = "_keyword",
  [anon_sym_endblock] = "_keyword",
  [anon_sym_include] = "_keyword",
  [anon_sym_ignoremissing] = "_keyword",
  [anon_sym_withcontext] = "_keyword",
  [anon_sym_withoutcontext] = "_keyword",
  [anon_sym_import] = "_keyword",
  [anon_sym_as] = "_keyword",
  [anon_sym_from] = "_keyword",
  [anon_sym_as2] = "_keyword",
  [anon_sym_COMMA] = ",",
  [anon_sym_with] = "_keyword",
  [anon_sym_endwith] = "_keyword",
  [aux_sym_raw_statement_token1] = "raw_start",
  [aux_sym_raw_statement_token2] = "raw_end",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token2] = "string_token2",
  [sym_template] = "template",
  [sym__item] = "_item",
  [sym_text] = "text",
  [sym_comment] = "comment",
  [sym_output] = "output",
  [sym__output_code] = "expression",
  [aux_sym__expression_in_statement] = "_expression_in_statement",
  [sym__statement] = "_statement",
  [sym_for_statement] = "for_statement",
  [sym_for_else_statement] = "for_else_statement",
  [sym_if_statement] = "if_statement",
  [sym_elif_statement] = "elif_statement",
  [sym_else_statement] = "else_statement",
  [sym_macro_statement] = "macro_statement",
  [sym_call_statement] = "call_statement",
  [sym_filter_statement] = "filter_statement",
  [sym_assignment_statement] = "assignment_statement",
  [sym_end_assignment_statement] = "end_assignment_statement",
  [sym_extends_statement] = "extends_statement",
  [sym_block_statement] = "block_statement",
  [sym_include_statement] = "include_statement",
  [sym_import_statement] = "import_statement",
  [sym_with_statement] = "with_statement",
  [sym_raw_statement] = "raw_statement",
  [sym_custom_statement] = "custom_statement",
  [sym_string] = "string",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym__output_code_repeat1] = "_output_code_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_import_statement_repeat1] = "import_statement_repeat1",
  [alias_sym_custom_tag] = "custom_tag",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_LBRACE_POUND] = anon_sym_LBRACE_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND_RBRACE] = anon_sym_POUND_RBRACE,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [aux_sym__output_code_token1] = aux_sym__output_code_token1,
  [aux_sym__expression_in_statement_token1] = aux_sym__expression_in_statement_token1,
  [aux_sym_for_statement_token1] = aux_sym_for_statement_token1,
  [anon_sym_for] = anon_sym_for,
  [aux_sym_for_statement_token2] = aux_sym_for_statement_token2,
  [anon_sym_endfor] = anon_sym_for,
  [anon_sym_else] = anon_sym_for,
  [anon_sym_if] = anon_sym_for,
  [anon_sym_endif] = anon_sym_for,
  [anon_sym_elif] = anon_sym_for,
  [anon_sym_macro] = anon_sym_for,
  [anon_sym_endmacro] = anon_sym_for,
  [anon_sym_call] = anon_sym_for,
  [anon_sym_endcall] = anon_sym_for,
  [anon_sym_filter] = anon_sym_for,
  [anon_sym_endfilter] = anon_sym_for,
  [anon_sym_set] = anon_sym_for,
  [anon_sym_endset] = anon_sym_for,
  [anon_sym_extends] = anon_sym_for,
  [anon_sym_block] = anon_sym_for,
  [anon_sym_scoped] = anon_sym_for,
  [anon_sym_required] = anon_sym_for,
  [anon_sym_endblock] = anon_sym_for,
  [anon_sym_include] = anon_sym_for,
  [anon_sym_ignoremissing] = anon_sym_for,
  [anon_sym_withcontext] = anon_sym_for,
  [anon_sym_withoutcontext] = anon_sym_for,
  [anon_sym_import] = anon_sym_for,
  [anon_sym_as] = anon_sym_for,
  [anon_sym_from] = anon_sym_for,
  [anon_sym_as2] = anon_sym_for,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_with] = anon_sym_for,
  [anon_sym_endwith] = anon_sym_for,
  [aux_sym_raw_statement_token1] = aux_sym_raw_statement_token1,
  [aux_sym_raw_statement_token2] = aux_sym_raw_statement_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_template] = sym_template,
  [sym__item] = sym__item,
  [sym_text] = sym_text,
  [sym_comment] = sym_comment,
  [sym_output] = sym_output,
  [sym__output_code] = sym__output_code,
  [aux_sym__expression_in_statement] = aux_sym__expression_in_statement,
  [sym__statement] = sym__statement,
  [sym_for_statement] = sym_for_statement,
  [sym_for_else_statement] = sym_for_else_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_statement] = sym_elif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_macro_statement] = sym_macro_statement,
  [sym_call_statement] = sym_call_statement,
  [sym_filter_statement] = sym_filter_statement,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_end_assignment_statement] = sym_end_assignment_statement,
  [sym_extends_statement] = sym_extends_statement,
  [sym_block_statement] = sym_block_statement,
  [sym_include_statement] = sym_include_statement,
  [sym_import_statement] = sym_import_statement,
  [sym_with_statement] = sym_with_statement,
  [sym_raw_statement] = sym_raw_statement,
  [sym_custom_statement] = sym_custom_statement,
  [sym_string] = sym_string,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym__output_code_repeat1] = aux_sym__output_code_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_import_statement_repeat1] = aux_sym_import_statement_repeat1,
  [alias_sym_custom_tag] = alias_sym_custom_tag,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__output_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__expression_in_statement_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_for_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_for_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfilter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endset] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_scoped] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_required] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignoremissing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_withoutcontext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endwith] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__item] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_output] = {
    .visible = true,
    .named = true,
  },
  [sym__output_code] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__expression_in_statement] = {
    .visible = false,
    .named = false,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_filter_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_end_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_extends_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_block_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_include_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_with_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__output_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_custom_tag] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_assignment = 1,
  field_body = 2,
  field_call = 3,
  field_code = 4,
  field_condition = 5,
  field_elif = 6,
  field_else = 7,
  field_id = 8,
  field_iteration = 9,
  field_signature = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_assignment] = "assignment",
  [field_body] = "body",
  [field_call] = "call",
  [field_code] = "code",
  [field_condition] = "condition",
  [field_elif] = "elif",
  [field_else] = "else",
  [field_id] = "id",
  [field_iteration] = "iteration",
  [field_signature] = "signature",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [4] = {.index = 1, .length = 1},
  [5] = {.index = 2, .length = 2},
  [6] = {.index = 4, .length = 2},
  [7] = {.index = 6, .length = 3},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 4},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 1},
  [14] = {.index = 20, .length = 1},
  [15] = {.index = 21, .length = 2},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 3},
  [18] = {.index = 28, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_code, 2},
  [1] =
    {field_iteration, 2},
  [2] =
    {field_condition, 2},
    {field_else, 4},
  [4] =
    {field_body, 4},
    {field_iteration, 2},
  [6] =
    {field_body, 4},
    {field_condition, 2},
    {field_else, 5},
  [9] =
    {field_condition, 2},
    {field_elif, 4},
    {field_else, 5},
  [12] =
    {field_id, 2},
  [13] =
    {field_condition, 2},
  [14] =
    {field_body, 4},
    {field_condition, 2},
    {field_elif, 5},
    {field_else, 6},
  [18] =
    {field_signature, 2},
  [19] =
    {field_call, 2},
  [20] =
    {field_assignment, 2},
  [21] =
    {field_body, 4},
    {field_condition, 2},
  [23] =
    {field_condition, 2},
    {field_elif, 4},
  [25] =
    {field_body, 4},
    {field_condition, 2},
    {field_elif, 5},
  [28] =
    {field_body, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_custom_tag,
  },
  [2] = {
    [2] = sym__output_code,
  },
  [3] = {
    [2] = sym__output_code,
  },
  [4] = {
    [2] = sym__output_code,
  },
  [5] = {
    [2] = sym__output_code,
  },
  [6] = {
    [2] = sym__output_code,
  },
  [7] = {
    [2] = sym__output_code,
  },
  [8] = {
    [2] = sym__output_code,
  },
  [10] = {
    [2] = sym__output_code,
  },
  [11] = {
    [2] = sym__output_code,
  },
  [12] = {
    [2] = sym__output_code,
  },
  [13] = {
    [2] = sym__output_code,
  },
  [14] = {
    [2] = sym__output_code,
  },
  [15] = {
    [2] = sym__output_code,
  },
  [16] = {
    [2] = sym__output_code,
  },
  [17] = {
    [2] = sym__output_code,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__expression_in_statement, 3,
    aux_sym__expression_in_statement,
    alias_sym_custom_tag,
    sym__output_code,
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
  [117] = 53,
  [118] = 54,
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
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      ADVANCE_MAP(
        '"', 317,
        '#', 75,
        '%', 76,
        '\'', 320,
        ',', 230,
        'a', 302,
        'b', 273,
        'c', 238,
        'e', 274,
        'f', 266,
        'i', 259,
        'm', 239,
        's', 254,
        'w', 267,
        '{', 87,
        '}', 77,
        '+', 9,
        '-', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(68);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(317);
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == '\'') ADVANCE(320);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(203);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(32);
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(196);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(102);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 9:
      if (lookahead == '%') ADVANCE(76);
      END_STATE();
    case 10:
      ADVANCE_MAP(
        '%', 76,
        ',', 230,
        'a', 58,
        'i', 38,
        'w', 42,
        '{', 7,
        '+', 9,
        '-', 9,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      END_STATE();
    case 11:
      if (lookahead == '%') ADVANCE(76);
      if (lookahead == ',') ADVANCE(230);
      if (lookahead == 'w') ADVANCE(269);
      if (lookahead == '{') ADVANCE(6);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 12:
      if (lookahead == '%') ADVANCE(78);
      END_STATE();
    case 13:
      if (lookahead == '%') ADVANCE(78);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '%') ADVANCE(79);
      END_STATE();
    case 15:
      if (lookahead == '%') ADVANCE(79);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 18:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 149,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 19:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 162,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 20:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 151,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 21:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 159,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(21);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 22:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 163,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(22);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 23:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 164,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(23);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 24:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 165,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 25:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 166,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(25);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 26:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 161,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(26);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 27:
      ADVANCE_MAP(
        'b', 148,
        'c', 103,
        'e', 167,
        'f', 140,
        'i', 131,
        'm', 104,
        's', 127,
        'w', 141,
        '%', 101,
        '+', 101,
        '-', 101,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(223);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'h') ADVANCE(2);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(227);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(41);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(226);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(66);
      END_STATE();
    case 69:
      if (lookahead == 'w') ADVANCE(13);
      END_STATE();
    case 70:
      if (lookahead == 'w') ADVANCE(15);
      END_STATE();
    case 71:
      if (lookahead == 'x') ADVANCE(63);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 73:
      if (lookahead == '{') ADVANCE(86);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(73);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 74:
      if (lookahead == '{') ADVANCE(89);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 75:
      if (lookahead == '}') ADVANCE(95);
      END_STATE();
    case 76:
      if (lookahead == '}') ADVANCE(205);
      END_STATE();
    case 77:
      if (lookahead == '}') ADVANCE(97);
      END_STATE();
    case 78:
      if (lookahead == '}') ADVANCE(233);
      END_STATE();
    case 79:
      if (lookahead == '}') ADVANCE(234);
      END_STATE();
    case 80:
      if (lookahead == '}') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(98);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(80);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == '%' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(101);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(81);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 82:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(322);
      END_STATE();
    case 83:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(319);
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '{') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(84);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '%') ADVANCE(199);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '#') ADVANCE(91);
      if (lookahead == '%') ADVANCE(201);
      if (lookahead == '{') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '%') ADVANCE(32);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_LBRACE_POUND);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(93);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(92);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '}') ADVANCE(95);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_POUND_RBRACE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      if (lookahead == '}') ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__output_code_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '+' &&
          lookahead != '-' &&
          lookahead != '}') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '%') ADVANCE(76);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(109);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(153);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'b') ADVANCE(154);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'c') ADVANCE(105);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(113);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(222);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'e') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'h') ADVANCE(231);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'h') ADVANCE(232);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(133);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'k') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'k') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(172);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(173);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'm') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'm') ADVANCE(106);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(120);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(115);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(116);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(117);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(121);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(119);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'n') ADVANCE(122);
      if (lookahead == 'x') ADVANCE(192);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'p') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == 'w') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(126);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == 'u') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead == '}') ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__expression_in_statement_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '%' &&
          lookahead != '+' &&
          lookahead != '-') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'e') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == 'r') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_for_statement_token1);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(198);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_for_statement_token2);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(anon_sym_endfilter);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(anon_sym_endset);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(anon_sym_ignoremissing);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(anon_sym_withcontext);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(anon_sym_withoutcontext);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(anon_sym_endwith);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_raw_statement_token1);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_raw_statement_token2);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(28);
      if (lookahead == 'o') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ' ') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(280);
      if (lookahead == 'c') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(270);
      if (lookahead == 'i') ADVANCE(261);
      if (lookahead == 'm') ADVANCE(241);
      if (lookahead == 's') ADVANCE(256);
      if (lookahead == 'w') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(303);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(284);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(208);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead == 'm') ADVANCE(293);
      if (lookahead == 'n') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead == 's') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(281);
      if (lookahead == 'o') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(311);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(282);
      if (lookahead == 'o') ADVANCE(295);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead == 'n') ADVANCE(248);
      if (lookahead == 'x') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(277);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(313);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'm') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(299);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(288);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(258);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(319);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(322);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(322);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'r') ADVANCE(2);
      if (lookahead == 's') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 3:
      if (lookahead == 'c') ADVANCE(6);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_as2);
      END_STATE();
    case 5:
      if (lookahead == 'q') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_scoped);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_required);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 84},
  [2] = {.lex_state = 84},
  [3] = {.lex_state = 84},
  [4] = {.lex_state = 84},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 84},
  [10] = {.lex_state = 84},
  [11] = {.lex_state = 84},
  [12] = {.lex_state = 84},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 84},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 84},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 84},
  [20] = {.lex_state = 84},
  [21] = {.lex_state = 84},
  [22] = {.lex_state = 84},
  [23] = {.lex_state = 84},
  [24] = {.lex_state = 84},
  [25] = {.lex_state = 84},
  [26] = {.lex_state = 84},
  [27] = {.lex_state = 84},
  [28] = {.lex_state = 84},
  [29] = {.lex_state = 84},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 19},
  [35] = {.lex_state = 22},
  [36] = {.lex_state = 23},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 25},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 19},
  [41] = {.lex_state = 19},
  [42] = {.lex_state = 23},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 19},
  [45] = {.lex_state = 26},
  [46] = {.lex_state = 24},
  [47] = {.lex_state = 21},
  [48] = {.lex_state = 25},
  [49] = {.lex_state = 26},
  [50] = {.lex_state = 21},
  [51] = {.lex_state = 22},
  [52] = {.lex_state = 27},
  [53] = {.lex_state = 84},
  [54] = {.lex_state = 84},
  [55] = {.lex_state = 84},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 84},
  [58] = {.lex_state = 84},
  [59] = {.lex_state = 84},
  [60] = {.lex_state = 84},
  [61] = {.lex_state = 84},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 84},
  [64] = {.lex_state = 84},
  [65] = {.lex_state = 84},
  [66] = {.lex_state = 84},
  [67] = {.lex_state = 84},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 84},
  [70] = {.lex_state = 84},
  [71] = {.lex_state = 84},
  [72] = {.lex_state = 84},
  [73] = {.lex_state = 84},
  [74] = {.lex_state = 84},
  [75] = {.lex_state = 84},
  [76] = {.lex_state = 84},
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 84},
  [79] = {.lex_state = 84},
  [80] = {.lex_state = 84},
  [81] = {.lex_state = 84},
  [82] = {.lex_state = 84},
  [83] = {.lex_state = 84},
  [84] = {.lex_state = 84},
  [85] = {.lex_state = 84},
  [86] = {.lex_state = 84},
  [87] = {.lex_state = 84},
  [88] = {.lex_state = 84},
  [89] = {.lex_state = 84},
  [90] = {.lex_state = 84},
  [91] = {.lex_state = 84},
  [92] = {.lex_state = 84},
  [93] = {.lex_state = 84},
  [94] = {.lex_state = 84},
  [95] = {.lex_state = 84},
  [96] = {.lex_state = 84},
  [97] = {.lex_state = 84},
  [98] = {.lex_state = 84},
  [99] = {.lex_state = 84},
  [100] = {.lex_state = 84},
  [101] = {.lex_state = 84},
  [102] = {.lex_state = 84},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 10},
  [105] = {.lex_state = 10},
  [106] = {.lex_state = 11},
  [107] = {.lex_state = 10},
  [108] = {.lex_state = 10},
  [109] = {.lex_state = 10},
  [110] = {.lex_state = 10},
  [111] = {.lex_state = 80},
  [112] = {.lex_state = 4},
  [113] = {.lex_state = 10},
  [114] = {.lex_state = 73},
  [115] = {.lex_state = 11},
  [116] = {.lex_state = 11},
  [117] = {.lex_state = 74},
  [118] = {.lex_state = 74},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 80},
  [122] = {.lex_state = 80},
  [123] = {.lex_state = 18},
  [124] = {.lex_state = 10},
  [125] = {.lex_state = 11},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 8},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 8},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 8},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 8},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 4},
  [141] = {.lex_state = 5},
  [142] = {.lex_state = 18},
  [143] = {.lex_state = 10},
  [144] = {.lex_state = 4},
  [145] = {.lex_state = 81},
  [146] = {.lex_state = 4},
  [147] = {.lex_state = 81},
  [148] = {.lex_state = 81},
  [149] = {.lex_state = 81},
  [150] = {.lex_state = 81},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 81},
  [154] = {.lex_state = 4},
  [155] = {.lex_state = 81},
  [156] = {.lex_state = 81},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 4},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 82},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 4},
  [166] = {.lex_state = 18},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 18},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 83},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 4},
  [208] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [aux_sym_text_token1] = ACTIONS(1),
    [anon_sym_LBRACE_POUND] = ACTIONS(1),
    [anon_sym_POUND_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [aux_sym_for_statement_token1] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [aux_sym_for_statement_token2] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_endcall] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_endfilter] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_endset] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_scoped] = ACTIONS(1),
    [anon_sym_required] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_ignoremissing] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_as2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_endwith] = ACTIONS(1),
    [aux_sym_raw_statement_token1] = ACTIONS(1),
    [aux_sym_raw_statement_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(202),
    [sym__item] = STATE(4),
    [sym_text] = STATE(4),
    [sym_comment] = STATE(4),
    [sym_output] = STATE(4),
    [sym__statement] = STATE(4),
    [sym_for_statement] = STATE(4),
    [sym_if_statement] = STATE(4),
    [sym_macro_statement] = STATE(4),
    [sym_call_statement] = STATE(4),
    [sym_filter_statement] = STATE(4),
    [sym_assignment_statement] = STATE(4),
    [sym_end_assignment_statement] = STATE(4),
    [sym_extends_statement] = STATE(4),
    [sym_block_statement] = STATE(4),
    [sym_include_statement] = STATE(4),
    [sym_import_statement] = STATE(4),
    [sym_with_statement] = STATE(4),
    [sym_raw_statement] = STATE(4),
    [sym_custom_statement] = STATE(4),
    [aux_sym_template_repeat1] = STATE(4),
    [aux_sym_text_repeat1] = STATE(53),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE_POUND] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(11),
    [aux_sym_for_statement_token1] = ACTIONS(13),
    [aux_sym_raw_statement_token1] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(17), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(60), 1,
      sym_else_statement,
    STATE(116), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    STATE(3), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [51] = 10,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(19), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(64), 1,
      sym_else_statement,
    STATE(115), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [102] = 9,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(13), 1,
      aux_sym_for_statement_token1,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [149] = 9,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      aux_sym_text_token1,
    ACTIONS(28), 1,
      aux_sym_text_token2,
    ACTIONS(31), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(34), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      aux_sym_for_statement_token1,
    ACTIONS(40), 1,
      aux_sym_raw_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [196] = 9,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(43), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(59), 1,
      sym_for_else_statement,
    STATE(7), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [243] = 9,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(45), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(55), 1,
      sym_for_else_statement,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [290] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(47), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(21), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [334] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(49), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(16), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [378] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(51), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(17), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [422] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(53), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(18), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [466] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(55), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [510] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(57), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(20), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [554] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(59), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(12), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [598] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(61), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [642] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(63), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [686] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(65), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [730] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(67), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [774] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(67), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(23), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [818] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(69), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [862] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(71), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [906] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(73), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(28), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [950] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(75), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [994] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(75), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(26), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1038] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(77), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(15), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1082] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(79), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1126] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(81), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(29), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1170] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(84), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1214] = 8,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(7), 1,
      aux_sym_text_token2,
    ACTIONS(9), 1,
      anon_sym_LBRACE_POUND,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(15), 1,
      aux_sym_raw_statement_token1,
    ACTIONS(86), 1,
      aux_sym_for_statement_token1,
    STATE(53), 1,
      aux_sym_text_repeat1,
    STATE(5), 20,
      sym__item,
      sym_text,
      sym_comment,
      sym_output,
      sym__statement,
      sym_for_statement,
      sym_if_statement,
      sym_macro_statement,
      sym_call_statement,
      sym_filter_statement,
      sym_assignment_statement,
      sym_end_assignment_statement,
      sym_extends_statement,
      sym_block_statement,
      sym_include_statement,
      sym_import_statement,
      sym_with_statement,
      sym_raw_statement,
      sym_custom_statement,
      aux_sym_template_repeat1,
  [1258] = 18,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_endif,
    ACTIONS(99), 1,
      anon_sym_elif,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1313] = 18,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(99), 1,
      anon_sym_elif,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(123), 1,
      anon_sym_endif,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1368] = 17,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(125), 1,
      anon_sym_endfor,
    ACTIONS(127), 1,
      anon_sym_else,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1420] = 17,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(127), 1,
      anon_sym_else,
    ACTIONS(129), 1,
      anon_sym_endfor,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1472] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(131), 1,
      anon_sym_endwith,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1521] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(133), 1,
      anon_sym_endmacro,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1570] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(135), 1,
      anon_sym_endcall,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1619] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(137), 1,
      anon_sym_endfilter,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1668] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(139), 1,
      anon_sym_endblock,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1717] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(141), 1,
      anon_sym_endblock,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1766] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(143), 1,
      anon_sym_endwith,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1815] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(145), 1,
      anon_sym_endwith,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1864] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(147), 1,
      anon_sym_endcall,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1913] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(149), 1,
      anon_sym_endblock,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [1962] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(151), 1,
      anon_sym_endwith,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2011] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(153), 1,
      anon_sym_endfor,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2060] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(155), 1,
      anon_sym_endfilter,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2109] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(157), 1,
      anon_sym_endif,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2158] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(159), 1,
      anon_sym_endblock,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2207] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(161), 1,
      anon_sym_endfor,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2256] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(163), 1,
      anon_sym_endif,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2305] = 16,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    ACTIONS(165), 1,
      anon_sym_endmacro,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2354] = 15,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(91), 1,
      anon_sym_for,
    ACTIONS(95), 1,
      anon_sym_if,
    ACTIONS(101), 1,
      anon_sym_macro,
    ACTIONS(103), 1,
      anon_sym_call,
    ACTIONS(105), 1,
      anon_sym_filter,
    ACTIONS(107), 1,
      anon_sym_set,
    ACTIONS(109), 1,
      anon_sym_endset,
    ACTIONS(111), 1,
      anon_sym_extends,
    ACTIONS(113), 1,
      anon_sym_block,
    ACTIONS(115), 1,
      anon_sym_include,
    ACTIONS(117), 1,
      anon_sym_import,
    ACTIONS(119), 1,
      anon_sym_from,
    ACTIONS(121), 1,
      anon_sym_with,
    STATE(138), 1,
      aux_sym__expression_in_statement,
  [2400] = 5,
    ACTIONS(169), 1,
      aux_sym_text_token1,
    ACTIONS(171), 1,
      aux_sym_text_token2,
    ACTIONS(173), 1,
      aux_sym_for_statement_token1,
    STATE(54), 1,
      aux_sym_text_repeat1,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2419] = 5,
    ACTIONS(177), 1,
      aux_sym_text_token1,
    ACTIONS(180), 1,
      aux_sym_text_token2,
    ACTIONS(183), 1,
      aux_sym_for_statement_token1,
    STATE(54), 1,
      aux_sym_text_repeat1,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2438] = 2,
    ACTIONS(187), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(185), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2450] = 2,
    ACTIONS(191), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(189), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2462] = 2,
    ACTIONS(195), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(193), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2474] = 2,
    ACTIONS(199), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(197), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2486] = 2,
    ACTIONS(203), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(201), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2498] = 2,
    ACTIONS(207), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(205), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2510] = 2,
    ACTIONS(211), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(209), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2522] = 2,
    ACTIONS(215), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(213), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2534] = 2,
    ACTIONS(219), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(217), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2546] = 2,
    ACTIONS(223), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(221), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2558] = 2,
    ACTIONS(227), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(225), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2570] = 2,
    ACTIONS(231), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(229), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2582] = 2,
    ACTIONS(235), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(233), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2594] = 2,
    ACTIONS(239), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(237), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2606] = 2,
    ACTIONS(243), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(241), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2618] = 2,
    ACTIONS(247), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(245), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2630] = 2,
    ACTIONS(251), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(249), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2642] = 2,
    ACTIONS(255), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(253), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2654] = 2,
    ACTIONS(259), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(257), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2666] = 2,
    ACTIONS(263), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(261), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2678] = 2,
    ACTIONS(267), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(265), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2690] = 2,
    ACTIONS(271), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(269), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2702] = 2,
    ACTIONS(275), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(273), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2714] = 2,
    ACTIONS(279), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(277), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2726] = 2,
    ACTIONS(283), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(281), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2738] = 2,
    ACTIONS(287), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(285), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2750] = 2,
    ACTIONS(291), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(289), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2762] = 2,
    ACTIONS(295), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(293), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2774] = 2,
    ACTIONS(299), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(297), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2786] = 2,
    ACTIONS(303), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2798] = 2,
    ACTIONS(307), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(305), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2810] = 2,
    ACTIONS(311), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(309), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2822] = 2,
    ACTIONS(315), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(313), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2834] = 2,
    ACTIONS(319), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(317), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2846] = 2,
    ACTIONS(323), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(321), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2858] = 2,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(325), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2870] = 2,
    ACTIONS(331), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2882] = 2,
    ACTIONS(335), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2894] = 2,
    ACTIONS(339), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(337), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2906] = 2,
    ACTIONS(343), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(341), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2918] = 2,
    ACTIONS(347), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(345), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2930] = 2,
    ACTIONS(351), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(349), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2942] = 2,
    ACTIONS(355), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(353), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2954] = 2,
    ACTIONS(359), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(357), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2966] = 2,
    ACTIONS(363), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(361), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2978] = 2,
    ACTIONS(367), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(365), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [2990] = 2,
    ACTIONS(371), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(369), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [3002] = 2,
    ACTIONS(375), 2,
      aux_sym_text_token1,
      aux_sym_for_statement_token1,
    ACTIONS(373), 5,
      ts_builtin_sym_end,
      aux_sym_text_token2,
      anon_sym_LBRACE_POUND,
      anon_sym_LBRACE_LBRACE,
      aux_sym_raw_statement_token1,
  [3014] = 5,
    ACTIONS(377), 1,
      aux_sym_for_statement_token2,
    ACTIONS(381), 1,
      anon_sym_as2,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    STATE(107), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(379), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3031] = 1,
    ACTIONS(385), 6,
      aux_sym_for_statement_token2,
      anon_sym_ignoremissing,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
      anon_sym_import,
      anon_sym_as,
  [3040] = 4,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(387), 1,
      aux_sym_for_statement_token2,
    STATE(109), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(389), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3054] = 2,
    ACTIONS(393), 1,
      anon_sym_as2,
    ACTIONS(391), 4,
      aux_sym_for_statement_token2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
      anon_sym_COMMA,
  [3064] = 4,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(395), 1,
      aux_sym_for_statement_token2,
    STATE(109), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(397), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3078] = 4,
    ACTIONS(383), 1,
      anon_sym_COMMA,
    ACTIONS(399), 1,
      aux_sym_for_statement_token2,
    STATE(105), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(401), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3092] = 3,
    ACTIONS(403), 1,
      anon_sym_COMMA,
    STATE(109), 1,
      aux_sym_import_statement_repeat1,
    ACTIONS(391), 3,
      aux_sym_for_statement_token2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3104] = 1,
    ACTIONS(406), 4,
      aux_sym_for_statement_token2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
      anon_sym_COMMA,
  [3111] = 4,
    ACTIONS(408), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(410), 1,
      aux_sym__output_code_token1,
    STATE(122), 1,
      aux_sym__output_code_repeat1,
    STATE(159), 1,
      sym__output_code,
  [3124] = 4,
    ACTIONS(412), 1,
      sym_identifier,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      anon_sym_SQUOTE,
    STATE(113), 1,
      sym_string,
  [3137] = 3,
    ACTIONS(418), 1,
      aux_sym_for_statement_token2,
    ACTIONS(420), 1,
      anon_sym_ignoremissing,
    ACTIONS(422), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3148] = 3,
    STATE(117), 1,
      aux_sym_text_repeat1,
    STATE(173), 1,
      sym_text,
    ACTIONS(424), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
  [3159] = 3,
    ACTIONS(426), 1,
      aux_sym_for_statement_token1,
    STATE(73), 1,
      sym_else_statement,
    STATE(125), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
  [3170] = 3,
    ACTIONS(428), 1,
      aux_sym_for_statement_token1,
    STATE(65), 1,
      sym_else_statement,
    STATE(125), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
  [3181] = 4,
    ACTIONS(167), 1,
      aux_sym_raw_statement_token2,
    ACTIONS(430), 1,
      aux_sym_text_token1,
    ACTIONS(432), 1,
      aux_sym_text_token2,
    STATE(118), 1,
      aux_sym_text_repeat1,
  [3194] = 4,
    ACTIONS(175), 1,
      aux_sym_raw_statement_token2,
    ACTIONS(434), 1,
      aux_sym_text_token1,
    ACTIONS(437), 1,
      aux_sym_text_token2,
    STATE(118), 1,
      aux_sym_text_repeat1,
  [3207] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(440), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3217] = 3,
    ACTIONS(442), 1,
      aux_sym_comment_token1,
    ACTIONS(445), 1,
      anon_sym_POUND_RBRACE,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [3227] = 3,
    ACTIONS(447), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(449), 1,
      aux_sym__output_code_token1,
    STATE(121), 1,
      aux_sym__output_code_repeat1,
  [3237] = 3,
    ACTIONS(452), 1,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(454), 1,
      aux_sym__output_code_token1,
    STATE(121), 1,
      aux_sym__output_code_repeat1,
  [3247] = 3,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(99), 1,
      anon_sym_elif,
    ACTIONS(456), 1,
      anon_sym_endif,
  [3257] = 2,
    ACTIONS(458), 1,
      aux_sym_for_statement_token2,
    ACTIONS(460), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3265] = 2,
    ACTIONS(462), 1,
      aux_sym_for_statement_token1,
    STATE(125), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
  [3273] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(465), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3283] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(467), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3293] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(469), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3303] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(471), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3313] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(473), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3323] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(475), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3333] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(477), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3343] = 3,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      anon_sym_SQUOTE,
    STATE(164), 1,
      sym_string,
  [3353] = 3,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      anon_sym_SQUOTE,
    STATE(166), 1,
      sym_string,
  [3363] = 3,
    ACTIONS(479), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(482), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3373] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(484), 1,
      aux_sym_for_statement_token2,
    STATE(127), 1,
      aux_sym__expression_in_statement,
  [3383] = 3,
    ACTIONS(486), 1,
      aux_sym_comment_token1,
    ACTIONS(488), 1,
      anon_sym_POUND_RBRACE,
    STATE(141), 1,
      aux_sym_comment_repeat1,
  [3393] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(490), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3403] = 3,
    ACTIONS(89), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(492), 1,
      aux_sym_for_statement_token2,
    STATE(135), 1,
      aux_sym__expression_in_statement,
  [3413] = 3,
    ACTIONS(494), 1,
      aux_sym_for_statement_token2,
    ACTIONS(496), 1,
      anon_sym_scoped,
    ACTIONS(498), 1,
      anon_sym_required,
  [3423] = 3,
    ACTIONS(500), 1,
      aux_sym_comment_token1,
    ACTIONS(502), 1,
      anon_sym_POUND_RBRACE,
    STATE(120), 1,
      aux_sym_comment_repeat1,
  [3433] = 3,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(99), 1,
      anon_sym_elif,
    ACTIONS(504), 1,
      anon_sym_endif,
  [3443] = 2,
    ACTIONS(377), 1,
      aux_sym_for_statement_token2,
    ACTIONS(379), 2,
      anon_sym_withcontext,
      anon_sym_withoutcontext,
  [3451] = 2,
    ACTIONS(506), 1,
      sym_identifier,
    ACTIONS(508), 1,
      aux_sym_for_statement_token2,
  [3458] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(119), 1,
      aux_sym__expression_in_statement,
  [3465] = 2,
    ACTIONS(512), 1,
      sym_identifier,
    ACTIONS(514), 1,
      aux_sym_for_statement_token2,
  [3472] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(131), 1,
      aux_sym__expression_in_statement,
  [3479] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(126), 1,
      aux_sym__expression_in_statement,
  [3486] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(139), 1,
      aux_sym__expression_in_statement,
  [3493] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(128), 1,
      aux_sym__expression_in_statement,
  [3500] = 2,
    ACTIONS(516), 1,
      aux_sym__expression_in_statement_token1,
    ACTIONS(518), 1,
      aux_sym_for_statement_token2,
  [3507] = 2,
    ACTIONS(520), 1,
      sym_identifier,
    ACTIONS(522), 1,
      aux_sym_for_statement_token2,
  [3514] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(129), 1,
      aux_sym__expression_in_statement,
  [3521] = 2,
    ACTIONS(524), 1,
      aux_sym_for_statement_token2,
    ACTIONS(526), 1,
      anon_sym_required,
  [3528] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(130), 1,
      aux_sym__expression_in_statement,
  [3535] = 2,
    ACTIONS(510), 1,
      aux_sym__expression_in_statement_token1,
    STATE(132), 1,
      aux_sym__expression_in_statement,
  [3542] = 2,
    ACTIONS(528), 1,
      sym_identifier,
    ACTIONS(530), 1,
      aux_sym_for_statement_token2,
  [3549] = 1,
    ACTIONS(532), 1,
      aux_sym_for_statement_token2,
  [3553] = 1,
    ACTIONS(534), 1,
      anon_sym_RBRACE_RBRACE,
  [3557] = 1,
    ACTIONS(395), 1,
      aux_sym_for_statement_token2,
  [3561] = 1,
    ACTIONS(536), 1,
      sym_identifier,
  [3565] = 1,
    ACTIONS(538), 1,
      aux_sym_for_statement_token2,
  [3569] = 1,
    ACTIONS(540), 1,
      aux_sym_string_token2,
  [3573] = 1,
    ACTIONS(542), 1,
      anon_sym_as,
  [3577] = 1,
    ACTIONS(544), 1,
      sym_identifier,
  [3581] = 1,
    ACTIONS(546), 1,
      anon_sym_import,
  [3585] = 1,
    ACTIONS(548), 1,
      aux_sym_for_statement_token2,
  [3589] = 1,
    ACTIONS(550), 1,
      aux_sym_for_statement_token2,
  [3593] = 1,
    ACTIONS(552), 1,
      aux_sym_for_statement_token2,
  [3597] = 1,
    ACTIONS(554), 1,
      aux_sym_for_statement_token2,
  [3601] = 1,
    ACTIONS(556), 1,
      aux_sym_for_statement_token2,
  [3605] = 1,
    ACTIONS(524), 1,
      aux_sym_for_statement_token2,
  [3609] = 1,
    ACTIONS(558), 1,
      aux_sym_raw_statement_token2,
  [3613] = 1,
    ACTIONS(560), 1,
      aux_sym_for_statement_token2,
  [3617] = 1,
    ACTIONS(562), 1,
      aux_sym_for_statement_token2,
  [3621] = 1,
    ACTIONS(508), 1,
      aux_sym_for_statement_token2,
  [3625] = 1,
    ACTIONS(458), 1,
      aux_sym_for_statement_token2,
  [3629] = 1,
    ACTIONS(564), 1,
      aux_sym_for_statement_token2,
  [3633] = 1,
    ACTIONS(566), 1,
      aux_sym_for_statement_token2,
  [3637] = 1,
    ACTIONS(387), 1,
      aux_sym_for_statement_token2,
  [3641] = 1,
    ACTIONS(568), 1,
      anon_sym_DQUOTE,
  [3645] = 1,
    ACTIONS(399), 1,
      aux_sym_for_statement_token2,
  [3649] = 1,
    ACTIONS(570), 1,
      aux_sym_for_statement_token2,
  [3653] = 1,
    ACTIONS(572), 1,
      aux_sym_for_statement_token2,
  [3657] = 1,
    ACTIONS(574), 1,
      sym_identifier,
  [3661] = 1,
    ACTIONS(576), 1,
      aux_sym_for_statement_token2,
  [3665] = 1,
    ACTIONS(578), 1,
      aux_sym_for_statement_token2,
  [3669] = 1,
    ACTIONS(99), 1,
      anon_sym_elif,
  [3673] = 1,
    ACTIONS(580), 1,
      aux_sym_for_statement_token2,
  [3677] = 1,
    ACTIONS(582), 1,
      aux_sym_for_statement_token2,
  [3681] = 1,
    ACTIONS(514), 1,
      aux_sym_for_statement_token2,
  [3685] = 1,
    ACTIONS(584), 1,
      aux_sym_for_statement_token2,
  [3689] = 1,
    ACTIONS(586), 1,
      aux_sym_for_statement_token2,
  [3693] = 1,
    ACTIONS(588), 1,
      aux_sym_for_statement_token2,
  [3697] = 1,
    ACTIONS(590), 1,
      aux_sym_for_statement_token2,
  [3701] = 1,
    ACTIONS(592), 1,
      aux_sym_for_statement_token2,
  [3705] = 1,
    ACTIONS(594), 1,
      aux_sym_for_statement_token2,
  [3709] = 1,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
  [3713] = 1,
    ACTIONS(596), 1,
      aux_sym_for_statement_token2,
  [3717] = 1,
    ACTIONS(530), 1,
      aux_sym_for_statement_token2,
  [3721] = 1,
    ACTIONS(598), 1,
      aux_sym_for_statement_token2,
  [3725] = 1,
    ACTIONS(600), 1,
      ts_builtin_sym_end,
  [3729] = 1,
    ACTIONS(602), 1,
      sym_identifier,
  [3733] = 1,
    ACTIONS(604), 1,
      aux_sym_string_token1,
  [3737] = 1,
    ACTIONS(606), 1,
      aux_sym_for_statement_token2,
  [3741] = 1,
    ACTIONS(608), 1,
      aux_sym_for_statement_token2,
  [3745] = 1,
    ACTIONS(610), 1,
      sym_identifier,
  [3749] = 1,
    ACTIONS(612), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 149,
  [SMALL_STATE(6)] = 196,
  [SMALL_STATE(7)] = 243,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 334,
  [SMALL_STATE(10)] = 378,
  [SMALL_STATE(11)] = 422,
  [SMALL_STATE(12)] = 466,
  [SMALL_STATE(13)] = 510,
  [SMALL_STATE(14)] = 554,
  [SMALL_STATE(15)] = 598,
  [SMALL_STATE(16)] = 642,
  [SMALL_STATE(17)] = 686,
  [SMALL_STATE(18)] = 730,
  [SMALL_STATE(19)] = 774,
  [SMALL_STATE(20)] = 818,
  [SMALL_STATE(21)] = 862,
  [SMALL_STATE(22)] = 906,
  [SMALL_STATE(23)] = 950,
  [SMALL_STATE(24)] = 994,
  [SMALL_STATE(25)] = 1038,
  [SMALL_STATE(26)] = 1082,
  [SMALL_STATE(27)] = 1126,
  [SMALL_STATE(28)] = 1170,
  [SMALL_STATE(29)] = 1214,
  [SMALL_STATE(30)] = 1258,
  [SMALL_STATE(31)] = 1313,
  [SMALL_STATE(32)] = 1368,
  [SMALL_STATE(33)] = 1420,
  [SMALL_STATE(34)] = 1472,
  [SMALL_STATE(35)] = 1521,
  [SMALL_STATE(36)] = 1570,
  [SMALL_STATE(37)] = 1619,
  [SMALL_STATE(38)] = 1668,
  [SMALL_STATE(39)] = 1717,
  [SMALL_STATE(40)] = 1766,
  [SMALL_STATE(41)] = 1815,
  [SMALL_STATE(42)] = 1864,
  [SMALL_STATE(43)] = 1913,
  [SMALL_STATE(44)] = 1962,
  [SMALL_STATE(45)] = 2011,
  [SMALL_STATE(46)] = 2060,
  [SMALL_STATE(47)] = 2109,
  [SMALL_STATE(48)] = 2158,
  [SMALL_STATE(49)] = 2207,
  [SMALL_STATE(50)] = 2256,
  [SMALL_STATE(51)] = 2305,
  [SMALL_STATE(52)] = 2354,
  [SMALL_STATE(53)] = 2400,
  [SMALL_STATE(54)] = 2419,
  [SMALL_STATE(55)] = 2438,
  [SMALL_STATE(56)] = 2450,
  [SMALL_STATE(57)] = 2462,
  [SMALL_STATE(58)] = 2474,
  [SMALL_STATE(59)] = 2486,
  [SMALL_STATE(60)] = 2498,
  [SMALL_STATE(61)] = 2510,
  [SMALL_STATE(62)] = 2522,
  [SMALL_STATE(63)] = 2534,
  [SMALL_STATE(64)] = 2546,
  [SMALL_STATE(65)] = 2558,
  [SMALL_STATE(66)] = 2570,
  [SMALL_STATE(67)] = 2582,
  [SMALL_STATE(68)] = 2594,
  [SMALL_STATE(69)] = 2606,
  [SMALL_STATE(70)] = 2618,
  [SMALL_STATE(71)] = 2630,
  [SMALL_STATE(72)] = 2642,
  [SMALL_STATE(73)] = 2654,
  [SMALL_STATE(74)] = 2666,
  [SMALL_STATE(75)] = 2678,
  [SMALL_STATE(76)] = 2690,
  [SMALL_STATE(77)] = 2702,
  [SMALL_STATE(78)] = 2714,
  [SMALL_STATE(79)] = 2726,
  [SMALL_STATE(80)] = 2738,
  [SMALL_STATE(81)] = 2750,
  [SMALL_STATE(82)] = 2762,
  [SMALL_STATE(83)] = 2774,
  [SMALL_STATE(84)] = 2786,
  [SMALL_STATE(85)] = 2798,
  [SMALL_STATE(86)] = 2810,
  [SMALL_STATE(87)] = 2822,
  [SMALL_STATE(88)] = 2834,
  [SMALL_STATE(89)] = 2846,
  [SMALL_STATE(90)] = 2858,
  [SMALL_STATE(91)] = 2870,
  [SMALL_STATE(92)] = 2882,
  [SMALL_STATE(93)] = 2894,
  [SMALL_STATE(94)] = 2906,
  [SMALL_STATE(95)] = 2918,
  [SMALL_STATE(96)] = 2930,
  [SMALL_STATE(97)] = 2942,
  [SMALL_STATE(98)] = 2954,
  [SMALL_STATE(99)] = 2966,
  [SMALL_STATE(100)] = 2978,
  [SMALL_STATE(101)] = 2990,
  [SMALL_STATE(102)] = 3002,
  [SMALL_STATE(103)] = 3014,
  [SMALL_STATE(104)] = 3031,
  [SMALL_STATE(105)] = 3040,
  [SMALL_STATE(106)] = 3054,
  [SMALL_STATE(107)] = 3064,
  [SMALL_STATE(108)] = 3078,
  [SMALL_STATE(109)] = 3092,
  [SMALL_STATE(110)] = 3104,
  [SMALL_STATE(111)] = 3111,
  [SMALL_STATE(112)] = 3124,
  [SMALL_STATE(113)] = 3137,
  [SMALL_STATE(114)] = 3148,
  [SMALL_STATE(115)] = 3159,
  [SMALL_STATE(116)] = 3170,
  [SMALL_STATE(117)] = 3181,
  [SMALL_STATE(118)] = 3194,
  [SMALL_STATE(119)] = 3207,
  [SMALL_STATE(120)] = 3217,
  [SMALL_STATE(121)] = 3227,
  [SMALL_STATE(122)] = 3237,
  [SMALL_STATE(123)] = 3247,
  [SMALL_STATE(124)] = 3257,
  [SMALL_STATE(125)] = 3265,
  [SMALL_STATE(126)] = 3273,
  [SMALL_STATE(127)] = 3283,
  [SMALL_STATE(128)] = 3293,
  [SMALL_STATE(129)] = 3303,
  [SMALL_STATE(130)] = 3313,
  [SMALL_STATE(131)] = 3323,
  [SMALL_STATE(132)] = 3333,
  [SMALL_STATE(133)] = 3343,
  [SMALL_STATE(134)] = 3353,
  [SMALL_STATE(135)] = 3363,
  [SMALL_STATE(136)] = 3373,
  [SMALL_STATE(137)] = 3383,
  [SMALL_STATE(138)] = 3393,
  [SMALL_STATE(139)] = 3403,
  [SMALL_STATE(140)] = 3413,
  [SMALL_STATE(141)] = 3423,
  [SMALL_STATE(142)] = 3433,
  [SMALL_STATE(143)] = 3443,
  [SMALL_STATE(144)] = 3451,
  [SMALL_STATE(145)] = 3458,
  [SMALL_STATE(146)] = 3465,
  [SMALL_STATE(147)] = 3472,
  [SMALL_STATE(148)] = 3479,
  [SMALL_STATE(149)] = 3486,
  [SMALL_STATE(150)] = 3493,
  [SMALL_STATE(151)] = 3500,
  [SMALL_STATE(152)] = 3507,
  [SMALL_STATE(153)] = 3514,
  [SMALL_STATE(154)] = 3521,
  [SMALL_STATE(155)] = 3528,
  [SMALL_STATE(156)] = 3535,
  [SMALL_STATE(157)] = 3542,
  [SMALL_STATE(158)] = 3549,
  [SMALL_STATE(159)] = 3553,
  [SMALL_STATE(160)] = 3557,
  [SMALL_STATE(161)] = 3561,
  [SMALL_STATE(162)] = 3565,
  [SMALL_STATE(163)] = 3569,
  [SMALL_STATE(164)] = 3573,
  [SMALL_STATE(165)] = 3577,
  [SMALL_STATE(166)] = 3581,
  [SMALL_STATE(167)] = 3585,
  [SMALL_STATE(168)] = 3589,
  [SMALL_STATE(169)] = 3593,
  [SMALL_STATE(170)] = 3597,
  [SMALL_STATE(171)] = 3601,
  [SMALL_STATE(172)] = 3605,
  [SMALL_STATE(173)] = 3609,
  [SMALL_STATE(174)] = 3613,
  [SMALL_STATE(175)] = 3617,
  [SMALL_STATE(176)] = 3621,
  [SMALL_STATE(177)] = 3625,
  [SMALL_STATE(178)] = 3629,
  [SMALL_STATE(179)] = 3633,
  [SMALL_STATE(180)] = 3637,
  [SMALL_STATE(181)] = 3641,
  [SMALL_STATE(182)] = 3645,
  [SMALL_STATE(183)] = 3649,
  [SMALL_STATE(184)] = 3653,
  [SMALL_STATE(185)] = 3657,
  [SMALL_STATE(186)] = 3661,
  [SMALL_STATE(187)] = 3665,
  [SMALL_STATE(188)] = 3669,
  [SMALL_STATE(189)] = 3673,
  [SMALL_STATE(190)] = 3677,
  [SMALL_STATE(191)] = 3681,
  [SMALL_STATE(192)] = 3685,
  [SMALL_STATE(193)] = 3689,
  [SMALL_STATE(194)] = 3693,
  [SMALL_STATE(195)] = 3697,
  [SMALL_STATE(196)] = 3701,
  [SMALL_STATE(197)] = 3705,
  [SMALL_STATE(198)] = 3709,
  [SMALL_STATE(199)] = 3713,
  [SMALL_STATE(200)] = 3717,
  [SMALL_STATE(201)] = 3721,
  [SMALL_STATE(202)] = 3725,
  [SMALL_STATE(203)] = 3729,
  [SMALL_STATE(204)] = 3733,
  [SMALL_STATE(205)] = 3737,
  [SMALL_STATE(206)] = 3741,
  [SMALL_STATE(207)] = 3745,
  [SMALL_STATE(208)] = 3749,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(137),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2, 0, 0), SHIFT_REPEAT(114),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_elif_statement, 4, 0, 10), SHIFT(52),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_elif_statement, 5, 0, 10), SHIFT(52),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6, 0, 6),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6, 0, 6),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, 0, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, 0, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_extends_statement, 4, 0, 3),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_extends_statement, 4, 0, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 4, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 4, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5, 0, 4),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5, 0, 4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 5),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 5, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 5, 0, 0),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 3, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 3, 0, 0),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 7),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 7),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, 0, 8),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, 0, 8),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include_statement, 6, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include_statement, 6, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 6, 0, 9),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 6, 0, 9),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 6, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 6, 0, 0),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_assignment_statement, 3, 0, 0),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_end_assignment_statement, 3, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 7, 0, 4),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 7, 0, 4),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 10),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 10),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, 0, 11),
  [259] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, 0, 11),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_statement, 7, 0, 12),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_statement, 7, 0, 12),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 7, 0, 13),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 7, 0, 13),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_output, 2, 0, 0),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_output, 2, 0, 0),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 7, 0, 9),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 7, 0, 9),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 7, 0, 9),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 7, 0, 9),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 7, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 7, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 7, 0, 14),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 7, 0, 14),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 8, 0, 6),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 8, 0, 6),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 15),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 15),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, 0, 16),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, 0, 16),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_statement, 8, 0, 12),
  [303] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_statement, 8, 0, 12),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 8, 0, 13),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 8, 0, 13),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_statement, 8, 0, 2),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_statement, 8, 0, 2),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 8, 0, 9),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 8, 0, 9),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_statement, 3, -1, 1),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_statement, 3, -1, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 8, 0, 9),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 8, 0, 9),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_statement, 8, 0, 14),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_statement, 8, 0, 14),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_statement, 3, 0, 0),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_statement, 3, 0, 0),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 9, 0, 17),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 9, 0, 17),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 9, 0, 9),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 9, 0, 9),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 9, 0, 9),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 9, 0, 9),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_statement, 6, 0, 0),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_statement, 6, 0, 0),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 6, 0, 0),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 6, 0, 0),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 10, 0, 9),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 10, 0, 9),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 10, 0, 9),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_import_statement, 10, 0, 9),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_else_statement, 7, 0, 18),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_else_statement, 7, 0, 18),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 7, 0, 18),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 7, 0, 18),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_statement, 11, 0, 9),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_statement, 11, 0, 9),
  [373] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filter_statement, 7, 0, 2),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filter_statement, 7, 0, 2),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(165),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_import_statement_repeat1, 4, 0, 0),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [434] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [437] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2, 0, 0), SHIFT_REPEAT(118),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2, 0, 0),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__output_code_repeat1, 2, 0, 0),
  [449] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__output_code_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__output_code, 1, 0, 0),
  [454] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [462] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(188),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [479] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__expression_in_statement, 2, 0, 0), SHIFT_REPEAT(151),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_in_statement, 2, 0, 0),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [486] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [500] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [502] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__expression_in_statement, 1, 0, 0),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__expression_in_statement, 1, 0, 0),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [600] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
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

TS_PUBLIC const TSLanguage *tree_sitter_jinja2(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
