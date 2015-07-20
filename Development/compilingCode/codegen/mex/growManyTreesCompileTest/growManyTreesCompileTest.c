/*
 * growManyTreesCompileTest.c
 *
 * Code generation for function 'growManyTreesCompileTest'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "repmat.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 57, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtRSInfo b_emlrtRSI = { 61, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtRTEInfo emlrtRTEI = { 1, 18, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtRTEInfo b_emlrtRTEI = { 49, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtRTEInfo c_emlrtRTEI = { 55, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtRTEInfo d_emlrtRTEI = { 15, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtRTEInfo e_emlrtRTEI = { 21, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtDCInfo emlrtDCI = { 60, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m", 1 };

static emlrtRTEInfo je_emlrtRTEI = { 60, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtECInfo emlrtECI = { 2, 21, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtECInfo b_emlrtECI = { 1, 49, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m" };

static emlrtDCInfo b_emlrtDCI = { 15, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",
  4 };

static emlrtBCInfo emlrtBCI = { -1, -1, 61, 5, "trees",
  "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growManyTreesCompileTest.m", 0 };

/* Function Declarations */
static void b_emlrt_update_log_26(const emxArray_struct2_T *in,
  emlrtLocationLoggingDataType table[613]);
static void b_emlrt_update_log_27(const struct2_T *in,
  emlrtLocationLoggingDataType table[613]);
static void cast(const emlrtStack *sp, struct4_T y[2000]);
static void emlrtInitVarDataTables(emlrtLocationLoggingDataType dataTables[613]);
static void emlrt_update_log_26(const emlrtStack *sp, const emxArray_struct2_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_struct2_T *out);
static void emlrt_update_log_27(const emlrtStack *sp, const struct2_T *in,
  emlrtLocationLoggingDataType table[613], struct2_T *out);

/* Function Definitions */
static void b_emlrt_update_log_26(const emxArray_struct2_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  boolean_T b_localMin;
  boolean_T b_localMax;
  int32_T b_i;
  int64_T c_localMin;
  int64_T c_localMax;
  int32_T c_i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i].nextChild < localMin) {
      localMin = in->data[i].nextChild;
    }

    if (in->data[i].nextChild > localMax) {
      localMax = in->data[i].nextChild;
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0])) {
    if (in->data[i].nextChild != muDoubleScalarFloor(in->data[i].nextChild)) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }

  b_localMin = (table[1U].SimMin > 0.0);
  b_localMax = (table[1U].SimMax > 0.0);
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].bExpanded->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if ((int32_T)in->data[i].bExpanded->data[b_i] < (int32_T)b_localMin) {
        b_localMin = in->data[i].bExpanded->data[b_i];
      }

      if ((int32_T)in->data[i].bExpanded->data[b_i] > (int32_T)b_localMax) {
        b_localMax = in->data[i].bExpanded->data[b_i];
      }
    }
  }

  table[1U].SimMin = b_localMin;
  table[1U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[2U].SimMin;
  localMax = table[2U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].nodeId->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].nodeId->data[b_i] < localMin) {
        localMin = in->data[i].nodeId->data[b_i];
      }

      if (in->data[i].nodeId->data[b_i] > localMax) {
        localMax = in->data[i].nodeId->data[b_i];
      }
    }
  }

  table[2U].SimMin = localMin;
  table[2U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[2U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[2U].IsAlwaysInteger && (b_i < in->data[i].nodeId->size[0])) {
      if (in->data[i].nodeId->data[b_i] != muDoubleScalarFloor(in->data[i].
           nodeId->data[b_i])) {
        table[2U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  b_localMin = (table[3U].SimMin > 0.0);
  b_localMax = (table[3U].SimMax > 0.0);
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].bLeaf->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if ((int32_T)in->data[i].bLeaf->data[b_i] < (int32_T)b_localMin) {
        b_localMin = in->data[i].bLeaf->data[b_i];
      }

      if ((int32_T)in->data[i].bLeaf->data[b_i] > (int32_T)b_localMax) {
        b_localMax = in->data[i].bLeaf->data[b_i];
      }
    }
  }

  table[3U].SimMin = b_localMin;
  table[3U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[4U].SimMin;
  localMax = table[4U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < (in->data[i].childIds->size[0] << 1); b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].childIds->data[b_i] < localMin) {
        localMin = in->data[i].childIds->data[b_i];
      }

      if (in->data[i].childIds->data[b_i] > localMax) {
        localMax = in->data[i].childIds->data[b_i];
      }
    }
  }

  table[4U].SimMin = localMin;
  table[4U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[4U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[4U].IsAlwaysInteger && (b_i < (in->data[i].childIds->size[0] <<
             1))) {
      if (in->data[i].childIds->data[b_i] != muDoubleScalarFloor(in->data[i].
           childIds->data[b_i])) {
        table[4U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[5U].SimMin;
  localMax = table[5U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].parentId->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].parentId->data[b_i] < localMin) {
        localMin = in->data[i].parentId->data[b_i];
      }

      if (in->data[i].parentId->data[b_i] > localMax) {
        localMax = in->data[i].parentId->data[b_i];
      }
    }
  }

  table[5U].SimMin = localMin;
  table[5U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[5U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[5U].IsAlwaysInteger && (b_i < in->data[i].parentId->size[0])) {
      if (in->data[i].parentId->data[b_i] != muDoubleScalarFloor(in->data[i].
           parentId->data[b_i])) {
        table[5U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[6U].SimMin;
  localMax = table[6U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].depth->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].depth->data[b_i] < localMin) {
        localMin = in->data[i].depth->data[b_i];
      }

      if (in->data[i].depth->data[b_i] > localMax) {
        localMax = in->data[i].depth->data[b_i];
      }
    }
  }

  table[6U].SimMin = localMin;
  table[6U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[6U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[6U].IsAlwaysInteger && (b_i < in->data[i].depth->size[0])) {
      if (in->data[i].depth->data[b_i] != muDoubleScalarFloor(in->data[i].
           depth->data[b_i])) {
        table[6U].IsAlwaysInteger = false;
      }

      b_i++;
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

  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].iPresent->size[0]; b_i++) {
      for (c_i = 0; c_i < in->data[i].iPresent->data[b_i].inds->size[1]; c_i++)
      {
        /* Simulation Min-Max logging. */
        if (in->data[i].iPresent->data[b_i].inds->data[c_i] < c_localMin) {
          c_localMin = in->data[i].iPresent->data[b_i].inds->data[c_i];
        }

        if (in->data[i].iPresent->data[b_i].inds->data[c_i] > c_localMax) {
          c_localMax = in->data[i].iPresent->data[b_i].inds->data[c_i];
        }
      }
    }
  }

  table[7U].SimMin = (real_T)c_localMin;
  table[7U].SimMax = (real_T)c_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[8U].SimMin;
  localMax = table[8U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].iFeatNum->size[0]; b_i++) {
      for (c_i = 0; c_i < in->data[i].iFeatNum->data[b_i].inds->size[1]; c_i++)
      {
        /* Simulation Min-Max logging. */
        if (in->data[i].iFeatNum->data[b_i].inds->data[c_i] < localMin) {
          localMin = in->data[i].iFeatNum->data[b_i].inds->data[c_i];
        }

        if (in->data[i].iFeatNum->data[b_i].inds->data[c_i] > localMax) {
          localMax = in->data[i].iFeatNum->data[b_i].inds->data[c_i];
        }
      }
    }
  }

  table[8U].SimMin = localMin;
  table[8U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[8U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[8U].IsAlwaysInteger && (b_i < in->data[i].iFeatNum->size[0])) {
      c_i = 0;
      while (table[8U].IsAlwaysInteger && (c_i < in->data[i].iFeatNum->data[b_i]
              .inds->size[1])) {
        if (in->data[i].iFeatNum->data[b_i].inds->data[c_i] !=
            muDoubleScalarFloor(in->data[i].iFeatNum->data[b_i].inds->data[c_i]))
        {
          table[8U].IsAlwaysInteger = false;
        }

        c_i++;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[9U].SimMin;
  localMax = table[9U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].trainingCounts->size[0] * in->data[i].
         trainingCounts->size[1]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].trainingCounts->data[b_i] < localMin) {
        localMin = in->data[i].trainingCounts->data[b_i];
      }

      if (in->data[i].trainingCounts->data[b_i] > localMax) {
        localMax = in->data[i].trainingCounts->data[b_i];
      }
    }
  }

  table[9U].SimMin = localMin;
  table[9U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[9U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[9U].IsAlwaysInteger && (b_i < in->data[i].trainingCounts->size
            [0] * in->data[i].trainingCounts->size[1])) {
      if (in->data[i].trainingCounts->data[b_i] != muDoubleScalarFloor(in->
           data[i].trainingCounts->data[b_i])) {
        table[9U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[10U].SimMin;
  localMax = table[10U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].labelClassId->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].labelClassId->data[b_i] < localMin) {
        localMin = in->data[i].labelClassId->data[b_i];
      }

      if (in->data[i].labelClassId->data[b_i] > localMax) {
        localMax = in->data[i].labelClassId->data[b_i];
      }
    }
  }

  table[10U].SimMin = localMin;
  table[10U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[10U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[10U].IsAlwaysInteger && (b_i < in->data[i].labelClassId->size[0]))
    {
      if (in->data[i].labelClassId->data[b_i] != muDoubleScalarFloor(in->data[i]
           .labelClassId->data[b_i])) {
        table[10U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[11U].SimMin;
  localMax = table[11U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].partitionPoint->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->data[i].partitionPoint->data[b_i] < localMin) {
        localMin = in->data[i].partitionPoint->data[b_i];
      }

      if (in->data[i].partitionPoint->data[b_i] > localMax) {
        localMax = in->data[i].partitionPoint->data[b_i];
      }
    }
  }

  table[11U].SimMin = localMin;
  table[11U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[11U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[11U].IsAlwaysInteger && (b_i < in->data[i].partitionPoint->
            size[0])) {
      if (in->data[i].partitionPoint->data[b_i] != muDoubleScalarFloor(in->
           data[i].partitionPoint->data[b_i])) {
        table[11U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[12U].SimMin;
  localMax = table[12U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].iIn->size[0]; b_i++) {
      for (c_i = 0; c_i < in->data[i].iIn->data[b_i].inds->size[1]; c_i++) {
        /* Simulation Min-Max logging. */
        if (in->data[i].iIn->data[b_i].inds->data[c_i] < localMin) {
          localMin = in->data[i].iIn->data[b_i].inds->data[c_i];
        }

        if (in->data[i].iIn->data[b_i].inds->data[c_i] > localMax) {
          localMax = in->data[i].iIn->data[b_i].inds->data[c_i];
        }
      }
    }
  }

  table[12U].SimMin = localMin;
  table[12U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[12U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[12U].IsAlwaysInteger && (b_i < in->data[i].iIn->size[0])) {
      c_i = 0;
      while (table[12U].IsAlwaysInteger && (c_i < in->data[i].iIn->data[b_i].
              inds->size[1])) {
        if (in->data[i].iIn->data[b_i].inds->data[c_i] != muDoubleScalarFloor
            (in->data[i].iIn->data[b_i].inds->data[c_i])) {
          table[12U].IsAlwaysInteger = false;
        }

        c_i++;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[13U].SimMin;
  localMax = table[13U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    for (b_i = 0; b_i < in->data[i].decisionProjection->size[0]; b_i++) {
      for (c_i = 0; c_i < in->data[i].decisionProjection->data[b_i].phi->size[0];
           c_i++) {
        /* Simulation Min-Max logging. */
        if (in->data[i].decisionProjection->data[b_i].phi->data[c_i] < localMin)
        {
          localMin = in->data[i].decisionProjection->data[b_i].phi->data[c_i];
        }

        if (in->data[i].decisionProjection->data[b_i].phi->data[c_i] > localMax)
        {
          localMax = in->data[i].decisionProjection->data[b_i].phi->data[c_i];
        }
      }
    }
  }

  table[13U].SimMin = localMin;
  table[13U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[13U].IsAlwaysInteger && (i < in->size[0])) {
    b_i = 0;
    while (table[13U].IsAlwaysInteger && (b_i < in->data[i]
            .decisionProjection->size[0])) {
      c_i = 0;
      while (table[13U].IsAlwaysInteger && (c_i < in->data[i].
              decisionProjection->data[b_i].phi->size[0])) {
        if (in->data[i].decisionProjection->data[b_i].phi->data[c_i] !=
            muDoubleScalarFloor(in->data[i].decisionProjection->data[b_i]
                                .phi->data[c_i])) {
          table[13U].IsAlwaysInteger = false;
        }

        c_i++;
      }

      b_i++;
    }

    i++;
  }
}

static void b_emlrt_update_log_27(const struct2_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  boolean_T b_localMin;
  boolean_T b_localMax;
  int32_T i;
  int64_T c_localMin;
  int64_T c_localMax;
  int32_T b_i;
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
  for (i = 0; i < in->bExpanded->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->bExpanded->data[i] < (int32_T)b_localMin) {
      b_localMin = in->bExpanded->data[i];
    }

    if ((int32_T)in->bExpanded->data[i] > (int32_T)b_localMax) {
      b_localMax = in->bExpanded->data[i];
    }
  }

  table[1U].SimMin = b_localMin;
  table[1U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[2U].SimMin;
  localMax = table[2U].SimMax;
  for (i = 0; i < in->nodeId->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->nodeId->data[i] < localMin) {
      localMin = in->nodeId->data[i];
    }

    if (in->nodeId->data[i] > localMax) {
      localMax = in->nodeId->data[i];
    }
  }

  table[2U].SimMin = localMin;
  table[2U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[2U].IsAlwaysInteger && (i < in->nodeId->size[0])) {
    if (in->nodeId->data[i] != muDoubleScalarFloor(in->nodeId->data[i])) {
      table[2U].IsAlwaysInteger = false;
    }

    i++;
  }

  b_localMin = (table[3U].SimMin > 0.0);
  b_localMax = (table[3U].SimMax > 0.0);
  for (i = 0; i < in->bLeaf->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in->bLeaf->data[i] < (int32_T)b_localMin) {
      b_localMin = in->bLeaf->data[i];
    }

    if ((int32_T)in->bLeaf->data[i] > (int32_T)b_localMax) {
      b_localMax = in->bLeaf->data[i];
    }
  }

  table[3U].SimMin = b_localMin;
  table[3U].SimMax = b_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[4U].SimMin;
  localMax = table[4U].SimMax;
  for (i = 0; i < (in->childIds->size[0] << 1); i++) {
    /* Simulation Min-Max logging. */
    if (in->childIds->data[i] < localMin) {
      localMin = in->childIds->data[i];
    }

    if (in->childIds->data[i] > localMax) {
      localMax = in->childIds->data[i];
    }
  }

  table[4U].SimMin = localMin;
  table[4U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[4U].IsAlwaysInteger && (i < (in->childIds->size[0] << 1))) {
    if (in->childIds->data[i] != muDoubleScalarFloor(in->childIds->data[i])) {
      table[4U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[5U].SimMin;
  localMax = table[5U].SimMax;
  for (i = 0; i < in->parentId->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->parentId->data[i] < localMin) {
      localMin = in->parentId->data[i];
    }

    if (in->parentId->data[i] > localMax) {
      localMax = in->parentId->data[i];
    }
  }

  table[5U].SimMin = localMin;
  table[5U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[5U].IsAlwaysInteger && (i < in->parentId->size[0])) {
    if (in->parentId->data[i] != muDoubleScalarFloor(in->parentId->data[i])) {
      table[5U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[6U].SimMin;
  localMax = table[6U].SimMax;
  for (i = 0; i < in->depth->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->depth->data[i] < localMin) {
      localMin = in->depth->data[i];
    }

    if (in->depth->data[i] > localMax) {
      localMax = in->depth->data[i];
    }
  }

  table[6U].SimMin = localMin;
  table[6U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[6U].IsAlwaysInteger && (i < in->depth->size[0])) {
    if (in->depth->data[i] != muDoubleScalarFloor(in->depth->data[i])) {
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

  for (i = 0; i < in->iPresent->size[0]; i++) {
    for (b_i = 0; b_i < in->iPresent->data[i].inds->size[1]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->iPresent->data[i].inds->data[b_i] < c_localMin) {
        c_localMin = in->iPresent->data[i].inds->data[b_i];
      }

      if (in->iPresent->data[i].inds->data[b_i] > c_localMax) {
        c_localMax = in->iPresent->data[i].inds->data[b_i];
      }
    }
  }

  table[7U].SimMin = (real_T)c_localMin;
  table[7U].SimMax = (real_T)c_localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
  localMin = table[8U].SimMin;
  localMax = table[8U].SimMax;
  for (i = 0; i < in->iFeatNum->size[0]; i++) {
    for (b_i = 0; b_i < in->iFeatNum->data[i].inds->size[1]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->iFeatNum->data[i].inds->data[b_i] < localMin) {
        localMin = in->iFeatNum->data[i].inds->data[b_i];
      }

      if (in->iFeatNum->data[i].inds->data[b_i] > localMax) {
        localMax = in->iFeatNum->data[i].inds->data[b_i];
      }
    }
  }

  table[8U].SimMin = localMin;
  table[8U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[8U].IsAlwaysInteger && (i < in->iFeatNum->size[0])) {
    b_i = 0;
    while (table[8U].IsAlwaysInteger && (b_i < in->iFeatNum->data[i].inds->size
            [1])) {
      if (in->iFeatNum->data[i].inds->data[b_i] != muDoubleScalarFloor
          (in->iFeatNum->data[i].inds->data[b_i])) {
        table[8U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[9U].SimMin;
  localMax = table[9U].SimMax;
  for (i = 0; i < in->trainingCounts->size[0] * in->trainingCounts->size[1]; i++)
  {
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
  while (table[9U].IsAlwaysInteger && (i < in->trainingCounts->size[0] *
          in->trainingCounts->size[1])) {
    if (in->trainingCounts->data[i] != muDoubleScalarFloor(in->
         trainingCounts->data[i])) {
      table[9U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[10U].SimMin;
  localMax = table[10U].SimMax;
  for (i = 0; i < in->labelClassId->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->labelClassId->data[i] < localMin) {
      localMin = in->labelClassId->data[i];
    }

    if (in->labelClassId->data[i] > localMax) {
      localMax = in->labelClassId->data[i];
    }
  }

  table[10U].SimMin = localMin;
  table[10U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[10U].IsAlwaysInteger && (i < in->labelClassId->size[0])) {
    if (in->labelClassId->data[i] != muDoubleScalarFloor(in->labelClassId->
         data[i])) {
      table[10U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[11U].SimMin;
  localMax = table[11U].SimMax;
  for (i = 0; i < in->partitionPoint->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->partitionPoint->data[i] < localMin) {
      localMin = in->partitionPoint->data[i];
    }

    if (in->partitionPoint->data[i] > localMax) {
      localMax = in->partitionPoint->data[i];
    }
  }

  table[11U].SimMin = localMin;
  table[11U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[11U].IsAlwaysInteger && (i < in->partitionPoint->size[0])) {
    if (in->partitionPoint->data[i] != muDoubleScalarFloor(in->
         partitionPoint->data[i])) {
      table[11U].IsAlwaysInteger = false;
    }

    i++;
  }

  localMin = table[12U].SimMin;
  localMax = table[12U].SimMax;
  for (i = 0; i < in->iIn->size[0]; i++) {
    for (b_i = 0; b_i < in->iIn->data[i].inds->size[1]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->iIn->data[i].inds->data[b_i] < localMin) {
        localMin = in->iIn->data[i].inds->data[b_i];
      }

      if (in->iIn->data[i].inds->data[b_i] > localMax) {
        localMax = in->iIn->data[i].inds->data[b_i];
      }
    }
  }

  table[12U].SimMin = localMin;
  table[12U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[12U].IsAlwaysInteger && (i < in->iIn->size[0])) {
    b_i = 0;
    while (table[12U].IsAlwaysInteger && (b_i < in->iIn->data[i].inds->size[1]))
    {
      if (in->iIn->data[i].inds->data[b_i] != muDoubleScalarFloor(in->iIn->
           data[i].inds->data[b_i])) {
        table[12U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }

  localMin = table[13U].SimMin;
  localMax = table[13U].SimMax;
  for (i = 0; i < in->decisionProjection->size[0]; i++) {
    for (b_i = 0; b_i < in->decisionProjection->data[i].phi->size[0]; b_i++) {
      /* Simulation Min-Max logging. */
      if (in->decisionProjection->data[i].phi->data[b_i] < localMin) {
        localMin = in->decisionProjection->data[i].phi->data[b_i];
      }

      if (in->decisionProjection->data[i].phi->data[b_i] > localMax) {
        localMax = in->decisionProjection->data[i].phi->data[b_i];
      }
    }
  }

  table[13U].SimMin = localMin;
  table[13U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[13U].IsAlwaysInteger && (i < in->decisionProjection->size[0])) {
    b_i = 0;
    while (table[13U].IsAlwaysInteger && (b_i < in->decisionProjection->data[i].
            phi->size[0])) {
      if (in->decisionProjection->data[i].phi->data[b_i] != muDoubleScalarFloor
          (in->decisionProjection->data[i].phi->data[b_i])) {
        table[13U].IsAlwaysInteger = false;
      }

      b_i++;
    }

    i++;
  }
}

static void cast(const emlrtStack *sp, struct4_T y[2000])
{
  int32_T j;
  int32_T i68;
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &qb_emlrtECI, sp);
    i68 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i68, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

static void emlrtInitVarDataTables(emlrtLocationLoggingDataType dataTables[613])
{
  int32_T i;
  for (i = 0; i < 613; i++) {
    dataTables[i].SimMin = rtInf;
    dataTables[i].SimMax = rtMinusInf;
    dataTables[i].OverflowWraps = 0;
    dataTables[i].Saturations = 0;
    dataTables[i].IsAlwaysInteger = true;
    dataTables[i].HistogramTable = (emlrtLocationLoggingHistogramType *)NULL;
  }
}

static void emlrt_update_log_26(const emlrtStack *sp, const emxArray_struct2_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_struct2_T *out)
{
  int32_T i53;
  int32_T loop_ub;
  i53 = out->size[0];
  out->size[0] = in->size[0];
  emxEnsureCapacity_struct2_T(sp, out, i53, (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0];
  for (i53 = 0; i53 < loop_ub; i53++) {
    emxCopyStruct_struct2_T(sp, &out->data[i53], &in->data[i53], (emlrtRTEInfo *)
      NULL);
  }

  b_emlrt_update_log_26(out, table);
}

static void emlrt_update_log_27(const emlrtStack *sp, const struct2_T *in,
  emlrtLocationLoggingDataType table[613], struct2_T *out)
{
  emxCopyStruct_struct2_T(sp, out, in, (emlrtRTEInfo *)NULL);
  b_emlrt_update_log_27(out, table);
}

void growManyTreesCompileTest(c_growManyTreesCompileTestStack *SD, const
  emlrtStack *sp, real_T nTrees, const emxArray_real_T *XTrain, const
  emxArray_boolean_T *YTrain, const struct0_T *options, const emxArray_real_T
  *iFeatureNum, emxArray_struct2_T *trees)
{
  emxArray_real_T *b_XTrain;
  emxArray_boolean_T *b_YTrain;
  struct0_T b_options;
  emxArray_real_T *b_iFeatureNum;
  real_T K;
  real_T t4_nodeId[2];
  int32_T i;
  real_T unusedExpr[2];
  boolean_T t4_bExpanded[2];
  boolean_T b_unusedExpr[2];
  int32_T i0;
  real_T c_unusedExpr[2];
  real_T t4_childIds[4];
  real_T d_unusedExpr[4];
  emxArray_real_T *r0;
  real_T e_unusedExpr[2];
  emxArray_real_T *zeroKCol;
  real_T f_unusedExpr[2];
  boolean_T t4_bLeaf[2];
  real_T t4_parentId[2];
  real_T t4_depth[2];
  emxArray_real_T *t4_trainingCounts;
  real_T t4_labelClassId[2];
  real_T t4_partitionPoint[2];
  d_struct_T expl_temp;
  real_T t4_nextChild;
  struct2_T tree;
  boolean_T bv0[2000];
  boolean_T falseCol[2000];
  emxArray_real_T *r1;
  emxArray_real_T *b_zeroKCol;
  emxArray_boolean_T b_falseCol;
  int32_T iv0[1];
  emxArray_real_T stepCol;
  int32_T iv1[1];
  emxArray_boolean_T c_falseCol;
  int32_T iv2[1];
  emxArray_real_T zero2Col;
  int32_T iv3[2];
  emxArray_real_T zeroCol;
  int32_T iv4[1];
  emxArray_real_T b_stepCol;
  int32_T iv5[1];
  emxArray_struct3_T y;
  int32_T iv6[1];
  emxArray_struct4_T r2;
  int32_T iv7[1];
  emxArray_real_T b_zeroCol;
  int32_T iv8[1];
  emxArray_real_T nanCol;
  int32_T iv9[1];
  emxArray_struct4_T r3;
  int32_T iv10[1];
  emxArray_struct5_T b_y;
  int32_T iv11[1];
  emxArray_struct2_T *b_tree;
  int32_T n;
  emxArray_real_T *c_iFeatureNum;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_XTrain, 2, &emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_YTrain, 2, &emlrtRTEI, true);
  emxInitStruct_struct0_T(sp, &b_options, &emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_iFeatureNum, 2, &emlrtRTEI, true);
  emlrtInitVarDataTables(emlrtLocationLoggingDataTables);

  /* logging input variable 'nTrees' for function 'growManyTreesCompileTest' */
  emlrt_update_log_1(nTrees, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[0U]);

  /* logging input variable 'XTrain' for function 'growManyTreesCompileTest' */
  emlrt_update_log_2(sp, XTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[1U], b_XTrain);

  /* logging input variable 'YTrain' for function 'growManyTreesCompileTest' */
  emlrt_update_log_3(sp, YTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[2U], b_YTrain);

  /* logging input variable 'options' for function 'growManyTreesCompileTest' */
  emlrt_update_log_4(sp, options, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[3U], &b_options);

  /* logging input variable 'iFeatureNum' for function 'growManyTreesCompileTest' */
  emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[22U], b_iFeatureNum);
  K = emlrt_update_log_1(muDoubleScalarMax(2.0, YTrain->size[1]),
    *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables[23U]);
  emlrt_update_log_1(2000.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[24U]);
  emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[25U]);
  emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[26U]);
  emlrt_update_log_6(0LL, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[27U]);
  emxFree_real_T(&b_iFeatureNum);
  emxFreeStruct_struct0_T(&b_options);
  emxFree_boolean_T(&b_YTrain);
  emxFree_real_T(&b_XTrain);
  for (i = 0; i < 2; i++) {
    t4_nodeId[i] = 0.0;
  }

  emlrt_update_log_7(t4_nodeId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[28U], unusedExpr);
  for (i = 0; i < 2; i++) {
    t4_bExpanded[i] = false;
  }

  emlrt_update_log_8(t4_bExpanded, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[29U], b_unusedExpr);
  for (i0 = 0; i0 < 2; i0++) {
    t4_nodeId[i0] = 1.0 + (real_T)i0;
  }

  emlrt_update_log_7(t4_nodeId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[30U], c_unusedExpr);
  for (i0 = 0; i0 < 4; i0++) {
    t4_childIds[i0] = 0.0;
  }

  emlrt_update_log_9(t4_childIds, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[31U], d_unusedExpr);
  for (i = 0; i < 2; i++) {
    t4_nodeId[i] = 1.0;
  }

  b_emxInit_real_T(sp, &r0, 2, &emlrtRTEI, true);
  emlrt_update_log_7(t4_nodeId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[32U], e_unusedExpr);
  i0 = r0->size[0] * r0->size[1];
  r0->size[0] = 2;
  r0->size[1] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)r0, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = (int32_T)K << 1;
  for (i0 = 0; i0 < i; i0++) {
    r0->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &zeroKCol, 2, &d_emlrtRTEI, true);
  emlrt_update_log_10(sp, r0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[33U], zeroKCol);
  emxFree_real_T(&r0);
  for (i = 0; i < 2; i++) {
    t4_nodeId[i] = rtNaN;
  }

  emlrt_update_log_7(t4_nodeId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[34U], f_unusedExpr);
  emlrt_update_log_11(0LL, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[35U]);
  emlrt_update_log_12(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[36U]);
  emlrt_update_log_13(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[37U]);
  for (i = 0; i < 2; i++) {
    t4_bExpanded[i] = false;
    t4_nodeId[i] = 1.0 + (real_T)i;
    t4_bLeaf[i] = false;
  }

  for (i0 = 0; i0 < 4; i0++) {
    t4_childIds[i0] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    t4_parentId[i] = 0.0;
    t4_depth[i] = 0.0;
  }

  b_emxInit_real_T(sp, &t4_trainingCounts, 2, &emlrtRTEI, true);
  i0 = t4_trainingCounts->size[0] * t4_trainingCounts->size[1];
  t4_trainingCounts->size[0] = 2;
  t4_trainingCounts->size[1] = zeroKCol->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)t4_trainingCounts, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = zeroKCol->size[0] * zeroKCol->size[1];
  for (i0 = 0; i0 < i; i0++) {
    t4_trainingCounts->data[i0] = zeroKCol->data[i0];
  }

  emxFree_real_T(&zeroKCol);
  for (i = 0; i < 2; i++) {
    t4_labelClassId[i] = 0.0;
    t4_partitionPoint[i] = rtNaN;
  }

  emxInitStruct_struct_T(sp, &expl_temp, &emlrtRTEI, true);
  emlrt_update_log_14(sp, 2.0, t4_bExpanded, t4_nodeId, t4_bLeaf, t4_childIds,
                      t4_parentId, t4_depth, 0LL, 0.0, t4_trainingCounts,
                      t4_labelClassId, t4_partitionPoint, 0.0, 0.0,
                      *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[38U], &expl_temp);
  t4_nextChild = expl_temp.nextChild;
  i0 = t4_trainingCounts->size[0] * t4_trainingCounts->size[1];
  t4_trainingCounts->size[0] = 2;
  t4_trainingCounts->size[1] = expl_temp.trainingCounts->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)t4_trainingCounts, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  i = expl_temp.trainingCounts->size[0] * expl_temp.trainingCounts->size[1];
  for (i0 = 0; i0 < i; i0++) {
    t4_trainingCounts->data[i0] = expl_temp.trainingCounts->data[i0];
  }

  emxFreeStruct_struct_T(&expl_temp);
  emxInitStruct_struct2_T(sp, &tree, &e_emlrtRTEI, true);
  tree.nextChild = t4_nextChild;
  i0 = t4_trainingCounts->size[1];
  emlrtDimSizeGeqCheckFastR2012b(10000, i0, &emlrtECI, sp);
  emxFree_real_T(&t4_trainingCounts);
  memset(&SD->f1.dv0[0], 0, 2000U * sizeof(real_T));
  emlrt_update_log_15(SD->f1.dv0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[52U], SD->f1.zeroCol);
  for (i = 0; i < 2000; i++) {
    bv0[i] = false;
  }

  emlrt_update_log_16(bv0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[53U], falseCol);
  for (i0 = 0; i0 < 2000; i0++) {
    SD->f1.dv1[i0] = 1.0 + (real_T)i0;
  }

  emlrt_update_log_15(SD->f1.dv1, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[54U], SD->f1.stepCol);
  memset(&SD->f1.dv2[0], 0, 4000U * sizeof(real_T));
  emlrt_update_log_17(SD->f1.dv2, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[55U], SD->f1.zero2Col);
  for (i = 0; i < 2000; i++) {
    SD->f1.dv1[i] = 1.0;
  }

  b_emxInit_real_T(sp, &r1, 2, &emlrtRTEI, true);
  emlrt_update_log_15(SD->f1.dv1, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[56U], SD->f1.unusedExpr);
  i0 = r1->size[0] * r1->size[1];
  r1->size[0] = 2000;
  r1->size[1] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)r1, i0, (int32_T)sizeof(real_T),
                    &emlrtRTEI);
  i = 2000 * (int32_T)K;
  for (i0 = 0; i0 < i; i0++) {
    r1->data[i0] = 0.0;
  }

  b_emxInit_real_T(sp, &b_zeroKCol, 2, &d_emlrtRTEI, true);
  emlrt_update_log_18(sp, r1, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[57U], b_zeroKCol);
  emxFree_real_T(&r1);
  for (i = 0; i < 2000; i++) {
    SD->f1.dv1[i] = rtNaN;
  }

  emlrt_update_log_15(SD->f1.dv1, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[58U], SD->f1.nanCol);
  b_falseCol.numDimensions = 1;
  iv0[0] = 2000;
  b_falseCol.size = (int32_T *)&iv0;
  b_falseCol.allocatedSize = 2000;
  b_falseCol.data = (boolean_T *)&falseCol;
  emlrt_update_log_19(sp, &b_falseCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[59U], tree.bExpanded);
  stepCol.numDimensions = 1;
  iv1[0] = 2000;
  stepCol.size = (int32_T *)&iv1;
  stepCol.allocatedSize = 2000;
  stepCol.data = (real_T *)&SD->f1.stepCol;
  emlrt_update_log_20(sp, &stepCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[60U], tree.nodeId);
  c_falseCol.numDimensions = 1;
  iv2[0] = 2000;
  c_falseCol.size = (int32_T *)&iv2;
  c_falseCol.allocatedSize = 2000;
  c_falseCol.data = (boolean_T *)&falseCol;
  emlrt_update_log_19(sp, &c_falseCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[61U], tree.bLeaf);
  zero2Col.numDimensions = 2;
  iv3[0] = 2000;
  iv3[1] = 2;
  zero2Col.size = (int32_T *)&iv3;
  zero2Col.allocatedSize = 4000;
  zero2Col.data = (real_T *)&SD->f1.zero2Col;
  emlrt_update_log_21(sp, &zero2Col, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[62U], tree.childIds);
  zeroCol.numDimensions = 1;
  iv4[0] = 2000;
  zeroCol.size = (int32_T *)&iv4;
  zeroCol.allocatedSize = 2000;
  zeroCol.data = (real_T *)&SD->f1.zeroCol;
  emlrt_update_log_20(sp, &zeroCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[63U], tree.parentId);
  memset(&SD->f1.dv3[0], 0, 2000U * sizeof(real_T));
  emxInitMatrix_struct3_T(sp, SD->f1.y, &emlrtRTEI, true);
  emlrt_update_log_15(SD->f1.dv3, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[65U], SD->f1.stepCol);
  b_stepCol.numDimensions = 1;
  iv5[0] = 2000;
  b_stepCol.size = (int32_T *)&iv5;
  b_stepCol.allocatedSize = 2000;
  b_stepCol.data = (real_T *)&SD->f1.stepCol;
  emlrt_update_log_20(sp, &b_stepCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[64U], tree.depth);
  for (i = 0; i < 2000; i++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &b_emlrtECI, sp);
    i0 = SD->f1.y[i].inds->size[0] * SD->f1.y[i].inds->size[1];
    SD->f1.y[i].inds->size[0] = 1;
    SD->f1.y[i].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)SD->f1.y[i].inds, i0, (int32_T)
                      sizeof(int64_T), &b_emlrtRTEI);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxInitMatrix_struct5_T(sp, SD->f1.b_y, &emlrtRTEI, true);
  emxInitMatrix_struct4_T(sp, SD->f1.rv0, &emlrtRTEI, true);
  y.numDimensions = 1;
  iv6[0] = 2000;
  y.size = (int32_T *)&iv6;
  y.allocatedSize = 2000;
  y.data = (struct3_T *)&SD->f1.y;
  emlrt_update_log_22(sp, &y, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[66U], tree.iPresent);
  cast(sp, SD->f1.rv0);
  r2.numDimensions = 1;
  iv7[0] = 2000;
  r2.size = (int32_T *)&iv7;
  r2.allocatedSize = 2000;
  r2.data = (struct4_T *)&SD->f1.rv0;
  emlrt_update_log_23(sp, &r2, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[67U], tree.iFeatNum);
  emlrt_update_log_24(sp, b_zeroKCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[68U], tree.trainingCounts);
  b_zeroCol.numDimensions = 1;
  iv8[0] = 2000;
  b_zeroCol.size = (int32_T *)&iv8;
  b_zeroCol.allocatedSize = 2000;
  b_zeroCol.data = (real_T *)&SD->f1.zeroCol;
  emlrt_update_log_20(sp, &b_zeroCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[69U], tree.labelClassId);
  nanCol.numDimensions = 1;
  iv9[0] = 2000;
  nanCol.size = (int32_T *)&iv9;
  nanCol.allocatedSize = 2000;
  nanCol.data = (real_T *)&SD->f1.nanCol;
  emlrt_update_log_20(sp, &nanCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[70U], tree.partitionPoint);
  cast(sp, SD->f1.rv0);
  r3.numDimensions = 1;
  iv10[0] = 2000;
  r3.size = (int32_T *)&iv10;
  r3.allocatedSize = 2000;
  r3.data = (struct4_T *)&SD->f1.rv0;
  emlrt_update_log_23(sp, &r3, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[71U], tree.iIn);
  emxFreeMatrix_struct4_T(SD->f1.rv0);
  emxFreeMatrix_struct3_T(SD->f1.y);
  emxFree_real_T(&b_zeroKCol);
  for (i = 0; i < 2000; i++) {
    i0 = SD->f1.b_y[i].phi->size[0];
    SD->f1.b_y[i].phi->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)SD->f1.b_y[i].phi, i0, (int32_T)
                      sizeof(real_T), &c_emlrtRTEI);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  b_y.numDimensions = 1;
  iv11[0] = 2000;
  b_y.size = (int32_T *)&iv11;
  b_y.allocatedSize = 2000;
  b_y.data = (struct5_T *)&SD->f1.b_y;
  emlrt_update_log_25(sp, &b_y, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[72U],
                      tree.decisionProjection);
  st.site = &emlrtRSI;
  b_st.site = &c_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, nTrees);
  emlrtNonNegativeCheckFastR2012b(nTrees, &b_emlrtDCI, &st);
  emxFreeMatrix_struct5_T(SD->f1.b_y);
  emxInit_struct2_T(&st, &b_tree, 1, &emlrtRTEI, true);
  i0 = b_tree->size[0];
  b_tree->size[0] = (int32_T)nTrees;
  emxEnsureCapacity_struct2_T(sp, b_tree, i0, &emlrtRTEI);
  i = (int32_T)nTrees;
  for (i0 = 0; i0 < i; i0++) {
    emxCopyStruct_struct2_T(sp, &b_tree->data[i0], &tree, &emlrtRTEI);
  }

  emlrt_update_log_26(sp, b_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[73U], trees);
  emlrtIntegerCheckFastR2012b(nTrees, &emlrtDCI, sp);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, nTrees, mxDOUBLE_CLASS, (int32_T)
    nTrees, &je_emlrtRTEI, sp);
  n = 0;
  emxFree_struct2_T(&b_tree);
  b_emxInit_real_T(sp, &c_iFeatureNum, 2, &emlrtRTEI, true);
  while (n <= (int32_T)nTrees - 1) {
    K = emlrt_update_log_1(1.0 + (real_T)n, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[101U]);
    i0 = c_iFeatureNum->size[0] * c_iFeatureNum->size[1];
    c_iFeatureNum->size[0] = 1;
    c_iFeatureNum->size[1] = iFeatureNum->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_iFeatureNum, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    i = iFeatureNum->size[0] * iFeatureNum->size[1];
    for (i0 = 0; i0 < i; i0++) {
      c_iFeatureNum->data[i0] = iFeatureNum->data[i0];
    }

    st.site = &b_emlrtRSI;
    growCCTnotRecursive(SD, &st, XTrain, YTrain, options, c_iFeatureNum, &tree);
    i0 = trees->size[0];
    i = (int32_T)K;
    emlrt_update_log_27(sp, &tree, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[87U], &trees->
                        data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i0,
      &emlrtBCI, sp) - 1]);
    n++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&c_iFeatureNum);
  emxFreeStruct_struct2_T(&tree);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (growManyTreesCompileTest.c) */
