// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// do_parse_with_callbacks
SEXP do_parse_with_callbacks(std::string text, Rcpp::Function cmd_action, Rcpp::Function macro_value_accessor, int debug_level, int echo);
RcppExport SEXP ado_do_parse_with_callbacks(SEXP textSEXP, SEXP cmd_actionSEXP, SEXP macro_value_accessorSEXP, SEXP debug_levelSEXP, SEXP echoSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type cmd_action(cmd_actionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type macro_value_accessor(macro_value_accessorSEXP);
    Rcpp::traits::input_parameter< int >::type debug_level(debug_levelSEXP);
    Rcpp::traits::input_parameter< int >::type echo(echoSEXP);
    __result = Rcpp::wrap(do_parse_with_callbacks(text, cmd_action, macro_value_accessor, debug_level, echo));
    return __result;
END_RCPP
}
// do_parse
Rcpp::List do_parse(std::string text, int debug_level);
RcppExport SEXP ado_do_parse(SEXP textSEXP, SEXP debug_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    Rcpp::traits::input_parameter< int >::type debug_level(debug_levelSEXP);
    __result = Rcpp::wrap(do_parse(text, debug_level));
    return __result;
END_RCPP
}
// parse_accept
int parse_accept(std::string text);
RcppExport SEXP ado_parse_accept(SEXP textSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::string >::type text(textSEXP);
    __result = Rcpp::wrap(parse_accept(text));
    return __result;
END_RCPP
}
// unlockEnvironment
bool unlockEnvironment(Rcpp::Environment env);
RcppExport SEXP ado_unlockEnvironment(SEXP envSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::Environment >::type env(envSEXP);
    __result = Rcpp::wrap(unlockEnvironment(env));
    return __result;
END_RCPP
}
