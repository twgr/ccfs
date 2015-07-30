/*
 * File: growManyTreesCompileTest_emxAPI.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

#ifndef __GROWMANYTREESCOMPILETEST_EMXAPI_H__
#define __GROWMANYTREESCOMPILETEST_EMXAPI_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions, int *size);
extern emxArray_int64_T *emxCreateND_int64_T(int numDimensions, int *size);
extern emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size);
extern emxArray_struct2_T *emxCreateND_struct2_T(int numDimensions, int *size);
extern emxArray_struct3_T *emxCreateND_struct3_T(int numDimensions, int *size);
extern emxArray_struct4_T *emxCreateND_struct4_T(int numDimensions, int *size);
extern emxArray_struct5_T *emxCreateND_struct5_T(int numDimensions, int *size);
extern emxArray_boolean_T *emxCreateWrapperND_boolean_T(boolean_T *data, int
  numDimensions, int *size);
extern emxArray_int64_T *emxCreateWrapperND_int64_T(long long *data, int
  numDimensions, int *size);
extern emxArray_real_T *emxCreateWrapperND_real_T(double *data, int
  numDimensions, int *size);
extern emxArray_struct2_T *emxCreateWrapperND_struct2_T(struct2_T *data, int
  numDimensions, int *size);
extern emxArray_struct3_T *emxCreateWrapperND_struct3_T(struct3_T *data, int
  numDimensions, int *size);
extern emxArray_struct4_T *emxCreateWrapperND_struct4_T(struct4_T *data, int
  numDimensions, int *size);
extern emxArray_struct5_T *emxCreateWrapperND_struct5_T(struct5_T *data, int
  numDimensions, int *size);
extern emxArray_boolean_T *emxCreateWrapper_boolean_T(boolean_T *data, int rows,
  int cols);
extern emxArray_int64_T *emxCreateWrapper_int64_T(long long *data, int rows, int
  cols);
extern emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols);
extern emxArray_struct2_T *emxCreateWrapper_struct2_T(struct2_T *data, int rows,
  int cols);
extern emxArray_struct3_T *emxCreateWrapper_struct3_T(struct3_T *data, int rows,
  int cols);
extern emxArray_struct4_T *emxCreateWrapper_struct4_T(struct4_T *data, int rows,
  int cols);
extern emxArray_struct5_T *emxCreateWrapper_struct5_T(struct5_T *data, int rows,
  int cols);
extern emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols);
extern emxArray_int64_T *emxCreate_int64_T(int rows, int cols);
extern emxArray_real_T *emxCreate_real_T(int rows, int cols);
extern emxArray_struct2_T *emxCreate_struct2_T(int rows, int cols);
extern emxArray_struct3_T *emxCreate_struct3_T(int rows, int cols);
extern emxArray_struct4_T *emxCreate_struct4_T(int rows, int cols);
extern emxArray_struct5_T *emxCreate_struct5_T(int rows, int cols);
extern void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray);
extern void emxDestroyArray_int64_T(emxArray_int64_T *emxArray);
extern void emxDestroyArray_real_T(emxArray_real_T *emxArray);
extern void emxDestroyArray_struct2_T(emxArray_struct2_T *emxArray);
extern void emxDestroyArray_struct3_T(emxArray_struct3_T *emxArray);
extern void emxDestroyArray_struct4_T(emxArray_struct4_T *emxArray);
extern void emxDestroyArray_struct5_T(emxArray_struct5_T *emxArray);

#endif

/*
 * File trailer for growManyTreesCompileTest_emxAPI.h
 *
 * [EOF]
 */
