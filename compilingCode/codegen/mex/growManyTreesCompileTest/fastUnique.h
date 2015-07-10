/*
 * fastUnique.h
 *
 * Code generation for function 'fastUnique'
 *
 */

#ifndef __FASTUNIQUE_H__
#define __FASTUNIQUE_H__

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
extern void fastUnique(const emlrtStack *sp, const emxArray_real_T *X,
  emxArray_real_T *uX);

#endif

/* End of code generation (fastUnique.h) */
