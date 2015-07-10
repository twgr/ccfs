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
  *YTrain, const struct0_T *options, emxArray_real_T *iFeatureNum, struct2_T
  *tree);

#endif

/* End of code generation (growCCTnotRecursive.h) */
