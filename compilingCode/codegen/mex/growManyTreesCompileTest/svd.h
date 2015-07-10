/*
 * svd.h
 *
 * Code generation for function 'svd'
 *
 */

#ifndef __SVD_H__
#define __SVD_H__

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
extern void svd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *
                U, emxArray_real_T *S, emxArray_real_T *V);

#endif

/* End of code generation (svd.h) */
