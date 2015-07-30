/*
 * growManyTreesCompileTest_emxutil.c
 *
 * Code generation for function 'growManyTreesCompileTest_emxutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Declarations */
static void b_emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
  emxArray_real_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxCopy_boolean_T(const emlrtStack *sp, emxArray_boolean_T **dst,
  emxArray_boolean_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxCopy_int64_T(const emlrtStack *sp, emxArray_int64_T **dst,
  emxArray_int64_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
  emxArray_real_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxCopy_struct3_T(const emlrtStack *sp, emxArray_struct3_T **dst,
  emxArray_struct3_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxCopy_struct4_T(const emlrtStack *sp, emxArray_struct4_T **dst,
  emxArray_struct4_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxCopy_struct5_T(const emlrtStack *sp, emxArray_struct5_T **dst,
  emxArray_struct5_T * const *src, const emlrtRTEInfo *srcLocation);
static void emxExpand_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation);
static void emxExpand_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation);
static void emxExpand_struct4_T(const emlrtStack *sp, emxArray_struct4_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation);
static void emxExpand_struct5_T(const emlrtStack *sp, emxArray_struct5_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation);
static void emxFreeStruct_struct5_T(struct5_T *pStruct);
static void emxFree_struct3_T(emxArray_struct3_T **pEmxArray);
static void emxInitStruct_struct1_T(struct1_T *pStruct);
static void emxInitStruct_struct5_T(const emlrtStack *sp, struct5_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush);
static void emxInit_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush);
static void emxTrim_struct2_T(emxArray_struct2_T *emxArray, int32_T fromIndex,
  int32_T toIndex);
static void emxTrim_struct3_T(emxArray_struct3_T *emxArray, int32_T fromIndex,
  int32_T toIndex);
static void emxTrim_struct4_T(emxArray_struct4_T *emxArray, int32_T fromIndex,
  int32_T toIndex);
static void emxTrim_struct5_T(emxArray_struct5_T *emxArray, int32_T fromIndex,
  int32_T toIndex);

/* Function Definitions */
static void b_emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
  emxArray_real_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity(sp, (emxArray__common *)*dst, numElDst, (int32_T)sizeof
                    (real_T), srcLocation);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopy_boolean_T(const emlrtStack *sp, emxArray_boolean_T **dst,
  emxArray_boolean_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity(sp, (emxArray__common *)*dst, numElDst, (int32_T)sizeof
                    (boolean_T), srcLocation);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopy_int64_T(const emlrtStack *sp, emxArray_int64_T **dst,
  emxArray_int64_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity(sp, (emxArray__common *)*dst, numElDst, (int32_T)sizeof
                    (int64_T), srcLocation);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopy_real_T(const emlrtStack *sp, emxArray_real_T **dst,
  emxArray_real_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity(sp, (emxArray__common *)*dst, numElDst, (int32_T)sizeof
                    (real_T), srcLocation);
  for (i = 0; i < numElSrc; i++) {
    (*dst)->data[i] = (*src)->data[i];
  }
}

static void emxCopy_struct3_T(const emlrtStack *sp, emxArray_struct3_T **dst,
  emxArray_struct3_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity_struct3_T(sp, *dst, numElDst, srcLocation);
  for (i = 0; i < numElSrc; i++) {
    emxCopyStruct_struct3_T(sp, &(*dst)->data[i], &(*src)->data[i], srcLocation);
  }
}

static void emxCopy_struct4_T(const emlrtStack *sp, emxArray_struct4_T **dst,
  emxArray_struct4_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity_struct4_T(sp, *dst, numElDst, srcLocation);
  for (i = 0; i < numElSrc; i++) {
    emxCopyStruct_struct4_T(sp, &(*dst)->data[i], &(*src)->data[i], srcLocation);
  }
}

static void emxCopy_struct5_T(const emlrtStack *sp, emxArray_struct5_T **dst,
  emxArray_struct5_T * const *src, const emlrtRTEInfo *srcLocation)
{
  int32_T numElDst;
  int32_T numElSrc;
  int32_T i;
  numElDst = 1;
  numElSrc = 1;
  for (i = 0; i < (*dst)->numDimensions; i++) {
    numElDst *= (*dst)->size[i];
    numElSrc *= (*src)->size[i];
  }

  for (i = 0; i < (*dst)->numDimensions; i++) {
    (*dst)->size[i] = (*src)->size[i];
  }

  emxEnsureCapacity_struct5_T(sp, *dst, numElDst, srcLocation);
  for (i = 0; i < numElSrc; i++) {
    emxCopyStruct_struct5_T(sp, &(*dst)->data[i], &(*src)->data[i], srcLocation);
  }
}

static void emxExpand_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct2_T(sp, &emxArray->data[i], srcLocation, false);
  }
}

static void emxExpand_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct3_T(sp, &emxArray->data[i], srcLocation, false);
  }
}

static void emxExpand_struct4_T(const emlrtStack *sp, emxArray_struct4_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct4_T(sp, &emxArray->data[i], srcLocation, false);
  }
}

static void emxExpand_struct5_T(const emlrtStack *sp, emxArray_struct5_T
  *emxArray, int32_T fromIndex, int32_T toIndex, const emlrtRTEInfo *srcLocation)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxInitStruct_struct5_T(sp, &emxArray->data[i], srcLocation, false);
  }
}

static void emxFreeStruct_struct5_T(struct5_T *pStruct)
{
  emxFree_real_T(&pStruct->phi);
}

static void emxFree_struct3_T(emxArray_struct3_T **pEmxArray)
{
  int32_T numEl;
  int32_T i;
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct3_T *)NULL;
  }
}

static void emxInitStruct_struct1_T(struct1_T *pStruct)
{
  pStruct->Rand.size[0] = 0;
  pStruct->Rand.size[1] = 0;
}

static void emxInitStruct_struct5_T(const emlrtStack *sp, struct5_T *pStruct,
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  b_emxInit_real_T(sp, &pStruct->phi, 1, srcLocation, doPush);
}

static void emxInit_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  **pEmxArray, int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
  doPush)
{
  emxArray_struct3_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_struct3_T *)emlrtMallocMex(sizeof(emxArray_struct3_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_struct3_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (struct3_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

static void emxTrim_struct2_T(emxArray_struct2_T *emxArray, int32_T fromIndex,
  int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct2_T(&emxArray->data[i]);
  }
}

static void emxTrim_struct3_T(emxArray_struct3_T *emxArray, int32_T fromIndex,
  int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct3_T(&emxArray->data[i]);
  }
}

static void emxTrim_struct4_T(emxArray_struct4_T *emxArray, int32_T fromIndex,
  int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct4_T(&emxArray->data[i]);
  }
}

static void emxTrim_struct5_T(emxArray_struct5_T *emxArray, int32_T fromIndex,
  int32_T toIndex)
{
  int32_T i;
  for (i = fromIndex; i < toIndex; i++) {
    emxFreeStruct_struct5_T(&emxArray->data[i]);
  }
}

void b_emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void b_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                      numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                      doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxCopyStruct_struct2_T(const emlrtStack *sp, struct2_T *dst, const
  struct2_T *src, const emlrtRTEInfo *srcLocation)
{
  dst->nextChild = src->nextChild;
  emxCopy_boolean_T(sp, &dst->bExpanded, &src->bExpanded, srcLocation);
  b_emxCopy_real_T(sp, &dst->nodeId, &src->nodeId, srcLocation);
  emxCopy_boolean_T(sp, &dst->bLeaf, &src->bLeaf, srcLocation);
  emxCopy_real_T(sp, &dst->childIds, &src->childIds, srcLocation);
  b_emxCopy_real_T(sp, &dst->parentId, &src->parentId, srcLocation);
  b_emxCopy_real_T(sp, &dst->depth, &src->depth, srcLocation);
  emxCopy_struct3_T(sp, &dst->iPresent, &src->iPresent, srcLocation);
  emxCopy_struct4_T(sp, &dst->iFeatNum, &src->iFeatNum, srcLocation);
  emxCopy_real_T(sp, &dst->trainingCounts, &src->trainingCounts, srcLocation);
  b_emxCopy_real_T(sp, &dst->labelClassId, &src->labelClassId, srcLocation);
  b_emxCopy_real_T(sp, &dst->partitionPoint, &src->partitionPoint, srcLocation);
  emxCopy_struct4_T(sp, &dst->iIn, &src->iIn, srcLocation);
  emxCopy_struct5_T(sp, &dst->decisionProjection, &src->decisionProjection,
                    srcLocation);
}

void emxCopyStruct_struct3_T(const emlrtStack *sp, struct3_T *dst, const
  struct3_T *src, const emlrtRTEInfo *srcLocation)
{
  emxCopy_int64_T(sp, &dst->inds, &src->inds, srcLocation);
}

void emxCopyStruct_struct4_T(const emlrtStack *sp, struct4_T *dst, const
  struct4_T *src, const emlrtRTEInfo *srcLocation)
{
  emxCopy_real_T(sp, &dst->inds, &src->inds, srcLocation);
}

void emxCopyStruct_struct5_T(const emlrtStack *sp, struct5_T *dst, const
  struct5_T *src, const emlrtRTEInfo *srcLocation)
{
  b_emxCopy_real_T(sp, &dst->phi, &src->phi, srcLocation);
}

void emxEnsureCapacity(const emlrtStack *sp, emxArray__common *emxArray, int32_T
  oldNumel, int32_T elementSize, const emlrtRTEInfo *srcLocation)
{
  int32_T newNumel;
  int32_T i;
  void *newData;
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

void emxEnsureCapacity_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T elementSize;
  int32_T newNumel;
  int32_T i;
  void *newData;
  elementSize = (int32_T)sizeof(struct2_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
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
      emxExpand_struct2_T(sp, emxArray, oldNumel, newNumel, srcLocation);
    }
  }
}

void emxEnsureCapacity_struct3_T(const emlrtStack *sp, emxArray_struct3_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T elementSize;
  int32_T newNumel;
  int32_T i;
  void *newData;
  elementSize = (int32_T)sizeof(struct3_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
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
      emxExpand_struct3_T(sp, emxArray, oldNumel, newNumel, srcLocation);
    }
  }
}

void emxEnsureCapacity_struct4_T(const emlrtStack *sp, emxArray_struct4_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T elementSize;
  int32_T newNumel;
  int32_T i;
  void *newData;
  elementSize = (int32_T)sizeof(struct4_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
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
      emxExpand_struct4_T(sp, emxArray, oldNumel, newNumel, srcLocation);
    }
  }
}

void emxEnsureCapacity_struct5_T(const emlrtStack *sp, emxArray_struct5_T
  *emxArray, int32_T oldNumel, const emlrtRTEInfo *srcLocation)
{
  int32_T elementSize;
  int32_T newNumel;
  int32_T i;
  void *newData;
  elementSize = (int32_T)sizeof(struct5_T);
  newNumel = 1;
  for (i = 0; i < emxArray->numDimensions; i++) {
    newNumel = (int32_T)emlrtSizeMulR2012b((uint32_T)newNumel, (uint32_T)
      emxArray->size[i], srcLocation, sp);
  }

  if (newNumel > emxArray->allocatedSize) {
    i = emxArray->allocatedSize;
    if (i < 16) {
      i = 16;
    }

    while (i < newNumel) {
      i = (int32_T)emlrtSizeMulR2012b((uint32_T)i, 2U, srcLocation, sp);
    }

    newData = emlrtCallocMex((uint32_T)i, (uint32_T)elementSize);
    if (newData == NULL) {
      emlrtHeapAllocationErrorR2012b(srcLocation, sp);
    }

    if (emxArray->data != NULL) {
      memcpy(newData, (void *)emxArray->data, (uint32_T)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex((void *)emxArray->data);
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
      emxExpand_struct5_T(sp, emxArray, oldNumel, newNumel, srcLocation);
    }
  }
}

void emxFreeMatrix_struct3_T(struct3_T pMatrix[2000])
{
  int32_T i;
  for (i = 0; i < 2000; i++) {
    emxFreeStruct_struct3_T(&pMatrix[i]);
  }
}

void emxFreeMatrix_struct4_T(struct4_T pMatrix[2000])
{
  int32_T i;
  for (i = 0; i < 2000; i++) {
    emxFreeStruct_struct4_T(&pMatrix[i]);
  }
}

void emxFreeMatrix_struct5_T(struct5_T pMatrix[2000])
{
  int32_T i;
  for (i = 0; i < 2000; i++) {
    emxFreeStruct_struct5_T(&pMatrix[i]);
  }
}

void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFree_real_T(&pStruct->voteFactor);
}

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

void emxFreeStruct_struct3_T(struct3_T *pStruct)
{
  emxFree_int64_T(&pStruct->inds);
}

void emxFreeStruct_struct4_T(struct4_T *pStruct)
{
  emxFree_real_T(&pStruct->inds);
}

void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_boolean_T *)NULL) {
    if (((*pEmxArray)->data != (boolean_T *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_boolean_T *)NULL;
  }
}

void emxFree_int32_T(emxArray_int32_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int32_T *)NULL) {
    if (((*pEmxArray)->data != (int32_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int32_T *)NULL;
  }
}

void emxFree_int64_T(emxArray_int64_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int64_T *)NULL) {
    if (((*pEmxArray)->data != (int64_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int64_T *)NULL;
  }
}

void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (real_T *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

void emxFree_struct2_T(emxArray_struct2_T **pEmxArray)
{
  int32_T numEl;
  int32_T i;
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct2_T *)NULL;
  }
}

void emxFree_struct4_T(emxArray_struct4_T **pEmxArray)
{
  int32_T numEl;
  int32_T i;
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct4_T *)NULL;
  }
}

void emxFree_struct5_T(emxArray_struct5_T **pEmxArray)
{
  int32_T numEl;
  int32_T i;
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct5_T *)NULL;
  }
}

void emxInitMatrix_struct3_T(const emlrtStack *sp, struct3_T pMatrix[2000],
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 2000; i++) {
    emxInitStruct_struct3_T(sp, &pMatrix[i], srcLocation, doPush);
  }
}

void emxInitMatrix_struct4_T(const emlrtStack *sp, struct4_T pMatrix[2000],
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 2000; i++) {
    emxInitStruct_struct4_T(sp, &pMatrix[i], srcLocation, doPush);
  }
}

void emxInitMatrix_struct5_T(const emlrtStack *sp, struct5_T pMatrix[2000],
  const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  int32_T i;
  for (i = 0; i < 2000; i++) {
    emxInitStruct_struct5_T(sp, &pMatrix[i], srcLocation, doPush);
  }
}

void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  pStruct->splitCriterion.size[0] = 0;
  pStruct->splitCriterion.size[1] = 0;
  pStruct->dirIfEqual.size[0] = 0;
  pStruct->dirIfEqual.size[1] = 0;
  emxInitStruct_struct1_T(&pStruct->projections);
  pStruct->treeRotation.size[0] = 0;
  pStruct->treeRotation.size[1] = 0;
  emxInit_real_T(sp, &pStruct->voteFactor, 2, srcLocation, doPush);
}

void emxInitStruct_struct2_T(const emlrtStack *sp, struct2_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_boolean_T(sp, &pStruct->bExpanded, 1, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->nodeId, 1, srcLocation, doPush);
  emxInit_boolean_T(sp, &pStruct->bLeaf, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->childIds, 2, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->parentId, 1, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->depth, 1, srcLocation, doPush);
  emxInit_struct3_T(sp, &pStruct->iPresent, 1, srcLocation, doPush);
  emxInit_struct4_T(sp, &pStruct->iFeatNum, 1, srcLocation, doPush);
  emxInit_real_T(sp, &pStruct->trainingCounts, 2, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->labelClassId, 1, srcLocation, doPush);
  b_emxInit_real_T(sp, &pStruct->partitionPoint, 1, srcLocation, doPush);
  emxInit_struct4_T(sp, &pStruct->iIn, 1, srcLocation, doPush);
  emxInit_struct5_T(sp, &pStruct->decisionProjection, 1, srcLocation, doPush);
}

void emxInitStruct_struct3_T(const emlrtStack *sp, struct3_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_int64_T(sp, &pStruct->inds, 2, srcLocation, doPush);
}

void emxInitStruct_struct4_T(const emlrtStack *sp, struct4_T *pStruct, const
  emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxInit_real_T(sp, &pStruct->inds, 2, srcLocation, doPush);
}

void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int32_T(const emlrtStack *sp, emxArray_int32_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int32_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int32_T *)emlrtMallocMex(sizeof(emxArray_int32_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int32_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int32_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_int64_T(const emlrtStack *sp, emxArray_int64_T **pEmxArray, int32_T
                     numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                     doPush)
{
  emxArray_int64_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_int64_T *)emlrtMallocMex(sizeof(emxArray_int64_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int64_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (int64_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray, int32_T
                    numDimensions, const emlrtRTEInfo *srcLocation, boolean_T
                    doPush)
{
  emxArray_real_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (real_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_struct2_T(const emlrtStack *sp, emxArray_struct2_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_struct2_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_struct2_T *)emlrtMallocMex(sizeof(emxArray_struct2_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_struct2_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (struct2_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_struct4_T(const emlrtStack *sp, emxArray_struct4_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_struct4_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_struct4_T *)emlrtMallocMex(sizeof(emxArray_struct4_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_struct4_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (struct4_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

void emxInit_struct5_T(const emlrtStack *sp, emxArray_struct5_T **pEmxArray,
  int32_T numDimensions, const emlrtRTEInfo *srcLocation, boolean_T doPush)
{
  emxArray_struct5_T *emxArray;
  int32_T i;
  *pEmxArray = (emxArray_struct5_T *)emlrtMallocMex(sizeof(emxArray_struct5_T));
  if ((void *)*pEmxArray == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_struct5_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (struct5_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int32_T *)emlrtMallocMex((uint32_T)(sizeof(int32_T)
    * numDimensions));
  if ((void *)emxArray->size == NULL) {
    emlrtHeapAllocationErrorR2012b(srcLocation, sp);
  }

  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/* End of code generation (growManyTreesCompileTest_emxutil.c) */
