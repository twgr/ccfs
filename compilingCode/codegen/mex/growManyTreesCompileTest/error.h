/*
 * error.h
 *
 * Code generation for function 'error'
 *
 */

#ifndef __ERROR_H__
#define __ERROR_H__

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
extern void b_error(const emlrtStack *sp);
extern void c_error(const emlrtStack *sp);
extern void d_error(const emlrtStack *sp);
extern void e_error(const emlrtStack *sp);
extern void error(const emlrtStack *sp);

#endif

/* End of code generation (error.h) */
