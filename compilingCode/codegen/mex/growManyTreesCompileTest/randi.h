/*
 * randi.h
 *
 * Code generation for function 'randi'
 *
 */

#ifndef __RANDI_H__
#define __RANDI_H__

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
extern real_T b_randi(real_T lowhigh);

#ifdef __WATCOMC__

#pragma aux b_randi value [8087];

#endif

extern void randi(const emlrtStack *sp, real_T lowhigh, real_T varargin_1,
                  emxArray_real_T *r);

#endif

/* End of code generation (randi.h) */
