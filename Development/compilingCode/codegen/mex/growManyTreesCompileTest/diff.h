/*
 * diff.h
 *
 * Code generation for function 'diff'
 *
 */

#ifndef __DIFF_H__
#define __DIFF_H__

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
extern void b_diff(const emlrtStack *sp, const emxArray_real_T *x,
                   emxArray_real_T *y);
extern void diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T
                 *y);

#endif

/* End of code generation (diff.h) */
