/*
 * File: growManyTreesCompileTest_emxAPI.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:37:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_emxAPI.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateND_boolean_T(int numDimensions, int *size)
{
  emxArray_boolean_T *emx;
  int numEl;
  int i;
  b_emxInit_boolean_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (boolean_T *)calloc((unsigned int)numEl, sizeof(boolean_T));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_int64_T *
 */
emxArray_int64_T *emxCreateND_int64_T(int numDimensions, int *size)
{
  emxArray_int64_T *emx;
  int numEl;
  int i;
  emxInit_int64_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (long long *)calloc((unsigned int)numEl, sizeof(long long));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateND_real_T(int numDimensions, int *size)
{
  emxArray_real_T *emx;
  int numEl;
  int i;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_struct2_T *
 */
emxArray_struct2_T *emxCreateND_struct2_T(int numDimensions, int *size)
{
  emxArray_struct2_T *emx;
  int numEl;
  int i;
  emxInit_struct2_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct2_T *)calloc((unsigned int)numEl, sizeof(struct2_T));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_struct3_T *
 */
emxArray_struct3_T *emxCreateND_struct3_T(int numDimensions, int *size)
{
  emxArray_struct3_T *emx;
  int numEl;
  int i;
  emxInit_struct3_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct3_T *)calloc((unsigned int)numEl, sizeof(struct3_T));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_struct4_T *
 */
emxArray_struct4_T *emxCreateND_struct4_T(int numDimensions, int *size)
{
  emxArray_struct4_T *emx;
  int numEl;
  int i;
  emxInit_struct4_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct4_T *)calloc((unsigned int)numEl, sizeof(struct4_T));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int numDimensions
 *                int *size
 * Return Type  : emxArray_struct5_T *
 */
emxArray_struct5_T *emxCreateND_struct5_T(int numDimensions, int *size)
{
  emxArray_struct5_T *emx;
  int numEl;
  int i;
  emxInit_struct5_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct5_T *)calloc((unsigned int)numEl, sizeof(struct5_T));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : boolean_T *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateWrapperND_boolean_T(boolean_T *data, int
  numDimensions, int *size)
{
  emxArray_boolean_T *emx;
  int numEl;
  int i;
  b_emxInit_boolean_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : long long *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_int64_T *
 */
emxArray_int64_T *emxCreateWrapperND_int64_T(long long *data, int numDimensions,
  int *size)
{
  emxArray_int64_T *emx;
  int numEl;
  int i;
  emxInit_int64_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : double *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateWrapperND_real_T(double *data, int numDimensions, int *
  size)
{
  emxArray_real_T *emx;
  int numEl;
  int i;
  emxInit_real_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct2_T *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_struct2_T *
 */
emxArray_struct2_T *emxCreateWrapperND_struct2_T(struct2_T *data, int
  numDimensions, int *size)
{
  emxArray_struct2_T *emx;
  int numEl;
  int i;
  emxInit_struct2_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct3_T *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_struct3_T *
 */
emxArray_struct3_T *emxCreateWrapperND_struct3_T(struct3_T *data, int
  numDimensions, int *size)
{
  emxArray_struct3_T *emx;
  int numEl;
  int i;
  emxInit_struct3_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct4_T *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_struct4_T *
 */
emxArray_struct4_T *emxCreateWrapperND_struct4_T(struct4_T *data, int
  numDimensions, int *size)
{
  emxArray_struct4_T *emx;
  int numEl;
  int i;
  emxInit_struct4_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct5_T *data
 *                int numDimensions
 *                int *size
 * Return Type  : emxArray_struct5_T *
 */
emxArray_struct5_T *emxCreateWrapperND_struct5_T(struct5_T *data, int
  numDimensions, int *size)
{
  emxArray_struct5_T *emx;
  int numEl;
  int i;
  emxInit_struct5_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : boolean_T *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreateWrapper_boolean_T(boolean_T *data, int rows, int
  cols)
{
  emxArray_boolean_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  b_emxInit_boolean_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : long long *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_int64_T *
 */
emxArray_int64_T *emxCreateWrapper_int64_T(long long *data, int rows, int cols)
{
  emxArray_int64_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_int64_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : double *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreateWrapper_real_T(double *data, int rows, int cols)
{
  emxArray_real_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_real_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct2_T *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_struct2_T *
 */
emxArray_struct2_T *emxCreateWrapper_struct2_T(struct2_T *data, int rows, int
  cols)
{
  emxArray_struct2_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct2_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct3_T *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_struct3_T *
 */
emxArray_struct3_T *emxCreateWrapper_struct3_T(struct3_T *data, int rows, int
  cols)
{
  emxArray_struct3_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct3_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct4_T *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_struct4_T *
 */
emxArray_struct4_T *emxCreateWrapper_struct4_T(struct4_T *data, int rows, int
  cols)
{
  emxArray_struct4_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct4_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : struct5_T *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_struct5_T *
 */
emxArray_struct5_T *emxCreateWrapper_struct5_T(struct5_T *data, int rows, int
  cols)
{
  emxArray_struct5_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct5_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_boolean_T *
 */
emxArray_boolean_T *emxCreate_boolean_T(int rows, int cols)
{
  emxArray_boolean_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  b_emxInit_boolean_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (boolean_T *)calloc((unsigned int)numEl, sizeof(boolean_T));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_int64_T *
 */
emxArray_int64_T *emxCreate_int64_T(int rows, int cols)
{
  emxArray_int64_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_int64_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (long long *)calloc((unsigned int)numEl, sizeof(long long));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_real_T *
 */
emxArray_real_T *emxCreate_real_T(int rows, int cols)
{
  emxArray_real_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_real_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (double *)calloc((unsigned int)numEl, sizeof(double));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_struct2_T *
 */
emxArray_struct2_T *emxCreate_struct2_T(int rows, int cols)
{
  emxArray_struct2_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct2_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct2_T *)calloc((unsigned int)numEl, sizeof(struct2_T));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_struct3_T *
 */
emxArray_struct3_T *emxCreate_struct3_T(int rows, int cols)
{
  emxArray_struct3_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct3_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct3_T *)calloc((unsigned int)numEl, sizeof(struct3_T));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_struct4_T *
 */
emxArray_struct4_T *emxCreate_struct4_T(int rows, int cols)
{
  emxArray_struct4_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct4_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct4_T *)calloc((unsigned int)numEl, sizeof(struct4_T));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_struct5_T *
 */
emxArray_struct5_T *emxCreate_struct5_T(int rows, int cols)
{
  emxArray_struct5_T *emx;
  int size[2];
  int numEl;
  int i;
  size[0] = rows;
  size[1] = cols;
  emxInit_struct5_T(&emx, 2);
  numEl = 1;
  for (i = 0; i < 2; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }

  emx->data = (struct5_T *)calloc((unsigned int)numEl, sizeof(struct5_T));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : emxArray_boolean_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_boolean_T(emxArray_boolean_T *emxArray)
{
  emxFree_boolean_T(&emxArray);
}

/*
 * Arguments    : emxArray_int64_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_int64_T(emxArray_int64_T *emxArray)
{
  emxFree_int64_T(&emxArray);
}

/*
 * Arguments    : emxArray_real_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_real_T(emxArray_real_T *emxArray)
{
  emxFree_real_T(&emxArray);
}

/*
 * Arguments    : emxArray_struct2_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_struct2_T(emxArray_struct2_T *emxArray)
{
  emxFree_struct2_T(&emxArray);
}

/*
 * Arguments    : emxArray_struct3_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_struct3_T(emxArray_struct3_T *emxArray)
{
  emxFree_struct3_T(&emxArray);
}

/*
 * Arguments    : emxArray_struct4_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_struct4_T(emxArray_struct4_T *emxArray)
{
  emxFree_struct4_T(&emxArray);
}

/*
 * Arguments    : emxArray_struct5_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_struct5_T(emxArray_struct5_T *emxArray)
{
  emxFree_struct5_T(&emxArray);
}

/*
 * File trailer for growManyTreesCompileTest_emxAPI.c
 *
 * [EOF]
 */
