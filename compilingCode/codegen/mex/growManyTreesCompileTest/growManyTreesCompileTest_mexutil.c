/*
 * growManyTreesCompileTest_mexutil.c
 *
 * Code generation for function 'growManyTreesCompileTest_mexutil'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "expandNode.h"
#include "twoPointMaxMarginSplit.h"

/* Function Definitions */
void b_emlrt_update_log_10(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < (in->size[1] << 1); i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < (in->size[1] << 1))) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_11(const struct_T *in, emlrtLocationLoggingDataType
  table[613])
{
  real_T d3;
  int64_T localMin;
  int64_T localMax;
  d3 = muDoubleScalarFloor(table[0U].SimMin);
  if (d3 < 9.2233720368547758E+18) {
    if (d3 >= -9.2233720368547758E+18) {
      localMin = (int64_T)d3;
    } else {
      localMin = MIN_int64_T;
    }
  } else if (d3 >= 9.2233720368547758E+18) {
    localMin = MAX_int64_T;
  } else {
    localMin = 0LL;
  }

  d3 = muDoubleScalarFloor(table[0U].SimMax);
  if (d3 < 9.2233720368547758E+18) {
    if (d3 >= -9.2233720368547758E+18) {
      localMax = (int64_T)d3;
    } else {
      localMax = MIN_int64_T;
    }
  } else if (d3 >= 9.2233720368547758E+18) {
    localMax = MAX_int64_T;
  } else {
    localMax = 0LL;
  }

  /* Simulation Min-Max logging. */
  if (in->inds < localMin) {
    localMin = in->inds;
  }

  if (in->inds > localMax) {
    localMax = in->inds;
  }

  table[0U].SimMin = (real_T)localMin;
  table[0U].SimMax = (real_T)localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_12(const b_struct_T *in, emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->inds < localMin) {
    localMin = in->inds;
  }

  if (in->inds > localMax) {
    localMax = in->inds;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in->inds != muDoubleScalarFloor(in->inds)) {
    table[0U].IsAlwaysInteger = false;
  }
}

void b_emlrt_update_log_13(const c_struct_T *in, emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->phi < localMin) {
    localMin = in->phi;
  }

  if (in->phi > localMax) {
    localMax = in->phi;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in->phi != muDoubleScalarFloor(in->phi)) {
    table[0U].IsAlwaysInteger = false;
  }
}

void b_emlrt_update_log_14(const d_struct_T *in, emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  boolean_T b_localMin;
  boolean_T b_localMax;
  int32_T i;
  int64_T c_localMin;
  int64_T c_localMax;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->nextChild < localMin) {
    localMin = in->nextChild;
  }

  if (in->nextChild > localMax) {
    localMax = in->nextChild;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in->nextChild != muDoubleScalarFloor(in->nextChild)) {
    table[0U].IsAlwaysInteger = false;
  }

  b_localMin = (table[1U].SimMin > 0.0);
  b_localMax = (table[1U].SimMax > 0.0);
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->bExpanded[i] < (int32_T)b_localMin) {
      b_localMin = in->bExpanded[i];
    }

    if ((int32_T)in->bExpanded[i] > (int32_T)b_localMax) {
      b_localMax = in->bExpanded[i];
    }
  }

  table[1U].SimMin = b_localMin;
  table[1U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[2U].SimMin;
  localMax = table[2U].SimMax;
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if (in->nodeId[i] < localMin) {
      localMin = in->nodeId[i];
    }

    if (in->nodeId[i] > localMax) {
      localMax = in->nodeId[i];
    }
  }

  table[2U].SimMin = localMin;
  table[2U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[2U].IsAlwaysInteger && (i < 2)) {
    if (in->nodeId[i] != muDoubleScalarFloor(in->nodeId[i])) {
      table[2U].IsAlwaysInteger = false;
    }

    i++;
  }

  b_localMin = (table[3U].SimMin > 0.0);
  b_localMax = (table[3U].SimMax > 0.0);
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->bLeaf[i] < (int32_T)b_localMin) {
      b_localMin = in->bLeaf[i];
    }

    if ((int32_T)in->bLeaf[i] > (int32_T)b_localMax) {
      b_localMax = in->bLeaf[i];
    }
  }

  table[3U].SimMin = b_localMin;
  table[3U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[4U].SimMin;
  localMax = table[4U].SimMax;
  for (i = 0; i < 4; i++) {
    /* Simulation Min-Max logging. */
    if (in->childIds[i] < localMin) {
      localMin = in->childIds[i];
    }

    if (in->childIds[i] > localMax) {
      localMax = in->childIds[i];
    }
  }

  table[4U].SimMin = localMin;
  table[4U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[4U].IsAlwaysInteger && (i < 4)) {
    if (in->childIds[i] != muDoubleScalarFloor(in->childIds[i])) {
      table[4U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[5U].SimMin;
  localMax = table[5U].SimMax;
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if (in->parentId[i] < localMin) {
      localMin = in->parentId[i];
    }

    if (in->parentId[i] > localMax) {
      localMax = in->parentId[i];
    }
  }

  table[5U].SimMin = localMin;
  table[5U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[5U].IsAlwaysInteger && (i < 2)) {
    if (in->parentId[i] != muDoubleScalarFloor(in->parentId[i])) {
      table[5U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[6U].SimMin;
  localMax = table[6U].SimMax;
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if (in->depth[i] < localMin) {
      localMin = in->depth[i];
    }

    if (in->depth[i] > localMax) {
      localMax = in->depth[i];
    }
  }

  table[6U].SimMin = localMin;
  table[6U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[6U].IsAlwaysInteger && (i < 2)) {
    if (in->depth[i] != muDoubleScalarFloor(in->depth[i])) {
      table[6U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = muDoubleScalarFloor(table[7U].SimMin);
  if (localMin < 9.2233720368547758E+18) {
    if (localMin >= -9.2233720368547758E+18) {
      c_localMin = (int64_T)localMin;
    } else {
      c_localMin = MIN_int64_T;
    }
  } else if (localMin >= 9.2233720368547758E+18) {
    c_localMin = MAX_int64_T;
  } else {
    c_localMin = 0LL;
  }

  localMin = muDoubleScalarFloor(table[7U].SimMax);
  if (localMin < 9.2233720368547758E+18) {
    if (localMin >= -9.2233720368547758E+18) {
      c_localMax = (int64_T)localMin;
    } else {
      c_localMax = MIN_int64_T;
    }
  } else if (localMin >= 9.2233720368547758E+18) {
    c_localMax = MAX_int64_T;
  } else {
    c_localMax = 0LL;
  }

  /* Simulation Min-Max logging. */
  if (in->iPresent.inds < c_localMin) {
    c_localMin = in->iPresent.inds;
  }

  if (in->iPresent.inds > c_localMax) {
    c_localMax = in->iPresent.inds;
  }

  table[7U].SimMin = (real_T)c_localMin;
  table[7U].SimMax = (real_T)c_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[8U].SimMin;
  localMax = table[8U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->iFeatNum.inds < localMin) {
    localMin = in->iFeatNum.inds;
  }

  if (in->iFeatNum.inds > localMax) {
    localMax = in->iFeatNum.inds;
  }

  table[8U].SimMin = localMin;
  table[8U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in->iFeatNum.inds != muDoubleScalarFloor(in->iFeatNum.inds)) {
    table[8U].IsAlwaysInteger = false;
  }

  localMin = table[9U].SimMin;
  localMax = table[9U].SimMax;
  for (i = 0; i < (in->trainingCounts->size[1] << 1); i++) {
    /* Simulation Min-Max logging. */
    if (in->trainingCounts->data[i] < localMin) {
      localMin = in->trainingCounts->data[i];
    }

    if (in->trainingCounts->data[i] > localMax) {
      localMax = in->trainingCounts->data[i];
    }
  }

  table[9U].SimMin = localMin;
  table[9U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[9U].IsAlwaysInteger && (i < (in->trainingCounts->size[1] << 1)))
  {
    if (in->trainingCounts->data[i] != muDoubleScalarFloor(in->
         trainingCounts->data[i])) {
      table[9U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[10U].SimMin;
  localMax = table[10U].SimMax;
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if (in->labelClassId[i] < localMin) {
      localMin = in->labelClassId[i];
    }

    if (in->labelClassId[i] > localMax) {
      localMax = in->labelClassId[i];
    }
  }

  table[10U].SimMin = localMin;
  table[10U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[10U].IsAlwaysInteger && (i < 2)) {
    if (in->labelClassId[i] != muDoubleScalarFloor(in->labelClassId[i])) {
      table[10U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[11U].SimMin;
  localMax = table[11U].SimMax;
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if (in->partitionPoint[i] < localMin) {
      localMin = in->partitionPoint[i];
    }

    if (in->partitionPoint[i] > localMax) {
      localMax = in->partitionPoint[i];
    }
  }

  table[11U].SimMin = localMin;
  table[11U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[11U].IsAlwaysInteger && (i < 2)) {
    if (in->partitionPoint[i] != muDoubleScalarFloor(in->partitionPoint[i])) {
      table[11U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[12U].SimMin;
  localMax = table[12U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->iIn.inds < localMin) {
    localMin = in->iIn.inds;
  }

  if (in->iIn.inds > localMax) {
    localMax = in->iIn.inds;
  }

  table[12U].SimMin = localMin;
  table[12U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in->iIn.inds != muDoubleScalarFloor(in->iIn.inds)) {
    table[12U].IsAlwaysInteger = false;
  }

  localMin = table[13U].SimMin;
  localMax = table[13U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->decisionProjection.phi < localMin) {
    localMin = in->decisionProjection.phi;
  }

  if (in->decisionProjection.phi > localMax) {
    localMax = in->decisionProjection.phi;
  }

  table[13U].SimMin = localMin;
  table[13U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in->decisionProjection.phi != muDoubleScalarFloor
      (in->decisionProjection.phi)) {
    table[13U].IsAlwaysInteger = false;
  }
}

void b_emlrt_update_log_15(const real_T in[2000], emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < 2000; i++) {
    /* Simulation Min-Max logging. */
    if (in[i] < localMin) {
      localMin = in[i];
    }

    if (in[i] > localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < 2000)) {
    if (in[i] != muDoubleScalarFloor(in[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_16(const boolean_T in[2000],
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < 2000; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in[i] < (int32_T)localMin) {
      localMin = in[i];
    }

    if ((int32_T)in[i] > (int32_T)localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_17(const real_T in[4000], emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < 4000; i++) {
    /* Simulation Min-Max logging. */
    if (in[i] < localMin) {
      localMin = in[i];
    }

    if (in[i] > localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < 4000)) {
    if (in[i] != muDoubleScalarFloor(in[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_18(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < 2000 * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < 2000 * in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_19(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < in->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->data[i] < (int32_T)localMin) {
      localMin = in->data[i];
    }

    if ((int32_T)in->data[i] > (int32_T)localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_2(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0] * in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_20(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_21(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < (in->size[0] << 1); i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < (in->size[0] << 1))) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_22(const emxArray_struct3_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T d4;
  int64_T localMin;
  int64_T localMax;
  int32_T i;
  int32_T b_i;
  d4 = muDoubleScalarFloor(table[0U].SimMin);
  if (d4 < 9.2233720368547758E+18) {
    if (d4 >= -9.2233720368547758E+18) {
      localMin = (int64_T)d4;
    } else {
      localMin = MIN_int64_T;
    }
  } else if (d4 >= 9.2233720368547758E+18) {
    localMin = MAX_int64_T;
  } else {
    localMin = 0LL;
  }

  d4 = muDoubleScalarFloor(table[0U].SimMax);
  if (d4 < 9.2233720368547758E+18) {
    if (d4 >= -9.2233720368547758E+18) {
      localMax = (int64_T)d4;
    } else {
      localMax = MIN_int64_T;
    }
  } else if (d4 >= 9.2233720368547758E+18) {
    localMax = MAX_int64_T;
  } else {
    localMax = 0LL;
  }

  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].inds->size[1]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].inds->data[b_i] < localMin) {
        localMin = in->data[i].inds->data[b_i];
      }

      if (in->data[i].inds->data[b_i] > localMax) {
        localMax = in->data[i].inds->data[b_i];
      }
    }
  }

  table[0U].SimMin = (real_T)localMin;
  table[0U].SimMax = (real_T)localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_23(const emxArray_struct4_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  int32_T b_i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].inds->size[1]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].inds->data[b_i] < localMin) {
        localMin = in->data[i].inds->data[b_i];
      }

      if (in->data[i].inds->data[b_i] > localMax) {
        localMax = in->data[i].inds->data[b_i];
      }
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[0U].IsAlwaysInteger && (b_i < in->data[i].inds->size[1])) {
      if (in->data[i].inds->data[b_i] != muDoubleScalarFloor(in->data[i]
           .inds->data[b_i])) {
        table[0U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }
}

void b_emlrt_update_log_24(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0] * in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_25(const emxArray_struct5_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  int32_T b_i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].phi->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].phi->data[b_i] < localMin) {
        localMin = in->data[i].phi->data[b_i];
      }

      if (in->data[i].phi->data[b_i] > localMax) {
        localMax = in->data[i].phi->data[b_i];
      }
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[0U].IsAlwaysInteger && (b_i < in->data[i].phi->size[0])) {
      if (in->data[i].phi->data[b_i] != muDoubleScalarFloor(in->data[i]
           .phi->data[b_i])) {
        table[0U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }
}

void b_emlrt_update_log_28(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->data[i] < (int32_T)localMin) {
      localMin = in->data[i];
    }

    if ((int32_T)in->data[i] > (int32_T)localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_3(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->data[i] < (int32_T)localMin) {
      localMin = in->data[i];
    }

    if ((int32_T)in->data[i] > (int32_T)localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_30(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->data[i] < (int32_T)localMin) {
      localMin = in->data[i];
    }

    if ((int32_T)in->data[i] > (int32_T)localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_32(const real_T in_data[], const int32_T in_size[1],
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  i = 0;
  while (i < in_size[0]) {
    /* Simulation Min-Max logging. */
    if (in_data[0] < localMin) {
      localMin = in_data[0];
    }

    if (in_data[0] > localMax) {
      localMax = in_data[0];
    }

    i = 1;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in_size[0])) {
    if (in_data[0] != muDoubleScalarFloor(in_data[0])) {
      table[0U].IsAlwaysInteger = false;
    }

    i = 1;
  }
}

void b_emlrt_update_log_34(const real_T in_data[], const int32_T in_size[2],
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  i = 0;
  while (i < in_size[0] * in_size[1]) {
    /* Simulation Min-Max logging. */
    if (in_data[0] < localMin) {
      localMin = in_data[0];
    }

    if (in_data[0] > localMax) {
      localMax = in_data[0];
    }

    i = 1;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in_size[0] * in_size[1])) {
    if (in_data[0] != muDoubleScalarFloor(in_data[0])) {
      table[0U].IsAlwaysInteger = false;
    }

    i = 1;
  }
}

void b_emlrt_update_log_35(const real_T in_data[], emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;

  /* Simulation Min-Max logging. */
  if (in_data[0] < localMin) {
    localMin = in_data[0];
  }

  if (in_data[0] > localMax) {
    localMax = in_data[0];
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < 1)) {
    if (in_data[0] != muDoubleScalarFloor(in_data[0])) {
      table[0U].IsAlwaysInteger = false;
    }

    i = 1;
  }
}

void b_emlrt_update_log_37(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->data[i] < (int32_T)localMin) {
      localMin = in->data[i];
    }

    if ((int32_T)in->data[i] > (int32_T)localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_38(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_4(const struct0_T *in, emlrtLocationLoggingDataType
  table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  real_T b_localMin;
  real_T b_localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->bProjBoot < (int32_T)localMin) {
    localMin = in->bProjBoot;
  }

  if ((int32_T)in->bProjBoot > (int32_T)localMax) {
    localMax = in->bProjBoot;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  b_localMin = table[1U].SimMin;
  b_localMax = table[1U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->lambda < b_localMin) {
    b_localMin = in->lambda;
  }

  if (in->lambda > b_localMax) {
    b_localMax = in->lambda;
  }

  table[1U].SimMin = b_localMin;
  table[1U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->lambda != muDoubleScalarFloor(in->lambda)) {
    table[1U].IsAlwaysInteger = false;
  }

  b_localMin = table[2U].SimMin;
  b_localMax = table[2U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->minPointsForSplit < b_localMin) {
    b_localMin = in->minPointsForSplit;
  }

  if (in->minPointsForSplit > b_localMax) {
    b_localMax = in->minPointsForSplit;
  }

  table[2U].SimMin = b_localMin;
  table[2U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->minPointsForSplit != muDoubleScalarFloor(in->minPointsForSplit)) {
    table[2U].IsAlwaysInteger = false;
  }

  localMin = (table[3U].SimMin > 0.0);
  localMax = (table[3U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->bContinueProjBootDegenerate < (int32_T)localMin) {
    localMin = in->bContinueProjBootDegenerate;
  }

  if ((int32_T)in->bContinueProjBootDegenerate > (int32_T)localMax) {
    localMax = in->bContinueProjBootDegenerate;
  }

  table[3U].SimMin = localMin;
  table[3U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  b_localMin = table[4U].SimMin;
  b_localMax = table[4U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->epsilonCCA < b_localMin) {
    b_localMin = in->epsilonCCA;
  }

  if (in->epsilonCCA > b_localMax) {
    b_localMax = in->epsilonCCA;
  }

  table[4U].SimMin = b_localMin;
  table[4U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->epsilonCCA != muDoubleScalarFloor(in->epsilonCCA)) {
    table[4U].IsAlwaysInteger = false;
  }

  localMin = (table[5U].SimMin > 0.0);
  localMax = (table[5U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->bBagTrees < (int32_T)localMin) {
    localMin = in->bBagTrees;
  }

  if ((int32_T)in->bBagTrees > (int32_T)localMax) {
    localMax = in->bBagTrees;
  }

  table[5U].SimMin = localMin;
  table[5U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = (table[6U].SimMin > 0.0);
  localMax = (table[6U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->bUseParallel < (int32_T)localMin) {
    localMin = in->bUseParallel;
  }

  if ((int32_T)in->bUseParallel > (int32_T)localMax) {
    localMax = in->bUseParallel;
  }

  table[6U].SimMin = localMin;
  table[6U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = (table[7U].SimMin > 0.0);
  localMax = (table[7U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->projections.CCA < (int32_T)localMin) {
    localMin = in->projections.CCA;
  }

  if ((int32_T)in->projections.CCA > (int32_T)localMax) {
    localMax = in->projections.CCA;
  }

  table[7U].SimMin = localMin;
  table[7U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = (table[8U].SimMin > 0.0);
  localMax = (table[8U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->projections.PCA < (int32_T)localMin) {
    localMin = in->projections.PCA;
  }

  if ((int32_T)in->projections.PCA > (int32_T)localMax) {
    localMax = in->projections.PCA;
  }

  table[8U].SimMin = localMin;
  table[8U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = (table[9U].SimMin > 0.0);
  localMax = (table[9U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->projections.CCAclasswise < (int32_T)localMin) {
    localMin = in->projections.CCAclasswise;
  }

  if ((int32_T)in->projections.CCAclasswise > (int32_T)localMax) {
    localMax = in->projections.CCAclasswise;
  }

  table[9U].SimMin = localMin;
  table[9U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  b_localMin = table[10U].SimMin;
  b_localMax = table[10U].SimMax;
  for (i = 0; i < in->projections.Rand.size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->projections.Rand.data[i] < b_localMin) {
      b_localMin = in->projections.Rand.data[i];
    }

    if (in->projections.Rand.data[i] > b_localMax) {
      b_localMax = in->projections.Rand.data[i];
    }
  }

  table[10U].SimMin = b_localMin;
  table[10U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[10U].IsAlwaysInteger && (i < in->projections.Rand.size[1])) {
    if (in->projections.Rand.data[i] != muDoubleScalarFloor
        (in->projections.Rand.data[i])) {
      table[10U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = (table[11U].SimMin > 0.0);
  localMax = (table[11U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->includeOriginalAxes < (int32_T)localMin) {
    localMin = in->includeOriginalAxes;
  }

  if ((int32_T)in->includeOriginalAxes > (int32_T)localMax) {
    localMax = in->includeOriginalAxes;
  }

  table[11U].SimMin = localMin;
  table[11U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  b_localMin = table[12U].SimMin;
  b_localMax = table[12U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->RotForM < b_localMin) {
    b_localMin = in->RotForM;
  }

  if (in->RotForM > b_localMax) {
    b_localMax = in->RotForM;
  }

  table[12U].SimMin = b_localMin;
  table[12U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->RotForM != muDoubleScalarFloor(in->RotForM)) {
    table[12U].IsAlwaysInteger = false;
  }

  b_localMin = table[13U].SimMin;
  b_localMax = table[13U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->RotForpS < b_localMin) {
    b_localMin = in->RotForpS;
  }

  if (in->RotForpS > b_localMax) {
    b_localMax = in->RotForpS;
  }

  table[13U].SimMin = b_localMin;
  table[13U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->RotForpS != muDoubleScalarFloor(in->RotForpS)) {
    table[13U].IsAlwaysInteger = false;
  }

  b_localMin = table[14U].SimMin;
  b_localMax = table[14U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->RotForpClassLeaveOut < b_localMin) {
    b_localMin = in->RotForpClassLeaveOut;
  }

  if (in->RotForpClassLeaveOut > b_localMax) {
    b_localMax = in->RotForpClassLeaveOut;
  }

  table[14U].SimMin = b_localMin;
  table[14U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->RotForpClassLeaveOut != muDoubleScalarFloor(in->RotForpClassLeaveOut))
  {
    table[14U].IsAlwaysInteger = false;
  }

  localMin = (table[15U].SimMin > 0.0);
  localMax = (table[15U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in->bRandomRotationStart < (int32_T)localMin) {
    localMin = in->bRandomRotationStart;
  }

  if ((int32_T)in->bRandomRotationStart > (int32_T)localMax) {
    localMax = in->bRandomRotationStart;
  }

  table[15U].SimMin = localMin;
  table[15U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  b_localMin = table[16U].SimMin;
  b_localMax = table[16U].SimMax;
  for (i = 0; i < in->voteFactor->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->voteFactor->data[i] < b_localMin) {
      b_localMin = in->voteFactor->data[i];
    }

    if (in->voteFactor->data[i] > b_localMax) {
      b_localMax = in->voteFactor->data[i];
    }
  }

  table[16U].SimMin = b_localMin;
  table[16U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[16U].IsAlwaysInteger && (i < in->voteFactor->size[1])) {
    if (in->voteFactor->data[i] != muDoubleScalarFloor(in->voteFactor->data[i]))
    {
      table[16U].IsAlwaysInteger = false;
    }

    i++;
  }

  b_localMin = table[17U].SimMin;
  b_localMax = table[17U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->maxDepthSplit < b_localMin) {
    b_localMin = in->maxDepthSplit;
  }

  if (in->maxDepthSplit > b_localMax) {
    b_localMax = in->maxDepthSplit;
  }

  table[17U].SimMin = b_localMin;
  table[17U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->maxDepthSplit != muDoubleScalarFloor(in->maxDepthSplit)) {
    table[17U].IsAlwaysInteger = false;
  }

  b_localMin = table[18U].SimMin;
  b_localMax = table[18U].SimMax;

  /* Simulation Min-Max logging. */
  if (in->XVariationTol < b_localMin) {
    b_localMin = in->XVariationTol;
  }

  if (in->XVariationTol > b_localMax) {
    b_localMax = in->XVariationTol;
  }

  table[18U].SimMin = b_localMin;
  table[18U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  if (in->XVariationTol != muDoubleScalarFloor(in->XVariationTol)) {
    table[18U].IsAlwaysInteger = false;
  }
}

void b_emlrt_update_log_5(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_7(const real_T in[2], emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if (in[i] < localMin) {
      localMin = in[i];
    }

    if (in[i] > localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < 2)) {
    if (in[i] != muDoubleScalarFloor(in[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

void b_emlrt_update_log_8(const boolean_T in[2], emlrtLocationLoggingDataType
  table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in[i] < (int32_T)localMin) {
      localMin = in[i];
    }

    if ((int32_T)in[i] > (int32_T)localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

void b_emlrt_update_log_9(const real_T in[4], emlrtLocationLoggingDataType
  table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < 4; i++) {
    /* Simulation Min-Max logging. */
    if (in[i] < localMin) {
      localMin = in[i];
    }

    if (in[i] > localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < 4)) {
    if (in[i] != muDoubleScalarFloor(in[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

const mxArray *b_message(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
  *location)
{
  const mxArray *pArray;
  const mxArray *m50;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m50, 1, &pArray, "message", true,
    location);
}

const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const mxArray
  *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m51;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m51, 2, pArrays, "message", true,
    location);
}

real_T emlrt_update_log_1(real_T in, emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;

  /* Simulation Min-Max logging. */
  if (in < localMin) {
    localMin = in;
  }

  if (in > localMax) {
    localMax = in;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  if (in != muDoubleScalarFloor(in)) {
    table[0U].IsAlwaysInteger = false;
  }

  return in;
}

void emlrt_update_log_10(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i44;
  int32_T loop_ub;
  i44 = out->size[0] * out->size[1];
  out->size[0] = 2;
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i44, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i44 = 0; i44 < loop_ub; i44++) {
    out->data[i44] = in->data[i44];
  }

  b_emlrt_update_log_10(out, table);
}

struct_T emlrt_update_log_11(int64_T in_inds, emlrtLocationLoggingDataType
  table[613])
{
  struct_T out;
  out.inds = in_inds;
  b_emlrt_update_log_11(&out, table);
  return out;
}

b_struct_T emlrt_update_log_12(real_T in_inds, emlrtLocationLoggingDataType
  table[613])
{
  b_struct_T out;
  out.inds = in_inds;
  b_emlrt_update_log_12(&out, table);
  return out;
}

c_struct_T emlrt_update_log_13(real_T in_phi, emlrtLocationLoggingDataType
  table[613])
{
  c_struct_T out;
  out.phi = in_phi;
  b_emlrt_update_log_13(&out, table);
  return out;
}

void emlrt_update_log_14(const emlrtStack *sp, real_T in_nextChild, const
  boolean_T in_bExpanded[2], const real_T in_nodeId[2], const boolean_T
  in_bLeaf[2], const real_T in_childIds[4], const real_T in_parentId[2], const
  real_T in_depth[2], int64_T in_iPresent_inds, real_T in_iFeatNum_inds, const
  emxArray_real_T *in_trainingCounts, const real_T in_labelClassId[2], const
  real_T in_partitionPoint[2], real_T in_iIn_inds, real_T
  in_decisionProjection_phi, emlrtLocationLoggingDataType table[613], d_struct_T
  *out)
{
  int32_T i;
  int32_T loop_ub;
  out->nextChild = in_nextChild;
  for (i = 0; i < 2; i++) {
    out->bExpanded[i] = in_bExpanded[i];
  }

  for (i = 0; i < 2; i++) {
    out->nodeId[i] = in_nodeId[i];
  }

  for (i = 0; i < 2; i++) {
    out->bLeaf[i] = in_bLeaf[i];
  }

  for (i = 0; i < 4; i++) {
    out->childIds[i] = in_childIds[i];
  }

  for (i = 0; i < 2; i++) {
    out->parentId[i] = in_parentId[i];
  }

  for (i = 0; i < 2; i++) {
    out->depth[i] = in_depth[i];
  }

  out->iPresent.inds = in_iPresent_inds;
  out->iFeatNum.inds = in_iFeatNum_inds;
  i = out->trainingCounts->size[0] * out->trainingCounts->size[1];
  out->trainingCounts->size[0] = 2;
  out->trainingCounts->size[1] = in_trainingCounts->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out->trainingCounts, i, (int32_T)
                    sizeof(real_T), (emlrtRTEInfo *)NULL);
  loop_ub = in_trainingCounts->size[0] * in_trainingCounts->size[1];
  for (i = 0; i < loop_ub; i++) {
    out->trainingCounts->data[i] = in_trainingCounts->data[i];
  }

  for (i = 0; i < 2; i++) {
    out->labelClassId[i] = in_labelClassId[i];
  }

  for (i = 0; i < 2; i++) {
    out->partitionPoint[i] = in_partitionPoint[i];
  }

  out->iIn.inds = in_iIn_inds;
  out->decisionProjection.phi = in_decisionProjection_phi;
  b_emlrt_update_log_14(out, table);
}

void emlrt_update_log_15(const real_T in[2000], emlrtLocationLoggingDataType
  table[613], real_T out[2000])
{
  memcpy(&out[0], &in[0], 2000U * sizeof(real_T));
  b_emlrt_update_log_15(out, table);
}

void emlrt_update_log_16(const boolean_T in[2000], emlrtLocationLoggingDataType
  table[613], boolean_T out[2000])
{
  memcpy(&out[0], &in[0], 2000U * sizeof(boolean_T));
  b_emlrt_update_log_16(out, table);
}

void emlrt_update_log_17(const real_T in[4000], emlrtLocationLoggingDataType
  table[613], real_T out[4000])
{
  memcpy(&out[0], &in[0], 4000U * sizeof(real_T));
  b_emlrt_update_log_17(out, table);
}

void emlrt_update_log_18(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i45;
  int32_T loop_ub;
  i45 = out->size[0] * out->size[1];
  out->size[0] = 2000;
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i45, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i45 = 0; i45 < loop_ub; i45++) {
    out->data[i45] = in->data[i45];
  }

  b_emlrt_update_log_18(out, table);
}

void emlrt_update_log_19(const emlrtStack *sp, const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out)
{
  int32_T i46;
  int32_T loop_ub;
  i46 = out->size[0];
  out->size[0] = in->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)out, i46, (int32_T)sizeof(boolean_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0];
  for (i46 = 0; i46 < loop_ub; i46++) {
    out->data[i46] = in->data[i46];
  }

  b_emlrt_update_log_19(out, table);
}

void emlrt_update_log_2(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i40;
  int32_T loop_ub;
  i40 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i40, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i40 = 0; i40 < loop_ub; i40++) {
    out->data[i40] = in->data[i40];
  }

  b_emlrt_update_log_2(out, table);
}

void emlrt_update_log_20(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i47;
  int32_T loop_ub;
  i47 = out->size[0];
  out->size[0] = in->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)out, i47, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0];
  for (i47 = 0; i47 < loop_ub; i47++) {
    out->data[i47] = in->data[i47];
  }

  b_emlrt_update_log_20(out, table);
}

void emlrt_update_log_21(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i48;
  int32_T loop_ub;
  i48 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)out, i48, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i48 = 0; i48 < loop_ub; i48++) {
    out->data[i48] = in->data[i48];
  }

  b_emlrt_update_log_21(out, table);
}

void emlrt_update_log_22(const emlrtStack *sp, const emxArray_struct3_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_struct3_T *out)
{
  int32_T i49;
  int32_T loop_ub;
  i49 = out->size[0];
  out->size[0] = in->size[0];
  emxEnsureCapacity_struct3_T(sp, out, i49, (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0];
  for (i49 = 0; i49 < loop_ub; i49++) {
    emxCopyStruct_struct3_T(sp, &out->data[i49], &in->data[i49], (emlrtRTEInfo *)
      NULL);
  }

  b_emlrt_update_log_22(out, table);
}

void emlrt_update_log_23(const emlrtStack *sp, const emxArray_struct4_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_struct4_T *out)
{
  int32_T i50;
  int32_T loop_ub;
  i50 = out->size[0];
  out->size[0] = in->size[0];
  emxEnsureCapacity_struct4_T(sp, out, i50, (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0];
  for (i50 = 0; i50 < loop_ub; i50++) {
    emxCopyStruct_struct4_T(sp, &out->data[i50], &in->data[i50], (emlrtRTEInfo *)
      NULL);
  }

  b_emlrt_update_log_23(out, table);
}

void emlrt_update_log_24(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i51;
  int32_T loop_ub;
  i51 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i51, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i51 = 0; i51 < loop_ub; i51++) {
    out->data[i51] = in->data[i51];
  }

  b_emlrt_update_log_24(out, table);
}

void emlrt_update_log_25(const emlrtStack *sp, const emxArray_struct5_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_struct5_T *out)
{
  int32_T i52;
  int32_T loop_ub;
  i52 = out->size[0];
  out->size[0] = in->size[0];
  emxEnsureCapacity_struct5_T(sp, out, i52, (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0];
  for (i52 = 0; i52 < loop_ub; i52++) {
    emxCopyStruct_struct5_T(sp, &out->data[i52], &in->data[i52], (emlrtRTEInfo *)
      NULL);
  }

  b_emlrt_update_log_25(out, table);
}

void emlrt_update_log_28(const emlrtStack *sp, const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out)
{
  int32_T i54;
  int32_T loop_ub;
  i54 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i54, (int32_T)sizeof(boolean_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i54 = 0; i54 < loop_ub; i54++) {
    out->data[i54] = in->data[i54];
  }

  b_emlrt_update_log_28(out, table);
}

void emlrt_update_log_3(const emlrtStack *sp, const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out)
{
  int32_T i41;
  int32_T loop_ub;
  i41 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i41, (int32_T)sizeof(boolean_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i41 = 0; i41 < loop_ub; i41++) {
    out->data[i41] = in->data[i41];
  }

  b_emlrt_update_log_3(out, table);
}

void emlrt_update_log_30(const emlrtStack *sp, const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out)
{
  int32_T i56;
  int32_T loop_ub;
  i56 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i56, (int32_T)sizeof(boolean_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i56 = 0; i56 < loop_ub; i56++) {
    out->data[i56] = in->data[i56];
  }

  b_emlrt_update_log_30(out, table);
}

boolean_T emlrt_update_log_31(boolean_T in, emlrtLocationLoggingDataType table
  [613])
{
  boolean_T localMin;
  boolean_T localMax;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in < (int32_T)localMin) {
    localMin = false;
  }

  if ((int32_T)in > (int32_T)localMax) {
    localMax = true;
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  return in;
}

void emlrt_update_log_32(const real_T in_data[], const int32_T in_size[1],
  emlrtLocationLoggingDataType table[613], real_T out_data[], int32_T out_size[1])
{
  int32_T loop_ub;
  int32_T i57;
  out_size[0] = in_size[0];
  loop_ub = in_size[0];
  for (i57 = 0; i57 < loop_ub; i57++) {
    out_data[i57] = in_data[i57];
  }

  b_emlrt_update_log_32(out_data, out_size, table);
}

void emlrt_update_log_34(const real_T in_data[], const int32_T in_size[2],
  emlrtLocationLoggingDataType table[613], real_T out_data[], int32_T out_size[2])
{
  int32_T loop_ub;
  int32_T i59;
  out_size[0] = in_size[0];
  out_size[1] = in_size[1];
  loop_ub = in_size[0] * in_size[1];
  for (i59 = 0; i59 < loop_ub; i59++) {
    out_data[i59] = in_data[i59];
  }

  b_emlrt_update_log_34(out_data, out_size, table);
}

void emlrt_update_log_35(const real_T in_data[], emlrtLocationLoggingDataType
  table[613], real_T out_data[], int32_T out_size[2])
{
  out_size[0] = 1;
  out_size[1] = 1;
  out_data[0] = in_data[0];
  b_emlrt_update_log_35(out_data, table);
}

void emlrt_update_log_37(const emlrtStack *sp, const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out)
{
  int32_T i60;
  int32_T loop_ub;
  i60 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i60, (int32_T)sizeof(boolean_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i60 = 0; i60 < loop_ub; i60++) {
    out->data[i60] = in->data[i60];
  }

  b_emlrt_update_log_37(out, table);
}

void emlrt_update_log_38(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i61;
  int32_T loop_ub;
  i61 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i61, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i61 = 0; i61 < loop_ub; i61++) {
    out->data[i61] = in->data[i61];
  }

  b_emlrt_update_log_38(out, table);
}

void emlrt_update_log_4(const emlrtStack *sp, const struct0_T *in,
  emlrtLocationLoggingDataType table[613], struct0_T *out)
{
  emxCopyStruct_struct0_T(sp, out, in, (emlrtRTEInfo *)NULL);
  b_emlrt_update_log_4(out, table);
}

void emlrt_update_log_5(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i42;
  int32_T loop_ub;
  i42 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i42, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i42 = 0; i42 < loop_ub; i42++) {
    out->data[i42] = in->data[i42];
  }

  b_emlrt_update_log_5(out, table);
}

int64_T emlrt_update_log_6(int64_T in, emlrtLocationLoggingDataType table[613])
{
  real_T d2;
  int64_T localMin;
  int64_T localMax;
  d2 = muDoubleScalarFloor(table[0U].SimMin);
  if (d2 < 9.2233720368547758E+18) {
    if (d2 >= -9.2233720368547758E+18) {
      localMin = (int64_T)d2;
    } else {
      localMin = MIN_int64_T;
    }
  } else if (d2 >= 9.2233720368547758E+18) {
    localMin = MAX_int64_T;
  } else {
    localMin = 0LL;
  }

  d2 = muDoubleScalarFloor(table[0U].SimMax);
  if (d2 < 9.2233720368547758E+18) {
    if (d2 >= -9.2233720368547758E+18) {
      localMax = (int64_T)d2;
    } else {
      localMax = MIN_int64_T;
    }
  } else if (d2 >= 9.2233720368547758E+18) {
    localMax = MAX_int64_T;
  } else {
    localMax = 0LL;
  }

  /* Simulation Min-Max logging. */
  if (in < localMin) {
    localMin = in;
  }

  if (in > localMax) {
    localMax = in;
  }

  table[0U].SimMin = (real_T)localMin;
  table[0U].SimMax = (real_T)localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  return in;
}

void emlrt_update_log_7(const real_T in[2], emlrtLocationLoggingDataType table
  [613], real_T out[2])
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    out[i] = in[i];
  }

  b_emlrt_update_log_7(out, table);
}

void emlrt_update_log_8(const boolean_T in[2], emlrtLocationLoggingDataType
  table[613], boolean_T out[2])
{
  int32_T i;
  for (i = 0; i < 2; i++) {
    out[i] = in[i];
  }

  b_emlrt_update_log_8(out, table);
}

void emlrt_update_log_9(const real_T in[4], emlrtLocationLoggingDataType table
  [613], real_T out[4])
{
  int32_T i43;
  for (i43 = 0; i43 < 4; i43++) {
    out[i43] = in[i43];
  }

  b_emlrt_update_log_9(out, table);
}

void f_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

const mxArray *message(const emlrtStack *sp, const mxArray *b, const mxArray *c,
  const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m49;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m49, 3, pArrays, "message", true,
    location);
}

/* End of code generation (growManyTreesCompileTest_mexutil.c) */
