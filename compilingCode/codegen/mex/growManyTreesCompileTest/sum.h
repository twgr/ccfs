/*
 * sum.h
 *
 * Code generation for function 'sum'
 *
 */

#ifndef __SUM_H__
#define __SUM_H__

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
extern void b_sum(const emlrtStack *sp, const emxArray_boolean_T *x,
                  emxArray_real_T *y);
extern real_T c_sum(const emlrtStack *sp, const boolean_T x_data[], const
                    int32_T x_size[2]);

#ifdef __WATCOMC__

#pragma aux c_sum value [8087];

#endif

extern real_T d_sum(const emlrtStack *sp, const emxArray_boolean_T *x);

#ifdef __WATCOMC__

#pragma aux d_sum value [8087];

#endif

extern void e_sum(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);
extern void f_sum(const emlrtStack *sp, const emxArray_real_T *x,
                  emxArray_real_T *y);
extern real_T g_sum(const emlrtStack *sp, const emxArray_real_T *x);

#ifdef __WATCOMC__

#pragma aux g_sum value [8087];

#endif

extern void sum(const emlrtStack *sp, const emxArray_boolean_T *x, real_T
                y_data[], int32_T y_size[2]);

#endif

/* End of code generation (sum.h) */
