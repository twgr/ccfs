/*
 * growManyTreesCompileTest_emxutil.h
 *
 * Code generation for function 'growManyTreesCompileTest_emxutil'
 *
 */

#ifndef __GROWMANYTREESCOMPILETEST_EMXUTIL_H__
#define __GROWMANYTREESCOMPILETEST_EMXUTIL_H__

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
extern void b_emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void b_emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void b_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxCopyStruct_struct0_T(const emlrtStack *sp, struct0_T *dst, const
  struct0_T *src, const emlrtRTEInfo *srcLocation);
extern void emxCopyStruct_struct2_T(const emlrtStack *sp, struct2_T *dst, const
  struct2_T *src, const emlrtRTEInfo *srcLocation);
extern void emxCopyStruct_struct3_T(const emlrtStack *sp, struct3_T *dst, const
  struct3_T *src, const emlrtRTEInfo *srcLocation);
extern void emxCopyStruct_struct4_T(const emlrtStack *sp, struct4_T *dst, const
  struct4_T *src, const emlrtRTEInfo *srcLocation);
extern void emxCopyStruct_struct5_T(const emlrtStack *sp, struct5_T *dst, const
  struct5_T *src, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray,
  int32_T oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_struct4_T(const emlrtStack *sp, emxArray_struct4_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxEnsureCapacity_struct5_T(const emlrtStack *sp, emxArray_struct5_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation);
extern void emxFreeMatrix_struct3_T(struct3_T pMatrix[2000]);
extern void emxFreeMatrix_struct4_T(struct4_T pMatrix[2000]);
extern void emxFreeMatrix_struct5_T(struct5_T pMatrix[2000]);
extern void emxFreeStruct_struct0_T(struct0_T *pStruct);
extern void emxFreeStruct_struct2_T(struct2_T *pStruct);
extern void emxFreeStruct_struct_T(d_struct_T *pStruct);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_int32_T(emxArray_int32_T **pEmxArray);
extern void emxFree_int64_T(emxArray_int64_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxFree_struct2_T(emxArray_struct2_T **pEmxArray);
extern void emxFree_struct3_T(emxArray_struct3_T **pEmxArray);
extern void emxFree_struct4_T(emxArray_struct4_T **pEmxArray);
extern void emxFree_struct5_T(emxArray_struct5_T **pEmxArray);
extern void emxInitMatrix_struct3_T(const emlrtStack *sp, struct3_T pMatrix[2000],
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitMatrix_struct4_T(const emlrtStack *sp, struct4_T pMatrix[2000],
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitMatrix_struct5_T(const emlrtStack *sp, struct5_T pMatrix[2000],
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInitStruct_struct_T(const emlrtStack *sp, d_struct_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_int64_T(const emlrtStack *sp, emxArray_int64_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush);
extern void emxInit_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_struct4_T(const emlrtStack *sp, emxArray_struct4_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
extern void emxInit_struct5_T(const emlrtStack *sp, emxArray_struct5_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);

#endif

/* End of code generation (growManyTreesCompileTest_emxutil.h) */
