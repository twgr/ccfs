/*
 * File: eml_sort.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

#ifndef __EML_SORT_H__
#define __EML_SORT_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void b_eml_sort(const emxArray_real_T *x, emxArray_real_T *y);
extern void c_eml_sort(const emxArray_real_T *x, emxArray_real_T *y,
  emxArray_int32_T *idx);
extern void eml_sort(const emxArray_real_T *x, emxArray_real_T *y);

#endif

/*
 * File trailer for eml_sort.h
 *
 * [EOF]
 */
