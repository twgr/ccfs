/*
 * File: growCCTnotRecursive.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "all.h"
#include "rand.h"
#include "sum.h"
#include "expandNode.h"
#include "growManyTreesCompileTest_rtwutil.h"

/* Function Declarations */
static void b_cast(struct4_T y[2000]);
static void c_cast(struct3_T y[2000]);

/* Function Definitions */

/*
 * Arguments    : struct4_T y[2000]
 * Return Type  : void
 */
static void b_cast(struct4_T y[2000])
{
  int j;
  int i30;
  for (j = 0; j < 2000; j++) {
    i30 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)y[j].inds, i30, (int)sizeof(double));
  }
}

/*
 * Arguments    : struct3_T y[2000]
 * Return Type  : void
 */
static void c_cast(struct3_T y[2000])
{
  int j;
  int i31;
  for (j = 0; j < 2000; j++) {
    i31 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)y[j].inds, i31, (int)sizeof(long long));
  }
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_int32_T *y
 * Return Type  : void
 */
void c_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int n;
  int k;
  int i;
  int j;
  n = x->size[0] * x->size[1];
  k = 0;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(int));
  j = 0;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_int32_T *y
 * Return Type  : void
 */
void eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int k;
  int i;
  int j;
  k = 0;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(int));
  j = 0;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

/*
 * growTree grows a CCT, recursively calling itself until leaves are reached
 *
 *  function CCT = growCCT(XTrain,YTrain,options,iFeatureNum,depth)
 *
 *  Function applies greedy splitting according to the CCT algorithm and the
 *  provided options structure.  This is equivalent to alogrithm 2 in the
 *  paper if the options structure is default.  Algorithm either returns a
 *  leaf or forms an internal splitting node in which case the function
 *  recursively calls itself for each of the children.
 *
 *  Inputs:
 *     XTrain      = Array giving training features.  Data should be
 *                   processed using processInputData before being passed to
 *                   CCT
 *     YTrain      = Class data formatted as per output of classExpansion
 *     options     = Options class of type optionsClassCCT.  Some fields are
 *                   updated during recursion
 *     iFeatureNum = Grouping of features as per processInputData.  During
 *                   recursion if a feature is found to be identical across
 *                   data points, the corresponding values in iFeatureNum are
 *                   replaced with NaNs.
 *     depth       = Current tree depth (zero based)
 *
 *  Outputs
 *    tree         = Structure containing learnt tree.  Prediction can be
 *                   made using predictFromCCT
 *
 *  TR 22/06/15
 * Arguments    : const emxArray_real_T *XTrain
 *                const emxArray_boolean_T *YTrain
 *                boolean_T options_bProjBoot
 *                double options_lambda
 *                const char options_splitCriterion_data[]
 *                const int options_splitCriterion_size[2]
 *                double options_minPointsForSplit
 *                const char options_dirIfEqual_data[]
 *                const int options_dirIfEqual_size[2]
 *                boolean_T c_options_bContinueProjBootDege
 *                double options_epsilonCCA
 *                boolean_T options_includeOriginalAxes
 *                double options_maxDepthSplit
 *                double options_XVariationTol
 *                emxArray_real_T *iFeatureNum
 *                struct2_T *tree
 * Return Type  : void
 */
void growCCTnotRecursive(const emxArray_real_T *XTrain, const emxArray_boolean_T
  *YTrain, boolean_T options_bProjBoot, double options_lambda, const char
  options_splitCriterion_data[], const int options_splitCriterion_size[2],
  double options_minPointsForSplit, const char options_dirIfEqual_data[], const
  int options_dirIfEqual_size[2], boolean_T c_options_bContinueProjBootDege,
  double options_epsilonCCA, boolean_T options_includeOriginalAxes, double
  options_maxDepthSplit, double options_XVariationTol, emxArray_real_T
  *iFeatureNum, struct2_T *tree)
{
  int K;
  int i2;
  struct3_T rv1[2000];
  struct4_T rv2[2000];
  int absb;
  struct5_T y[2000];
  struct4_T b_tree;
  struct4_T c_tree;
  int cdiff;
  int apnd;
  emxArray_real_T *b_y;
  int k;
  struct3_T d_tree;
  struct3_T e_tree;
  double fi;
  long long i3;
  boolean_T bComplete;
  double maxIter;
  emxArray_real_T *countsAdd;
  emxArray_boolean_T *bLessThanTrain;
  emxArray_real_T *projMat;
  emxArray_real_T *countsNode;
  emxArray_int32_T *r0;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_boolean_T *f_tree;
  emxArray_boolean_T *b_bLessThanTrain;
  emxArray_real_T *b_XTrain;
  emxArray_boolean_T *b_YTrain;
  emxArray_real_T *g_tree;
  emxArray_real_T *h_tree;
  emxArray_real_T *i_tree;
  emxArray_real_T *j_tree;
  emxArray_real_T *k_tree;
  struct3_T l_tree;
  struct3_T m_tree;
  struct3_T n_tree;
  struct3_T o_tree;
  struct3_T p_tree;
  struct3_T q_tree;
  struct4_T r_tree;
  struct4_T s_tree;
  struct4_T t_tree;
  struct4_T u_tree;
  struct4_T v_tree;
  struct4_T w_tree;
  struct4_T x_tree;
  struct4_T y_tree;
  emxArray_int32_T *b_ii;
  struct3_T ab_tree;
  struct3_T bb_tree;
  struct4_T cb_tree;
  struct4_T db_tree;
  emxArray_int32_T *c_ii;
  boolean_T exitg1;
  int ii_data[1];
  boolean_T exitg8;
  int b_ii_data[1];
  int iCalcVarSize_data[1];
  int partitionPoint_size[2];
  double partitionPoint_data[1];
  boolean_T bLeaf;
  boolean_T exitg7;
  int bEqualMaxCounts_size[2];
  boolean_T bEqualMaxCounts_data[10000];
  double idRecursion;
  boolean_T exitg4;
  boolean_T exitg5;
  boolean_T guard2 = false;
  double childIds[2];
  emxArray_boolean_T b_bEqualMaxCounts_data;
  int tmp_data[10000];
  emxArray_boolean_T c_bEqualMaxCounts_data;
  emxArray_boolean_T d_bEqualMaxCounts_data;
  boolean_T exitg6;
  boolean_T exitg3;
  boolean_T guard1 = false;
  boolean_T exitg2;
  emxArray_real_T *eb_tree;
  emxArray_boolean_T *fb_tree;
  emxArray_real_T *gb_tree;
  emxArray_real_T *hb_tree;
  emxArray_real_T *ib_tree;
  emxArray_real_T *jb_tree;
  emxArray_real_T *kb_tree;
  emxArray_real_T *lb_tree;
  emxArray_struct4_T *mb_tree;
  emxArray_struct5_T *nb_tree;

  /* % First do checks for whether we should immediately terminate */
  if (2 >= YTrain->size[1]) {
    K = 2;
  } else {
    K = YTrain->size[1];
  }

  tree->nextChild = 2.0;
  i2 = tree->bExpanded->size[0];
  tree->bExpanded->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->bExpanded, i2, (int)sizeof
                    (boolean_T));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->bExpanded->data[i2] = false;
  }

  i2 = tree->nodeId->size[0];
  tree->nodeId->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->nodeId, i2, (int)sizeof(double));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->nodeId->data[i2] = 1.0 + (double)i2;
  }

  i2 = tree->bLeaf->size[0];
  tree->bLeaf->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->bLeaf, i2, (int)sizeof(boolean_T));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->bLeaf->data[i2] = false;
  }

  i2 = tree->childIds->size[0] * tree->childIds->size[1];
  tree->childIds->size[0] = 2000;
  tree->childIds->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)tree->childIds, i2, (int)sizeof(double));
  for (i2 = 0; i2 < 4000; i2++) {
    tree->childIds->data[i2] = 0.0;
  }

  i2 = tree->parentId->size[0];
  tree->parentId->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->parentId, i2, (int)sizeof(double));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->parentId->data[i2] = 0.0;
  }

  i2 = tree->depth->size[0];
  tree->depth->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->depth, i2, (int)sizeof(double));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->depth->data[i2] = 0.0;
  }

  emxInitMatrix_struct3_T(rv1);
  c_cast(rv1);
  i2 = tree->iPresent->size[0];
  tree->iPresent->size[0] = 2000;
  emxEnsureCapacity_struct3_T(tree->iPresent, i2);
  for (i2 = 0; i2 < 2000; i2++) {
    emxCopyStruct_struct3_T(&tree->iPresent->data[i2], &rv1[i2]);
  }

  emxInitMatrix_struct4_T(rv2);
  b_cast(rv2);
  i2 = tree->iFeatNum->size[0];
  tree->iFeatNum->size[0] = 2000;
  emxEnsureCapacity_struct4_T(tree->iFeatNum, i2);
  for (i2 = 0; i2 < 2000; i2++) {
    emxCopyStruct_struct4_T(&tree->iFeatNum->data[i2], &rv2[i2]);
  }

  i2 = tree->trainingCounts->size[0] * tree->trainingCounts->size[1];
  tree->trainingCounts->size[0] = 2000;
  tree->trainingCounts->size[1] = K;
  emxEnsureCapacity((emxArray__common *)tree->trainingCounts, i2, (int)sizeof
                    (double));
  absb = 2000 * K;
  for (i2 = 0; i2 < absb; i2++) {
    tree->trainingCounts->data[i2] = 0.0;
  }

  i2 = tree->labelClassId->size[0];
  tree->labelClassId->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->labelClassId, i2, (int)sizeof
                    (double));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->labelClassId->data[i2] = 0.0;
  }

  i2 = tree->partitionPoint->size[0];
  tree->partitionPoint->size[0] = 2000;
  emxEnsureCapacity((emxArray__common *)tree->partitionPoint, i2, (int)sizeof
                    (double));
  for (i2 = 0; i2 < 2000; i2++) {
    tree->partitionPoint->data[i2] = rtNaN;
  }

  b_cast(rv2);
  i2 = tree->iIn->size[0];
  tree->iIn->size[0] = 2000;
  emxEnsureCapacity_struct4_T(tree->iIn, i2);
  for (i2 = 0; i2 < 2000; i2++) {
    emxCopyStruct_struct4_T(&tree->iIn->data[i2], &rv2[i2]);
  }

  emxInitMatrix_struct5_T(y);
  for (K = 0; K < 2000; K++) {
    i2 = y[K].phi->size[0];
    y[K].phi->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)y[K].phi, i2, (int)sizeof(double));
  }

  i2 = tree->decisionProjection->size[0];
  tree->decisionProjection->size[0] = 2000;
  emxEnsureCapacity_struct5_T(tree->decisionProjection, i2);
  for (i2 = 0; i2 < 2000; i2++) {
    emxCopyStruct_struct5_T(&tree->decisionProjection->data[i2], &y[i2]);
  }

  emxInitStruct_struct4_T(&b_tree);
  emxInitStruct_struct4_T(&c_tree);
  i2 = tree->iFeatNum->data[0].inds->size[0] * tree->iFeatNum->data[0]
    .inds->size[1];
  tree->iFeatNum->data[0].inds->size[0] = 1;
  tree->iFeatNum->data[0].inds->size[1] = iFeatureNum->size[1];
  emxEnsureCapacity((emxArray__common *)tree->iFeatNum->data[0].inds, i2, (int)
                    sizeof(double));
  emxCopyStruct_struct4_T(&b_tree, &tree->iFeatNum->data[0]);
  emxCopyStruct_struct4_T(&c_tree, &tree->iFeatNum->data[0]);
  absb = iFeatureNum->size[0] * iFeatureNum->size[1];
  emxFreeStruct_struct4_T(&c_tree);
  emxFreeStruct_struct4_T(&b_tree);
  for (i2 = 0; i2 < absb; i2++) {
    tree->iFeatNum->data[0].inds->data[i2] = iFeatureNum->data[i2];
  }

  if (XTrain->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    K = (int)floor(((double)XTrain->size[0] - 1.0) + 0.5);
    apnd = K + 1;
    cdiff = (K - XTrain->size[0]) + 1;
    absb = XTrain->size[0];
    if (fabs(cdiff) < 4.4408920985006262E-16 * (double)absb) {
      K++;
      apnd = XTrain->size[0];
    } else if (cdiff > 0) {
      apnd = K;
    } else {
      K++;
    }

    cdiff = K - 1;
  }

  emxInit_real_T(&b_y, 2);
  i2 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = cdiff + 1;
  emxEnsureCapacity((emxArray__common *)b_y, i2, (int)sizeof(double));
  if (cdiff + 1 > 0) {
    b_y->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      b_y->data[cdiff] = apnd;
      K = cdiff / 2;
      for (k = 1; k < K; k++) {
        b_y->data[k] = 1.0 + (double)k;
        b_y->data[cdiff - k] = apnd - k;
      }

      if (K << 1 == cdiff) {
        b_y->data[K] = (1.0 + (double)apnd) / 2.0;
      } else {
        b_y->data[K] = 1.0 + (double)K;
        b_y->data[K + 1] = apnd - K;
      }
    }
  }

  emxInitStruct_struct3_T(&d_tree);
  emxInitStruct_struct3_T(&e_tree);
  i2 = tree->iPresent->data[0].inds->size[0] * tree->iPresent->data[0]
    .inds->size[1];
  tree->iPresent->data[0].inds->size[0] = 1;
  tree->iPresent->data[0].inds->size[1] = b_y->size[1];
  emxEnsureCapacity((emxArray__common *)tree->iPresent->data[0].inds, i2, (int)
                    sizeof(long long));
  emxCopyStruct_struct3_T(&d_tree, &tree->iPresent->data[0]);
  emxCopyStruct_struct3_T(&e_tree, &tree->iPresent->data[0]);
  absb = b_y->size[0] * b_y->size[1];
  emxFreeStruct_struct3_T(&e_tree);
  emxFreeStruct_struct3_T(&d_tree);
  for (i2 = 0; i2 < absb; i2++) {
    fi = rt_roundd_snf(b_y->data[i2]);
    if (fi < 9.2233720368547758E+18) {
      if (fi >= -9.2233720368547758E+18) {
        i3 = (long long)fi;
      } else {
        i3 = MIN_int64_T;
      }
    } else if (fi >= 9.2233720368547758E+18) {
      i3 = MAX_int64_T;
    } else {
      i3 = 0LL;
    }

    tree->iPresent->data[0].inds->data[i2] = i3;
  }

  bComplete = false;
  maxIter = 2.0 * (double)XTrain->size[0] + 2.0;
  apnd = 0;
  emxInit_real_T(&countsAdd, 2);
  b_emxInit_boolean_T(&bLessThanTrain, 2);
  b_emxInit_real_T(&projMat, 1);
  emxInit_real_T(&countsNode, 2);
  emxInit_int32_T(&r0, 1);
  emxInit_boolean_T(&x, 1);
  b_emxInit_int32_T(&ii, 2);
  emxInit_boolean_T(&f_tree, 1);
  b_emxInit_boolean_T(&b_bLessThanTrain, 2);
  emxInit_real_T(&b_XTrain, 2);
  b_emxInit_boolean_T(&b_YTrain, 2);
  emxInit_real_T(&g_tree, 2);
  emxInit_real_T(&h_tree, 2);
  b_emxInit_real_T(&i_tree, 1);
  emxInit_real_T(&j_tree, 2);
  emxInit_real_T(&k_tree, 2);
  emxInitStruct_struct3_T(&l_tree);
  emxInitStruct_struct3_T(&m_tree);
  emxInitStruct_struct3_T(&n_tree);
  emxInitStruct_struct3_T(&o_tree);
  emxInitStruct_struct3_T(&p_tree);
  emxInitStruct_struct3_T(&q_tree);
  emxInitStruct_struct4_T(&r_tree);
  emxInitStruct_struct4_T(&s_tree);
  emxInitStruct_struct4_T(&t_tree);
  emxInitStruct_struct4_T(&u_tree);
  emxInitStruct_struct4_T(&v_tree);
  emxInitStruct_struct4_T(&w_tree);
  emxInitStruct_struct4_T(&x_tree);
  emxInitStruct_struct4_T(&y_tree);
  b_emxInit_int32_T(&b_ii, 2);
  emxInitStruct_struct3_T(&ab_tree);
  emxInitStruct_struct3_T(&bb_tree);
  emxInitStruct_struct4_T(&cb_tree);
  emxInitStruct_struct4_T(&db_tree);
  b_emxInit_int32_T(&c_ii, 2);
  exitg1 = false;
  while ((!exitg1) && ((apnd <= (int)maxIter - 1) && (!bComplete))) {
    absb = (int)(tree->nextChild - 1.0);
    i2 = x->size[0];
    x->size[0] = absb;
    emxEnsureCapacity((emxArray__common *)x, i2, (int)sizeof(boolean_T));
    for (i2 = 0; i2 < absb; i2++) {
      x->data[i2] = !tree->bExpanded->data[i2];
    }

    if (1 <= x->size[0]) {
      k = 1;
    } else {
      k = 0;
    }

    cdiff = 0;
    K = 1;
    exitg8 = false;
    while ((!exitg8) && (K <= x->size[0])) {
      if (x->data[K - 1]) {
        cdiff = 1;
        ii_data[0] = K;
        exitg8 = true;
      } else {
        K++;
      }
    }

    if (k == 1) {
      if (cdiff == 0) {
        k = 0;
      }
    } else {
      if (1 > cdiff) {
        absb = -1;
      } else {
        absb = 0;
      }

      i2 = 0;
      while (i2 <= absb) {
        b_ii_data[0] = ii_data[0];
        i2 = 1;
      }

      k = absb + 1;
      absb++;
      i2 = 0;
      while (i2 <= absb - 1) {
        ii_data[0] = b_ii_data[0];
        i2 = 1;
      }
    }

    i2 = 0;
    while (i2 <= k - 1) {
      iCalcVarSize_data[0] = ii_data[0];
      i2 = 1;
    }

    if (k == 0) {
      exitg1 = true;
    } else {
      i2 = iFeatureNum->size[0] * iFeatureNum->size[1];
      iFeatureNum->size[0] = 1;
      iFeatureNum->size[1] = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].
        inds->size[1];
      emxEnsureCapacity((emxArray__common *)iFeatureNum, i2, (int)sizeof(double));
      absb = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] *
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1];
      for (i2 = 0; i2 < absb; i2++) {
        iFeatureNum->data[i2] = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].
          inds->data[i2];
      }

      absb = XTrain->size[1];
      i2 = b_XTrain->size[0] * b_XTrain->size[1];
      b_XTrain->size[0] = tree->iPresent->data[iCalcVarSize_data[0] - 1]
        .inds->size[1];
      b_XTrain->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)b_XTrain, i2, (int)sizeof(double));
      for (i2 = 0; i2 < absb; i2++) {
        K = tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[1];
        for (cdiff = 0; cdiff < K; cdiff++) {
          b_XTrain->data[cdiff + b_XTrain->size[0] * i2] = XTrain->data[((int)
            tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->data
            [tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[0] *
            cdiff] + XTrain->size[0] * i2) - 1];
        }
      }

      absb = YTrain->size[1];
      i2 = b_YTrain->size[0] * b_YTrain->size[1];
      b_YTrain->size[0] = tree->iPresent->data[iCalcVarSize_data[0] - 1]
        .inds->size[1];
      b_YTrain->size[1] = absb;
      emxEnsureCapacity((emxArray__common *)b_YTrain, i2, (int)sizeof(boolean_T));
      for (i2 = 0; i2 < absb; i2++) {
        K = tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[1];
        for (cdiff = 0; cdiff < K; cdiff++) {
          b_YTrain->data[cdiff + b_YTrain->size[0] * i2] = YTrain->data[((int)
            tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->data
            [tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[0] *
            cdiff] + YTrain->size[0] * i2) - 1];
        }
      }

      i2 = g_tree->size[0] * g_tree->size[1];
      g_tree->size[0] = 1;
      g_tree->size[1] = tree->iFeatNum->data[iCalcVarSize_data[0] - 1]
        .inds->size[1];
      emxEnsureCapacity((emxArray__common *)g_tree, i2, (int)sizeof(double));
      absb = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] *
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1];
      for (i2 = 0; i2 < absb; i2++) {
        g_tree->data[i2] = tree->iFeatNum->data[iCalcVarSize_data[0] - 1]
          .inds->data[i2];
      }

      expandNode(b_XTrain, b_YTrain, options_bProjBoot, options_lambda,
                 options_splitCriterion_data, options_splitCriterion_size,
                 options_minPointsForSplit, options_dirIfEqual_data,
                 options_dirIfEqual_size, c_options_bContinueProjBootDege,
                 options_epsilonCCA, options_includeOriginalAxes,
                 options_maxDepthSplit, options_XVariationTol, g_tree,
                 tree->depth->data[iCalcVarSize_data[0] - 1], &bLeaf,
                 bLessThanTrain, partitionPoint_data, partitionPoint_size,
                 projMat, countsNode, b_y);
      if (bLeaf) {
        K = 1;
        fi = countsNode->data[0];
        if (countsNode->size[1] > 1) {
          if (rtIsNaN(countsNode->data[0])) {
            absb = 2;
            exitg7 = false;
            while ((!exitg7) && (absb <= countsNode->size[1])) {
              K = absb;
              if (!rtIsNaN(countsNode->data[absb - 1])) {
                fi = countsNode->data[absb - 1];
                exitg7 = true;
              } else {
                absb++;
              }
            }
          }

          if (K < countsNode->size[1]) {
            while (K + 1 <= countsNode->size[1]) {
              if (countsNode->data[K] > fi) {
                fi = countsNode->data[K];
              }

              K++;
            }
          }
        }

        bEqualMaxCounts_size[0] = 1;
        bEqualMaxCounts_size[1] = countsNode->size[1];
        absb = countsNode->size[0] * countsNode->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          bEqualMaxCounts_data[i2] = (fi == countsNode->data[i2]);
        }

        idRecursion = iCalcVarSize_data[0];
        exitg4 = false;
        while ((!exitg4) && (c_sum(bEqualMaxCounts_data, bEqualMaxCounts_size) >
                             1.0)) {
          idRecursion = tree->parentId->data[(int)idRecursion - 1];
          if (idRecursion == 0.0) {
            cdiff = 0;
            i2 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = bEqualMaxCounts_size[1];
            emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
            K = 1;
            exitg5 = false;
            while ((!exitg5) && (K <= bEqualMaxCounts_size[1])) {
              guard2 = false;
              if (bEqualMaxCounts_data[K - 1]) {
                cdiff++;
                ii->data[cdiff - 1] = K;
                if (cdiff >= bEqualMaxCounts_size[1]) {
                  exitg5 = true;
                } else {
                  guard2 = true;
                }
              } else {
                guard2 = true;
              }

              if (guard2) {
                K++;
              }
            }

            if (bEqualMaxCounts_size[1] == 1) {
              if (cdiff == 0) {
                i2 = ii->size[0] * ii->size[1];
                ii->size[0] = 1;
                ii->size[1] = 0;
                emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
              }
            } else {
              if (1 > cdiff) {
                absb = 0;
              } else {
                absb = cdiff;
              }

              i2 = b_ii->size[0] * b_ii->size[1];
              b_ii->size[0] = 1;
              b_ii->size[1] = absb;
              emxEnsureCapacity((emxArray__common *)b_ii, i2, (int)sizeof(int));
              for (i2 = 0; i2 < absb; i2++) {
                b_ii->data[b_ii->size[0] * i2] = ii->data[i2];
              }

              i2 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = b_ii->size[1];
              emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
              absb = b_ii->size[1];
              for (i2 = 0; i2 < absb; i2++) {
                ii->data[ii->size[0] * i2] = b_ii->data[b_ii->size[0] * i2];
              }
            }

            i2 = countsAdd->size[0] * countsAdd->size[1];
            countsAdd->size[0] = 1;
            countsAdd->size[1] = ii->size[1];
            emxEnsureCapacity((emxArray__common *)countsAdd, i2, (int)sizeof
                              (double));
            absb = ii->size[0] * ii->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              countsAdd->data[i2] = ii->data[i2];
            }

            fi = b_rand();
            fi *= (double)countsAdd->size[1];
            for (i2 = 0; i2 < 2; i2++) {
              childIds[i2] = bEqualMaxCounts_size[i2];
            }

            bEqualMaxCounts_size[0] = 1;
            bEqualMaxCounts_size[1] = (int)childIds[1];
            absb = (int)childIds[1];
            for (i2 = 0; i2 < absb; i2++) {
              bEqualMaxCounts_data[i2] = false;
            }

            bEqualMaxCounts_data[(int)countsAdd->data[(int)(1.0 + floor(fi)) - 1]
              - 1] = true;
            exitg4 = true;
          } else {
            for (i2 = 0; i2 < 2; i2++) {
              childIds[i2] = countsNode->size[i2];
            }

            i2 = countsAdd->size[0] * countsAdd->size[1];
            countsAdd->size[0] = 1;
            emxEnsureCapacity((emxArray__common *)countsAdd, i2, (int)sizeof
                              (double));
            i2 = countsAdd->size[0] * countsAdd->size[1];
            countsAdd->size[1] = (int)childIds[1];
            emxEnsureCapacity((emxArray__common *)countsAdd, i2, (int)sizeof
                              (double));
            absb = (int)childIds[1];
            for (i2 = 0; i2 < absb; i2++) {
              countsAdd->data[i2] = 0.0;
            }

            b_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
            b_bEqualMaxCounts_data.size = (int *)&bEqualMaxCounts_size;
            b_bEqualMaxCounts_data.allocatedSize = 10000;
            b_bEqualMaxCounts_data.numDimensions = 2;
            b_bEqualMaxCounts_data.canFreeData = false;
            eml_li_find(&b_bEqualMaxCounts_data, ii);
            absb = ii->size[0] * ii->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              tmp_data[i2] = ii->data[i2];
            }

            c_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
            c_bEqualMaxCounts_data.size = (int *)&bEqualMaxCounts_size;
            c_bEqualMaxCounts_data.allocatedSize = 10000;
            c_bEqualMaxCounts_data.numDimensions = 2;
            c_bEqualMaxCounts_data.canFreeData = false;
            eml_li_find(&c_bEqualMaxCounts_data, ii);
            i2 = b_y->size[0] * b_y->size[1];
            b_y->size[0] = 1;
            b_y->size[1] = ii->size[1];
            emxEnsureCapacity((emxArray__common *)b_y, i2, (int)sizeof(double));
            absb = ii->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              b_y->data[b_y->size[0] * i2] = tree->trainingCounts->data[((int)
                idRecursion + tree->trainingCounts->size[0] * (ii->data[ii->
                size[0] * i2] - 1)) - 1];
            }

            d_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
            d_bEqualMaxCounts_data.size = (int *)&bEqualMaxCounts_size;
            d_bEqualMaxCounts_data.allocatedSize = 10000;
            d_bEqualMaxCounts_data.numDimensions = 2;
            d_bEqualMaxCounts_data.canFreeData = false;
            eml_li_find(&d_bEqualMaxCounts_data, ii);
            i2 = h_tree->size[0] * h_tree->size[1];
            h_tree->size[0] = 1;
            h_tree->size[1] = ii->size[1];
            emxEnsureCapacity((emxArray__common *)h_tree, i2, (int)sizeof(double));
            absb = ii->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              h_tree->data[h_tree->size[0] * i2] = tree->trainingCounts->data
                [((int)idRecursion + tree->trainingCounts->size[0] * (ii->
                   data[ii->size[0] * i2] - 1)) - 1];
            }

            fi = 10000.0 * g_sum(h_tree);
            absb = b_y->size[0] * b_y->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              countsAdd->data[tmp_data[i2] - 1] = b_y->data[i2] / fi;
            }

            i2 = countsAdd->size[0] * countsAdd->size[1];
            countsAdd->size[0] = 1;
            countsAdd->size[1] = countsNode->size[1];
            emxEnsureCapacity((emxArray__common *)countsAdd, i2, (int)sizeof
                              (double));
            absb = countsNode->size[0] * countsNode->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              countsAdd->data[i2] += countsNode->data[i2];
            }

            K = 1;
            fi = countsAdd->data[0];
            if (countsAdd->size[1] > 1) {
              if (rtIsNaN(countsAdd->data[0])) {
                absb = 2;
                exitg6 = false;
                while ((!exitg6) && (absb <= countsAdd->size[1])) {
                  K = absb;
                  if (!rtIsNaN(countsAdd->data[absb - 1])) {
                    fi = countsAdd->data[absb - 1];
                    exitg6 = true;
                  } else {
                    absb++;
                  }
                }
              }

              if (K < countsAdd->size[1]) {
                while (K + 1 <= countsAdd->size[1]) {
                  if (countsAdd->data[K] > fi) {
                    fi = countsAdd->data[K];
                  }

                  K++;
                }
              }
            }

            bEqualMaxCounts_size[0] = 1;
            bEqualMaxCounts_size[1] = countsAdd->size[1];
            absb = countsAdd->size[0] * countsAdd->size[1];
            for (i2 = 0; i2 < absb; i2++) {
              bEqualMaxCounts_data[i2] = (fi == countsAdd->data[i2]);
            }
          }
        }

        tree->bLeaf->data[iCalcVarSize_data[0] - 1] = true;
        i2 = tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[0] *
          tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[1];
        tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[0] = 1;
        tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)tree->iPresent->
                          data[iCalcVarSize_data[0] - 1].inds, i2, (int)sizeof
                          (long long));
        emxCopyStruct_struct3_T(&ab_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        emxCopyStruct_struct3_T(&bb_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        i2 = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] *
          tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1];
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] = 1;
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)tree->iFeatNum->
                          data[iCalcVarSize_data[0] - 1].inds, i2, (int)sizeof
                          (double));
        emxCopyStruct_struct4_T(&cb_tree, &tree->iFeatNum->
          data[iCalcVarSize_data[0] - 1]);
        emxCopyStruct_struct4_T(&db_tree, &tree->iFeatNum->
          data[iCalcVarSize_data[0] - 1]);
        absb = countsNode->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          tree->trainingCounts->data[(iCalcVarSize_data[0] +
            tree->trainingCounts->size[0] * i2) - 1] = countsNode->
            data[countsNode->size[0] * i2];
        }

        cdiff = 0;
        i2 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = bEqualMaxCounts_size[1];
        emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
        K = 1;
        exitg3 = false;
        while ((!exitg3) && (K <= bEqualMaxCounts_size[1])) {
          guard1 = false;
          if (bEqualMaxCounts_data[K - 1]) {
            cdiff++;
            ii->data[cdiff - 1] = K;
            if (cdiff >= bEqualMaxCounts_size[1]) {
              exitg3 = true;
            } else {
              guard1 = true;
            }
          } else {
            guard1 = true;
          }

          if (guard1) {
            K++;
          }
        }

        if (bEqualMaxCounts_size[1] == 1) {
          if (cdiff == 0) {
            i2 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = 0;
            emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
          }
        } else {
          if (1 > cdiff) {
            absb = 0;
          } else {
            absb = cdiff;
          }

          i2 = c_ii->size[0] * c_ii->size[1];
          c_ii->size[0] = 1;
          c_ii->size[1] = absb;
          emxEnsureCapacity((emxArray__common *)c_ii, i2, (int)sizeof(int));
          for (i2 = 0; i2 < absb; i2++) {
            c_ii->data[c_ii->size[0] * i2] = ii->data[i2];
          }

          i2 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = c_ii->size[1];
          emxEnsureCapacity((emxArray__common *)ii, i2, (int)sizeof(int));
          absb = c_ii->size[1];
          for (i2 = 0; i2 < absb; i2++) {
            ii->data[ii->size[0] * i2] = c_ii->data[c_ii->size[0] * i2];
          }
        }

        i2 = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        b_y->size[1] = ii->size[1];
        emxEnsureCapacity((emxArray__common *)b_y, i2, (int)sizeof(double));
        absb = ii->size[0] * ii->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          b_y->data[i2] = ii->data[i2];
        }

        tree->labelClassId->data[iCalcVarSize_data[0] - 1] = b_y->data[0];
        tree->bExpanded->data[iCalcVarSize_data[0] - 1] = true;
      } else {
        if (tree->nextChild > (double)tree->bLeaf->size[0] - 1.0) {
          K = tree->bExpanded->size[0];
          i2 = tree->bExpanded->size[0];
          tree->bExpanded->size[0] = K + 2000;
          emxEnsureCapacity((emxArray__common *)tree->bExpanded, i2, (int)sizeof
                            (boolean_T));
          for (i2 = 0; i2 < 2000; i2++) {
            tree->bExpanded->data[K + i2] = false;
          }

          K = tree->nodeId->size[0] - 1;
          fi = tree->nodeId->data[K];
          i2 = i_tree->size[0];
          i_tree->size[0] = tree->nodeId->size[0] + 2000;
          emxEnsureCapacity((emxArray__common *)i_tree, i2, (int)sizeof(double));
          absb = tree->nodeId->size[0];
          for (i2 = 0; i2 < absb; i2++) {
            i_tree->data[i2] = tree->nodeId->data[i2];
          }

          for (i2 = 0; i2 < 2000; i2++) {
            i_tree->data[i2 + tree->nodeId->size[0]] = fi + (1.0 + (double)i2);
          }

          i2 = tree->nodeId->size[0];
          tree->nodeId->size[0] = i_tree->size[0];
          emxEnsureCapacity((emxArray__common *)tree->nodeId, i2, (int)sizeof
                            (double));
          absb = i_tree->size[0];
          for (i2 = 0; i2 < absb; i2++) {
            tree->nodeId->data[i2] = i_tree->data[i2];
          }

          K = tree->bLeaf->size[0];
          i2 = tree->bLeaf->size[0];
          tree->bLeaf->size[0] = K + 2000;
          emxEnsureCapacity((emxArray__common *)tree->bLeaf, i2, (int)sizeof
                            (boolean_T));
          for (i2 = 0; i2 < 2000; i2++) {
            tree->bLeaf->data[K + i2] = false;
          }

          i2 = j_tree->size[0] * j_tree->size[1];
          j_tree->size[0] = tree->childIds->size[0] + 2000;
          j_tree->size[1] = 2;
          emxEnsureCapacity((emxArray__common *)j_tree, i2, (int)sizeof(double));
          for (i2 = 0; i2 < 2; i2++) {
            absb = tree->childIds->size[0];
            for (cdiff = 0; cdiff < absb; cdiff++) {
              j_tree->data[cdiff + j_tree->size[0] * i2] = tree->childIds->
                data[cdiff + tree->childIds->size[0] * i2];
            }
          }

          for (i2 = 0; i2 < 2; i2++) {
            for (cdiff = 0; cdiff < 2000; cdiff++) {
              j_tree->data[(cdiff + tree->childIds->size[0]) + j_tree->size[0] *
                i2] = 0.0;
            }
          }

          i2 = tree->childIds->size[0] * tree->childIds->size[1];
          tree->childIds->size[0] = j_tree->size[0];
          tree->childIds->size[1] = 2;
          emxEnsureCapacity((emxArray__common *)tree->childIds, i2, (int)sizeof
                            (double));
          for (i2 = 0; i2 < 2; i2++) {
            absb = j_tree->size[0];
            for (cdiff = 0; cdiff < absb; cdiff++) {
              tree->childIds->data[cdiff + tree->childIds->size[0] * i2] =
                j_tree->data[cdiff + j_tree->size[0] * i2];
            }
          }

          K = tree->parentId->size[0];
          i2 = tree->parentId->size[0];
          tree->parentId->size[0] = K + 2000;
          emxEnsureCapacity((emxArray__common *)tree->parentId, i2, (int)sizeof
                            (double));
          for (i2 = 0; i2 < 2000; i2++) {
            tree->parentId->data[K + i2] = 0.0;
          }

          K = tree->depth->size[0];
          i2 = tree->depth->size[0];
          tree->depth->size[0] = K + 2000;
          emxEnsureCapacity((emxArray__common *)tree->depth, i2, (int)sizeof
                            (double));
          for (i2 = 0; i2 < 2000; i2++) {
            tree->depth->data[K + i2] = 0.0;
          }

          c_cast(rv1);
          K = tree->iPresent->size[0];
          i2 = tree->iPresent->size[0];
          tree->iPresent->size[0] = K + 2000;
          emxEnsureCapacity_struct3_T(tree->iPresent, i2);
          for (i2 = 0; i2 < 2000; i2++) {
            emxCopyStruct_struct3_T(&tree->iPresent->data[K + i2], &rv1[i2]);
          }

          b_cast(rv2);
          K = tree->iFeatNum->size[0];
          i2 = tree->iFeatNum->size[0];
          tree->iFeatNum->size[0] = K + 2000;
          emxEnsureCapacity_struct4_T(tree->iFeatNum, i2);
          for (i2 = 0; i2 < 2000; i2++) {
            emxCopyStruct_struct4_T(&tree->iFeatNum->data[K + i2], &rv2[i2]);
          }

          i2 = k_tree->size[0] * k_tree->size[1];
          k_tree->size[0] = tree->trainingCounts->size[0] + 2000;
          k_tree->size[1] = tree->trainingCounts->size[1];
          emxEnsureCapacity((emxArray__common *)k_tree, i2, (int)sizeof(double));
          absb = tree->trainingCounts->size[1];
          for (i2 = 0; i2 < absb; i2++) {
            K = tree->trainingCounts->size[0];
            for (cdiff = 0; cdiff < K; cdiff++) {
              k_tree->data[cdiff + k_tree->size[0] * i2] = tree->
                trainingCounts->data[cdiff + tree->trainingCounts->size[0] * i2];
            }
          }

          for (i2 = 0; i2 < 2; i2++) {
            for (cdiff = 0; cdiff < 2000; cdiff++) {
              k_tree->data[(cdiff + tree->trainingCounts->size[0]) +
                k_tree->size[0] * i2] = 0.0;
            }
          }

          i2 = tree->trainingCounts->size[0] * tree->trainingCounts->size[1];
          tree->trainingCounts->size[0] = k_tree->size[0];
          tree->trainingCounts->size[1] = k_tree->size[1];
          emxEnsureCapacity((emxArray__common *)tree->trainingCounts, i2, (int)
                            sizeof(double));
          absb = k_tree->size[1];
          for (i2 = 0; i2 < absb; i2++) {
            K = k_tree->size[0];
            for (cdiff = 0; cdiff < K; cdiff++) {
              tree->trainingCounts->data[cdiff + tree->trainingCounts->size[0] *
                i2] = k_tree->data[cdiff + k_tree->size[0] * i2];
            }
          }

          K = tree->labelClassId->size[0];
          i2 = tree->labelClassId->size[0];
          tree->labelClassId->size[0] = K + 2000;
          emxEnsureCapacity((emxArray__common *)tree->labelClassId, i2, (int)
                            sizeof(double));
          for (i2 = 0; i2 < 2000; i2++) {
            tree->labelClassId->data[K + i2] = 0.0;
          }

          K = tree->partitionPoint->size[0];
          i2 = tree->partitionPoint->size[0];
          tree->partitionPoint->size[0] = K + 2000;
          emxEnsureCapacity((emxArray__common *)tree->partitionPoint, i2, (int)
                            sizeof(double));
          for (i2 = 0; i2 < 2000; i2++) {
            tree->partitionPoint->data[K + i2] = rtNaN;
          }

          b_cast(rv2);
          K = tree->iIn->size[0];
          i2 = tree->iIn->size[0];
          tree->iIn->size[0] = K + 2000;
          emxEnsureCapacity_struct4_T(tree->iIn, i2);
          for (i2 = 0; i2 < 2000; i2++) {
            emxCopyStruct_struct4_T(&tree->iIn->data[K + i2], &rv2[i2]);
          }

          for (K = 0; K < 2000; K++) {
            i2 = y[K].phi->size[0];
            y[K].phi->size[0] = 0;
            emxEnsureCapacity((emxArray__common *)y[K].phi, i2, (int)sizeof
                              (double));
          }

          K = tree->decisionProjection->size[0];
          i2 = tree->decisionProjection->size[0];
          tree->decisionProjection->size[0] = K + 2000;
          emxEnsureCapacity_struct5_T(tree->decisionProjection, i2);
          for (i2 = 0; i2 < 2000; i2++) {
            emxCopyStruct_struct5_T(&tree->decisionProjection->data[K + i2],
              &y[i2]);
          }
        }

        tree->bLeaf->data[iCalcVarSize_data[0] - 1] = false;
        for (i2 = 0; i2 < 2; i2++) {
          childIds[i2] = tree->nextChild + (double)i2;
        }

        for (i2 = 0; i2 < 2; i2++) {
          tree->childIds->data[(iCalcVarSize_data[0] + tree->childIds->size[0] *
                                i2) - 1] = childIds[i2];
        }

        fi = tree->depth->data[iCalcVarSize_data[0] - 1];
        for (i2 = 0; i2 < 2; i2++) {
          tree->depth->data[(int)childIds[i2] - 1] = fi + 1.0;
        }

        c_eml_li_find(bLessThanTrain, r0);
        emxCopyStruct_struct3_T(&l_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        emxCopyStruct_struct3_T(&m_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        i2 = tree->iPresent->data[(int)childIds[0] - 1].inds->size[0] *
          tree->iPresent->data[(int)childIds[0] - 1].inds->size[1];
        tree->iPresent->data[(int)childIds[0] - 1].inds->size[0] = 1;
        tree->iPresent->data[(int)childIds[0] - 1].inds->size[1] = r0->size[0];
        emxEnsureCapacity((emxArray__common *)tree->iPresent->data[(int)
                          childIds[0] - 1].inds, i2, (int)sizeof(long long));
        absb = r0->size[0];
        for (i2 = 0; i2 < absb; i2++) {
          tree->iPresent->data[(int)childIds[0] - 1].inds->data[tree->
            iPresent->data[(int)childIds[0] - 1].inds->size[0] * i2] =
            l_tree.inds->data[r0->data[i2] - 1];
        }

        i2 = b_bLessThanTrain->size[0] * b_bLessThanTrain->size[1];
        b_bLessThanTrain->size[0] = bLessThanTrain->size[0];
        b_bLessThanTrain->size[1] = bLessThanTrain->size[1];
        emxEnsureCapacity((emxArray__common *)b_bLessThanTrain, i2, (int)sizeof
                          (boolean_T));
        absb = bLessThanTrain->size[0] * bLessThanTrain->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          b_bLessThanTrain->data[i2] = !bLessThanTrain->data[i2];
        }

        c_eml_li_find(b_bLessThanTrain, r0);
        emxCopyStruct_struct3_T(&n_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        emxCopyStruct_struct3_T(&o_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        i2 = tree->iPresent->data[(int)childIds[1] - 1].inds->size[0] *
          tree->iPresent->data[(int)childIds[1] - 1].inds->size[1];
        tree->iPresent->data[(int)childIds[1] - 1].inds->size[0] = 1;
        tree->iPresent->data[(int)childIds[1] - 1].inds->size[1] = r0->size[0];
        emxEnsureCapacity((emxArray__common *)tree->iPresent->data[(int)
                          childIds[1] - 1].inds, i2, (int)sizeof(long long));
        absb = r0->size[0];
        for (i2 = 0; i2 < absb; i2++) {
          tree->iPresent->data[(int)childIds[1] - 1].inds->data[tree->
            iPresent->data[(int)childIds[1] - 1].inds->size[0] * i2] =
            n_tree.inds->data[r0->data[i2] - 1];
        }

        i2 = tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[0] *
          tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[1];
        tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[0] = 1;
        tree->iPresent->data[iCalcVarSize_data[0] - 1].inds->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)tree->iPresent->
                          data[iCalcVarSize_data[0] - 1].inds, i2, (int)sizeof
                          (long long));
        emxCopyStruct_struct3_T(&p_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        emxCopyStruct_struct3_T(&q_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1]);
        i2 = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] *
          tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1];
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] = 1;
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)tree->iFeatNum->
                          data[iCalcVarSize_data[0] - 1].inds, i2, (int)sizeof
                          (double));
        emxCopyStruct_struct4_T(&r_tree, &tree->iFeatNum->
          data[iCalcVarSize_data[0] - 1]);
        emxCopyStruct_struct4_T(&s_tree, &tree->iFeatNum->
          data[iCalcVarSize_data[0] - 1]);
        i2 = tree->iFeatNum->data[(int)childIds[0] - 1].inds->size[0] *
          tree->iFeatNum->data[(int)childIds[0] - 1].inds->size[1];
        tree->iFeatNum->data[(int)childIds[0] - 1].inds->size[0] = 1;
        tree->iFeatNum->data[(int)childIds[0] - 1].inds->size[1] =
          iFeatureNum->size[1];
        emxEnsureCapacity((emxArray__common *)tree->iFeatNum->data[(int)
                          childIds[0] - 1].inds, i2, (int)sizeof(double));
        emxCopyStruct_struct4_T(&t_tree, &tree->iFeatNum->data[(int)childIds[0]
          - 1]);
        emxCopyStruct_struct4_T(&u_tree, &tree->iFeatNum->data[(int)childIds[0]
          - 1]);
        absb = iFeatureNum->size[0] * iFeatureNum->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          tree->iFeatNum->data[(int)childIds[0] - 1].inds->data[i2] =
            iFeatureNum->data[i2];
        }

        i2 = tree->iFeatNum->data[(int)childIds[1] - 1].inds->size[0] *
          tree->iFeatNum->data[(int)childIds[1] - 1].inds->size[1];
        tree->iFeatNum->data[(int)childIds[1] - 1].inds->size[0] = 1;
        tree->iFeatNum->data[(int)childIds[1] - 1].inds->size[1] =
          iFeatureNum->size[1];
        emxEnsureCapacity((emxArray__common *)tree->iFeatNum->data[(int)
                          childIds[1] - 1].inds, i2, (int)sizeof(double));
        emxCopyStruct_struct4_T(&v_tree, &tree->iFeatNum->data[(int)childIds[1]
          - 1]);
        emxCopyStruct_struct4_T(&w_tree, &tree->iFeatNum->data[(int)childIds[1]
          - 1]);
        absb = iFeatureNum->size[0] * iFeatureNum->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          tree->iFeatNum->data[(int)childIds[1] - 1].inds->data[i2] =
            iFeatureNum->data[i2];
        }

        absb = countsNode->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          tree->trainingCounts->data[(iCalcVarSize_data[0] +
            tree->trainingCounts->size[0] * i2) - 1] = countsNode->
            data[countsNode->size[0] * i2];
        }

        K = 1;
        fi = countsNode->data[0];
        cdiff = 1;
        if (countsNode->size[1] > 1) {
          if (rtIsNaN(countsNode->data[0])) {
            absb = 2;
            exitg2 = false;
            while ((!exitg2) && (absb <= countsNode->size[1])) {
              K = absb;
              if (!rtIsNaN(countsNode->data[absb - 1])) {
                fi = countsNode->data[absb - 1];
                cdiff = absb;
                exitg2 = true;
              } else {
                absb++;
              }
            }
          }

          if (K < countsNode->size[1]) {
            while (K + 1 <= countsNode->size[1]) {
              if (countsNode->data[K] > fi) {
                fi = countsNode->data[K];
                cdiff = K + 1;
              }

              K++;
            }
          }
        }

        tree->labelClassId->data[iCalcVarSize_data[0] - 1] = cdiff;
        tree->partitionPoint->data[iCalcVarSize_data[0] - 1] =
          partitionPoint_data[0];
        i2 = tree->iIn->data[iCalcVarSize_data[0] - 1].inds->size[0] * tree->
          iIn->data[iCalcVarSize_data[0] - 1].inds->size[1];
        tree->iIn->data[iCalcVarSize_data[0] - 1].inds->size[0] = 1;
        tree->iIn->data[iCalcVarSize_data[0] - 1].inds->size[1] = b_y->size[1];
        emxEnsureCapacity((emxArray__common *)tree->iIn->data[iCalcVarSize_data
                          [0] - 1].inds, i2, (int)sizeof(double));
        emxCopyStruct_struct4_T(&x_tree, &tree->iIn->data[iCalcVarSize_data[0] -
          1]);
        emxCopyStruct_struct4_T(&y_tree, &tree->iIn->data[iCalcVarSize_data[0] -
          1]);
        absb = b_y->size[0] * b_y->size[1];
        for (i2 = 0; i2 < absb; i2++) {
          tree->iIn->data[iCalcVarSize_data[0] - 1].inds->data[i2] = b_y->
            data[i2];
        }

        i2 = tree->decisionProjection->data[iCalcVarSize_data[0] - 1].phi->size
          [0];
        tree->decisionProjection->data[iCalcVarSize_data[0] - 1].phi->size[0] =
          projMat->size[0];
        emxEnsureCapacity((emxArray__common *)tree->decisionProjection->
                          data[iCalcVarSize_data[0] - 1].phi, i2, (int)sizeof
                          (double));
        absb = projMat->size[0];
        for (i2 = 0; i2 < absb; i2++) {
          tree->decisionProjection->data[iCalcVarSize_data[0] - 1].phi->data[i2]
            = projMat->data[i2];
        }

        for (i2 = 0; i2 < 2; i2++) {
          tree->parentId->data[(int)childIds[i2] - 1] = iCalcVarSize_data[0];
        }

        tree->nextChild += 2.0;
        tree->bExpanded->data[iCalcVarSize_data[0] - 1] = true;
      }

      absb = (int)(tree->nextChild - 1.0);
      i2 = f_tree->size[0];
      f_tree->size[0] = absb;
      emxEnsureCapacity((emxArray__common *)f_tree, i2, (int)sizeof(boolean_T));
      for (i2 = 0; i2 < absb; i2++) {
        f_tree->data[i2] = tree->bExpanded->data[i2];
      }

      bComplete = c_all(f_tree);
      apnd++;
    }
  }

  emxFree_int32_T(&c_ii);
  emxFreeStruct_struct4_T(&db_tree);
  emxFreeStruct_struct4_T(&cb_tree);
  emxFreeStruct_struct3_T(&bb_tree);
  emxFreeStruct_struct3_T(&ab_tree);
  emxFree_int32_T(&b_ii);
  emxFreeStruct_struct4_T(&y_tree);
  emxFreeStruct_struct4_T(&x_tree);
  emxFreeStruct_struct4_T(&w_tree);
  emxFreeStruct_struct4_T(&v_tree);
  emxFreeStruct_struct4_T(&u_tree);
  emxFreeStruct_struct4_T(&t_tree);
  emxFreeStruct_struct4_T(&s_tree);
  emxFreeStruct_struct4_T(&r_tree);
  emxFreeStruct_struct3_T(&q_tree);
  emxFreeStruct_struct3_T(&p_tree);
  emxFreeStruct_struct3_T(&o_tree);
  emxFreeStruct_struct3_T(&n_tree);
  emxFreeStruct_struct3_T(&m_tree);
  emxFreeStruct_struct3_T(&l_tree);
  emxFree_real_T(&k_tree);
  emxFree_real_T(&j_tree);
  emxFree_real_T(&i_tree);
  emxFree_real_T(&h_tree);
  emxFree_real_T(&g_tree);
  emxFree_boolean_T(&b_YTrain);
  emxFree_real_T(&b_XTrain);
  emxFree_boolean_T(&b_bLessThanTrain);
  emxFree_boolean_T(&f_tree);
  emxFreeMatrix_struct4_T(rv2);
  emxFreeMatrix_struct3_T(rv1);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&b_y);
  emxFreeMatrix_struct5_T(y);
  emxFree_int32_T(&r0);
  emxFree_real_T(&countsNode);
  emxFree_real_T(&projMat);
  emxFree_boolean_T(&bLessThanTrain);
  emxFree_real_T(&countsAdd);
  b_emxInit_real_T(&eb_tree, 1);
  fi = tree->nextChild - 1.0;
  absb = (int)(tree->nextChild - 1.0);
  i2 = eb_tree->size[0];
  eb_tree->size[0] = absb;
  emxEnsureCapacity((emxArray__common *)eb_tree, i2, (int)sizeof(double));
  for (i2 = 0; i2 < absb; i2++) {
    eb_tree->data[i2] = tree->nodeId->data[i2];
  }

  i2 = tree->nodeId->size[0];
  tree->nodeId->size[0] = eb_tree->size[0];
  emxEnsureCapacity((emxArray__common *)tree->nodeId, i2, (int)sizeof(double));
  absb = eb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    tree->nodeId->data[i2] = eb_tree->data[i2];
  }

  emxFree_real_T(&eb_tree);
  emxInit_boolean_T(&fb_tree, 1);
  i2 = fb_tree->size[0];
  fb_tree->size[0] = (int)fi;
  emxEnsureCapacity((emxArray__common *)fb_tree, i2, (int)sizeof(boolean_T));
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    fb_tree->data[i2] = tree->bLeaf->data[i2];
  }

  i2 = tree->bLeaf->size[0];
  tree->bLeaf->size[0] = fb_tree->size[0];
  emxEnsureCapacity((emxArray__common *)tree->bLeaf, i2, (int)sizeof(boolean_T));
  absb = fb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    tree->bLeaf->data[i2] = fb_tree->data[i2];
  }

  emxFree_boolean_T(&fb_tree);
  emxInit_real_T(&gb_tree, 2);
  i2 = gb_tree->size[0] * gb_tree->size[1];
  gb_tree->size[0] = (int)fi;
  gb_tree->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)gb_tree, i2, (int)sizeof(double));
  for (i2 = 0; i2 < 2; i2++) {
    absb = (int)fi;
    for (cdiff = 0; cdiff < absb; cdiff++) {
      gb_tree->data[cdiff + gb_tree->size[0] * i2] = tree->childIds->data[cdiff
        + tree->childIds->size[0] * i2];
    }
  }

  i2 = tree->childIds->size[0] * tree->childIds->size[1];
  tree->childIds->size[0] = gb_tree->size[0];
  tree->childIds->size[1] = 2;
  emxEnsureCapacity((emxArray__common *)tree->childIds, i2, (int)sizeof(double));
  for (i2 = 0; i2 < 2; i2++) {
    absb = gb_tree->size[0];
    for (cdiff = 0; cdiff < absb; cdiff++) {
      tree->childIds->data[cdiff + tree->childIds->size[0] * i2] = gb_tree->
        data[cdiff + gb_tree->size[0] * i2];
    }
  }

  emxFree_real_T(&gb_tree);
  b_emxInit_real_T(&hb_tree, 1);
  i2 = hb_tree->size[0];
  hb_tree->size[0] = (int)fi;
  emxEnsureCapacity((emxArray__common *)hb_tree, i2, (int)sizeof(double));
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    hb_tree->data[i2] = tree->parentId->data[i2];
  }

  i2 = tree->parentId->size[0];
  tree->parentId->size[0] = hb_tree->size[0];
  emxEnsureCapacity((emxArray__common *)tree->parentId, i2, (int)sizeof(double));
  absb = hb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    tree->parentId->data[i2] = hb_tree->data[i2];
  }

  emxFree_real_T(&hb_tree);
  b_emxInit_real_T(&ib_tree, 1);
  i2 = ib_tree->size[0];
  ib_tree->size[0] = (int)fi;
  emxEnsureCapacity((emxArray__common *)ib_tree, i2, (int)sizeof(double));
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    ib_tree->data[i2] = tree->depth->data[i2];
  }

  i2 = tree->depth->size[0];
  tree->depth->size[0] = ib_tree->size[0];
  emxEnsureCapacity((emxArray__common *)tree->depth, i2, (int)sizeof(double));
  absb = ib_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    tree->depth->data[i2] = ib_tree->data[i2];
  }

  emxFree_real_T(&ib_tree);
  emxInit_real_T(&jb_tree, 2);
  K = tree->trainingCounts->size[1];
  i2 = jb_tree->size[0] * jb_tree->size[1];
  jb_tree->size[0] = (int)fi;
  jb_tree->size[1] = K;
  emxEnsureCapacity((emxArray__common *)jb_tree, i2, (int)sizeof(double));
  for (i2 = 0; i2 < K; i2++) {
    absb = (int)fi;
    for (cdiff = 0; cdiff < absb; cdiff++) {
      jb_tree->data[cdiff + jb_tree->size[0] * i2] = tree->trainingCounts->
        data[cdiff + tree->trainingCounts->size[0] * i2];
    }
  }

  i2 = tree->trainingCounts->size[0] * tree->trainingCounts->size[1];
  tree->trainingCounts->size[0] = jb_tree->size[0];
  tree->trainingCounts->size[1] = jb_tree->size[1];
  emxEnsureCapacity((emxArray__common *)tree->trainingCounts, i2, (int)sizeof
                    (double));
  absb = jb_tree->size[1];
  for (i2 = 0; i2 < absb; i2++) {
    K = jb_tree->size[0];
    for (cdiff = 0; cdiff < K; cdiff++) {
      tree->trainingCounts->data[cdiff + tree->trainingCounts->size[0] * i2] =
        jb_tree->data[cdiff + jb_tree->size[0] * i2];
    }
  }

  emxFree_real_T(&jb_tree);
  b_emxInit_real_T(&kb_tree, 1);
  i2 = kb_tree->size[0];
  kb_tree->size[0] = (int)fi;
  emxEnsureCapacity((emxArray__common *)kb_tree, i2, (int)sizeof(double));
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    kb_tree->data[i2] = tree->labelClassId->data[i2];
  }

  i2 = tree->labelClassId->size[0];
  tree->labelClassId->size[0] = kb_tree->size[0];
  emxEnsureCapacity((emxArray__common *)tree->labelClassId, i2, (int)sizeof
                    (double));
  absb = kb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    tree->labelClassId->data[i2] = kb_tree->data[i2];
  }

  emxFree_real_T(&kb_tree);
  b_emxInit_real_T(&lb_tree, 1);
  i2 = lb_tree->size[0];
  lb_tree->size[0] = (int)fi;
  emxEnsureCapacity((emxArray__common *)lb_tree, i2, (int)sizeof(double));
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    lb_tree->data[i2] = tree->partitionPoint->data[i2];
  }

  i2 = tree->partitionPoint->size[0];
  tree->partitionPoint->size[0] = lb_tree->size[0];
  emxEnsureCapacity((emxArray__common *)tree->partitionPoint, i2, (int)sizeof
                    (double));
  absb = lb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    tree->partitionPoint->data[i2] = lb_tree->data[i2];
  }

  emxFree_real_T(&lb_tree);
  emxInit_struct4_T(&mb_tree, 1);
  i2 = mb_tree->size[0];
  mb_tree->size[0] = (int)fi;
  emxEnsureCapacity_struct4_T(mb_tree, i2);
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    emxCopyStruct_struct4_T(&mb_tree->data[i2], &tree->iIn->data[i2]);
  }

  i2 = tree->iIn->size[0];
  tree->iIn->size[0] = mb_tree->size[0];
  emxEnsureCapacity_struct4_T(tree->iIn, i2);
  absb = mb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    emxCopyStruct_struct4_T(&tree->iIn->data[i2], &mb_tree->data[i2]);
  }

  emxFree_struct4_T(&mb_tree);
  emxInit_struct5_T(&nb_tree, 1);
  i2 = nb_tree->size[0];
  nb_tree->size[0] = (int)fi;
  emxEnsureCapacity_struct5_T(nb_tree, i2);
  absb = (int)fi;
  for (i2 = 0; i2 < absb; i2++) {
    emxCopyStruct_struct5_T(&nb_tree->data[i2], &tree->decisionProjection->
      data[i2]);
  }

  i2 = tree->decisionProjection->size[0];
  tree->decisionProjection->size[0] = nb_tree->size[0];
  emxEnsureCapacity_struct5_T(tree->decisionProjection, i2);
  absb = nb_tree->size[0];
  for (i2 = 0; i2 < absb; i2++) {
    emxCopyStruct_struct5_T(&tree->decisionProjection->data[i2], &nb_tree->
      data[i2]);
  }

  emxFree_struct5_T(&nb_tree);
  tree->nextChild = 0.0;
}

/*
 * File trailer for growCCTnotRecursive.c
 *
 * [EOF]
 */
