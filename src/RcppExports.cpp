// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "torchvisionlib_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rcpp_vision_ops_nms
torch::Tensor rcpp_vision_ops_nms(torch::Tensor dets, torch::Tensor scores, double iou_threshold);
RcppExport SEXP _torchvisionlib_rcpp_vision_ops_nms(SEXP detsSEXP, SEXP scoresSEXP, SEXP iou_thresholdSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::Tensor >::type dets(detsSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< double >::type iou_threshold(iou_thresholdSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vision_ops_nms(dets, scores, iou_threshold));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vision_ops_deform_conv2d
torch::Tensor rcpp_vision_ops_deform_conv2d(torch::Tensor input, torch::Tensor weight, torch::Tensor offset, torch::Tensor mask, torch::Tensor bias, std::int64_t stride_h, std::int64_t stride_w, std::int64_t pad_h, std::int64_t pad_w, std::int64_t dilation_h, std::int64_t dilation_w, std::int64_t groups, std::int64_t offset_groups, bool use_mask);
RcppExport SEXP _torchvisionlib_rcpp_vision_ops_deform_conv2d(SEXP inputSEXP, SEXP weightSEXP, SEXP offsetSEXP, SEXP maskSEXP, SEXP biasSEXP, SEXP stride_hSEXP, SEXP stride_wSEXP, SEXP pad_hSEXP, SEXP pad_wSEXP, SEXP dilation_hSEXP, SEXP dilation_wSEXP, SEXP groupsSEXP, SEXP offset_groupsSEXP, SEXP use_maskSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::Tensor >::type input(inputSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type offset(offsetSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type mask(maskSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type bias(biasSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type stride_h(stride_hSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type stride_w(stride_wSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type pad_h(pad_hSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type pad_w(pad_wSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type dilation_h(dilation_hSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type dilation_w(dilation_wSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< std::int64_t >::type offset_groups(offset_groupsSEXP);
    Rcpp::traits::input_parameter< bool >::type use_mask(use_maskSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vision_ops_deform_conv2d(input, weight, offset, mask, bias, stride_h, stride_w, pad_h, pad_w, dilation_h, dilation_w, groups, offset_groups, use_mask));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vision_ops_ps_roi_align
torchvisionlib::tensor_pair rcpp_vision_ops_ps_roi_align(torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width, int64_t sampling_ratio);
RcppExport SEXP _torchvisionlib_rcpp_vision_ops_ps_roi_align(SEXP inputSEXP, SEXP roisSEXP, SEXP spatial_scaleSEXP, SEXP pooled_heightSEXP, SEXP pooled_widthSEXP, SEXP sampling_ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::Tensor >::type input(inputSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type rois(roisSEXP);
    Rcpp::traits::input_parameter< double >::type spatial_scale(spatial_scaleSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_height(pooled_heightSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_width(pooled_widthSEXP);
    Rcpp::traits::input_parameter< int64_t >::type sampling_ratio(sampling_ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vision_ops_ps_roi_align(input, rois, spatial_scale, pooled_height, pooled_width, sampling_ratio));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vision_ops_ps_roi_pool
torchvisionlib::tensor_pair rcpp_vision_ops_ps_roi_pool(torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width);
RcppExport SEXP _torchvisionlib_rcpp_vision_ops_ps_roi_pool(SEXP inputSEXP, SEXP roisSEXP, SEXP spatial_scaleSEXP, SEXP pooled_heightSEXP, SEXP pooled_widthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::Tensor >::type input(inputSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type rois(roisSEXP);
    Rcpp::traits::input_parameter< double >::type spatial_scale(spatial_scaleSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_height(pooled_heightSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_width(pooled_widthSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vision_ops_ps_roi_pool(input, rois, spatial_scale, pooled_height, pooled_width));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vision_ops_roi_align
torch::Tensor rcpp_vision_ops_roi_align(torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width, int64_t sampling_ratio, bool aligned);
RcppExport SEXP _torchvisionlib_rcpp_vision_ops_roi_align(SEXP inputSEXP, SEXP roisSEXP, SEXP spatial_scaleSEXP, SEXP pooled_heightSEXP, SEXP pooled_widthSEXP, SEXP sampling_ratioSEXP, SEXP alignedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::Tensor >::type input(inputSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type rois(roisSEXP);
    Rcpp::traits::input_parameter< double >::type spatial_scale(spatial_scaleSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_height(pooled_heightSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_width(pooled_widthSEXP);
    Rcpp::traits::input_parameter< int64_t >::type sampling_ratio(sampling_ratioSEXP);
    Rcpp::traits::input_parameter< bool >::type aligned(alignedSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vision_ops_roi_align(input, rois, spatial_scale, pooled_height, pooled_width, sampling_ratio, aligned));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_vision_ops_roi_pool
torchvisionlib::tensor_pair rcpp_vision_ops_roi_pool(torch::Tensor input, torch::Tensor rois, double spatial_scale, int64_t pooled_height, int64_t pooled_width);
RcppExport SEXP _torchvisionlib_rcpp_vision_ops_roi_pool(SEXP inputSEXP, SEXP roisSEXP, SEXP spatial_scaleSEXP, SEXP pooled_heightSEXP, SEXP pooled_widthSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torch::Tensor >::type input(inputSEXP);
    Rcpp::traits::input_parameter< torch::Tensor >::type rois(roisSEXP);
    Rcpp::traits::input_parameter< double >::type spatial_scale(spatial_scaleSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_height(pooled_heightSEXP);
    Rcpp::traits::input_parameter< int64_t >::type pooled_width(pooled_widthSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_vision_ops_roi_pool(input, rois, spatial_scale, pooled_height, pooled_width));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_delete_tensor_pair
void rcpp_delete_tensor_pair(void* x);
RcppExport SEXP _torchvisionlib_rcpp_delete_tensor_pair(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< void* >::type x(xSEXP);
    rcpp_delete_tensor_pair(x);
    return R_NilValue;
END_RCPP
}
// rcpp_tensor_pair_get_first
torch::Tensor rcpp_tensor_pair_get_first(torchvisionlib::tensor_pair x);
RcppExport SEXP _torchvisionlib_rcpp_tensor_pair_get_first(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torchvisionlib::tensor_pair >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_tensor_pair_get_first(x));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_tensor_pair_get_second
torch::Tensor rcpp_tensor_pair_get_second(torchvisionlib::tensor_pair x);
RcppExport SEXP _torchvisionlib_rcpp_tensor_pair_get_second(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< torchvisionlib::tensor_pair >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_tensor_pair_get_second(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_torchvisionlib_rcpp_vision_ops_nms", (DL_FUNC) &_torchvisionlib_rcpp_vision_ops_nms, 3},
    {"_torchvisionlib_rcpp_vision_ops_deform_conv2d", (DL_FUNC) &_torchvisionlib_rcpp_vision_ops_deform_conv2d, 14},
    {"_torchvisionlib_rcpp_vision_ops_ps_roi_align", (DL_FUNC) &_torchvisionlib_rcpp_vision_ops_ps_roi_align, 6},
    {"_torchvisionlib_rcpp_vision_ops_ps_roi_pool", (DL_FUNC) &_torchvisionlib_rcpp_vision_ops_ps_roi_pool, 5},
    {"_torchvisionlib_rcpp_vision_ops_roi_align", (DL_FUNC) &_torchvisionlib_rcpp_vision_ops_roi_align, 7},
    {"_torchvisionlib_rcpp_vision_ops_roi_pool", (DL_FUNC) &_torchvisionlib_rcpp_vision_ops_roi_pool, 5},
    {"_torchvisionlib_rcpp_delete_tensor_pair", (DL_FUNC) &_torchvisionlib_rcpp_delete_tensor_pair, 1},
    {"_torchvisionlib_rcpp_tensor_pair_get_first", (DL_FUNC) &_torchvisionlib_rcpp_tensor_pair_get_first, 1},
    {"_torchvisionlib_rcpp_tensor_pair_get_second", (DL_FUNC) &_torchvisionlib_rcpp_tensor_pair_get_second, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_torchvisionlib(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
