// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// score
Rcpp::List score(Rcpp::NumericMatrix Sin, Rcpp::NumericVector yin, Rcpp::NumericMatrix xin, Rcpp::NumericMatrix xsin, Rcpp::NumericVector Gin, int scorein, double alphain);
RcppExport SEXP _ProbReco_score(SEXP SinSEXP, SEXP yinSEXP, SEXP xinSEXP, SEXP xsinSEXP, SEXP GinSEXP, SEXP scoreinSEXP, SEXP alphainSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type Sin(SinSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type yin(yinSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type xin(xinSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type xsin(xsinSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Gin(GinSEXP);
    Rcpp::traits::input_parameter< int >::type scorein(scoreinSEXP);
    Rcpp::traits::input_parameter< double >::type alphain(alphainSEXP);
    rcpp_result_gen = Rcpp::wrap(score(Sin, yin, xin, xsin, Gin, scorein, alphain));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ProbReco_score", (DL_FUNC) &_ProbReco_score, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_ProbReco(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
