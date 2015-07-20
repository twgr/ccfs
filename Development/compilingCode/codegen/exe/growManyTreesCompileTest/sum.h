/*
 * File: sum.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

#ifndef __SUM_H__
#define __SUM_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void b_sum(const emxArray_boolean_T *x, emxArray_real_T *y);
extern double c_sum(const boolean_T x_data[], const int x_size[2]);
extern double d_sum(const emxArray_boolean_T *x);
extern void e_sum(const emxArray_real_T *x, emxArray_real_T *y);
extern void f_sum(const emxArray_real_T *x, emxArray_real_T *y);
extern double g_sum(const emxArray_real_T *x);
extern void sum(const emxArray_boolean_T *x, double y_data[], int y_size[2]);

#endif

/*
 * File trailer for sum.h
 *
 * [EOF]
 */
