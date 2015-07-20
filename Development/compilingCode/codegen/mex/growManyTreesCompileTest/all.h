/*
 * all.h
 *
 * Code generation for function 'all'
 *
 */

#ifndef __ALL_H__
#define __ALL_H__

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
extern boolean_T all(const emlrtStack *sp, const emxArray_boolean_T *x);
extern void b_all(const emlrtStack *sp, const emxArray_boolean_T *x,
                  emxArray_boolean_T *y);
extern boolean_T c_all(const emlrtStack *sp, const emxArray_boolean_T *x);

#endif

/* End of code generation (all.h) */
