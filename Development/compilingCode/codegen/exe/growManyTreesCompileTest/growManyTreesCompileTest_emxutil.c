/*
 * File: growManyTreesCompileTest_emxutil.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Declarations */
static void b_emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T * const *src);
static void emxCopy_boolean_T(emxArray_boolean_T **dst, emxArray_boolean_T *
  const *src);
static void emxCopy_int64_T(emxArray_int64_T **dst, emxArray_int64_T * const
  *src);
static void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T * const *src);
static void emxCopy_struct3_T(emxArray_struct3_T **dst, emxArray_struct3_T *
  const *src);
static void emxCopy_struct4_T(emxArray_struct4_T **dst, emxArray_struct4_T *
  const *src);
static void emxCopy_struct5_T(emxArray_struct5_T **dst, emxArray_struct5_T *
  const *src);
static void emxExpand_struct2_T(emxArray_struct2_T *emxArray, int fromIndex, int
  toIndex);
static void emxExpand_struct3_T(emxArray_struct3_T *emxArray, int fromIndex, int
  toIndex);
static void emxExpand_struct4_T(emxArray_struct4_T *emxArray, int fromIndex, int
  toIndex);
static void emxExpand_struct5_T(emxArray_struct5_T *emxArray, int fromIndex, int
  toIndex);
static void emxFreeStruct_struct5_T(struct5_T *pStruct);
static void emxInitStruct_struct5_T(struct5_T *pStruct);
static void emxTrim_struct2_T(emxArray_struct2_T *emxArray, int fromIndex, int
  toIndex);
static void emxTrim_struct3_T(emxArray_struct3_T *emxArray, int fromIndex, int
  toIndex);
static void emxTrim_struct4_T(emxArray_struct4_T *emxArray, int fromIndex, int
  toIndex);
static void emxTrim_struct5_T(emxArray_struct5_T *emxArray, int fromIndex, int
  toIndex);

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T **dst
 *                emxArray_real_T * const *src
 * Return Type  : void
 */
static void b_emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T * const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity((emxArray__common *)*dst, numElDst, (int)sizeof(double));
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

/*
 * Arguments    : emxArray_boolean_T **dst
 *                emxArray_boolean_T * const *src
 * Return Type  : void
 */
static void emxCopy_boolean_T(emxArray_boolean_T **dst, emxArray_boolean_T *
  const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity((emxArray__common *)*dst, numElDst, (int)sizeof(boolean_T));
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

/*
 * Arguments    : emxArray_int64_T **dst
 *                emxArray_int64_T * const *src
 * Return Type  : void
 */
static void emxCopy_int64_T(emxArray_int64_T **dst, emxArray_int64_T * const
  *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity((emxArray__common *)*dst, numElDst, (int)sizeof(long long));
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

/*
 * Arguments    : emxArray_real_T **dst
 *                emxArray_real_T * const *src
 * Return Type  : void
 */
static void emxCopy_real_T(emxArray_real_T **dst, emxArray_real_T * const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity((emxArray__common *)*dst, numElDst, (int)sizeof(double));
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

/*
 * Arguments    : emxArray_struct3_T **dst
 *                emxArray_struct3_T * const *src
 * Return Type  : void
 */
static void emxCopy_struct3_T(emxArray_struct3_T **dst, emxArray_struct3_T *
  const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity_struct3_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    emxCopyStruct_struct3_T(&(*dst)->data[i], &(*src)->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct4_T **dst
 *                emxArray_struct4_T * const *src
 * Return Type  : void
 */
static void emxCopy_struct4_T(emxArray_struct4_T **dst, emxArray_struct4_T *
  const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity_struct4_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    emxCopyStruct_struct4_T(&(*dst)->data[i], &(*src)->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct5_T **dst
 *                emxArray_struct5_T * const *src
 * Return Type  : void
 */
static void emxCopy_struct5_T(emxArray_struct5_T **dst, emxArray_struct5_T *
  const *src)
{
  int numElDst;
  int numElSrc;
  int i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity_struct5_T(*dst, numElDst);
  for (i = 0; i < numElSrc; i++) {
    emxCopyStruct_struct5_T(&(*dst)->data[i], &(*src)->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct2_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxExpand_struct2_T(emxArray_struct2_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct2_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct3_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxExpand_struct3_T(emxArray_struct3_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct3_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct4_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxExpand_struct4_T(emxArray_struct4_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct4_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct5_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxExpand_struct5_T(emxArray_struct5_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct5_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : struct5_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct5_T(struct5_T *pStruct)
{
  emxFree_real_T(&pStruct->phi);
}

/*
 * Arguments    : struct5_T *pStruct
 * Return Type  : void
 */
static void emxInitStruct_struct5_T(struct5_T *pStruct)
{
  b_emxInit_real_T(&pStruct->phi, 1);
}

/*
 * Arguments    : emxArray_struct2_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxTrim_struct2_T(emxArray_struct2_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct2_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct3_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxTrim_struct3_T(emxArray_struct3_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct3_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct4_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxTrim_struct4_T(emxArray_struct4_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct4_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_struct5_T *emxArray
 *                int fromIndex
 *                int toIndex
 * Return Type  : void
 */
static void emxTrim_struct5_T(emxArray_struct5_T *emxArray, int fromIndex, int
  toIndex)
{
  int i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct5_T(&emxArray->data[i]);
  }
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void b_emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void b_emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxArray_int32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void b_emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : struct2_T *dst
 *                const struct2_T *src
 * Return Type  : void
 */
void emxCopyStruct_struct2_T(struct2_T *dst, const struct2_T *src)
{
  dst->nextChild = src->nextChild;
  emxCopy_boolean_T(&dst->bExpanded, &src->bExpanded);
  b_emxCopy_real_T(&dst->nodeId, &src->nodeId);
  emxCopy_boolean_T(&dst->bLeaf, &src->bLeaf);
  emxCopy_real_T(&dst->childIds, &src->childIds);
  b_emxCopy_real_T(&dst->parentId, &src->parentId);
  b_emxCopy_real_T(&dst->depth, &src->depth);
  emxCopy_struct3_T(&dst->iPresent, &src->iPresent);
  emxCopy_struct4_T(&dst->iFeatNum, &src->iFeatNum);
  emxCopy_real_T(&dst->trainingCounts, &src->trainingCounts);
  b_emxCopy_real_T(&dst->labelClassId, &src->labelClassId);
  b_emxCopy_real_T(&dst->partitionPoint, &src->partitionPoint);
  emxCopy_struct4_T(&dst->iIn, &src->iIn);
  emxCopy_struct5_T(&dst->decisionProjection, &src->decisionProjection);
}

/*
 * Arguments    : struct3_T *dst
 *                const struct3_T *src
 * Return Type  : void
 */
void emxCopyStruct_struct3_T(struct3_T *dst, const struct3_T *src)
{
  emxCopy_int64_T(&dst->inds, &src->inds);
}

/*
 * Arguments    : struct4_T *dst
 *                const struct4_T *src
 * Return Type  : void
 */
void emxCopyStruct_struct4_T(struct4_T *dst, const struct4_T *src)
{
  emxCopy_real_T(&dst->inds, &src->inds);
}

/*
 * Arguments    : struct5_T *dst
 *                const struct5_T *src
 * Return Type  : void
 */
void emxCopyStruct_struct5_T(struct5_T *dst, const struct5_T *src)
{
  b_emxCopy_real_T(&dst->phi, &src->phi);
}

/*
 * Arguments    : emxArray__common *emxArray
 *                int oldNumel
 *                int elementSize
 * Return Type  : void
 */
void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int elementSize)
{
  int newNumel;
  int i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (unsigned int)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        free(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : emxArray_struct2_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_struct2_T(emxArray_struct2_T *emxArray, int oldNumel)
{
  int elementSize;
  int newNumel;
  int i;
  void *newData;
  elementSize = (int)sizeof(struct2_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (unsigned int)(elementSize *
              oldNumel));
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (struct2_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }

  if (oldNumel > newNumel) {
    emxTrim_struct2_T(emxArray, newNumel, oldNumel);
  } else {
    if (oldNumel < newNumel) {
      emxExpand_struct2_T(emxArray, oldNumel, newNumel);
    }
  }
}

/*
 * Arguments    : emxArray_struct3_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_struct3_T(emxArray_struct3_T *emxArray, int oldNumel)
{
  int elementSize;
  int newNumel;
  int i;
  void *newData;
  elementSize = (int)sizeof(struct3_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (unsigned int)(elementSize *
              oldNumel));
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (struct3_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }

  if (oldNumel > newNumel) {
    emxTrim_struct3_T(emxArray, newNumel, oldNumel);
  } else {
    if (oldNumel < newNumel) {
      emxExpand_struct3_T(emxArray, oldNumel, newNumel);
    }
  }
}

/*
 * Arguments    : emxArray_struct4_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_struct4_T(emxArray_struct4_T *emxArray, int oldNumel)
{
  int elementSize;
  int newNumel;
  int i;
  void *newData;
  elementSize = (int)sizeof(struct4_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (unsigned int)(elementSize *
              oldNumel));
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (struct4_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }

  if (oldNumel > newNumel) {
    emxTrim_struct4_T(emxArray, newNumel, oldNumel);
  } else {
    if (oldNumel < newNumel) {
      emxExpand_struct4_T(emxArray, oldNumel, newNumel);
    }
  }
}

/*
 * Arguments    : emxArray_struct5_T *emxArray
 *                int oldNumel
 * Return Type  : void
 */
void emxEnsureCapacity_struct5_T(emxArray_struct5_T *emxArray, int oldNumel)
{
  int elementSize;
  int newNumel;
  int i;
  void *newData;
  elementSize = (int)sizeof(struct5_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel *= emxArray->size[i];
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i <<= 1;
    }

    newData = calloc((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (unsigned int)(elementSize *
              oldNumel));
      if (emxArray->canFreeData) {
        free((void *)emxArray->data);
      }
    }

    emxArray->data = (struct5_T *)newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }

  if (oldNumel > newNumel) {
    emxTrim_struct5_T(emxArray, newNumel, oldNumel);
  } else {
    if (oldNumel < newNumel) {
      emxExpand_struct5_T(emxArray, oldNumel, newNumel);
    }
  }
}

/*
 * Arguments    : struct3_T pMatrix[2000]
 * Return Type  : void
 */
void emxFreeMatrix_struct3_T(struct3_T pMatrix[2000])
{
  int i;
  for (i = 0; i < 2000; i++) {
    emxFreeStruct_struct3_T(&pMatrix[i]);
  }
}

/*
 * Arguments    : struct4_T pMatrix[2000]
 * Return Type  : void
 */
void emxFreeMatrix_struct4_T(struct4_T pMatrix[2000])
{
  int i;
  for (i = 0; i < 2000; i++) {
    emxFreeStruct_struct4_T(&pMatrix[i]);
  }
}

/*
 * Arguments    : struct5_T pMatrix[2000]
 * Return Type  : void
 */
void emxFreeMatrix_struct5_T(struct5_T pMatrix[2000])
{
  int i;
  for (i = 0; i < 2000; i++) {
    emxFreeStruct_struct5_T(&pMatrix[i]);
  }
}

/*
 * Arguments    : struct2_T *pStruct
 * Return Type  : void
 */
void emxFreeStruct_struct2_T(struct2_T *pStruct)
{
  emxFree_boolean_T(&pStruct->bExpanded);
  emxFree_real_T(&pStruct->nodeId);
  emxFree_boolean_T(&pStruct->bLeaf);
  emxFree_real_T(&pStruct->childIds);
  emxFree_real_T(&pStruct->parentId);
  emxFree_real_T(&pStruct->depth);
  emxFree_struct3_T(&pStruct->iPresent);
  emxFree_struct4_T(&pStruct->iFeatNum);
  emxFree_real_T(&pStruct->trainingCounts);
  emxFree_real_T(&pStruct->labelClassId);
  emxFree_real_T(&pStruct->partitionPoint);
  emxFree_struct4_T(&pStruct->iIn);
  emxFree_struct5_T(&pStruct->decisionProjection);
}

/*
 * Arguments    : struct3_T *pStruct
 * Return Type  : void
 */
void emxFreeStruct_struct3_T(struct3_T *pStruct)
{
  emxFree_int64_T(&pStruct->inds);
}

/*
 * Arguments    : struct4_T *pStruct
 * Return Type  : void
 */
void emxFreeStruct_struct4_T(struct4_T *pStruct)
{
  emxFree_real_T(&pStruct->inds);
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 * Return Type  : void
 */
void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 * Return Type  : void
 */
void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_int64_T **pEmxArray
 * Return Type  : void
 */
void emxFree_int64_T(emxArray_int64_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int64_T *)NULL) {
    if (((*pEmxArray)->data != (long long *)NULL) && (*pEmxArray)->canFreeData)
    {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_int64_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      free((void *)(*pEmxArray)->data);
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_struct2_T **pEmxArray
 * Return Type  : void
 */
void emxFree_struct2_T(emxArray_struct2_T **pEmxArray)
{
  int numEl;
  int i;
  if (*pEmxArray != (emxArray_struct2_T *)NULL) {
    if ((*pEmxArray)->data != (struct2_T *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }

      for (i = 0; i < numEl; i++) {
        emxFreeStruct_struct2_T(&(*pEmxArray)->data[i]);
      }

      if ((*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
      }
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct2_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_struct3_T **pEmxArray
 * Return Type  : void
 */
void emxFree_struct3_T(emxArray_struct3_T **pEmxArray)
{
  int numEl;
  int i;
  if (*pEmxArray != (emxArray_struct3_T *)NULL) {
    if ((*pEmxArray)->data != (struct3_T *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }

      for (i = 0; i < numEl; i++) {
        emxFreeStruct_struct3_T(&(*pEmxArray)->data[i]);
      }

      if ((*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
      }
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct3_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_struct4_T **pEmxArray
 * Return Type  : void
 */
void emxFree_struct4_T(emxArray_struct4_T **pEmxArray)
{
  int numEl;
  int i;
  if (*pEmxArray != (emxArray_struct4_T *)NULL) {
    if ((*pEmxArray)->data != (struct4_T *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }

      for (i = 0; i < numEl; i++) {
        emxFreeStruct_struct4_T(&(*pEmxArray)->data[i]);
      }

      if ((*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
      }
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct4_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_struct5_T **pEmxArray
 * Return Type  : void
 */
void emxFree_struct5_T(emxArray_struct5_T **pEmxArray)
{
  int numEl;
  int i;
  if (*pEmxArray != (emxArray_struct5_T *)NULL) {
    if ((*pEmxArray)->data != (struct5_T *)NULL) {
      numEl = 1;
      for (i = 0; i < (*pEmxArray)->numDimensions; i++) {
        numEl *= (*pEmxArray)->size[i];
      }

      for (i = 0; i < numEl; i++) {
        emxFreeStruct_struct5_T(&(*pEmxArray)->data[i]);
      }

      if ((*pEmxArray)->canFreeData) {
        free((void *)(*pEmxArray)->data);
      }
    }

    free((void *)(*pEmxArray)->size);
    free((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct5_T *)NULL;
  }
}

/*
 * Arguments    : struct3_T pMatrix[2000]
 * Return Type  : void
 */
void emxInitMatrix_struct3_T(struct3_T pMatrix[2000])
{
  int i;
  for (i = 0; i < 2000; i++) {
    emxInitStruct_struct3_T(&pMatrix[i]);
  }
}

/*
 * Arguments    : struct4_T pMatrix[2000]
 * Return Type  : void
 */
void emxInitMatrix_struct4_T(struct4_T pMatrix[2000])
{
  int i;
  for (i = 0; i < 2000; i++) {
    emxInitStruct_struct4_T(&pMatrix[i]);
  }
}

/*
 * Arguments    : struct5_T pMatrix[2000]
 * Return Type  : void
 */
void emxInitMatrix_struct5_T(struct5_T pMatrix[2000])
{
  int i;
  for (i = 0; i < 2000; i++) {
    emxInitStruct_struct5_T(&pMatrix[i]);
  }
}

/*
 * Arguments    : struct2_T *pStruct
 * Return Type  : void
 */
void emxInitStruct_struct2_T(struct2_T *pStruct)
{
  emxInit_boolean_T(&pStruct->bExpanded, 1);
  b_emxInit_real_T(&pStruct->nodeId, 1);
  emxInit_boolean_T(&pStruct->bLeaf, 1);
  emxInit_real_T(&pStruct->childIds, 2);
  b_emxInit_real_T(&pStruct->parentId, 1);
  b_emxInit_real_T(&pStruct->depth, 1);
  emxInit_struct3_T(&pStruct->iPresent, 1);
  emxInit_struct4_T(&pStruct->iFeatNum, 1);
  emxInit_real_T(&pStruct->trainingCounts, 2);
  b_emxInit_real_T(&pStruct->labelClassId, 1);
  b_emxInit_real_T(&pStruct->partitionPoint, 1);
  emxInit_struct4_T(&pStruct->iIn, 1);
  emxInit_struct5_T(&pStruct->decisionProjection, 1);
}

/*
 * Arguments    : struct3_T *pStruct
 * Return Type  : void
 */
void emxInitStruct_struct3_T(struct3_T *pStruct)
{
  emxInit_int64_T(&pStruct->inds, 2);
}

/*
 * Arguments    : struct4_T *pStruct
 * Return Type  : void
 */
void emxInitStruct_struct4_T(struct4_T *pStruct)
{
  emxInit_real_T(&pStruct->inds, 2);
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)malloc(sizeof(emxArray_boolean_T));
  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_int32_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_int32_T(emxArray_int32_T **pEmxArray, int numDimensions)
{
  emxArray_int32_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int32_T *)malloc(sizeof(emxArray_int32_T));
  emxArray = *pEmxArray;
  emxArray->data = (int *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_int64_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_int64_T(emxArray_int64_T **pEmxArray, int numDimensions)
{
  emxArray_int64_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int64_T *)malloc(sizeof(emxArray_int64_T));
  emxArray = *pEmxArray;
  emxArray->data = (long long *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)malloc(sizeof(emxArray_real_T));
  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_struct2_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_struct2_T(emxArray_struct2_T **pEmxArray, int numDimensions)
{
  emxArray_struct2_T *emxArray;
  int i;
  *pEmxArray = (emxArray_struct2_T *)malloc(sizeof(emxArray_struct2_T));
  emxArray = *pEmxArray;
  emxArray->data = (struct2_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_struct3_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_struct3_T(emxArray_struct3_T **pEmxArray, int numDimensions)
{
  emxArray_struct3_T *emxArray;
  int i;
  *pEmxArray = (emxArray_struct3_T *)malloc(sizeof(emxArray_struct3_T));
  emxArray = *pEmxArray;
  emxArray->data = (struct3_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_struct4_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_struct4_T(emxArray_struct4_T **pEmxArray, int numDimensions)
{
  emxArray_struct4_T *emxArray;
  int i;
  *pEmxArray = (emxArray_struct4_T *)malloc(sizeof(emxArray_struct4_T));
  emxArray = *pEmxArray;
  emxArray->data = (struct4_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_struct5_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInit_struct5_T(emxArray_struct5_T **pEmxArray, int numDimensions)
{
  emxArray_struct5_T *emxArray;
  int i;
  *pEmxArray = (emxArray_struct5_T *)malloc(sizeof(emxArray_struct5_T));
  emxArray = *pEmxArray;
  emxArray->data = (struct5_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)malloc((unsigned int)(sizeof(int) * numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * File trailer for growManyTreesCompileTest_emxutil.c
 *
 * [EOF]
 */
