/*
 * twoPointMaxMarginSplit.h
 *
 * Code generation for function 'twoPointMaxMarginSplit'
 *
 */

#ifndef __TWOPOINTMAXMARGINSPLIT_H__
#define __TWOPOINTMAXMARGINSPLIT_H__

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
extern void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
  emxArray_int32_T *y);
extern void twoPointMaxMarginSplit(const emlrtStack *sp, const emxArray_real_T
  *X, const emxArray_boolean_T *Y, real_T tol, boolean_T *bSp, emxArray_real_T
  *rmm, real_T cmm_data[], int32_T cmm_size[2]);

#endif

/* End of code generation (twoPointMaxMarginSplit.h) */
