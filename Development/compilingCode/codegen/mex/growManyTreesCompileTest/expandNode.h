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
  const emxArray_boolean_T *YTrain, const struct0_T *options, emxArray_real_T
  *iFeatureNum, real_T depth, boolean_T *bLeaf, emxArray_boolean_T
  *bLessThanTrain, real_T partitionPoint_data[], int32_T partitionPoint_size[2],
  emxArray_real_T *projMat, emxArray_real_T *countsNode, emxArray_real_T *iIn);

#endif

/* End of code generation (expandNode.h) */
