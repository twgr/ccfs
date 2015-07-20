/*
 * File: expandNode.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

#ifndef __EXPANDNODE_H__
#define __EXPANDNODE_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void expandNode(const emxArray_real_T *XTrain, const emxArray_boolean_T
  *YTrain, boolean_T options_bProjBoot, double options_lambda, const char
  options_splitCriterion_data[], const int options_splitCriterion_size[2],
  double options_minPointsForSplit, const char options_dirIfEqual_data[], const
  int options_dirIfEqual_size[2], boolean_T c_options_bContinueProjBootDege,
  double options_epsilonCCA, boolean_T options_includeOriginalAxes, double
  options_maxDepthSplit, double options_XVariationTol, emxArray_real_T
  *iFeatureNum, double depth, boolean_T *bLeaf, emxArray_boolean_T
  *bLessThanTrain, double partitionPoint_data[], int partitionPoint_size[2],
  emxArray_real_T *projMat, emxArray_real_T *countsNode, emxArray_real_T *iIn);

#endif

/*
 * File trailer for expandNode.h
 *
 * [EOF]
 */
