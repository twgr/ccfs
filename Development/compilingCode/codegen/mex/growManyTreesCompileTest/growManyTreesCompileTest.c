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
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 57, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtRSInfo b_emlrtRSI = { 61, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtRTEInfo emlrtRTEI = { 1, 18, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtRTEInfo b_emlrtRTEI = { 49, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtRTEInfo c_emlrtRTEI = { 55, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtRTEInfo d_emlrtRTEI = { 21, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtDCInfo emlrtDCI = { 60, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m",
  1 };

static emlrtRTEInfo wd_emlrtRTEI = { 60, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtECInfo emlrtECI = { 2, 21, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtECInfo b_emlrtECI = { 1, 49, 1, "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m"
};

static emlrtDCInfo b_emlrtDCI = { 15, 14, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m",
  4 };

static emlrtBCInfo emlrtBCI = { -1, -1, 61, 5, "trees",
  "growManyTreesCompileTest",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growManyTreesCompileTest.m",
  0 };

/* Function Declarations */
static void cast(const emlrtStack *sp, struct4_T y[2000]);

/* Function Definitions */
static void cast(const emlrtStack *sp, struct4_T y[2000])
{
  int32_T j;
  int32_T i37;
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &qb_emlrtECI, sp);
    i37 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i37, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

void growManyTreesCompileTest(c_growManyTreesCompileTestStack *SD, const
  emlrtStack *sp, real_T nTrees, const emxArray_real_T *XTrain, const
  emxArray_boolean_T *YTrain, const struct0_T *options, const emxArray_real_T
  *iFeatureNum, emxArray_struct2_T *trees)
{
  struct2_T tree;
  int32_T K;
  int32_T i0;
  struct3_T y[2000];
  int32_T j;
  struct4_T rv0[2000];
  struct5_T b_y[2000];
  emxArray_real_T *b_iFeatureNum;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInitStruct_struct2_T(sp, &tree, &d_emlrtRTEI, true);
  K = (int32_T)muDoubleScalarMax(2.0, YTrain->size[1]);
  tree.nextChild = 2.0;
  emlrtDimSizeGeqCheckFastR2012b(10000, K, &emlrtECI, sp);
  i0 = tree.bExpanded->size[0];
  tree.bExpanded->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.bExpanded, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.bExpanded->data[i0] = false;
  }

  i0 = tree.nodeId->size[0];
  tree.nodeId->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.nodeId, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.nodeId->data[i0] = 1.0 + (real_T)i0;
  }

  i0 = tree.bLeaf->size[0];
  tree.bLeaf->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.bLeaf, i0, (int32_T)sizeof
                    (boolean_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.bLeaf->data[i0] = false;
  }

  i0 = tree.childIds->size[0] * tree.childIds->size[1];
  tree.childIds->size[0] = 2000;
  tree.childIds->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)tree.childIds, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 4000; i0++) {
    tree.childIds->data[i0] = 0.0;
  }

  i0 = tree.parentId->size[0];
  tree.parentId->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.parentId, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.parentId->data[i0] = 0.0;
  }

  i0 = tree.depth->size[0];
  tree.depth->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.depth, i0, (int32_T)sizeof
                    (real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.depth->data[i0] = 0.0;
  }

  emxInitMatrix_struct3_T(sp, y, &emlrtRTEI, true);
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &b_emlrtECI, sp);
    i0 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i0, (int32_T)sizeof
                      (int64_T), &b_emlrtRTEI);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  i0 = tree.iPresent->size[0];
  tree.iPresent->size[0] = 2000;
  emxEnsureCapacity_struct3_T(sp, tree.iPresent, i0, &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct3_T(sp, &tree.iPresent->data[i0], &y[i0], &emlrtRTEI);
  }

  emxFreeMatrix_struct3_T(y);
  emxInitMatrix_struct4_T(sp, rv0, &emlrtRTEI, true);
  cast(sp, rv0);
  i0 = tree.iFeatNum->size[0];
  tree.iFeatNum->size[0] = 2000;
  emxEnsureCapacity_struct4_T(sp, tree.iFeatNum, i0, &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct4_T(sp, &tree.iFeatNum->data[i0], &rv0[i0], &emlrtRTEI);
  }

  i0 = tree.trainingCounts->size[0] * tree.trainingCounts->size[1];
  tree.trainingCounts->size[0] = 2000;
  tree.trainingCounts->size[1] = K;
  emxEnsureCapacity(sp, (emxArray__common *)tree.trainingCounts, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  K *= 2000;
  for (i0 = 0; i0 < K; i0++) {
    tree.trainingCounts->data[i0] = 0.0;
  }

  i0 = tree.labelClassId->size[0];
  tree.labelClassId->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.labelClassId, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.labelClassId->data[i0] = 0.0;
  }

  i0 = tree.partitionPoint->size[0];
  tree.partitionPoint->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree.partitionPoint, i0, (int32_T)
                    sizeof(real_T), &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    tree.partitionPoint->data[i0] = rtNaN;
  }

  cast(sp, rv0);
  i0 = tree.iIn->size[0];
  tree.iIn->size[0] = 2000;
  emxEnsureCapacity_struct4_T(sp, tree.iIn, i0, &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct4_T(sp, &tree.iIn->data[i0], &rv0[i0], &emlrtRTEI);
  }

  emxFreeMatrix_struct4_T(rv0);
  emxInitMatrix_struct5_T(sp, b_y, &emlrtRTEI, true);
  for (j = 0; j < 2000; j++) {
    i0 = b_y[j].phi->size[0];
    b_y[j].phi->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)b_y[j].phi, i0, (int32_T)sizeof
                      (real_T), &c_emlrtRTEI);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  i0 = tree.decisionProjection->size[0];
  tree.decisionProjection->size[0] = 2000;
  emxEnsureCapacity_struct5_T(sp, tree.decisionProjection, i0, &emlrtRTEI);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct5_T(sp, &tree.decisionProjection->data[i0], &b_y[i0],
      &emlrtRTEI);
  }

  emxFreeMatrix_struct5_T(b_y);
  st.site = &emlrtRSI;
  b_st.site = &c_emlrtRSI;
  eml_assert_valid_size_arg(&b_st, nTrees);
  emlrtNonNegativeCheckFastR2012b(nTrees, &b_emlrtDCI, &st);
  i0 = trees->size[0];
  trees->size[0] = (int32_T)nTrees;
  emxEnsureCapacity_struct2_T(&st, trees, i0, &emlrtRTEI);
  K = (int32_T)nTrees;
  for (i0 = 0; i0 < K; i0++) {
    emxCopyStruct_struct2_T(&st, &trees->data[i0], &tree, &emlrtRTEI);
  }

  emxFreeStruct_struct2_T(&tree);
  emlrtIntegerCheckFastR2012b(nTrees, &emlrtDCI, sp);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, nTrees, mxDOUBLE_CLASS, (int32_T)
    nTrees, &wd_emlrtRTEI, sp);
  j = 1;
  emxInit_real_T(sp, &b_iFeatureNum, 2, &emlrtRTEI, true);
  while (j - 1 <= (int32_T)nTrees - 1) {
    i0 = b_iFeatureNum->size[0] * b_iFeatureNum->size[1];
    b_iFeatureNum->size[0] = 1;
    b_iFeatureNum->size[1] = iFeatureNum->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_iFeatureNum, i0, (int32_T)sizeof
                      (real_T), &emlrtRTEI);
    K = iFeatureNum->size[0] * iFeatureNum->size[1];
    for (i0 = 0; i0 < K; i0++) {
      b_iFeatureNum->data[i0] = iFeatureNum->data[i0];
    }

    i0 = trees->size[0];
    st.site = &b_emlrtRSI;
    growCCTnotRecursive(SD, &st, XTrain, YTrain, options->bProjBoot,
                        options->lambda, options->splitCriterion.data,
                        options->splitCriterion.size, options->minPointsForSplit,
                        options->dirIfEqual.data, options->dirIfEqual.size,
                        options->bContinueProjBootDegenerate,
                        options->epsilonCCA, options->includeOriginalAxes,
                        options->maxDepthSplit, options->XVariationTol,
                        b_iFeatureNum, &trees->
                        data[emlrtDynamicBoundsCheckFastR2012b(j, 1, i0,
      &emlrtBCI, sp) - 1]);
    j++;
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  emxFree_real_T(&b_iFeatureNum);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (growManyTreesCompileTest.c) */
