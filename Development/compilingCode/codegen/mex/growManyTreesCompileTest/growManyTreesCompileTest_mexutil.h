/*
 * growManyTreesCompileTest_mexutil.h
 *
 * Code generation for function 'growManyTreesCompileTest_mexutil'
 *
 */

#ifndef __GROWMANYTREESCOMPILETEST_MEXUTIL_H__
#define __GROWMANYTREESCOMPILETEST_MEXUTIL_H__

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
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
extern void f_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

#endif

/* End of code generation (growManyTreesCompileTest_mexutil.h) */
