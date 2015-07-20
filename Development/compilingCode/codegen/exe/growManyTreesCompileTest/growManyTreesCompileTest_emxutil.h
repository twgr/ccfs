/*
 * File: growManyTreesCompileTest_emxutil.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

#ifndef __GROWMANYTREESCOMPILETEST_EMXUTIL_H__
#define __GROWMANYTREESCOMPILETEST_EMXUTIL_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void b_emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int
  numDimensions);
extern void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void b_emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxCopyStruct_struct2_T(struct2_T *dst, const struct2_T *src);
extern void emxCopyStruct_struct3_T(struct3_T *dst, const struct3_T *src);
extern void emxCopyStruct_struct4_T(struct4_T *dst, const struct4_T *src);
extern void emxCopyStruct_struct5_T(struct5_T *dst, const struct5_T *src);
extern void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize);
extern void emxEnsureCapacity_struct2_T(emxArray_struct2_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_struct3_T(emxArray_struct3_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_struct4_T(emxArray_struct4_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_struct5_T(emxArray_struct5_T *emxArray, int
  oldNumel);
extern void emxFreeMatrix_struct3_T(struct3_T pMatrix[2000]);
extern void emxFreeMatrix_struct4_T(struct4_T pMatrix[2000]);
extern void emxFreeMatrix_struct5_T(struct5_T pMatrix[2000]);
extern void emxFreeStruct_struct2_T(struct2_T *pStruct);
extern void emxFreeStruct_struct3_T(struct3_T *pStruct);
extern void emxFreeStruct_struct4_T(struct4_T *pStruct);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_int64_T(emxArray_int64_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_struct2_T(emxArray_struct2_T **pEmxArray);
extern void emxFree_struct3_T(emxArray_struct3_T **pEmxArray);
extern void emxFree_struct4_T(emxArray_struct4_T **pEmxArray);
extern void emxFree_struct5_T(emxArray_struct5_T **pEmxArray);
extern void emxInitMatrix_struct3_T(struct3_T pMatrix[2000]);
extern void emxInitMatrix_struct4_T(struct4_T pMatrix[2000]);
extern void emxInitMatrix_struct5_T(struct5_T pMatrix[2000]);
extern void emxInitStruct_struct2_T(struct2_T *pStruct);
extern void emxInitStruct_struct3_T(struct3_T *pStruct);
extern void emxInitStruct_struct4_T(struct4_T *pStruct);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions);
extern void emxInit_int64_T(emxArray_int64_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_struct2_T(emxArray_struct2_T **pEmxArray, int numDimensions);
extern void emxInit_struct3_T(emxArray_struct3_T **pEmxArray, int numDimensions);
extern void emxInit_struct4_T(emxArray_struct4_T **pEmxArray, int numDimensions);
extern void emxInit_struct5_T(emxArray_struct5_T **pEmxArray, int numDimensions);

#endif

/*
 * File trailer for growManyTreesCompileTest_emxutil.h
 *
 * [EOF]
 */
