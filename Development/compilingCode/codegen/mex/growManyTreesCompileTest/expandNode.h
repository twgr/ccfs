/*
 * expandNode.h
 *
 * Code generation for function 'expandNode'
 *
 */

#ifndef __EXPANDNODE_H__
#define __EXPANDNODE_H__

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
extern void expandNode(const emlrtStack *sp, const emxArray_real_T *XTrain,
  const emxArray_boolean_T *YTrain, boolean_T options_bProjBoot, real_T
  options_lambda, const char_T options_splitCriterion_data[], const int32_T
  options_splitCriterion_size[2], real_T options_minPointsForSplit, const char_T
  options_dirIfEqual_data[], const int32_T options_dirIfEqual_size[2], boolean_T
  c_options_bContinueProjBootDege, real_T options_epsilonCCA, boolean_T
  options_includeOriginalAxes, real_T options_maxDepthSplit, real_T
  options_XVariationTol, emxArray_real_T *iFeatureNum, real_T depth, boolean_T
  *bLeaf, emxArray_boolean_T *bLessThanTrain, real_T partitionPoint_data[],
  int32_T partitionPoint_size[2], emxArray_real_T *projMat, emxArray_real_T
  *countsNode, emxArray_real_T *iIn);

#endif

/* End of code generation (expandNode.h) */
