/*
 * randomSubspace.h
 *
 * Code generation for function 'randomSubspace'
 *
 */

#ifndef __RANDOMSUBSPACE_H__
#define __RANDOMSUBSPACE_H__

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
extern void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  const emxArray_real_T *idx);
extern void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx);
extern void randomSubspace(const emlrtStack *sp, emxArray_real_T *iFeatureNum,
  real_T lambda, real_T tol, const emxArray_real_T *XTrain, emxArray_real_T *iIn);

#endif

/* End of code generation (randomSubspace.h) */
