module.exports = grammar({
    name: 'pddl',

    extras: $ => [/\s/, $.comment],

    rules: {
        source_file: $ => $.statement,

        statement: $ => token(prec(1, seq('(',
            choice($.name, $.parameter),
            repeat(
                    choice(
                        prec(-1, $._names),
                        $.parameters_with_type,
                        prec(-1, $._parameters),
                        $.statement,
                        $.type_dec
                    ),
            ),
            ')'
        ))),
        _names: $ => prec.right(repeat1($.name)),
        name: $ => /[^\?\(\)\s][^\s\(\)]*/,
        parameters_with_type: $ => seq(
            repeat1($.parameter),
            $.type
        ),
        _parameters: $ => prec.right(repeat1($.parameter)),
        parameter: $ => /\?[^\s\(\)]+/,
        
        type: $ => seq('-', $.name),
        type_dec: $ => seq(
            repeat1($.name),
            $.type
        ),

        comment: $ => token(seq(';', repeat(/.*/))),
    }
});
