/*
 * log2.h
 *
 * Code generation for function 'log2'
 *
 */

#ifndef __LOG2_H__
#define __LOG2_H__

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
extern void b_log2(const emlrtStack *sp, const emxArray_real_T *x,
                   emxArray_real_T *f);

#endif

/* End of code generation (log2.h) */
