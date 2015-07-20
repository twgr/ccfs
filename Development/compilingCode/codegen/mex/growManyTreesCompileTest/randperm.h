/*
 * randperm.h
 *
 * Code generation for function 'randperm'
 *
 */

#ifndef __RANDPERM_H__
#define __RANDPERM_H__

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
extern void randperm(const emlrtStack *sp, real_T n, real_T k, emxArray_real_T
                     *p);

#endif

/* End of code generation (randperm.h) */
