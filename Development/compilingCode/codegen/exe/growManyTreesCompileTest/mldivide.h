/*
 * File: mldivide.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

#ifndef __MLDIVIDE_H__
#define __MLDIVIDE_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern double b_eml_xnrm2(int n, const emxArray_real_T *x, int ix0);
extern int eml_ixamax(int n, const emxArray_real_T *x, int ix0);
extern double eml_xnrm2(int n, const emxArray_real_T *x, int ix0);
extern void eml_xscal(int n, double a, emxArray_real_T *x, int ix0);
extern void eml_xswap(int n, emxArray_real_T *x, int ix0, int iy0);
extern void mldivide(const emxArray_real_T *A, const emxArray_real_T *B,
                     emxArray_real_T *Y);

#endif

/*
 * File trailer for mldivide.h
 *
 * [EOF]
 */
