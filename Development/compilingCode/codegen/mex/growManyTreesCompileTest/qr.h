/*
 * qr.h
 *
 * Code generation for function 'qr'
 *
 */

#ifndef __QR_H__
#define __QR_H__

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
extern void qr(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T
               *Q, emxArray_real_T *R, emxArray_real_T *E);

#endif

/* End of code generation (qr.h) */
