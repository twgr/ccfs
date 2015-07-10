/*
 * mldivide.h
 *
 * Code generation for function 'mldivide'
 *
 */

#ifndef __MLDIVIDE_H__
#define __MLDIVIDE_H__

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
extern real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);

#ifdef __WATCOMC__

#pragma aux b_eml_xnrm2 value [8087];

#endif

extern real_T eml_div(real_T x, real_T y);

#ifdef __WATCOMC__

#pragma aux eml_div value [8087];

#endif

extern void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T
  iv0, real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc, emxArray_real_T
  *work);
extern real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);

#ifdef __WATCOMC__

#pragma aux eml_xnrm2 value [8087];

#endif

extern void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T
                      *x, int32_T ix0);
extern void eml_xswap(const emlrtStack *sp, int32_T n, emxArray_real_T *x,
                      int32_T ix0, int32_T iy0);
extern int32_T ilazlc(const emlrtStack *sp, int32_T m, int32_T n, const
                      emxArray_real_T *A, int32_T ia0, int32_T lda);
extern void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
                     emxArray_real_T *B, emxArray_real_T *Y);

#endif

/* End of code generation (mldivide.h) */
