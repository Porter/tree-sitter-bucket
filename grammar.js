module.exports = grammar({
  name: 'bucket',

  rules: {
    source_file: $ => repeat(
      seq(
	$.bucket,
	repeat("\n"),
      ),
    ),

    bucket: $ => seq(
      $.bucket_category,
      $.bucket_start_date,
      $.bucket_end_date,
      $.bucket_weekly_amount,
    ),

    bucket_category: $ => seq(
      $.category_string,
      repeat(" "),
      $.bucket_category_value,
    ),
    category_string: $ => "Category:",
    bucket_category_value: $ => seq(
      /(\S+ ?)+/,
      repeat(seq(">", /(\S+ ?)+/)),
    ),

    start_string: $ => "Start:",
    end_string: $ => "End:",
    bucket_start_date: $ => seq($.start_string, repeat(" "), $.start_date),
    bucket_end_date: $ => seq($.end_string, repeat(" "), $.end_date),
    start_date: $ => $.date,
    end_date: $ => $.date,
    date: $ => choice(
      $.yyyymmdd,
      $.mmddyyyy,
    ),
    yyyymmdd: $ => seq($.yyyy, "/", $.mm, "/", $.dd),
    mmddyyyy: $ => seq($.mm ,"/", $.dd, "/", $.yyyy),
    mm: $ => /[01]?\d/,
    dd: $ => /[0123]?\d/,
    yyyy: $ => /\d\d\d\d/,

    bucket_weekly_amount: $ => seq($.weekly_amount_string, repeat(" "), $.amount),
    weekly_amount_string: $ => "Weekly Amount:",
    amount: $ => /\$?\d+\.?\d?\d?/,
  }
});
