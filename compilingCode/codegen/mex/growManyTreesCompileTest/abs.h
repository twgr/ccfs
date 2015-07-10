/*
 * abs.h
 *
 * Code generation for function 'abs'
 *
 */

#ifndef __ABS_H__
#define __ABS_H__

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
extern void b_abs(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);
extern void c_abs(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);
extern void d_abs(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);

#endif

/* End of code generation (abs.h) */
