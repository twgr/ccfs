/*
 * growManyTreesCompileTest.h
 *
 * Code generation for function 'growManyTreesCompileTest'
 *
 */

#ifndef __GROWMANYTREESCOMPILETEST_H__
#define __GROWMANYTREESCOMPILETEST_H__

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
extern void growManyTreesCompileTest(c_growManyTreesCompileTestStack *SD, const
  emlrtStack *sp, real_T nTrees, const emxArray_real_T *XTrain, const
  emxArray_boolean_T *YTrain, const struct0_T *options, const emxArray_real_T
  *iFeatureNum, emxArray_struct2_T *trees);

#endif

/* End of code generation (growManyTreesCompileTest.h) */
