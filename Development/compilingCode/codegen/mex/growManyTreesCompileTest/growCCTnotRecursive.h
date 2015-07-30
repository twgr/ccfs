/*
 * growCCTnotRecursive.h
 *
 * Code generation for function 'growCCTnotRecursive'
 *
 */

#ifndef __GROWCCTNOTRECURSIVE_H__
#define __GROWCCTNOTRECURSIVE_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void c_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
extern void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
extern void growCCTnotRecursive(c_growManyTreesCompileTestStack *SD, const
  emlrtStack *sp, const emxArray_real_T *XTrain, const emxArray_boolean_T
  *YTrain, boolean_T options_bProjBoot, real_T options_lambda, const char_T
  options_splitCriterion_data[], const int32_T options_splitCriterion_size[2],
  real_T options_minPointsForSplit, const char_T options_dirIfEqual_data[],
  const int32_T options_dirIfEqual_size[2], boolean_T
  c_options_bContinueProjBootDege, real_T options_epsilonCCA, boolean_T
  options_includeOriginalAxes, real_T options_maxDepthSplit, real_T
  options_XVariationTol, emxArray_real_T *iFeatureNum, struct2_T *tree);

#endif

/* End of code generation (growCCTnotRecursive.h) */
