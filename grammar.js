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
    bucket_start_date: $ => seq($.start_string, repeat(" "), $.date),
    bucket_end_date: $ => seq($.end_string, repeat(" "), $.date),
    date: $ => choice(
      $.yyyymmdd,
      $.mmddyyyy,
    ),
    yyyymmdd: $ => seq(/\d\d\d\d/, "/", /[01]?\d/, "/", /[0123]?\d/),
    mmddyyyy: $ => seq(/[01]?\d/,"/", /[0123]?\d/, "/", /\d\d\d\d/),

    bucket_weekly_amount: $ => seq($.weekly_amount_string, repeat(" "), $.amount),
    weekly_amount_string: $ => "Weekly Amount:",
    amount: $ => /\$?\d+\.?\d?\d?/,
  }
});
