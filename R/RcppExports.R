# This file was generated by Rcpp::compileAttributes
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

do_parse_with_callbacks <- function(text, cmd_action, macro_value_accessor, log_command, debug_level = 0L, echo = 1L) {
    .Call('ado_do_parse_with_callbacks', PACKAGE = 'ado', text, cmd_action, macro_value_accessor, log_command, debug_level, echo)
}

do_parse <- function(text, log_command, debug_level = 0L) {
    .Call('ado_do_parse', PACKAGE = 'ado', text, log_command, debug_level)
}

parse_accept <- function(text) {
    .Call('ado_parse_accept', PACKAGE = 'ado', text)
}

unlockEnvironment <- function(env) {
    .Call('ado_unlockEnvironment', PACKAGE = 'ado', env)
}

