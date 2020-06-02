// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// LOPART_interface
Rcpp::List LOPART_interface(Rcpp::NumericVector input_data, Rcpp::IntegerVector input_label_start, Rcpp::IntegerVector input_label_end, Rcpp::IntegerVector input_label_changes, double penalty);
RcppExport SEXP _LOPART_LOPART_interface(SEXP input_dataSEXP, SEXP input_label_startSEXP, SEXP input_label_endSEXP, SEXP input_label_changesSEXP, SEXP penaltySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type input_data(input_dataSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type input_label_start(input_label_startSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type input_label_end(input_label_endSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type input_label_changes(input_label_changesSEXP);
    Rcpp::traits::input_parameter< double >::type penalty(penaltySEXP);
    rcpp_result_gen = Rcpp::wrap(LOPART_interface(input_data, input_label_start, input_label_end, input_label_changes, penalty));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LOPART_LOPART_interface", (DL_FUNC) &_LOPART_LOPART_interface, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_LOPART(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
