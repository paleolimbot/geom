// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// geomcpp_version_impl
std::string geomcpp_version_impl();
RcppExport SEXP _geom_geomcpp_version_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(geomcpp_version_impl());
    return rcpp_result_gen;
END_RCPP
}
// geomcpp_test_throw_error
void geomcpp_test_throw_error();
RcppExport SEXP _geom_geomcpp_test_throw_error() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    geomcpp_test_throw_error();
    return R_NilValue;
END_RCPP
}
// geomcpp_intersection
SEXP geomcpp_intersection(SEXP dataLeft, SEXP dataRight, SEXP ptype);
RcppExport SEXP _geom_geomcpp_intersection(SEXP dataLeftSEXP, SEXP dataRightSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dataLeft(dataLeftSEXP);
    Rcpp::traits::input_parameter< SEXP >::type dataRight(dataRightSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    rcpp_result_gen = Rcpp::wrap(geomcpp_intersection(dataLeft, dataRight, ptype));
    return rcpp_result_gen;
END_RCPP
}
// geomcpp_buffer
SEXP geomcpp_buffer(SEXP data, SEXP ptype, NumericVector width, int quadSegs, int endCapStyle, int joinStyle, double mitreLimit, int singleSided);
RcppExport SEXP _geom_geomcpp_buffer(SEXP dataSEXP, SEXP ptypeSEXP, SEXP widthSEXP, SEXP quadSegsSEXP, SEXP endCapStyleSEXP, SEXP joinStyleSEXP, SEXP mitreLimitSEXP, SEXP singleSidedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type quadSegs(quadSegsSEXP);
    Rcpp::traits::input_parameter< int >::type endCapStyle(endCapStyleSEXP);
    Rcpp::traits::input_parameter< int >::type joinStyle(joinStyleSEXP);
    Rcpp::traits::input_parameter< double >::type mitreLimit(mitreLimitSEXP);
    Rcpp::traits::input_parameter< int >::type singleSided(singleSidedSEXP);
    rcpp_result_gen = Rcpp::wrap(geomcpp_buffer(data, ptype, width, quadSegs, endCapStyle, joinStyle, mitreLimit, singleSided));
    return rcpp_result_gen;
END_RCPP
}
// geomcpp_convert
SEXP geomcpp_convert(SEXP data, SEXP ptype);
RcppExport SEXP _geom_geomcpp_convert(SEXP dataSEXP, SEXP ptypeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type ptype(ptypeSEXP);
    rcpp_result_gen = Rcpp::wrap(geomcpp_convert(data, ptype));
    return rcpp_result_gen;
END_RCPP
}
// geomcpp_is_empty
LogicalVector geomcpp_is_empty(SEXP data);
RcppExport SEXP _geom_geomcpp_is_empty(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(geomcpp_is_empty(data));
    return rcpp_result_gen;
END_RCPP
}
// geomcpp_validate_provider
LogicalVector geomcpp_validate_provider(SEXP data);
RcppExport SEXP _geom_geomcpp_validate_provider(SEXP dataSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    rcpp_result_gen = Rcpp::wrap(geomcpp_validate_provider(data));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geom_geomcpp_version_impl", (DL_FUNC) &_geom_geomcpp_version_impl, 0},
    {"_geom_geomcpp_test_throw_error", (DL_FUNC) &_geom_geomcpp_test_throw_error, 0},
    {"_geom_geomcpp_intersection", (DL_FUNC) &_geom_geomcpp_intersection, 3},
    {"_geom_geomcpp_buffer", (DL_FUNC) &_geom_geomcpp_buffer, 8},
    {"_geom_geomcpp_convert", (DL_FUNC) &_geom_geomcpp_convert, 2},
    {"_geom_geomcpp_is_empty", (DL_FUNC) &_geom_geomcpp_is_empty, 1},
    {"_geom_geomcpp_validate_provider", (DL_FUNC) &_geom_geomcpp_validate_provider, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_geom(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
