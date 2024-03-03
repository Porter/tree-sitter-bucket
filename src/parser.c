#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
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
  anon_sym_SLASH = 8,
  sym_mm = 9,
  sym_dd = 10,
  sym_yyyy = 11,
  sym_weekly_amount_string = 12,
  sym_amount = 13,
  sym_source_file = 14,
  sym_bucket = 15,
  sym_bucket_category = 16,
  sym_bucket_category_value = 17,
  sym_bucket_start_date = 18,
  sym_bucket_end_date = 19,
  sym_start_date = 20,
  sym_end_date = 21,
  sym_date = 22,
  sym_yyyymmdd = 23,
  sym_mmddyyyy = 24,
  sym_bucket_weekly_amount = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_source_file_repeat2 = 27,
  aux_sym_bucket_category_repeat1 = 28,
  aux_sym_bucket_category_value_repeat1 = 29,
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
  [anon_sym_SLASH] = "/",
  [sym_mm] = "mm",
  [sym_dd] = "dd",
  [sym_yyyy] = "yyyy",
  [sym_weekly_amount_string] = "weekly_amount_string",
  [sym_amount] = "amount",
  [sym_source_file] = "source_file",
  [sym_bucket] = "bucket",
  [sym_bucket_category] = "bucket_category",
  [sym_bucket_category_value] = "bucket_category_value",
  [sym_bucket_start_date] = "bucket_start_date",
  [sym_bucket_end_date] = "bucket_end_date",
  [sym_start_date] = "start_date",
  [sym_end_date] = "end_date",
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
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_mm] = sym_mm,
  [sym_dd] = sym_dd,
  [sym_yyyy] = sym_yyyy,
  [sym_weekly_amount_string] = sym_weekly_amount_string,
  [sym_amount] = sym_amount,
  [sym_source_file] = sym_source_file,
  [sym_bucket] = sym_bucket,
  [sym_bucket_category] = sym_bucket_category,
  [sym_bucket_category_value] = sym_bucket_category_value,
  [sym_bucket_start_date] = sym_bucket_start_date,
  [sym_bucket_end_date] = sym_bucket_end_date,
  [sym_start_date] = sym_start_date,
  [sym_end_date] = sym_end_date,
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_mm] = {
    .visible = true,
    .named = true,
  },
  [sym_dd] = {
    .visible = true,
    .named = true,
  },
  [sym_yyyy] = {
    .visible = true,
    .named = true,
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
  [sym_start_date] = {
    .visible = true,
    .named = true,
  },
  [sym_end_date] = {
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
  [15] = 10,
  [16] = 16,
  [17] = 10,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(40);
      if (lookahead == '$') ADVANCE(36);
      if (lookahead == '/') ADVANCE(49);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead == 'C') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'S') ADVANCE(26);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(52);
      if (lookahead == '2' ||
          lookahead == '3') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(53);
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
          lookahead == '1') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(54);
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
          lookahead == '1') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(33)
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(54);
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
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(59);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
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
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_mm);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_mm);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_mm);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_mm);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_mm);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_mm);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_mm);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_dd);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_dd);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_dd);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_yyyy);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_yyyy);
      if (lookahead == '.') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
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
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 39},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
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
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 34},
  [36] = {.lex_state = 33},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 35},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 33},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_category_string] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_start_string] = ACTIONS(1),
    [sym_end_string] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_mm] = ACTIONS(1),
    [sym_dd] = ACTIONS(1),
    [sym_yyyy] = ACTIONS(1),
    [sym_weekly_amount_string] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_bucket] = STATE(11),
    [sym_bucket_category] = STATE(25),
    [aux_sym_source_file_repeat2] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_category_string] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      sym_mm,
    ACTIONS(11), 1,
      sym_yyyy,
    STATE(10), 1,
      aux_sym_bucket_category_repeat1,
    STATE(33), 1,
      sym_date,
    STATE(39), 1,
      sym_end_date,
    STATE(28), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [23] = 7,
    ACTIONS(9), 1,
      sym_mm,
    ACTIONS(11), 1,
      sym_yyyy,
    ACTIONS(13), 1,
      anon_sym_,
    STATE(2), 1,
      aux_sym_bucket_category_repeat1,
    STATE(32), 1,
      sym_end_date,
    STATE(33), 1,
      sym_date,
    STATE(28), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [46] = 7,
    ACTIONS(9), 1,
      sym_mm,
    ACTIONS(11), 1,
      sym_yyyy,
    ACTIONS(15), 1,
      anon_sym_,
    STATE(5), 1,
      aux_sym_bucket_category_repeat1,
    STATE(44), 1,
      sym_date,
    STATE(45), 1,
      sym_start_date,
    STATE(28), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [69] = 7,
    ACTIONS(7), 1,
      anon_sym_,
    ACTIONS(9), 1,
      sym_mm,
    ACTIONS(11), 1,
      sym_yyyy,
    STATE(10), 1,
      aux_sym_bucket_category_repeat1,
    STATE(31), 1,
      sym_start_date,
    STATE(44), 1,
      sym_date,
    STATE(28), 2,
      sym_yyyymmdd,
      sym_mmddyyyy,
  [92] = 5,
    ACTIONS(5), 1,
      sym_category_string,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(11), 1,
      sym_bucket,
    STATE(25), 1,
      sym_bucket_category,
  [108] = 5,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_category_string,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(11), 1,
      sym_bucket,
    STATE(25), 1,
      sym_bucket_category,
  [124] = 4,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_LF,
    ACTIONS(29), 1,
      sym_category_string,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
  [137] = 4,
    ACTIONS(31), 1,
      anon_sym_,
    ACTIONS(33), 1,
      aux_sym_bucket_category_value_token1,
    STATE(12), 1,
      aux_sym_bucket_category_repeat1,
    STATE(34), 1,
      sym_bucket_category_value,
  [150] = 3,
    ACTIONS(35), 1,
      anon_sym_,
    STATE(10), 1,
      aux_sym_bucket_category_repeat1,
    ACTIONS(38), 2,
      sym_mm,
      sym_yyyy,
  [161] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(44), 1,
      sym_category_string,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
  [174] = 4,
    ACTIONS(33), 1,
      aux_sym_bucket_category_value_token1,
    ACTIONS(46), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_bucket_category_repeat1,
    STATE(48), 1,
      sym_bucket_category_value,
  [187] = 4,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_LF,
    ACTIONS(50), 1,
      sym_category_string,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
  [200] = 2,
    ACTIONS(54), 1,
      sym_category_string,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [208] = 3,
    ACTIONS(38), 1,
      sym_amount,
    ACTIONS(56), 1,
      anon_sym_,
    STATE(15), 1,
      aux_sym_bucket_category_repeat1,
  [218] = 3,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(61), 1,
      sym_start_string,
    STATE(21), 1,
      aux_sym_bucket_category_value_repeat1,
  [228] = 3,
    ACTIONS(38), 1,
      aux_sym_bucket_category_value_token1,
    ACTIONS(63), 1,
      anon_sym_,
    STATE(17), 1,
      aux_sym_bucket_category_repeat1,
  [238] = 2,
    ACTIONS(68), 1,
      sym_category_string,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [246] = 3,
    ACTIONS(70), 1,
      anon_sym_,
    ACTIONS(72), 1,
      sym_amount,
    STATE(15), 1,
      aux_sym_bucket_category_repeat1,
  [256] = 2,
    ACTIONS(76), 1,
      sym_category_string,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_LF,
  [264] = 3,
    ACTIONS(78), 1,
      anon_sym_GT,
    ACTIONS(81), 1,
      sym_start_string,
    STATE(21), 1,
      aux_sym_bucket_category_value_repeat1,
  [274] = 3,
    ACTIONS(59), 1,
      anon_sym_GT,
    ACTIONS(83), 1,
      sym_start_string,
    STATE(16), 1,
      aux_sym_bucket_category_value_repeat1,
  [284] = 3,
    ACTIONS(85), 1,
      anon_sym_,
    ACTIONS(87), 1,
      sym_amount,
    STATE(19), 1,
      aux_sym_bucket_category_repeat1,
  [294] = 2,
    ACTIONS(89), 1,
      sym_end_string,
    STATE(29), 1,
      sym_bucket_end_date,
  [301] = 2,
    ACTIONS(91), 1,
      sym_start_string,
    STATE(24), 1,
      sym_bucket_start_date,
  [308] = 1,
    ACTIONS(93), 2,
      sym_end_string,
      sym_weekly_amount_string,
  [313] = 1,
    ACTIONS(95), 2,
      sym_end_string,
      sym_weekly_amount_string,
  [318] = 1,
    ACTIONS(97), 2,
      sym_end_string,
      sym_weekly_amount_string,
  [323] = 2,
    ACTIONS(99), 1,
      sym_weekly_amount_string,
    STATE(14), 1,
      sym_bucket_weekly_amount,
  [330] = 1,
    ACTIONS(81), 2,
      anon_sym_GT,
      sym_start_string,
  [335] = 1,
    ACTIONS(101), 1,
      sym_end_string,
  [339] = 1,
    ACTIONS(103), 1,
      sym_weekly_amount_string,
  [343] = 1,
    ACTIONS(105), 1,
      sym_weekly_amount_string,
  [347] = 1,
    ACTIONS(107), 1,
      sym_start_string,
  [351] = 1,
    ACTIONS(109), 1,
      aux_sym_bucket_category_value_token1,
  [355] = 1,
    ACTIONS(111), 1,
      sym_mm,
  [359] = 1,
    ACTIONS(113), 1,
      anon_sym_SLASH,
  [363] = 1,
    ACTIONS(115), 1,
      anon_sym_SLASH,
  [367] = 1,
    ACTIONS(117), 1,
      sym_weekly_amount_string,
  [371] = 1,
    ACTIONS(119), 1,
      sym_dd,
  [375] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [379] = 1,
    ACTIONS(123), 1,
      sym_yyyy,
  [383] = 1,
    ACTIONS(125), 1,
      sym_dd,
  [387] = 1,
    ACTIONS(127), 1,
      sym_end_string,
  [391] = 1,
    ACTIONS(129), 1,
      sym_end_string,
  [395] = 1,
    ACTIONS(131), 1,
      anon_sym_SLASH,
  [399] = 1,
    ACTIONS(133), 1,
      anon_sym_SLASH,
  [403] = 1,
    ACTIONS(135), 1,
      sym_start_string,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 187,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 208,
  [SMALL_STATE(16)] = 218,
  [SMALL_STATE(17)] = 228,
  [SMALL_STATE(18)] = 238,
  [SMALL_STATE(19)] = 246,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 264,
  [SMALL_STATE(22)] = 274,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 294,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 308,
  [SMALL_STATE(27)] = 313,
  [SMALL_STATE(28)] = 318,
  [SMALL_STATE(29)] = 323,
  [SMALL_STATE(30)] = 330,
  [SMALL_STATE(31)] = 335,
  [SMALL_STATE(32)] = 339,
  [SMALL_STATE(33)] = 343,
  [SMALL_STATE(34)] = 347,
  [SMALL_STATE(35)] = 351,
  [SMALL_STATE(36)] = 355,
  [SMALL_STATE(37)] = 359,
  [SMALL_STATE(38)] = 363,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 371,
  [SMALL_STATE(41)] = 375,
  [SMALL_STATE(42)] = 379,
  [SMALL_STATE(43)] = 383,
  [SMALL_STATE(44)] = 387,
  [SMALL_STATE(45)] = 391,
  [SMALL_STATE(46)] = 395,
  [SMALL_STATE(47)] = 399,
  [SMALL_STATE(48)] = 403,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2), SHIFT_REPEAT(9),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_repeat1, 2), SHIFT_REPEAT(10),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bucket_category_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat2, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket, 4),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bucket, 4),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_repeat1, 2), SHIFT_REPEAT(15),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category_value, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_repeat1, 2), SHIFT_REPEAT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_weekly_amount, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bucket_weekly_amount, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_weekly_amount, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bucket_weekly_amount, 2),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bucket_category_value_repeat1, 2), SHIFT_REPEAT(35),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bucket_category_value_repeat1, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category_value, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_yyyymmdd, 5),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mmddyyyy, 5),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_start_date, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_end_date, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_end_date, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_end_date, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [121] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_start_date, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_start_date, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bucket_category, 3),
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
