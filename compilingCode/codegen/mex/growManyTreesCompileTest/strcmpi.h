/*
 * strcmpi.h
 *
 * Code generation for function 'strcmpi'
 *
 */

#ifndef __STRCMPI_H__
#define __STRCMPI_H__

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
extern boolean_T b_strcmpi(const emlrtStack *sp, const char_T s1_data[], const
  int32_T s1_size[2]);
extern boolean_T c_strcmpi(const emlrtStack *sp, const char_T s1_data[], const
  int32_T s1_size[2]);
extern boolean_T d_strcmpi(const emlrtStack *sp, const char_T s1_data[], const
  int32_T s1_size[2]);
extern boolean_T e_strcmpi(const emlrtStack *sp, const char_T s1_data[], const
  int32_T s1_size[2]);

#endif

/* End of code generation (strcmpi.h) */
