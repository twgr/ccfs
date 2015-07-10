/*
 * any.h
 *
 * Code generation for function 'any'
 *
 */

#ifndef __ANY_H__
#define __ANY_H__

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
extern boolean_T any(const boolean_T x[2]);
extern void b_any(const emlrtStack *sp, const emxArray_boolean_T *x,
                  emxArray_boolean_T *y);
extern void c_any(const emlrtStack *sp, const emxArray_boolean_T *x,
                  emxArray_boolean_T *y);
extern boolean_T d_any(const emlrtStack *sp, const emxArray_boolean_T *x);
extern boolean_T e_any(const emlrtStack *sp, const emxArray_boolean_T *x);

#endif

/* End of code generation (any.h) */
