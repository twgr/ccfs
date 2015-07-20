/*
 * File: growManyTreesCompileTest.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_rand.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "growCCTnotRecursive.h"

/* Variable Definitions */
static int threadID;

#pragma omp threadprivate (threadID)

/* Function Declarations */
static void cast(struct4_T y[2000]);

/* Function Definitions */

/*
 * Arguments    : struct4_T y[2000]
 * Return Type  : void
 */
static void cast(struct4_T y[2000])
{
  int j;
  int i29;
  for (j = 0; j < 2000; j++) {
    i29 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)y[j].inds, i29, (int)sizeof(double));
  }
}

/*
 * Arguments    : void
 * Return Type  : int
 */
int getThreadID(void)
{
  return threadID;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void getThreadID_init(void)
{
  int ub_loop;
  int i;
  ub_loop = omp_get_max_threads();

#pragma omp parallel for schedule(static)\
 num_threads(omp_get_max_threads())

  for (i = 1; i <= ub_loop; i++) {
    threadID = omp_get_thread_num();
  }
}

/*
 * Arguments    : double nTrees
 *                const emxArray_real_T *XTrain
 *                const emxArray_boolean_T *YTrain
 *                const struct0_T *options
 *                const emxArray_real_T *iFeatureNum
 *                emxArray_struct2_T *trees
 * Return Type  : void
 */
void growManyTreesCompileTest(double nTrees, const emxArray_real_T *XTrain,
  const emxArray_boolean_T *YTrain, const struct0_T *options, const
  emxArray_real_T *iFeatureNum, emxArray_struct2_T *trees)
{
  int K;
  struct2_T tree;
  int i0;
  struct3_T y[2000];
  int j;
  struct4_T rv0[2000];
  struct5_T b_y[2000];
  int n;
  emxArray_real_T *b_iFeatureNum;
  int i1;
  int loop_ub;
  if (2 >= YTrain->size[1]) {
    K = 2;
  } else {
    K = YTrain->size[1];
  }

  emxInitStruct_struct2_T(&tree);
  tree.nextChild = 2.0;
  i0 = tree.bExpanded->size[0];
  tree.bExpanded->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.bExpanded, i0, (int)sizeof
                    (boolean_T));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.bExpanded->data[i0] = false;
  }

  i0 = tree.nodeId->size[0];
  tree.nodeId->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.nodeId, i0, (int)sizeof(double));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.nodeId->data[i0] = 1.0 + (double)i0;
  }

  i0 = tree.bLeaf->size[0];
  tree.bLeaf->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.bLeaf, i0, (int)sizeof(boolean_T));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.bLeaf->data[i0] = false;
  }

  i0 = tree.childIds->size[0] * tree.childIds->size[1];
  tree.childIds->size[0] = 2000;
  tree.childIds->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)tree.childIds, i0, (int)sizeof(double));
  for (i0 = 0; i0 < 4000; i0++) {
    tree.childIds->data[i0] = 0.0;
  }

  i0 = tree.parentId->size[0];
  tree.parentId->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.parentId, i0, (int)sizeof(double));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.parentId->data[i0] = 0.0;
  }

  i0 = tree.depth->size[0];
  tree.depth->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.depth, i0, (int)sizeof(double));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.depth->data[i0] = 0.0;
  }

  emxInitMatrix_struct3_T(y);
  for (j = 0; j < 2000; j++) {
    i0 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)y[j].inds, i0, (int)sizeof(long long));
  }

  i0 = tree.iPresent->size[0];
  tree.iPresent->size[0] = 2000;
  emxEnsureCapacity_struct3_T(tree.iPresent, i0);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct3_T(&tree.iPresent->data[i0], &y[i0]);
  }

  emxFreeMatrix_struct3_T(y);
  emxInitMatrix_struct4_T(rv0);
  cast(rv0);
  i0 = tree.iFeatNum->size[0];
  tree.iFeatNum->size[0] = 2000;
  emxEnsureCapacity_struct4_T(tree.iFeatNum, i0);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct4_T(&tree.iFeatNum->data[i0], &rv0[i0]);
  }

  i0 = tree.trainingCounts->size[0] * tree.trainingCounts->size[1];
  tree.trainingCounts->size[0] = 2000;
  tree.trainingCounts->size[1] = K;
  emxEnsureCapacity((emxArray__common *)tree.trainingCounts, i0, (int)sizeof
                    (double));
  K *= 2000;
  for (i0 = 0; i0 < K; i0++) {
    tree.trainingCounts->data[i0] = 0.0;
  }

  i0 = tree.labelClassId->size[0];
  tree.labelClassId->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.labelClassId, i0, (int)sizeof
                    (double));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.labelClassId->data[i0] = 0.0;
  }

  i0 = tree.partitionPoint->size[0];
  tree.partitionPoint->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree.partitionPoint, i0, (int)sizeof
                    (double));
  for (i0 = 0; i0 < 2000; i0++) {
    tree.partitionPoint->data[i0] = rtNaN;
  }

  cast(rv0);
  i0 = tree.iIn->size[0];
  tree.iIn->size[0] = 2000;
  emxEnsureCapacity_struct4_T(tree.iIn, i0);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct4_T(&tree.iIn->data[i0], &rv0[i0]);
  }

  emxFreeMatrix_struct4_T(rv0);
  emxInitMatrix_struct5_T(b_y);
  for (j = 0; j < 2000; j++) {
    i0 = b_y[j].phi->size[0];
    b_y[j].phi->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)b_y[j].phi, i0, (int)sizeof(double));
  }

  i0 = tree.decisionProjection->size[0];
  tree.decisionProjection->size[0] = 2000;
  emxEnsureCapacity_struct5_T(tree.decisionProjection, i0);
  for (i0 = 0; i0 < 2000; i0++) {
    emxCopyStruct_struct5_T(&tree.decisionProjection->data[i0], &b_y[i0]);
  }

  emxFreeMatrix_struct5_T(b_y);
  i0 = trees->size[0];
  trees->size[0] = (int)nTrees;
  emxEnsureCapacity_struct2_T(trees, i0);
  K = (int)nTrees;
  for (i0 = 0; i0 < K; i0++) {
    emxCopyStruct_struct2_T(&trees->data[i0], &tree);
  }

  emxFreeStruct_struct2_T(&tree);
  K = (int)nTrees - 1;
  if (!omp_in_parallel()) {
    c_eml_rand_mt19937ar_stateful_s(true);
    eml_rand_swap();
  }

#pragma omp parallel \
 num_threads(omp_get_max_threads()) \
 private(b_iFeatureNum,i1,loop_ub)

  {
    emxInit_real_T(&b_iFeatureNum, 2);

#pragma omp for nowait

    for (n = 0; n <= K; n++) {
      i1 = b_iFeatureNum->size[0] * b_iFeatureNum->size[1];
      b_iFeatureNum->size[0] = 1;
      b_iFeatureNum->size[1] = iFeatureNum->size[1];
      emxEnsureCapacity((emxArray__common *)b_iFeatureNum, i1, (int)sizeof
                        (double));
      loop_ub = iFeatureNum->size[0] * iFeatureNum->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_iFeatureNum->data[i1] = iFeatureNum->data[i1];
      }

      growCCTnotRecursive(XTrain, YTrain, options->bProjBoot, options->lambda,
                          options->splitCriterion.data,
                          options->splitCriterion.size,
                          options->minPointsForSplit, options->dirIfEqual.data,
                          options->dirIfEqual.size,
                          options->bContinueProjBootDegenerate,
                          options->epsilonCCA, options->includeOriginalAxes,
                          options->maxDepthSplit, options->XVariationTol,
                          b_iFeatureNum, &trees->data[n]);
    }

    emxFree_real_T(&b_iFeatureNum);
  }

  if (!omp_in_parallel()) {
    c_eml_rand_mt19937ar_stateful_s(false);
    eml_rand_swap();
  }
}

/*
 * File trailer for growManyTreesCompileTest.c
 *
 * [EOF]
 */
