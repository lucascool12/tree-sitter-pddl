#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  sym_name = 3,
  sym_parameter = 4,
  anon_sym_DASH = 5,
  sym_comment = 6,
  sym_source_file = 7,
  sym_statement = 8,
  sym__names = 9,
  sym_parameters_with_type = 10,
  sym__parameters = 11,
  sym_type = 12,
  sym_type_dec = 13,
  aux_sym_statement_repeat1 = 14,
  aux_sym__names_repeat1 = 15,
  aux_sym_parameters_with_type_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_name] = "name",
  [sym_parameter] = "parameter",
  [anon_sym_DASH] = "-",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym__names] = "_names",
  [sym_parameters_with_type] = "parameters_with_type",
  [sym__parameters] = "_parameters",
  [sym_type] = "type",
  [sym_type_dec] = "type_dec",
  [aux_sym_statement_repeat1] = "statement_repeat1",
  [aux_sym__names_repeat1] = "_names_repeat1",
  [aux_sym_parameters_with_type_repeat1] = "parameters_with_type_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_name] = sym_name,
  [sym_parameter] = sym_parameter,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym__names] = sym__names,
  [sym_parameters_with_type] = sym_parameters_with_type,
  [sym__parameters] = sym__parameters,
  [sym_type] = sym_type,
  [sym_type_dec] = sym_type_dec,
  [aux_sym_statement_repeat1] = aux_sym_statement_repeat1,
  [aux_sym__names_repeat1] = aux_sym__names_repeat1,
  [aux_sym_parameters_with_type_repeat1] = aux_sym_parameters_with_type_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__names] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters_with_type] = {
    .visible = true,
    .named = true,
  },
  [sym__parameters] = {
    .visible = false,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_type_dec] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__names_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_with_type_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(7);
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == ';') ADVANCE(9);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ';') ADVANCE(6);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_parameter] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_statement] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym_statement] = STATE(3),
    [sym__names] = STATE(3),
    [sym_parameters_with_type] = STATE(3),
    [sym__parameters] = STATE(3),
    [sym_type_dec] = STATE(3),
    [aux_sym_statement_repeat1] = STATE(3),
    [aux_sym__names_repeat1] = STATE(5),
    [aux_sym_parameters_with_type_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [sym_parameter] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(4),
    [sym__names] = STATE(4),
    [sym_parameters_with_type] = STATE(4),
    [sym__parameters] = STATE(4),
    [sym_type_dec] = STATE(4),
    [aux_sym_statement_repeat1] = STATE(4),
    [aux_sym__names_repeat1] = STATE(5),
    [aux_sym_parameters_with_type_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(13),
    [sym_name] = ACTIONS(9),
    [sym_parameter] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_statement] = STATE(4),
    [sym__names] = STATE(4),
    [sym_parameters_with_type] = STATE(4),
    [sym__parameters] = STATE(4),
    [sym_type_dec] = STATE(4),
    [aux_sym_statement_repeat1] = STATE(4),
    [aux_sym__names_repeat1] = STATE(5),
    [aux_sym_parameters_with_type_repeat1] = STATE(6),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_RPAREN] = ACTIONS(18),
    [sym_name] = ACTIONS(20),
    [sym_parameter] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(28), 1,
      sym_name,
    ACTIONS(30), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym__names_repeat1,
    STATE(11), 1,
      sym_type,
    ACTIONS(26), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [21] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(30), 1,
      anon_sym_DASH,
    ACTIONS(34), 1,
      sym_name,
    ACTIONS(36), 1,
      sym_parameter,
    STATE(8), 1,
      aux_sym_parameters_with_type_repeat1,
    STATE(12), 1,
      sym_type,
    ACTIONS(32), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_name,
    ACTIONS(43), 1,
      anon_sym_DASH,
    STATE(7), 1,
      aux_sym__names_repeat1,
    ACTIONS(38), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_parameter,
    STATE(8), 1,
      aux_sym_parameters_with_type_repeat1,
    ACTIONS(45), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      sym_name,
      anon_sym_DASH,
  [80] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_name,
      sym_parameter,
  [91] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_name,
      sym_parameter,
  [102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_name,
      sym_parameter,
  [112] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_name,
      sym_parameter,
  [122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_name,
      sym_parameter,
  [132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 2,
      sym_name,
      sym_parameter,
  [140] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
  [147] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [154] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 21,
  [SMALL_STATE(7)] = 44,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 91,
  [SMALL_STATE(11)] = 102,
  [SMALL_STATE(12)] = 112,
  [SMALL_STATE(13)] = 122,
  [SMALL_STATE(14)] = 132,
  [SMALL_STATE(15)] = 140,
  [SMALL_STATE(16)] = 147,
  [SMALL_STATE(17)] = 154,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(5),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__names, 1),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameters, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__names_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__names_repeat1, 2), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__names_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_with_type_repeat1, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_with_type_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_with_type_repeat1, 2), SHIFT_REPEAT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_dec, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_with_type, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [64] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pddl(void) {
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
