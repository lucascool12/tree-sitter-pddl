#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 7
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
  [5] = 4,
  [6] = 3,
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
  [17] = 16,
  [18] = 18,
  [19] = 15,
  [20] = 14,
  [21] = 21,
  [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ')') ADVANCE(6);
      if (lookahead == ';') ADVANCE(7);
      if (lookahead == '?') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(9);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_name);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_parameter);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(8);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
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
    [sym_source_file] = STATE(22),
    [sym_statement] = STATE(21),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym_statement] = STATE(2),
    [sym__names] = STATE(2),
    [sym_parameters_with_type] = STATE(2),
    [sym__parameters] = STATE(2),
    [sym_type_dec] = STATE(2),
    [aux_sym_statement_repeat1] = STATE(2),
    [aux_sym__names_repeat1] = STATE(7),
    [aux_sym_parameters_with_type_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(12),
    [sym_name] = ACTIONS(14),
    [sym_parameter] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_statement] = STATE(2),
    [sym__names] = STATE(2),
    [sym_parameters_with_type] = STATE(2),
    [sym__parameters] = STATE(2),
    [sym_type_dec] = STATE(2),
    [aux_sym_statement_repeat1] = STATE(2),
    [aux_sym__names_repeat1] = STATE(7),
    [aux_sym_parameters_with_type_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(22),
    [sym_name] = ACTIONS(24),
    [sym_parameter] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym_statement] = STATE(3),
    [sym__names] = STATE(3),
    [sym_parameters_with_type] = STATE(3),
    [sym__parameters] = STATE(3),
    [sym_type_dec] = STATE(3),
    [aux_sym_statement_repeat1] = STATE(3),
    [aux_sym__names_repeat1] = STATE(7),
    [aux_sym_parameters_with_type_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(28),
    [sym_name] = ACTIONS(24),
    [sym_parameter] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym_statement] = STATE(6),
    [sym__names] = STATE(6),
    [sym_parameters_with_type] = STATE(6),
    [sym__parameters] = STATE(6),
    [sym_type_dec] = STATE(6),
    [aux_sym_statement_repeat1] = STATE(6),
    [aux_sym__names_repeat1] = STATE(7),
    [aux_sym_parameters_with_type_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(30),
    [sym_name] = ACTIONS(24),
    [sym_parameter] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym_statement] = STATE(2),
    [sym__names] = STATE(2),
    [sym_parameters_with_type] = STATE(2),
    [sym__parameters] = STATE(2),
    [sym_type_dec] = STATE(2),
    [aux_sym_statement_repeat1] = STATE(2),
    [aux_sym__names_repeat1] = STATE(7),
    [aux_sym_parameters_with_type_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(20),
    [anon_sym_RPAREN] = ACTIONS(32),
    [sym_name] = ACTIONS(24),
    [sym_parameter] = ACTIONS(26),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 1,
      sym_name,
    ACTIONS(38), 1,
      anon_sym_DASH,
    STATE(10), 1,
      aux_sym__names_repeat1,
    STATE(12), 1,
      sym_type,
    ACTIONS(34), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [21] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 1,
      anon_sym_DASH,
    ACTIONS(42), 1,
      sym_name,
    ACTIONS(44), 1,
      sym_parameter,
    STATE(9), 1,
      aux_sym_parameters_with_type_repeat1,
    STATE(11), 1,
      sym_type,
    ACTIONS(40), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
  [44] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_parameter,
    STATE(9), 1,
      aux_sym_parameters_with_type_repeat1,
    ACTIONS(46), 2,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(48), 2,
      sym_name,
      anon_sym_DASH,
  [62] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(58), 1,
      anon_sym_DASH,
    STATE(10), 1,
      aux_sym__names_repeat1,
    ACTIONS(53), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [80] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      sym_name,
    ACTIONS(60), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [92] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      sym_name,
    ACTIONS(64), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_name,
    ACTIONS(68), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [116] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      sym_name,
    ACTIONS(72), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [128] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      sym_name,
    ACTIONS(76), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_parameter,
  [140] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 1,
      sym_name,
    ACTIONS(82), 1,
      sym_parameter,
  [150] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      sym_name,
    ACTIONS(86), 1,
      sym_parameter,
  [160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      sym_name,
  [167] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [174] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
  [181] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [188] = 2,
    ACTIONS(7), 1,
      sym_comment,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 21,
  [SMALL_STATE(9)] = 44,
  [SMALL_STATE(10)] = 62,
  [SMALL_STATE(11)] = 80,
  [SMALL_STATE(12)] = 92,
  [SMALL_STATE(13)] = 104,
  [SMALL_STATE(14)] = 116,
  [SMALL_STATE(15)] = 128,
  [SMALL_STATE(16)] = 140,
  [SMALL_STATE(17)] = 150,
  [SMALL_STATE(18)] = 160,
  [SMALL_STATE(19)] = 167,
  [SMALL_STATE(20)] = 174,
  [SMALL_STATE(21)] = 181,
  [SMALL_STATE(22)] = 188,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(17),
  [12] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(7),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_statement_repeat1, 2), SHIFT_REPEAT(8),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__names, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameters, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameters, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_with_type_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_parameters_with_type_repeat1, 2),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_with_type_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__names_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__names_repeat1, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__names_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters_with_type, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters_with_type, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_dec, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_dec, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 3),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
