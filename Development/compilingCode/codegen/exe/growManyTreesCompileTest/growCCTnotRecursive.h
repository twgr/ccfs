/*
 * File: growCCTnotRecursive.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

#ifndef __GROWCCTNOTRECURSIVE_H__
#define __GROWCCTNOTRECURSIVE_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void c_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
extern void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
extern void growCCTnotRecursive(const emxArray_real_T *XTrain, const
  emxArray_boolean_T *YTrain, boolean_T options_bProjBoot, double options_lambda,
  const char options_splitCriterion_data[], const int
  options_splitCriterion_size[2], double options_minPointsForSplit, const char
  options_dirIfEqual_data[], const int options_dirIfEqual_size[2], boolean_T
  c_options_bContinueProjBootDege, double options_epsilonCCA, boolean_T
  options_includeOriginalAxes, double options_maxDepthSplit, double
  options_XVariationTol, emxArray_real_T *iFeatureNum, struct2_T *tree);

#endif

/*
 * File trailer for growCCTnotRecursive.h
 *
 * [EOF]
 */
