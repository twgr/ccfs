/*
 * File: twoPointMaxMarginSplit.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

#ifndef __TWOPOINTMAXMARGINSPLIT_H__
#define __TWOPOINTMAXMARGINSPLIT_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void b_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y);
extern void twoPointMaxMarginSplit(const emxArray_real_T *X, const
  emxArray_boolean_T *Y, double tol, boolean_T *bSp, emxArray_real_T *rmm,
  double cmm_data[], int cmm_size[2]);

#endif

/*
 * File trailer for twoPointMaxMarginSplit.h
 *
 * [EOF]
 */
