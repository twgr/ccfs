/*
 * bsxfun.h
 *
 * Code generation for function 'bsxfun'
 *
 */

#ifndef __BSXFUN_H__
#define __BSXFUN_H__

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
extern void b_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_boolean_T *c);
extern void bsxfun(real_T a, const real_T b[2], boolean_T c[2]);
extern void c_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_boolean_T *c);
extern void d_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_real_T *c);
extern void e_bsxfun(const emlrtStack *sp, const emxArray_boolean_T *a, const
                     emxArray_real_T *b, emxArray_real_T *c);
extern void f_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_real_T *c);
extern void g_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_real_T *c);
extern void h_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
                     emxArray_real_T *b, emxArray_real_T *c);

#endif

/* End of code generation (bsxfun.h) */
