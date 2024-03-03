#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 47
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  anon_sym_ = 2,
  sym_category_string = 3,
  aux_sym_bucket_category_value_token1 = 4,
  anon_sym_GT = 5,
  sym_start_string = 6,
  sym_end_string = 7,
  aux_sym_yyyymmdd_token1 = 8,
  anon_sym_SLASH = 9,
  aux_sym_yyyymmdd_token2 = 10,
  aux_sym_yyyymmdd_token3 = 11,
  sym_weekly_amount_string = 12,
  sym_amount = 13,
  sym_source_file = 14,
  sym_bucket = 15,
  sym_bucket_category = 16,
  sym_bucket_category_value = 17,
  sym_bucket_start_date = 18,
  sym_bucket_end_date = 19,
  sym_date = 20,
  sym_yyyymmdd = 21,
  sym_mmddyyyy = 22,
  sym_bucket_weekly_amount = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_source_file_repeat2 = 25,
  aux_sym_bucket_category_repeat1 = 26,
  aux_sym_bucket_category_value_repeat1 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_] = " ",
  [sym_category_string] = "category_string",
  [aux_sym_bucket_category_value_token1] = "bucket_category_value_token1",
  [anon_sym_GT] = ">",
  [sym_start_string] = "start_string",
  [sym_end_string] = "end_string",
  [aux_sym_yyyymmdd_token1] = "yyyymmdd_token1",
  [anon_sym_SLASH] = "/",
  [aux_sym_yyyymmdd_token2] = "yyyymmdd_token2",
  [aux_sym_yyyymmdd_token3] = "yyyymmdd_token3",
  [sym_weekly_amount_string] = "weekly_amount_string",
  [sym_amount] = "amount",
  [sym_source_file] = "source_file",
  [sym_bucket] = "bucket",
  [sym_bucket_category] = "bucket_category",
  [sym_bucket_category_value] = "bucket_category_value",
  [sym_bucket_start_date] = "bucket_start_date",
  [sym_bucket_end_date] = "bucket_end_date",
  [sym_date] = "date",
  [sym_yyyymmdd] = "yyyymmdd",
  [sym_mmddyyyy] = "mmddyyyy",
  [sym_bucket_weekly_amount] = "bucket_weekly_amount",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_bucket_category_repeat1] = "bucket_category_repeat1",
  [aux_sym_bucket_category_value_repeat1] = "bucket_category_value_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_] = anon_sym_,
  [sym_category_string] = sym_category_string,
  [aux_sym_bucket_category_value_token1] = aux_sym_bucket_category_value_token1,
  [anon_sym_GT] = anon_sym_GT,
  [sym_start_string] = sym_start_string,
  [sym_end_string] = sym_end_string,
  [aux_sym_yyyymmdd_token1] = aux_sym_yyyymmdd_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [aux_sym_yyyymmdd_token2] = aux_sym_yyyymmdd_token2,
  [aux_sym_yyyymmdd_token3] = aux_sym_yyyymmdd_token3,
  [sym_weekly_amount_string] = sym_weekly_amount_string,
  [sym_amount] = sym_amount,
  [sym_source_file] = sym_source_file,
  [sym_bucket] = sym_bucket,
  [sym_bucket_category] = sym_bucket_category,
  [sym_bucket_category_value] = sym_bucket_category_value,
  [sym_bucket_start_date] = sym_bucket_start_date,
  [sym_bucket_end_date] = sym_bucket_end_date,
  [sym_date] = sym_date,
  [sym_yyyymmdd] = sym_yyyymmdd,
  [sym_mmddyyyy] = sym_mmddyyyy,
  [sym_bucket_weekly_amount] = sym_bucket_weekly_amount,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_bucket_category_repeat1] = aux_sym_bucket_category_repeat1,
  [aux_sym_bucket_category_value_repeat1] = aux_sym_bucket_category_value_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_category_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_bucket_category_value_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_start_string] = {
    .visible = true,
    .named = true,
  },
  [sym_end_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_yyyymmdd_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_yyyymmdd_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_yyyymmdd_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_weekly_amount_string] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_bucket] = {
    .visible = true,
    .named = true,
  },
  [sym_bucket_category] = {
    .visible = true,
    .named = true,
  },
  [sym_bucket_category_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bucket_start_date] = {
    .visible = true,
    .named = true,
  },
  [sym_bucket_end_date] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_yyyymmdd] = {
    .visible = true,
    .named = true,
  },
  [sym_mmddyyyy] = {
    .visible = true,
    .named = true,
  },
  [sym_bucket_weekly_amount] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bucket_category_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_bucket_category_value_repeat1] = {
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
  [16] = 10,
  [17] = 17,
  [18] = 18,
  [19] = 10,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(48);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'k') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 31:
      if (lookahead == 'y') ADVANCE(1);
      END_STATE();
    case 32:
      if (lookahead == 'y') ADVANCE(7);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(34)
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 35:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(61);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (eof) ADVANCE(40);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(39)
      END_STATE();
    case 40:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_category_string);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_bucket_category_value_token1);
      if (lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_bucket_category_value_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(44);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_start_string);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_end_string);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token1);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token1);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_yyyymmdd_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_weekly_amount_string);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_amount);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 39},
  [9] = {.lex_state = 4},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 39},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 39},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 39},
  [22] = {.lex_state = 39},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 34},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 33},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 33},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 35},
  [46] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_category_string] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_start_string] = ACTIONS(1),
    [sym_end_string] = ACTIONS(1),
    [aux_sym_yyyymmdd_token1] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [aux_sym_yyyymmdd_token2] = ACTIONS(1),
    [aux_sym_yyyymmdd_token3] = ACTIONS(1),
    [sym_weekly_amount_string] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym_bucket] = STATE(11),
    [sym_bucket_category] = STATE(28),
    [aux_sym_source_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_category_string] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    STATE(10), 1,
      aux_sym_bucket_category_repeat1,
    STATE(37), 1,
      sym_date,
    STATE(24), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [20] = 6,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(13), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_bucket_category_repeat1,
    STATE(32), 1,
      sym_date,
    STATE(24), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [40] = 6,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    ACTIONS(15), 1,
      anon_sym_,
    STATE(5), 1,
      aux_sym_bucket_category_repeat1,
    STATE(38), 1,
      sym_date,
    STATE(24), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [60] = 6,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      aux_sym_yyyymmdd_token1,
    ACTIONS(11), 1,
      aux_sym_yyyymmdd_token2,
    STATE(10), 1,
      aux_sym_bucket_category_repeat1,
    STATE(44), 1,
      sym_date,
    STATE(24), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [80] = 5,
    ACTIONS(5), 1,
      sym_category_string,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(11), 1,
      sym_bucket,
    STATE(28), 1,
      sym_bucket_category,
  [96] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_category_string,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(11), 1,
      sym_bucket,
    STATE(28), 1,
      sym_bucket_category,
  [112] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      sym_category_string,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
  [125] = 4,
    ACTIONS(31), 1,
      anon_sym_,
    ACTIONS(33), 1,
      aux_sym_bucket_category_value_token1,
    STATE(12), 1,
      aux_sym_bucket_category_repeat1,
    STATE(33), 1,
      sym_bucket_category_value,
  [138] = 3,
    ACTIONS(35), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_bucket_category_repeat1,
    ACTIONS(38), 2,
      aux_sym_yyyymmdd_token1,
      aux_sym_yyyymmdd_token2,
  [149] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      sym_category_string,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
  [162] = 4,
    ACTIONS(33), 1,
      aux_sym_bucket_category_value_token1,
    ACTIONS(46), 1,
      anon_sym_,
    STATE(19), 1,
      aux_sym_bucket_category_repeat1,
    STATE(46), 1,
      sym_bucket_category_value,
  [175] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym_category_string,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
  [188] = 3,
    ACTIONS(52), 1,
      anon_sym_,
    ACTIONS(54), 1,
      sym_amount,
    STATE(20), 1,
      aux_sym_bucket_category_repeat1,
  [198] = 3,
    ACTIONS(56), 1,
      anon_sym_GT,
    ACTIONS(59), 1,
      sym_start_string,
    STATE(15), 1,
      aux_sym_bucket_category_value_repeat1,
  [208] = 3,
    ACTIONS(38), 1,
      sym_amount,
    ACTIONS(61), 1,
      anon_sym_,
    STATE(16), 1,
      aux_sym_bucket_category_repeat1,
  [218] = 3,
    ACTIONS(64), 1,
      anon_sym_GT,
    ACTIONS(66), 1,
      sym_start_string,
    STATE(15), 1,
      aux_sym_bucket_category_value_repeat1,
  [228] = 2,
    ACTIONS(70), 1,
      sym_category_string,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [236] = 3,
    ACTIONS(38), 1,
      aux_sym_bucket_category_value_token1,
    ACTIONS(72), 1,
      anon_sym_,
    STATE(19), 1,
      aux_sym_bucket_category_repeat1,
  [246] = 3,
    ACTIONS(75), 1,
      anon_sym_,
    ACTIONS(77), 1,
      sym_amount,
    STATE(16), 1,
      aux_sym_bucket_category_repeat1,
  [256] = 2,
    ACTIONS(81), 1,
      sym_category_string,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [264] = 2,
    ACTIONS(85), 1,
      sym_category_string,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [272] = 3,
    ACTIONS(64), 1,
      anon_sym_GT,
    ACTIONS(87), 1,
      sym_start_string,
    STATE(17), 1,
      aux_sym_bucket_category_value_repeat1,
  [282] = 1,
    ACTIONS(89), 2,
      sym_end_string,
      sym_weekly_amount_string,
  [287] = 2,
    ACTIONS(91), 1,
      sym_end_string,
    STATE(26), 1,
      sym_bucket_end_date,
  [294] = 2,
    ACTIONS(93), 1,
      sym_weekly_amount_string,
    STATE(22), 1,
      sym_bucket_weekly_amount,
  [301] = 1,
    ACTIONS(59), 2,
      anon_sym_GT,
      sym_start_string,
  [306] = 2,
    ACTIONS(95), 1,
      sym_start_string,
    STATE(25), 1,
      sym_bucket_start_date,
  [313] = 1,
    ACTIONS(97), 2,
      sym_end_string,
      sym_weekly_amount_string,
  [318] = 1,
    ACTIONS(99), 2,
      sym_end_string,
      sym_weekly_amount_string,
  [323] = 1,
    ACTIONS(101), 1,
      anon_sym_SLASH,
  [327] = 1,
    ACTIONS(103), 1,
      sym_weekly_amount_string,
  [331] = 1,
    ACTIONS(105), 1,
      sym_start_string,
  [335] = 1,
    ACTIONS(107), 1,
      aux_sym_bucket_category_value_token1,
  [339] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [343] = 1,
    ACTIONS(111), 1,
      anon_sym_SLASH,
  [347] = 1,
    ACTIONS(113), 1,
      sym_weekly_amount_string,
  [351] = 1,
    ACTIONS(115), 1,
      sym_end_string,
  [355] = 1,
    ACTIONS(117), 1,
      anon_sym_SLASH,
  [359] = 1,
    ACTIONS(119), 1,
      aux_sym_yyyymmdd_token3,
  [363] = 1,
    ACTIONS(121), 1,
      aux_sym_yyyymmdd_token1,
  [367] = 1,
    ACTIONS(123), 1,
      anon_sym_SLASH,
  [371] = 1,
    ACTIONS(125), 1,
      aux_sym_yyyymmdd_token2,
  [375] = 1,
    ACTIONS(127), 1,
      sym_end_string,
  [379] = 1,
    ACTIONS(129), 1,
      aux_sym_yyyymmdd_token3,
  [383] = 1,
    ACTIONS(131), 1,
      sym_start_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 175,
  [SMALL_STATE(14)] = 188,
  [SMALL_STATE(15)] = 198,
  [SMALL_STATE(16)] = 208,
  [SMALL_STATE(17)] = 218,
  [SMALL_STATE(18)] = 228,
  [SMALL_STATE(19)] = 236,
  [SMALL_STATE(20)] = 246,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 264,
  [SMALL_STATE(23)] = 272,
  [SMALL_STATE(24)] = 282,
  [SMALL_STATE(25)] = 287,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 306,
  [SMALL_STATE(29)] = 313,
  [SMALL_STATE(30)] = 318,
  [SMALL_STATE(31)] = 323,
  [SMALL_STATE(32)] = 327,
  [SMALL_STATE(33)] = 331,
  [SMALL_STATE(34)] = 335,
  [SMALL_STATE(35)] = 339,
  [SMALL_STATE(36)] = 343,
  [SMALL_STATE(37)] = 347,
  [SMALL_STATE(38)] = 351,
  [SMALL_STATE(39)] = 355,
  [SMALL_STATE(40)] = 359,
  [SMALL_STATE(41)] = 363,
  [SMALL_STATE(42)] = 367,
  [SMALL_STATE(43)] = 371,
  [SMALL_STATE(44)] = 375,
  [SMALL_STATE(45)] = 379,
  [SMALL_STATE(46)] = 383,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bucket_category_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_value_repeat1, 2), SHIFT_REPEAT(34),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bucket_category_value_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_repeat1, 2), SHIFT_REPEAT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category_value, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_weekly_amount, 3),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bucket_weekly_amount, 3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_repeat1, 2), SHIFT_REPEAT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_weekly_amount, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bucket_weekly_amount, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bucket, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category_value, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmddyyyy, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yyyymmdd, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_end_date, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_end_date, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_start_date, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_start_date, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_bucket(void) {
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
