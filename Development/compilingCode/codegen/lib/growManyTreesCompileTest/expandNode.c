/*
 * File: expandNode.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "expandNode.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "twoPointMaxMarginSplit.h"
#include "rand.h"
#include "abs.h"
#include "rdivide.h"
#include "sum.h"
#include "power.h"
#include "growCCTnotRecursive.h"
#include "log2.h"
#include "strcmpi.h"
#include "bsxfun.h"
#include "diff.h"
#include "eml_sort.h"
#include "repmat.h"
#include "any.h"
#include "queryIfColumnsVary.h"
#include "eye.h"
#include "sqrt.h"
#include "mldivide.h"
#include "svd.h"
#include "diag.h"
#include "qr.h"
#include "queryIfOnlyTwoUniqueRows.h"
#include "randi.h"
#include "randperm.h"
#include "all.h"
#include "fastUnique.h"

/* Function Declarations */
static void b_eml_null_assignment(emxArray_real_T *x, const emxArray_real_T *idx);
static void eml_null_assignment(emxArray_real_T *x, const emxArray_boolean_T
  *idx);

/* Function Definitions */

/*
 * Arguments    : emxArray_real_T *x
 *                const emxArray_real_T *idx
 * Return Type  : void
 */
static void b_eml_null_assignment(emxArray_real_T *x, const emxArray_real_T *idx)
{
  int nxin;
  int k;
  int nxout;
  emxArray_real_T *b_x;
  int k0;
  emxArray_boolean_T *b;
  nxin = x->size[1] - 1;
  if (idx->size[1] == 1) {
    for (k = (int)idx->data[0]; k <= nxin; k++) {
      x->data[k - 1] = x->data[k];
    }

    if (1 > nxin) {
      nxout = 0;
    } else {
      nxout = nxin;
    }

    emxInit_real_T(&b_x, 2);
    k0 = b_x->size[0] * b_x->size[1];
    b_x->size[0] = 1;
    b_x->size[1] = nxout;
    emxEnsureCapacity((emxArray__common *)b_x, k0, (int)sizeof(double));
    for (k0 = 0; k0 < nxout; k0++) {
      b_x->data[b_x->size[0] * k0] = x->data[k0];
    }

    k0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = b_x->size[1];
    emxEnsureCapacity((emxArray__common *)x, k0, (int)sizeof(double));
    nxout = b_x->size[1];
    for (k0 = 0; k0 < nxout; k0++) {
      x->data[x->size[0] * k0] = b_x->data[b_x->size[0] * k0];
    }

    emxFree_real_T(&b_x);
  } else {
    b_emxInit_boolean_T(&b, 2);
    k0 = b->size[0] * b->size[1];
    b->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)b, k0, (int)sizeof(boolean_T));
    nxout = x->size[1];
    k0 = b->size[0] * b->size[1];
    b->size[1] = nxout;
    emxEnsureCapacity((emxArray__common *)b, k0, (int)sizeof(boolean_T));
    nxout = x->size[1];
    for (k0 = 0; k0 < nxout; k0++) {
      b->data[k0] = false;
    }

    for (k = 1; k <= idx->size[1]; k++) {
      b->data[(int)idx->data[k - 1] - 1] = true;
    }

    nxout = 0;
    for (k = 1; k <= b->size[1]; k++) {
      nxout += b->data[k - 1];
    }

    nxout = x->size[1] - nxout;
    k0 = -1;
    for (k = 1; k <= nxin + 1; k++) {
      if ((k > b->size[1]) || (!b->data[k - 1])) {
        k0++;
        x->data[k0] = x->data[k - 1];
      }
    }

    emxFree_boolean_T(&b);
    if (1 > nxout) {
      nxout = 0;
    }

    emxInit_real_T(&b_x, 2);
    k0 = b_x->size[0] * b_x->size[1];
    b_x->size[0] = 1;
    b_x->size[1] = nxout;
    emxEnsureCapacity((emxArray__common *)b_x, k0, (int)sizeof(double));
    for (k0 = 0; k0 < nxout; k0++) {
      b_x->data[b_x->size[0] * k0] = x->data[k0];
    }

    k0 = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = b_x->size[1];
    emxEnsureCapacity((emxArray__common *)x, k0, (int)sizeof(double));
    nxout = b_x->size[1];
    for (k0 = 0; k0 < nxout; k0++) {
      x->data[x->size[0] * k0] = b_x->data[b_x->size[0] * k0];
    }

    emxFree_real_T(&b_x);
  }
}

/*
 * Arguments    : emxArray_real_T *x
 *                const emxArray_boolean_T *idx
 * Return Type  : void
 */
static void eml_null_assignment(emxArray_real_T *x, const emxArray_boolean_T
  *idx)
{
  int nxin;
  int k0;
  int k;
  int nxout;
  emxArray_real_T *b_x;
  nxin = x->size[1];
  k0 = 0;
  for (k = 1; k <= idx->size[1]; k++) {
    k0 += idx->data[k - 1];
  }

  nxout = x->size[1] - k0;
  k0 = -1;
  for (k = 1; k <= nxin; k++) {
    if ((k > idx->size[1]) || (!idx->data[k - 1])) {
      k0++;
      x->data[k0] = x->data[k - 1];
    }
  }

  if (1 > nxout) {
    k0 = 0;
  } else {
    k0 = nxout;
  }

  emxInit_real_T(&b_x, 2);
  nxout = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = k0;
  emxEnsureCapacity((emxArray__common *)b_x, nxout, (int)sizeof(double));
  for (nxout = 0; nxout < k0; nxout++) {
    b_x->data[b_x->size[0] * nxout] = x->data[nxout];
  }

  nxout = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity((emxArray__common *)x, nxout, (int)sizeof(double));
  k0 = b_x->size[1];
  for (nxout = 0; nxout < k0; nxout++) {
    x->data[x->size[0] * nxout] = b_x->data[b_x->size[0] * nxout];
  }

  emxFree_real_T(&b_x);
}

/*
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
 *                double depth
 *                boolean_T *bLeaf
 *                emxArray_boolean_T *bLessThanTrain
 *                double partitionPoint_data[]
 *                int partitionPoint_size[2]
 *                emxArray_real_T *projMat
 *                emxArray_real_T *countsNode
 *                emxArray_real_T *iIn
 * Return Type  : void
 */
void expandNode(const emxArray_real_T *XTrain, const emxArray_boolean_T *YTrain,
                boolean_T options_bProjBoot, double options_lambda, const char
                options_splitCriterion_data[], const int
                options_splitCriterion_size[2], double options_minPointsForSplit,
                const char options_dirIfEqual_data[], const int
                options_dirIfEqual_size[2], boolean_T
                c_options_bContinueProjBootDege, double options_epsilonCCA,
                boolean_T options_includeOriginalAxes, double
                options_maxDepthSplit, double options_XVariationTol,
                emxArray_real_T *iFeatureNum, double depth, boolean_T *bLeaf,
                emxArray_boolean_T *bLessThanTrain, double partitionPoint_data[],
                int partitionPoint_size[2], emxArray_real_T *projMat,
                emxArray_real_T *countsNode, emxArray_real_T *iIn)
{
  int i4;
  emxArray_real_T *iCanBeSelected;
  int tmp_size[2];
  double tmp_data[1];
  double b_tmp_data[1];
  int cdiff;
  int loop_ub;
  double d0;
  boolean_T b0;
  emxArray_real_T *r1;
  boolean_T c_tmp_data[10000];
  int b_tmp_size[2];
  double dv0[2];
  int b_YTrain[1];
  emxArray_boolean_T c_YTrain;
  boolean_T bv0[2];
  emxArray_boolean_T *bXVaries;
  double lambda;
  emxArray_real_T *indFeatIn;
  emxArray_real_T *b_iCanBeSelected;
  emxArray_real_T *iTrainThis;
  emxArray_real_T *b_iFeatureNum;
  emxArray_boolean_T *bInMat;
  emxArray_int32_T *ii;
  int idx;
  boolean_T exitg12;
  boolean_T guard4 = false;
  emxArray_int32_T *b_ii;
  emxArray_real_T *b_XTrain;
  int i5;
  emxArray_boolean_T *bRemainsSelected;
  emxArray_int32_T *c_ii;
  emxArray_real_T *iInNew;
  emxArray_real_T *b_iIn;
  double nSelected;
  emxArray_int32_T *r2;
  emxArray_real_T *x;
  emxArray_boolean_T *b_bXVaries;
  emxArray_boolean_T *c_bXVaries;
  emxArray_real_T *c_XTrain;
  emxArray_real_T *c_iFeatureNum;
  emxArray_real_T *c_iCanBeSelected;
  emxArray_int32_T *d_ii;
  boolean_T exitg10;
  boolean_T exitg11;
  boolean_T guard3 = false;
  emxArray_real_T *XTrainBag;
  emxArray_real_T *q1;
  emxArray_real_T *b_r1;
  emxArray_real_T *q2;
  emxArray_real_T *UTrain;
  emxArray_real_T *splitGains;
  emxArray_real_T *iSplits;
  emxArray_real_T *UTrainSort;
  emxArray_boolean_T *YTrainSort;
  emxArray_real_T *LeftCumCounts;
  emxArray_real_T *RightCumCounts;
  emxArray_real_T *pL;
  emxArray_real_T *metricLeft;
  emxArray_real_T *metricRight;
  emxArray_real_T *c_r1;
  emxArray_real_T *b_projMat;
  emxArray_real_T *YTrainBag;
  emxArray_real_T *r3;
  emxArray_real_T *b_x;
  emxArray_real_T *r4;
  emxArray_real_T *y;
  emxArray_real_T *b_splitGains;
  emxArray_real_T *b_q2;
  emxArray_real_T *d_r1;
  emxArray_real_T *b_YTrainBag;
  emxArray_real_T *b_iTrainThis;
  emxArray_real_T *d_iCanBeSelected;
  emxArray_boolean_T *b_bRemainsSelected;
  emxArray_boolean_T *c_bRemainsSelected;
  emxArray_boolean_T *b_RightCumCounts;
  emxArray_boolean_T *b_pL;
  emxArray_real_T *c_RightCumCounts;
  emxArray_real_T *b_LeftCumCounts;
  emxArray_real_T *b_UTrain;
  emxArray_boolean_T *c_iTrainThis;
  emxArray_real_T *d_iTrainThis;
  emxArray_boolean_T *e_iTrainThis;
  emxArray_real_T *f_iTrainThis;
  emxArray_real_T *b_indFeatIn;
  emxArray_real_T *e_iCanBeSelected;
  emxArray_real_T *b_XTrainBag;
  emxArray_boolean_T *b_bInMat;
  emxArray_real_T *c_q2;
  emxArray_real_T *d_q2;
  emxArray_real_T *c_iIn;
  emxArray_real_T *d_iIn;
  emxArray_real_T *e_iIn;
  emxArray_real_T *d_XTrain;
  emxArray_real_T *c_UTrain;
  emxArray_real_T *e_q2;
  emxArray_int32_T *e_ii;
  emxArray_real_T *f_q2;
  emxArray_real_T *f_iCanBeSelected;
  emxArray_real_T *r5;
  emxArray_int32_T *f_ii;
  emxArray_real_T *f_iIn;
  emxArray_real_T *g_iIn;
  emxArray_real_T *h_iIn;
  emxArray_real_T *e_XTrain;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T b_guard3 = false;
  boolean_T b_guard4 = false;
  int c_tmp_size[2];
  double dv1[2];
  int c_bInMat[1];
  boolean_T bSplit;
  int nProjDirs;
  unsigned int unnamed_idx_1;
  int32_T exitg9;
  int vlen;
  int br;
  int32_T exitg8;
  int ar;
  int ixstart;
  int ia;
  int k;
  double rankX;
  unsigned int unnamed_idx_0;
  int32_T exitg7;
  int32_T exitg6;
  int nVarAtt;
  boolean_T exitg5;
  boolean_T exitg4;
  boolean_T b_guard2 = false;
  boolean_T exitg3;
  boolean_T exitg2;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  int iDir;
  double b_partitionPoint_data[1];
  i4 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
  bLessThanTrain->size[0] = 0;
  bLessThanTrain->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)bLessThanTrain, i4, (int)sizeof
                    (boolean_T));
  partitionPoint_size[0] = 1;
  partitionPoint_size[1] = 1;
  partitionPoint_data[0] = 0.0;
  i4 = projMat->size[0];
  projMat->size[0] = 0;
  emxEnsureCapacity((emxArray__common *)projMat, i4, (int)sizeof(double));
  i4 = iIn->size[0] * iIn->size[1];
  iIn->size[0] = 1;
  iIn->size[1] = 0;
  emxEnsureCapacity((emxArray__common *)iIn, i4, (int)sizeof(double));
  emxInit_real_T(&iCanBeSelected, 2);
  if (YTrain->size[1] == 1) {
    sum(YTrain, tmp_data, tmp_size);
    sum(YTrain, b_tmp_data, tmp_size);
    cdiff = YTrain->size[0];
    i4 = countsNode->size[0] * countsNode->size[1];
    countsNode->size[0] = 1;
    countsNode->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)countsNode, i4, (int)sizeof(double));
    countsNode->data[0] = (double)cdiff - tmp_data[0];
    countsNode->data[countsNode->size[0]] = b_tmp_data[0];
  } else {
    b_sum(YTrain, iCanBeSelected);
    i4 = countsNode->size[0] * countsNode->size[1];
    countsNode->size[0] = 1;
    countsNode->size[1] = iCanBeSelected->size[1];
    emxEnsureCapacity((emxArray__common *)countsNode, i4, (int)sizeof(double));
    loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      countsNode->data[i4] = iCanBeSelected->data[i4];
    }
  }

  /*  Return if one training point, pure node or if options for returning */
  /*  fulfilled.  A little case to deal with a binary YTrain is required. */
  if ((2.0 >= options_minPointsForSplit) || rtIsNaN(options_minPointsForSplit))
  {
    d0 = 2.0;
  } else {
    d0 = options_minPointsForSplit;
  }

  if ((XTrain->size[0] < d0) || (depth > options_maxDepthSplit)) {
    b0 = true;
  } else {
    b0 = false;
  }

  *bLeaf = b0;
  emxInit_real_T(&r1, 2);
  if (!b0) {
    if (YTrain->size[1] > 1) {
      b_sum(YTrain, iCanBeSelected);
      b_abs(iCanBeSelected, r1);
      b_tmp_size[0] = 1;
      b_tmp_size[1] = r1->size[1];
      loop_ub = r1->size[0] * r1->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        c_tmp_data[i4] = (r1->data[i4] > 1.0E-12);
      }

      *bLeaf = (c_sum(c_tmp_data, b_tmp_size) < 2.0);
    } else {
      dv0[0] = 0.0;
      dv0[1] = YTrain->size[0];
      b_YTrain[0] = YTrain->size[0] * YTrain->size[1];
      c_YTrain = *YTrain;
      c_YTrain.size = (int *)&b_YTrain;
      c_YTrain.numDimensions = 1;
      bsxfun(d_sum(&c_YTrain), dv0, bv0);
      *bLeaf = any(bv0);
    }
  }

  if (*bLeaf) {
  } else {
    b_emxInit_boolean_T(&bXVaries, 2);

    /* % Subsample features as required for hyperplane sampling */
    fastUnique(iFeatureNum, iCanBeSelected);
    i4 = bXVaries->size[0] * bXVaries->size[1];
    bXVaries->size[0] = 1;
    bXVaries->size[1] = iCanBeSelected->size[1];
    emxEnsureCapacity((emxArray__common *)bXVaries, i4, (int)sizeof(boolean_T));
    loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      bXVaries->data[i4] = rtIsNaN(iCanBeSelected->data[i4]);
    }

    eml_null_assignment(iCanBeSelected, bXVaries);
    if ((iCanBeSelected->size[1] <= options_lambda) || rtIsNaN(options_lambda))
    {
      lambda = iCanBeSelected->size[1];
    } else {
      lambda = options_lambda;
    }

    emxInit_real_T(&indFeatIn, 2);
    b_emxInit_real_T(&b_iCanBeSelected, 1);
    randperm(iCanBeSelected->size[1], lambda, indFeatIn);
    i4 = b_iCanBeSelected->size[0];
    b_iCanBeSelected->size[0] = indFeatIn->size[1];
    emxEnsureCapacity((emxArray__common *)b_iCanBeSelected, i4, (int)sizeof
                      (double));
    loop_ub = indFeatIn->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      b_iCanBeSelected->data[i4] = iCanBeSelected->data[(int)indFeatIn->data[i4]
        - 1];
    }

    b_emxInit_real_T(&iTrainThis, 1);
    emxInit_real_T(&b_iFeatureNum, 2);
    b_eml_sort(b_iCanBeSelected, iTrainThis);
    cdiff = iFeatureNum->size[1];
    i4 = b_iFeatureNum->size[0] * b_iFeatureNum->size[1];
    b_iFeatureNum->size[0] = 1;
    b_iFeatureNum->size[1] = cdiff;
    emxEnsureCapacity((emxArray__common *)b_iFeatureNum, i4, (int)sizeof(double));
    emxFree_real_T(&b_iCanBeSelected);
    for (i4 = 0; i4 < cdiff; i4++) {
      b_iFeatureNum->data[b_iFeatureNum->size[0] * i4] = iFeatureNum->data[i4];
    }

    b_emxInit_boolean_T(&bInMat, 2);
    b_emxInit_int32_T(&ii, 2);
    b_bsxfun(b_iFeatureNum, iTrainThis, bInMat);
    b_any(bInMat, bXVaries);
    idx = 0;
    i4 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = bXVaries->size[1];
    emxEnsureCapacity((emxArray__common *)ii, i4, (int)sizeof(int));
    cdiff = 1;
    emxFree_real_T(&b_iFeatureNum);
    exitg12 = false;
    while ((!exitg12) && (cdiff <= bXVaries->size[1])) {
      guard4 = false;
      if (bXVaries->data[cdiff - 1]) {
        idx++;
        ii->data[idx - 1] = cdiff;
        if (idx >= bXVaries->size[1]) {
          exitg12 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }

      if (guard4) {
        cdiff++;
      }
    }

    if (bXVaries->size[1] == 1) {
      if (idx == 0) {
        i4 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = 0;
        emxEnsureCapacity((emxArray__common *)ii, i4, (int)sizeof(int));
      }
    } else {
      if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      b_emxInit_int32_T(&b_ii, 2);
      i4 = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = 1;
      b_ii->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)b_ii, i4, (int)sizeof(int));
      for (i4 = 0; i4 < loop_ub; i4++) {
        b_ii->data[b_ii->size[0] * i4] = ii->data[i4];
      }

      i4 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = b_ii->size[1];
      emxEnsureCapacity((emxArray__common *)ii, i4, (int)sizeof(int));
      loop_ub = b_ii->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        ii->data[ii->size[0] * i4] = b_ii->data[b_ii->size[0] * i4];
      }

      emxFree_int32_T(&b_ii);
    }

    i4 = iIn->size[0] * iIn->size[1];
    iIn->size[0] = 1;
    iIn->size[1] = ii->size[1];
    emxEnsureCapacity((emxArray__common *)iIn, i4, (int)sizeof(double));
    loop_ub = ii->size[0] * ii->size[1];
    for (i4 = 0; i4 < loop_ub; i4++) {
      iIn->data[i4] = ii->data[i4];
    }

    emxInit_real_T(&b_XTrain, 2);

    /*  Check for variation along selected dimensions and resample features that */
    /*  have no variation */
    loop_ub = XTrain->size[0];
    i4 = b_XTrain->size[0] * b_XTrain->size[1];
    b_XTrain->size[0] = loop_ub;
    b_XTrain->size[1] = iIn->size[1];
    emxEnsureCapacity((emxArray__common *)b_XTrain, i4, (int)sizeof(double));
    cdiff = iIn->size[1];
    for (i4 = 0; i4 < cdiff; i4++) {
      for (i5 = 0; i5 < loop_ub; i5++) {
        b_XTrain->data[i5 + b_XTrain->size[0] * i4] = XTrain->data[i5 +
          XTrain->size[0] * ((int)iIn->data[iIn->size[0] * i4] - 1)];
      }
    }

    queryIfColumnsVary(b_XTrain, options_XVariationTol, bXVaries);
    emxFree_real_T(&b_XTrain);
    emxInit_boolean_T(&bRemainsSelected, 1);
    emxInit_int32_T(&c_ii, 1);
    if (!all(bXVaries)) {
      emxInit_real_T(&iInNew, 2);
      i4 = iInNew->size[0] * iInNew->size[1];
      iInNew->size[0] = 1;
      iInNew->size[1] = iIn->size[1];
      emxEnsureCapacity((emxArray__common *)iInNew, i4, (int)sizeof(double));
      loop_ub = iIn->size[0] * iIn->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        iInNew->data[i4] = iIn->data[i4];
      }

      emxInit_real_T(&b_iIn, 2);
      nSelected = 0.0;
      eml_li_find(bXVaries, ii);
      i4 = b_iIn->size[0] * b_iIn->size[1];
      b_iIn->size[0] = 1;
      b_iIn->size[1] = ii->size[1];
      emxEnsureCapacity((emxArray__common *)b_iIn, i4, (int)sizeof(double));
      loop_ub = ii->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        b_iIn->data[b_iIn->size[0] * i4] = iIn->data[ii->data[ii->size[0] * i4]
          - 1];
      }

      i4 = iIn->size[0] * iIn->size[1];
      iIn->size[0] = 1;
      iIn->size[1] = b_iIn->size[1];
      emxEnsureCapacity((emxArray__common *)iIn, i4, (int)sizeof(double));
      loop_ub = b_iIn->size[1];
      for (i4 = 0; i4 < loop_ub; i4++) {
        iIn->data[iIn->size[0] * i4] = b_iIn->data[b_iIn->size[0] * i4];
      }

      emxFree_real_T(&b_iIn);
      b_emxInit_int32_T(&r2, 2);
      emxInit_real_T(&x, 2);
      b_emxInit_boolean_T(&b_bXVaries, 2);
      b_emxInit_boolean_T(&c_bXVaries, 2);
      emxInit_real_T(&c_XTrain, 2);
      emxInit_real_T(&c_iFeatureNum, 2);
      b_emxInit_real_T(&c_iCanBeSelected, 1);
      b_emxInit_int32_T(&d_ii, 2);
      exitg10 = false;
      while ((!exitg10) && ((!all(bXVaries)) && (lambda > 0.0))) {
        i4 = c_bXVaries->size[0] * c_bXVaries->size[1];
        c_bXVaries->size[0] = 1;
        c_bXVaries->size[1] = bXVaries->size[1];
        emxEnsureCapacity((emxArray__common *)c_bXVaries, i4, (int)sizeof
                          (boolean_T));
        loop_ub = bXVaries->size[0] * bXVaries->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          c_bXVaries->data[i4] = !bXVaries->data[i4];
        }

        eml_li_find(c_bXVaries, ii);
        i4 = r2->size[0] * r2->size[1];
        r2->size[0] = 1;
        r2->size[1] = ii->size[1];
        emxEnsureCapacity((emxArray__common *)r2, i4, (int)sizeof(int));
        loop_ub = ii->size[0] * ii->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          r2->data[i4] = (int)iInNew->data[ii->data[i4] - 1];
        }

        loop_ub = r2->size[0] * r2->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          iFeatureNum->data[r2->data[i4] - 1] = rtNaN;
        }

        i4 = b_bXVaries->size[0] * b_bXVaries->size[1];
        b_bXVaries->size[0] = 1;
        b_bXVaries->size[1] = bXVaries->size[1];
        emxEnsureCapacity((emxArray__common *)b_bXVaries, i4, (int)sizeof
                          (boolean_T));
        loop_ub = bXVaries->size[0] * bXVaries->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          b_bXVaries->data[i4] = !bXVaries->data[i4];
        }

        eml_li_find(b_bXVaries, ii);
        i4 = c_ii->size[0];
        c_ii->size[0] = ii->size[1];
        emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof(int));
        loop_ub = ii->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          c_ii->data[i4] = (int)iInNew->data[ii->data[ii->size[0] * i4] - 1];
        }

        loop_ub = bInMat->size[0];
        cdiff = c_ii->size[0];
        for (i4 = 0; i4 < cdiff; i4++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            bInMat->data[i5 + bInMat->size[0] * (c_ii->data[i4] - 1)] = false;
          }
        }

        c_any(bInMat, bRemainsSelected);
        nSelected += d_sum(bRemainsSelected);
        b_eml_null_assignment(iCanBeSelected, indFeatIn);
        lambda -= nSelected;
        if ((iCanBeSelected->size[1] <= lambda) || rtIsNaN(lambda)) {
          lambda = iCanBeSelected->size[1];
        }

        if (lambda < 1.0) {
          exitg10 = true;
        } else {
          randperm(iCanBeSelected->size[1], lambda, indFeatIn);
          cdiff = iFeatureNum->size[1];
          i4 = c_iFeatureNum->size[0] * c_iFeatureNum->size[1];
          c_iFeatureNum->size[0] = 1;
          c_iFeatureNum->size[1] = cdiff;
          emxEnsureCapacity((emxArray__common *)c_iFeatureNum, i4, (int)sizeof
                            (double));
          for (i4 = 0; i4 < cdiff; i4++) {
            c_iFeatureNum->data[c_iFeatureNum->size[0] * i4] = iFeatureNum->
              data[i4];
          }

          i4 = c_iCanBeSelected->size[0];
          c_iCanBeSelected->size[0] = indFeatIn->size[1];
          emxEnsureCapacity((emxArray__common *)c_iCanBeSelected, i4, (int)
                            sizeof(double));
          loop_ub = indFeatIn->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            c_iCanBeSelected->data[i4] = iCanBeSelected->data[(int)
              indFeatIn->data[i4] - 1];
          }

          b_bsxfun(c_iFeatureNum, c_iCanBeSelected, bInMat);
          b_any(bInMat, bXVaries);
          idx = 0;
          i4 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = bXVaries->size[1];
          emxEnsureCapacity((emxArray__common *)ii, i4, (int)sizeof(int));
          cdiff = 1;
          exitg11 = false;
          while ((!exitg11) && (cdiff <= bXVaries->size[1])) {
            guard3 = false;
            if (bXVaries->data[cdiff - 1]) {
              idx++;
              ii->data[idx - 1] = cdiff;
              if (idx >= bXVaries->size[1]) {
                exitg11 = true;
              } else {
                guard3 = true;
              }
            } else {
              guard3 = true;
            }

            if (guard3) {
              cdiff++;
            }
          }

          if (bXVaries->size[1] == 1) {
            if (idx == 0) {
              i4 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = 0;
              emxEnsureCapacity((emxArray__common *)ii, i4, (int)sizeof(int));
            }
          } else {
            if (1 > idx) {
              loop_ub = 0;
            } else {
              loop_ub = idx;
            }

            i4 = d_ii->size[0] * d_ii->size[1];
            d_ii->size[0] = 1;
            d_ii->size[1] = loop_ub;
            emxEnsureCapacity((emxArray__common *)d_ii, i4, (int)sizeof(int));
            for (i4 = 0; i4 < loop_ub; i4++) {
              d_ii->data[d_ii->size[0] * i4] = ii->data[i4];
            }

            i4 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = d_ii->size[1];
            emxEnsureCapacity((emxArray__common *)ii, i4, (int)sizeof(int));
            loop_ub = d_ii->size[1];
            for (i4 = 0; i4 < loop_ub; i4++) {
              ii->data[ii->size[0] * i4] = d_ii->data[d_ii->size[0] * i4];
            }
          }

          i4 = iInNew->size[0] * iInNew->size[1];
          iInNew->size[0] = 1;
          iInNew->size[1] = ii->size[1];
          emxEnsureCapacity((emxArray__common *)iInNew, i4, (int)sizeof(double));
          loop_ub = ii->size[0] * ii->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            iInNew->data[i4] = ii->data[i4];
          }

          loop_ub = XTrain->size[0];
          i4 = c_XTrain->size[0] * c_XTrain->size[1];
          c_XTrain->size[0] = loop_ub;
          c_XTrain->size[1] = iInNew->size[1];
          emxEnsureCapacity((emxArray__common *)c_XTrain, i4, (int)sizeof(double));
          cdiff = iInNew->size[1];
          for (i4 = 0; i4 < cdiff; i4++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              c_XTrain->data[i5 + c_XTrain->size[0] * i4] = XTrain->data[i5 +
                XTrain->size[0] * ((int)iInNew->data[iInNew->size[0] * i4] - 1)];
            }
          }

          queryIfColumnsVary(c_XTrain, options_XVariationTol, bXVaries);
          eml_li_find(bXVaries, ii);
          i4 = x->size[0] * x->size[1];
          x->size[0] = 1;
          x->size[1] = iIn->size[1] + ii->size[1];
          emxEnsureCapacity((emxArray__common *)x, i4, (int)sizeof(double));
          loop_ub = iIn->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            x->data[x->size[0] * i4] = iIn->data[iIn->size[0] * i4];
          }

          loop_ub = ii->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            x->data[x->size[0] * (i4 + iIn->size[1])] = iInNew->data[ii->data
              [ii->size[0] * i4] - 1];
          }

          eml_sort(x, iIn);
        }
      }

      emxFree_int32_T(&d_ii);
      emxFree_real_T(&c_iCanBeSelected);
      emxFree_real_T(&c_iFeatureNum);
      emxFree_real_T(&c_XTrain);
      emxFree_boolean_T(&c_bXVaries);
      emxFree_boolean_T(&b_bXVaries);
      emxFree_real_T(&x);
      emxFree_int32_T(&r2);
      emxFree_real_T(&iInNew);
    }

    if (iIn->size[1] == 0) {
      /*  This means that there was no variation along any feature, therefore */
      /*  exit. */
      *bLeaf = true;
    } else {
      /* % Projection bootstrap if required */
      emxInit_real_T(&XTrainBag, 2);
      if (options_bProjBoot) {
        randi(XTrain->size[0], XTrain->size[0], iTrainThis);
        i4 = XTrainBag->size[0] * XTrainBag->size[1];
        XTrainBag->size[0] = iTrainThis->size[0];
        XTrainBag->size[1] = iIn->size[1];
        emxEnsureCapacity((emxArray__common *)XTrainBag, i4, (int)sizeof(double));
        loop_ub = iIn->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          cdiff = iTrainThis->size[0];
          for (i5 = 0; i5 < cdiff; i5++) {
            XTrainBag->data[i5 + XTrainBag->size[0] * i4] = XTrain->data[((int)
              iTrainThis->data[i5] + XTrain->size[0] * ((int)iIn->data[iIn->
              size[0] * i4] - 1)) - 1];
          }
        }

        loop_ub = YTrain->size[1];
        i4 = bInMat->size[0] * bInMat->size[1];
        bInMat->size[0] = iTrainThis->size[0];
        bInMat->size[1] = loop_ub;
        emxEnsureCapacity((emxArray__common *)bInMat, i4, (int)sizeof(boolean_T));
        for (i4 = 0; i4 < loop_ub; i4++) {
          cdiff = iTrainThis->size[0];
          for (i5 = 0; i5 < cdiff; i5++) {
            bInMat->data[i5 + bInMat->size[0] * i4] = YTrain->data[((int)
              iTrainThis->data[i5] + YTrain->size[0] * i4) - 1];
          }
        }
      } else {
        loop_ub = XTrain->size[0];
        i4 = XTrainBag->size[0] * XTrainBag->size[1];
        XTrainBag->size[0] = loop_ub;
        XTrainBag->size[1] = iIn->size[1];
        emxEnsureCapacity((emxArray__common *)XTrainBag, i4, (int)sizeof(double));
        cdiff = iIn->size[1];
        for (i4 = 0; i4 < cdiff; i4++) {
          for (i5 = 0; i5 < loop_ub; i5++) {
            XTrainBag->data[i5 + XTrainBag->size[0] * i4] = XTrain->data[i5 +
              XTrain->size[0] * ((int)iIn->data[iIn->size[0] * i4] - 1)];
          }
        }

        i4 = bInMat->size[0] * bInMat->size[1];
        bInMat->size[0] = YTrain->size[0];
        bInMat->size[1] = YTrain->size[1];
        emxEnsureCapacity((emxArray__common *)bInMat, i4, (int)sizeof(boolean_T));
        loop_ub = YTrain->size[0] * YTrain->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          bInMat->data[i4] = YTrain->data[i4];
        }
      }

      queryIfColumnsVary(XTrainBag, options_XVariationTol, bXVaries);
      emxInit_real_T(&q1, 2);
      emxInit_real_T(&b_r1, 2);
      emxInit_real_T(&q2, 2);
      emxInit_real_T(&UTrain, 2);
      b_emxInit_real_T(&splitGains, 1);
      b_emxInit_real_T(&iSplits, 1);
      b_emxInit_real_T(&UTrainSort, 1);
      b_emxInit_boolean_T(&YTrainSort, 2);
      emxInit_real_T(&LeftCumCounts, 2);
      emxInit_real_T(&RightCumCounts, 2);
      emxInit_real_T(&pL, 2);
      b_emxInit_real_T(&metricLeft, 1);
      b_emxInit_real_T(&metricRight, 1);
      emxInit_real_T(&c_r1, 2);
      emxInit_real_T(&b_projMat, 2);
      emxInit_real_T(&YTrainBag, 2);
      emxInit_real_T(&r3, 2);
      emxInit_real_T(&b_x, 2);
      emxInit_real_T(&r4, 2);
      emxInit_real_T(&y, 2);
      b_emxInit_real_T(&b_splitGains, 1);
      emxInit_real_T(&b_q2, 2);
      emxInit_real_T(&d_r1, 2);
      emxInit_real_T(&b_YTrainBag, 2);
      b_emxInit_real_T(&b_iTrainThis, 1);
      b_emxInit_real_T(&d_iCanBeSelected, 1);
      emxInit_boolean_T(&b_bRemainsSelected, 1);
      emxInit_boolean_T(&c_bRemainsSelected, 1);
      b_emxInit_boolean_T(&b_RightCumCounts, 2);
      b_emxInit_boolean_T(&b_pL, 2);
      emxInit_real_T(&c_RightCumCounts, 2);
      emxInit_real_T(&b_LeftCumCounts, 2);
      b_emxInit_real_T(&b_UTrain, 1);
      emxInit_boolean_T(&c_iTrainThis, 1);
      b_emxInit_real_T(&d_iTrainThis, 1);
      emxInit_boolean_T(&e_iTrainThis, 1);
      b_emxInit_real_T(&f_iTrainThis, 1);
      emxInit_real_T(&b_indFeatIn, 2);
      emxInit_real_T(&e_iCanBeSelected, 2);
      emxInit_real_T(&b_XTrainBag, 2);
      b_emxInit_boolean_T(&b_bInMat, 2);
      emxInit_real_T(&c_q2, 2);
      emxInit_real_T(&d_q2, 2);
      b_emxInit_real_T(&c_iIn, 1);
      b_emxInit_real_T(&d_iIn, 1);
      b_emxInit_real_T(&e_iIn, 1);
      emxInit_real_T(&d_XTrain, 2);
      emxInit_real_T(&c_UTrain, 2);
      emxInit_real_T(&e_q2, 2);
      emxInit_int32_T(&e_ii, 1);
      b_emxInit_real_T(&f_q2, 1);
      b_emxInit_real_T(&f_iCanBeSelected, 1);
      b_emxInit_real_T(&r5, 1);
      emxInit_int32_T(&f_ii, 1);
      b_emxInit_real_T(&f_iIn, 1);
      b_emxInit_real_T(&g_iIn, 1);
      b_emxInit_real_T(&h_iIn, 1);
      emxInit_real_T(&e_XTrain, 2);
      guard1 = false;
      guard2 = false;
      b_guard3 = false;
      b_guard4 = false;
      if (!d_any(bXVaries)) {
        b_guard3 = true;
      } else if (bInMat->size[1] > 1) {
        b_sum(bInMat, iCanBeSelected);
        b_abs(iCanBeSelected, r1);
        c_tmp_size[0] = 1;
        c_tmp_size[1] = r1->size[1];
        loop_ub = r1->size[0] * r1->size[1];
        for (i4 = 0; i4 < loop_ub; i4++) {
          c_tmp_data[i4] = (r1->data[i4] > 1.0E-12);
        }

        if (c_sum(c_tmp_data, c_tmp_size) < 2.0) {
          b_guard3 = true;
        } else {
          b_guard4 = true;
        }
      } else {
        b_guard4 = true;
      }

      if (b_guard4) {
        if (bInMat->size[1] == 1) {
          dv1[0] = 0.0;
          dv1[1] = bInMat->size[0];
          c_bInMat[0] = bInMat->size[0];
          c_YTrain = *bInMat;
          c_YTrain.size = (int *)&c_bInMat;
          c_YTrain.numDimensions = 1;
          bsxfun(d_sum(&c_YTrain), dv1, bv0);
          if (any(bv0)) {
            b_guard3 = true;
          } else {
            guard2 = true;
          }
        } else {
          guard2 = true;
        }
      }

      if (b_guard3) {
        if (!c_options_bContinueProjBootDege) {
          *bLeaf = true;
        } else {
          loop_ub = XTrain->size[0];
          i4 = XTrainBag->size[0] * XTrainBag->size[1];
          XTrainBag->size[0] = loop_ub;
          XTrainBag->size[1] = iIn->size[1];
          emxEnsureCapacity((emxArray__common *)XTrainBag, i4, (int)sizeof
                            (double));
          cdiff = iIn->size[1];
          for (i4 = 0; i4 < cdiff; i4++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              XTrainBag->data[i5 + XTrainBag->size[0] * i4] = XTrain->data[i5 +
                XTrain->size[0] * ((int)iIn->data[iIn->size[0] * i4] - 1)];
            }
          }

          i4 = bInMat->size[0] * bInMat->size[1];
          bInMat->size[0] = YTrain->size[0];
          bInMat->size[1] = YTrain->size[1];
          emxEnsureCapacity((emxArray__common *)bInMat, i4, (int)sizeof
                            (boolean_T));
          loop_ub = YTrain->size[0] * YTrain->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            bInMat->data[i4] = YTrain->data[i4];
          }

          guard2 = true;
        }
      }

      if (guard2) {
        if ((XTrainBag->size[0] == 2) || queryIfOnlyTwoUniqueRows(XTrainBag)) {
          /*  Check for only having two points */
          /*  If there are only two points setup a maximum marginal split between the points */
          twoPointMaxMarginSplit(XTrainBag, bInMat, options_XVariationTol,
            &bSplit, b_projMat, partitionPoint_data, partitionPoint_size);
          i4 = q2->size[0] * q2->size[1];
          q2->size[0] = b_projMat->size[0];
          q2->size[1] = b_projMat->size[1];
          emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
          loop_ub = b_projMat->size[0] * b_projMat->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            q2->data[i4] = b_projMat->data[i4];
          }

          if (!bSplit) {
            *bLeaf = true;
          } else {
            i4 = f_iIn->size[0];
            f_iIn->size[0] = iIn->size[1];
            emxEnsureCapacity((emxArray__common *)f_iIn, i4, (int)sizeof(double));
            loop_ub = iIn->size[1];
            for (i4 = 0; i4 < loop_ub; i4++) {
              f_iIn->data[i4] = iIn->data[iIn->size[0] * i4];
            }

            if ((f_iIn->size[0] == 1) || (b_projMat->size[0] == 1)) {
              loop_ub = XTrain->size[0];
              i4 = e_XTrain->size[0] * e_XTrain->size[1];
              e_XTrain->size[0] = loop_ub;
              e_XTrain->size[1] = iIn->size[1];
              emxEnsureCapacity((emxArray__common *)e_XTrain, i4, (int)sizeof
                                (double));
              cdiff = iIn->size[1];
              for (i4 = 0; i4 < cdiff; i4++) {
                for (i5 = 0; i5 < loop_ub; i5++) {
                  e_XTrain->data[i5 + e_XTrain->size[0] * i4] = XTrain->data[i5
                    + XTrain->size[0] * ((int)iIn->data[iIn->size[0] * i4] - 1)];
                }
              }

              i4 = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[0] = e_XTrain->size[0];
              YTrainBag->size[1] = b_projMat->size[1];
              emxEnsureCapacity((emxArray__common *)YTrainBag, i4, (int)sizeof
                                (double));
              loop_ub = e_XTrain->size[0];
              for (i4 = 0; i4 < loop_ub; i4++) {
                cdiff = b_projMat->size[1];
                for (i5 = 0; i5 < cdiff; i5++) {
                  YTrainBag->data[i4 + YTrainBag->size[0] * i5] = 0.0;
                  idx = e_XTrain->size[1];
                  for (nProjDirs = 0; nProjDirs < idx; nProjDirs++) {
                    YTrainBag->data[i4 + YTrainBag->size[0] * i5] +=
                      e_XTrain->data[i4 + e_XTrain->size[0] * nProjDirs] *
                      b_projMat->data[nProjDirs + b_projMat->size[0] * i5];
                  }
                }
              }
            } else {
              i4 = XTrain->size[0];
              unnamed_idx_1 = (unsigned int)b_projMat->size[1];
              i5 = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[0] = i4;
              emxEnsureCapacity((emxArray__common *)YTrainBag, i5, (int)sizeof
                                (double));
              i5 = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[1] = (int)unnamed_idx_1;
              emxEnsureCapacity((emxArray__common *)YTrainBag, i5, (int)sizeof
                                (double));
              loop_ub = i4 * (int)unnamed_idx_1;
              for (i4 = 0; i4 < loop_ub; i4++) {
                YTrainBag->data[i4] = 0.0;
              }

              i4 = XTrain->size[0];
              if ((i4 == 0) || (b_projMat->size[1] == 0)) {
              } else {
                i4 = XTrain->size[0];
                idx = i4 * (b_projMat->size[1] - 1);
                cdiff = 0;
                do {
                  exitg9 = 0;
                  i4 = XTrain->size[0];
                  if ((i4 > 0) && (cdiff <= idx)) {
                    i4 = XTrain->size[0];
                    for (vlen = 1; vlen <= i4; vlen++) {
                      YTrainBag->data[vlen - 1] = 0.0;
                    }

                    cdiff = XTrain->size[0];
                  } else {
                    exitg9 = 1;
                  }
                } while (exitg9 == 0);

                br = 0;
                cdiff = 0;
                do {
                  exitg8 = 0;
                  i4 = XTrain->size[0];
                  if ((i4 > 0) && (cdiff <= idx)) {
                    ar = 0;
                    i4 = g_iIn->size[0];
                    g_iIn->size[0] = iIn->size[1];
                    emxEnsureCapacity((emxArray__common *)g_iIn, i4, (int)sizeof
                                      (double));
                    loop_ub = iIn->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      g_iIn->data[i4] = iIn->data[iIn->size[0] * i4];
                    }

                    i4 = br + g_iIn->size[0];
                    for (ixstart = br; ixstart + 1 <= i4; ixstart++) {
                      if (b_projMat->data[ixstart] != 0.0) {
                        ia = ar;
                        i5 = XTrain->size[0];
                        for (vlen = 0; vlen + 1 <= i5; vlen++) {
                          ia++;
                          nProjDirs = XTrain->size[0];
                          k = c_ii->size[0];
                          c_ii->size[0] = iIn->size[1];
                          emxEnsureCapacity((emxArray__common *)c_ii, k, (int)
                                            sizeof(int));
                          loop_ub = iIn->size[1];
                          for (k = 0; k < loop_ub; k++) {
                            c_ii->data[k] = (int)iIn->data[iIn->size[0] * k];
                          }

                          YTrainBag->data[vlen] += b_projMat->data[ixstart] *
                            XTrain->data[(ia - 1) % nProjDirs + XTrain->size[0] *
                            (c_ii->data[(ia - 1) / nProjDirs] - 1)];
                        }
                      }

                      i5 = XTrain->size[0];
                      ar += i5;
                    }

                    i4 = h_iIn->size[0];
                    h_iIn->size[0] = iIn->size[1];
                    emxEnsureCapacity((emxArray__common *)h_iIn, i4, (int)sizeof
                                      (double));
                    loop_ub = iIn->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      h_iIn->data[i4] = iIn->data[iIn->size[0] * i4];
                    }

                    br += h_iIn->size[0];
                    cdiff = XTrain->size[0];
                  } else {
                    exitg8 = 1;
                  }
                } while (exitg8 == 0);
              }
            }

            i4 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
            bLessThanTrain->size[0] = YTrainBag->size[0];
            bLessThanTrain->size[1] = YTrainBag->size[1];
            emxEnsureCapacity((emxArray__common *)bLessThanTrain, i4, (int)
                              sizeof(boolean_T));
            loop_ub = YTrainBag->size[0] * YTrainBag->size[1];
            for (i4 = 0; i4 < loop_ub; i4++) {
              bLessThanTrain->data[i4] = (YTrainBag->data[i4] <=
                partitionPoint_data[i4]);
            }
          }

          guard1 = true;
        } else {
          /*  Generate the new features as required */
          b_any(bInMat, bXVaries);
          eml_li_find(bXVaries, ii);
          cdiff = bInMat->size[0];
          i4 = b_bInMat->size[0] * b_bInMat->size[1];
          b_bInMat->size[0] = cdiff;
          b_bInMat->size[1] = ii->size[1];
          emxEnsureCapacity((emxArray__common *)b_bInMat, i4, (int)sizeof
                            (boolean_T));
          loop_ub = ii->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            for (i5 = 0; i5 < cdiff; i5++) {
              b_bInMat->data[i5 + b_bInMat->size[0] * i4] = bInMat->data[i5 +
                bInMat->size[0] * (ii->data[ii->size[0] * i4] - 1)];
            }
          }

          i4 = bInMat->size[0] * bInMat->size[1];
          bInMat->size[0] = b_bInMat->size[0];
          bInMat->size[1] = b_bInMat->size[1];
          emxEnsureCapacity((emxArray__common *)bInMat, i4, (int)sizeof
                            (boolean_T));
          loop_ub = b_bInMat->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            cdiff = b_bInMat->size[0];
            for (i5 = 0; i5 < cdiff; i5++) {
              bInMat->data[i5 + bInMat->size[0] * i4] = b_bInMat->data[i5 +
                b_bInMat->size[0] * i4];
            }
          }

          e_sum(XTrainBag, iCanBeSelected);
          b_sum(bInMat, indFeatIn);

          /*  Subtraction of the mean is common to the process of calculating the */
          /*  projection matrices for both CCA and PCA but for computational */
          /*  effificently we don't make this translation when actually applying the */
          /*  projections */
          i4 = e_iCanBeSelected->size[0] * e_iCanBeSelected->size[1];
          e_iCanBeSelected->size[0] = 1;
          e_iCanBeSelected->size[1] = iCanBeSelected->size[1];
          emxEnsureCapacity((emxArray__common *)e_iCanBeSelected, i4, (int)
                            sizeof(double));
          cdiff = XTrainBag->size[0];
          loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            e_iCanBeSelected->data[i4] = iCanBeSelected->data[i4] / (double)
              cdiff;
          }

          i4 = b_XTrainBag->size[0] * b_XTrainBag->size[1];
          b_XTrainBag->size[0] = XTrainBag->size[0];
          b_XTrainBag->size[1] = XTrainBag->size[1];
          emxEnsureCapacity((emxArray__common *)b_XTrainBag, i4, (int)sizeof
                            (double));
          loop_ub = XTrainBag->size[0] * XTrainBag->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            b_XTrainBag->data[i4] = XTrainBag->data[i4];
          }

          d_bsxfun(b_XTrainBag, e_iCanBeSelected, XTrainBag);
          i4 = b_indFeatIn->size[0] * b_indFeatIn->size[1];
          b_indFeatIn->size[0] = 1;
          b_indFeatIn->size[1] = indFeatIn->size[1];
          emxEnsureCapacity((emxArray__common *)b_indFeatIn, i4, (int)sizeof
                            (double));
          cdiff = bInMat->size[0];
          loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            b_indFeatIn->data[i4] = indFeatIn->data[i4] / (double)cdiff;
          }

          e_bsxfun(bInMat, b_indFeatIn, YTrainBag);

          /*  This code is a reduction of the function canoncorr.  This */
          /*  method is explained in the supplementary material */
          qr(XTrainBag, UTrain, c_r1, iCanBeSelected);
          i4 = q1->size[0] * q1->size[1];
          q1->size[0] = UTrain->size[0];
          q1->size[1] = UTrain->size[1];
          emxEnsureCapacity((emxArray__common *)q1, i4, (int)sizeof(double));
          loop_ub = UTrain->size[0] * UTrain->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            q1->data[i4] = UTrain->data[i4];
          }

          i4 = b_r1->size[0] * b_r1->size[1];
          b_r1->size[0] = c_r1->size[0];
          b_r1->size[1] = c_r1->size[1];
          emxEnsureCapacity((emxArray__common *)b_r1, i4, (int)sizeof(double));
          loop_ub = c_r1->size[0] * c_r1->size[1];
          for (i4 = 0; i4 < loop_ub; i4++) {
            b_r1->data[i4] = c_r1->data[i4];
          }

          /*  Reduce to full rank within some tolerance */
          lambda = fabs(c_r1->data[0]);
          diag(c_r1, iTrainThis);
          i4 = f_iTrainThis->size[0];
          f_iTrainThis->size[0] = iTrainThis->size[0];
          emxEnsureCapacity((emxArray__common *)f_iTrainThis, i4, (int)sizeof
                            (double));
          loop_ub = iTrainThis->size[0];
          for (i4 = 0; i4 < loop_ub; i4++) {
            f_iTrainThis->data[i4] = iTrainThis->data[i4];
          }

          d_abs(f_iTrainThis, iTrainThis);
          lambda *= options_epsilonCCA;
          i4 = e_iTrainThis->size[0];
          e_iTrainThis->size[0] = iTrainThis->size[0];
          emxEnsureCapacity((emxArray__common *)e_iTrainThis, i4, (int)sizeof
                            (boolean_T));
          loop_ub = iTrainThis->size[0];
          for (i4 = 0; i4 < loop_ub; i4++) {
            e_iTrainThis->data[i4] = (iTrainThis->data[i4] >= lambda);
          }

          rankX = d_sum(e_iTrainThis);
          if (rankX == 0.0) {
            /* warning('X doesnt vary so component analysis fails'); */
            i4 = projMat->size[0];
            projMat->size[0] = XTrainBag->size[1];
            emxEnsureCapacity((emxArray__common *)projMat, i4, (int)sizeof
                              (double));
            projMat->data[0] = 1.0;
            loop_ub = XTrainBag->size[1];
            for (i4 = 0; i4 <= loop_ub - 2; i4++) {
              projMat->data[i4 + 1] = 0.0;
            }
          } else {
            if (rankX < XTrainBag->size[1]) {
              loop_ub = UTrain->size[0];
              i4 = q1->size[0] * q1->size[1];
              q1->size[0] = loop_ub;
              q1->size[1] = (int)rankX;
              emxEnsureCapacity((emxArray__common *)q1, i4, (int)sizeof(double));
              cdiff = (int)rankX;
              for (i4 = 0; i4 < cdiff; i4++) {
                for (i5 = 0; i5 < loop_ub; i5++) {
                  q1->data[i5 + q1->size[0] * i4] = UTrain->data[i5 +
                    UTrain->size[0] * i4];
                }
              }

              i4 = b_r1->size[0] * b_r1->size[1];
              b_r1->size[0] = (int)rankX;
              b_r1->size[1] = (int)rankX;
              emxEnsureCapacity((emxArray__common *)b_r1, i4, (int)sizeof(double));
              loop_ub = (int)rankX;
              for (i4 = 0; i4 < loop_ub; i4++) {
                cdiff = (int)rankX;
                for (i5 = 0; i5 < cdiff; i5++) {
                  b_r1->data[i5 + b_r1->size[0] * i4] = c_r1->data[i5 +
                    c_r1->size[0] * i4];
                }
              }
            }

            /*  This code is a reduction of the function canoncorr.  This */
            /*  method is explained in the supplementary material */
            qr(YTrainBag, UTrain, c_r1, indFeatIn);
            i4 = q2->size[0] * q2->size[1];
            q2->size[0] = UTrain->size[0];
            q2->size[1] = UTrain->size[1];
            emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
            loop_ub = UTrain->size[0] * UTrain->size[1];
            for (i4 = 0; i4 < loop_ub; i4++) {
              q2->data[i4] = UTrain->data[i4];
            }

            /*  Reduce to full rank within some tolerance */
            lambda = fabs(c_r1->data[0]);
            diag(c_r1, iTrainThis);
            i4 = d_iTrainThis->size[0];
            d_iTrainThis->size[0] = iTrainThis->size[0];
            emxEnsureCapacity((emxArray__common *)d_iTrainThis, i4, (int)sizeof
                              (double));
            loop_ub = iTrainThis->size[0];
            for (i4 = 0; i4 < loop_ub; i4++) {
              d_iTrainThis->data[i4] = iTrainThis->data[i4];
            }

            d_abs(d_iTrainThis, iTrainThis);
            lambda *= options_epsilonCCA;
            i4 = c_iTrainThis->size[0];
            c_iTrainThis->size[0] = iTrainThis->size[0];
            emxEnsureCapacity((emxArray__common *)c_iTrainThis, i4, (int)sizeof
                              (boolean_T));
            loop_ub = iTrainThis->size[0];
            for (i4 = 0; i4 < loop_ub; i4++) {
              c_iTrainThis->data[i4] = (iTrainThis->data[i4] >= lambda);
            }

            lambda = d_sum(c_iTrainThis);
            if (lambda == 0.0) {
              /* warning('Y doesnt vary so component analysis fails'); */
              i4 = projMat->size[0];
              projMat->size[0] = XTrainBag->size[1];
              emxEnsureCapacity((emxArray__common *)projMat, i4, (int)sizeof
                                (double));
              projMat->data[0] = 1.0;
              loop_ub = XTrainBag->size[1];
              for (i4 = 0; i4 <= loop_ub - 2; i4++) {
                projMat->data[i4 + 1] = 0.0;
              }
            } else {
              if (lambda < YTrainBag->size[1]) {
                loop_ub = UTrain->size[0];
                i4 = q2->size[0] * q2->size[1];
                q2->size[0] = loop_ub;
                q2->size[1] = (int)lambda;
                emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
                cdiff = (int)lambda;
                for (i4 = 0; i4 < cdiff; i4++) {
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    q2->data[i5 + q2->size[0] * i4] = UTrain->data[i5 +
                      UTrain->size[0] * i4];
                  }
                }
              }

              /*  Solve CCA using the decompositions */
              if ((rankX <= lambda) || rtIsNaN(lambda)) {
                lambda = rankX;
              }

              i4 = UTrain->size[0] * UTrain->size[1];
              UTrain->size[0] = q1->size[1];
              UTrain->size[1] = q1->size[0];
              emxEnsureCapacity((emxArray__common *)UTrain, i4, (int)sizeof
                                (double));
              loop_ub = q1->size[0];
              for (i4 = 0; i4 < loop_ub; i4++) {
                cdiff = q1->size[1];
                for (i5 = 0; i5 < cdiff; i5++) {
                  UTrain->data[i5 + UTrain->size[0] * i4] = q1->data[i4 +
                    q1->size[0] * i5];
                }
              }

              if ((UTrain->size[1] == 1) || (q2->size[0] == 1)) {
                i4 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = UTrain->size[0];
                YTrainBag->size[1] = q2->size[1];
                emxEnsureCapacity((emxArray__common *)YTrainBag, i4, (int)sizeof
                                  (double));
                loop_ub = UTrain->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = q2->size[1];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    YTrainBag->data[i4 + YTrainBag->size[0] * i5] = 0.0;
                    idx = UTrain->size[1];
                    for (nProjDirs = 0; nProjDirs < idx; nProjDirs++) {
                      YTrainBag->data[i4 + YTrainBag->size[0] * i5] +=
                        UTrain->data[i4 + UTrain->size[0] * nProjDirs] *
                        q2->data[nProjDirs + q2->size[0] * i5];
                    }
                  }
                }
              } else {
                unnamed_idx_0 = (unsigned int)UTrain->size[0];
                unnamed_idx_1 = (unsigned int)q2->size[1];
                i4 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = (int)unnamed_idx_0;
                emxEnsureCapacity((emxArray__common *)YTrainBag, i4, (int)sizeof
                                  (double));
                i4 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[1] = (int)unnamed_idx_1;
                emxEnsureCapacity((emxArray__common *)YTrainBag, i4, (int)sizeof
                                  (double));
                loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
                for (i4 = 0; i4 < loop_ub; i4++) {
                  YTrainBag->data[i4] = 0.0;
                }

                if ((UTrain->size[0] == 0) || (q2->size[1] == 0)) {
                } else {
                  idx = UTrain->size[0] * (q2->size[1] - 1);
                  for (cdiff = 0; cdiff <= idx; cdiff += UTrain->size[0]) {
                    i4 = cdiff + UTrain->size[0];
                    for (vlen = cdiff; vlen + 1 <= i4; vlen++) {
                      YTrainBag->data[vlen] = 0.0;
                    }
                  }

                  br = 0;
                  for (cdiff = 0; cdiff <= idx; cdiff += UTrain->size[0]) {
                    ar = 0;
                    i4 = br + UTrain->size[1];
                    for (ixstart = br; ixstart + 1 <= i4; ixstart++) {
                      if (q2->data[ixstart] != 0.0) {
                        ia = ar;
                        i5 = cdiff + UTrain->size[0];
                        for (vlen = cdiff; vlen + 1 <= i5; vlen++) {
                          ia++;
                          YTrainBag->data[vlen] += q2->data[ixstart] *
                            UTrain->data[ia - 1];
                        }
                      }

                      ar += UTrain->size[0];
                    }

                    br += UTrain->size[1];
                  }
                }
              }

              i4 = b_YTrainBag->size[0] * b_YTrainBag->size[1];
              b_YTrainBag->size[0] = YTrainBag->size[0];
              b_YTrainBag->size[1] = YTrainBag->size[1];
              emxEnsureCapacity((emxArray__common *)b_YTrainBag, i4, (int)sizeof
                                (double));
              loop_ub = YTrainBag->size[0] * YTrainBag->size[1];
              for (i4 = 0; i4 < loop_ub; i4++) {
                b_YTrainBag->data[i4] = YTrainBag->data[i4];
              }

              svd(b_YTrainBag, c_r1, UTrain, YTrainBag);
              nSelected = sqrt((double)XTrainBag->size[0] - 1.0);
              loop_ub = c_r1->size[0];
              i4 = d_r1->size[0] * d_r1->size[1];
              d_r1->size[0] = loop_ub;
              d_r1->size[1] = (int)lambda;
              emxEnsureCapacity((emxArray__common *)d_r1, i4, (int)sizeof(double));
              cdiff = (int)lambda;
              for (i4 = 0; i4 < cdiff; i4++) {
                for (i5 = 0; i5 < loop_ub; i5++) {
                  d_r1->data[i5 + d_r1->size[0] * i4] = c_r1->data[i5 +
                    c_r1->size[0] * i4];
                }
              }

              mldivide(b_r1, d_r1, q2);
              i4 = q2->size[0] * q2->size[1];
              emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
              idx = q2->size[0];
              cdiff = q2->size[1];
              loop_ub = idx * cdiff;
              for (i4 = 0; i4 < loop_ub; i4++) {
                q2->data[i4] *= nSelected;
              }

              /*  Put coefficients back to their full size and their correct order */
              cdiff = (int)((double)XTrainBag->size[1] - rankX);
              i4 = r3->size[0] * r3->size[1];
              r3->size[0] = cdiff;
              emxEnsureCapacity((emxArray__common *)r3, i4, (int)sizeof(double));
              i4 = r3->size[0] * r3->size[1];
              r3->size[1] = (int)lambda;
              emxEnsureCapacity((emxArray__common *)r3, i4, (int)sizeof(double));
              loop_ub = (int)((double)XTrainBag->size[1] - rankX) * (int)lambda;
              for (i4 = 0; i4 < loop_ub; i4++) {
                r3->data[i4] = 0.0;
              }

              i4 = c_q2->size[0] * c_q2->size[1];
              c_q2->size[0] = q2->size[0] + r3->size[0];
              c_q2->size[1] = q2->size[1];
              emxEnsureCapacity((emxArray__common *)c_q2, i4, (int)sizeof(double));
              loop_ub = q2->size[1];
              for (i4 = 0; i4 < loop_ub; i4++) {
                cdiff = q2->size[0];
                for (i5 = 0; i5 < cdiff; i5++) {
                  c_q2->data[i5 + c_q2->size[0] * i4] = q2->data[i5 + q2->size[0]
                    * i4];
                }
              }

              loop_ub = r3->size[1];
              for (i4 = 0; i4 < loop_ub; i4++) {
                cdiff = r3->size[0];
                for (i5 = 0; i5 < cdiff; i5++) {
                  c_q2->data[(i5 + q2->size[0]) + c_q2->size[0] * i4] = r3->
                    data[i5 + r3->size[0] * i4];
                }
              }

              loop_ub = c_q2->size[1];
              for (i4 = 0; i4 < loop_ub; i4++) {
                cdiff = c_q2->size[0];
                for (i5 = 0; i5 < cdiff; i5++) {
                  q2->data[((int)iCanBeSelected->data[iCanBeSelected->size[0] *
                            i5] + q2->size[0] * i4) - 1] = c_q2->data[i5 +
                    c_q2->size[0] * i4];
                }
              }

              /*  Normalize the projection matrices.  This ensures that the later tests for */
              /*  close points are triggered appropriately and is useful for */
              /*  interpretability. */
              power(q2, c_r1);
              e_sum(c_r1, iCanBeSelected);
              b_sqrt(iCanBeSelected);
              i4 = b_q2->size[0] * b_q2->size[1];
              b_q2->size[0] = q2->size[0];
              b_q2->size[1] = q2->size[1];
              emxEnsureCapacity((emxArray__common *)b_q2, i4, (int)sizeof(double));
              loop_ub = q2->size[0] * q2->size[1];
              for (i4 = 0; i4 < loop_ub; i4++) {
                b_q2->data[i4] = q2->data[i4];
              }

              f_bsxfun(b_q2, iCanBeSelected, q2);

              /*     %% Choose the features to use */
              if (options_includeOriginalAxes) {
                eye(q2->size[0], c_r1);
                i4 = d_q2->size[0] * d_q2->size[1];
                d_q2->size[0] = q2->size[0];
                d_q2->size[1] = q2->size[1] + c_r1->size[1];
                emxEnsureCapacity((emxArray__common *)d_q2, i4, (int)sizeof
                                  (double));
                loop_ub = q2->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = q2->size[0];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    d_q2->data[i5 + d_q2->size[0] * i4] = q2->data[i5 + q2->
                      size[0] * i4];
                  }
                }

                loop_ub = c_r1->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = c_r1->size[0];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    d_q2->data[i5 + d_q2->size[0] * (i4 + q2->size[1])] =
                      c_r1->data[i5 + c_r1->size[0] * i4];
                  }
                }

                i4 = q2->size[0] * q2->size[1];
                q2->size[0] = d_q2->size[0];
                q2->size[1] = d_q2->size[1];
                emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
                loop_ub = d_q2->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = d_q2->size[0];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    q2->data[i5 + q2->size[0] * i4] = d_q2->data[i5 + d_q2->
                      size[0] * i4];
                  }
                }
              }

              i4 = c_iIn->size[0];
              c_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity((emxArray__common *)c_iIn, i4, (int)sizeof
                                (double));
              loop_ub = iIn->size[1];
              for (i4 = 0; i4 < loop_ub; i4++) {
                c_iIn->data[i4] = iIn->data[iIn->size[0] * i4];
              }

              if ((c_iIn->size[0] == 1) || (q2->size[0] == 1)) {
                loop_ub = XTrain->size[0];
                i4 = d_XTrain->size[0] * d_XTrain->size[1];
                d_XTrain->size[0] = loop_ub;
                d_XTrain->size[1] = iIn->size[1];
                emxEnsureCapacity((emxArray__common *)d_XTrain, i4, (int)sizeof
                                  (double));
                cdiff = iIn->size[1];
                for (i4 = 0; i4 < cdiff; i4++) {
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    d_XTrain->data[i5 + d_XTrain->size[0] * i4] = XTrain->
                      data[i5 + XTrain->size[0] * ((int)iIn->data[iIn->size[0] *
                      i4] - 1)];
                  }
                }

                i4 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = d_XTrain->size[0];
                UTrain->size[1] = q2->size[1];
                emxEnsureCapacity((emxArray__common *)UTrain, i4, (int)sizeof
                                  (double));
                loop_ub = d_XTrain->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = q2->size[1];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    UTrain->data[i4 + UTrain->size[0] * i5] = 0.0;
                    idx = d_XTrain->size[1];
                    for (nProjDirs = 0; nProjDirs < idx; nProjDirs++) {
                      UTrain->data[i4 + UTrain->size[0] * i5] += d_XTrain->
                        data[i4 + d_XTrain->size[0] * nProjDirs] * q2->
                        data[nProjDirs + q2->size[0] * i5];
                    }
                  }
                }
              } else {
                i4 = XTrain->size[0];
                unnamed_idx_1 = (unsigned int)q2->size[1];
                i5 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = i4;
                emxEnsureCapacity((emxArray__common *)UTrain, i5, (int)sizeof
                                  (double));
                i5 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[1] = (int)unnamed_idx_1;
                emxEnsureCapacity((emxArray__common *)UTrain, i5, (int)sizeof
                                  (double));
                loop_ub = i4 * (int)unnamed_idx_1;
                for (i4 = 0; i4 < loop_ub; i4++) {
                  UTrain->data[i4] = 0.0;
                }

                i4 = XTrain->size[0];
                if ((i4 == 0) || (q2->size[1] == 0)) {
                } else {
                  i4 = XTrain->size[0];
                  idx = i4 * (q2->size[1] - 1);
                  cdiff = 0;
                  do {
                    exitg7 = 0;
                    i4 = XTrain->size[0];
                    if ((i4 > 0) && (cdiff <= idx)) {
                      i4 = XTrain->size[0];
                      i4 += cdiff;
                      for (vlen = cdiff; vlen + 1 <= i4; vlen++) {
                        UTrain->data[vlen] = 0.0;
                      }

                      i4 = XTrain->size[0];
                      cdiff += i4;
                    } else {
                      exitg7 = 1;
                    }
                  } while (exitg7 == 0);

                  br = 0;
                  cdiff = 0;
                  do {
                    exitg6 = 0;
                    i4 = XTrain->size[0];
                    if ((i4 > 0) && (cdiff <= idx)) {
                      ar = 0;
                      i4 = d_iIn->size[0];
                      d_iIn->size[0] = iIn->size[1];
                      emxEnsureCapacity((emxArray__common *)d_iIn, i4, (int)
                                        sizeof(double));
                      loop_ub = iIn->size[1];
                      for (i4 = 0; i4 < loop_ub; i4++) {
                        d_iIn->data[i4] = iIn->data[iIn->size[0] * i4];
                      }

                      i4 = br + d_iIn->size[0];
                      for (ixstart = br; ixstart + 1 <= i4; ixstart++) {
                        if (q2->data[ixstart] != 0.0) {
                          ia = ar;
                          i5 = XTrain->size[0];
                          i5 += cdiff;
                          for (vlen = cdiff; vlen + 1 <= i5; vlen++) {
                            ia++;
                            nProjDirs = XTrain->size[0];
                            k = c_ii->size[0];
                            c_ii->size[0] = iIn->size[1];
                            emxEnsureCapacity((emxArray__common *)c_ii, k, (int)
                                              sizeof(int));
                            loop_ub = iIn->size[1];
                            for (k = 0; k < loop_ub; k++) {
                              c_ii->data[k] = (int)iIn->data[iIn->size[0] * k];
                            }

                            UTrain->data[vlen] += q2->data[ixstart] *
                              XTrain->data[(ia - 1) % nProjDirs + XTrain->size[0]
                              * (c_ii->data[(ia - 1) / nProjDirs] - 1)];
                          }
                        }

                        i5 = XTrain->size[0];
                        ar += i5;
                      }

                      i4 = e_iIn->size[0];
                      e_iIn->size[0] = iIn->size[1];
                      emxEnsureCapacity((emxArray__common *)e_iIn, i4, (int)
                                        sizeof(double));
                      loop_ub = iIn->size[1];
                      for (i4 = 0; i4 < loop_ub; i4++) {
                        e_iIn->data[i4] = iIn->data[iIn->size[0] * i4];
                      }

                      br += e_iIn->size[0];
                      i4 = XTrain->size[0];
                      cdiff += i4;
                    } else {
                      exitg6 = 1;
                    }
                  } while (exitg6 == 0);
                }
              }

              /*  This step catches splits based on no significant variation */
              queryIfColumnsVary(UTrain, options_XVariationTol, bXVaries);
              if (!d_any(bXVaries)) {
                *bLeaf = true;
                nProjDirs = 0;
                i4 = splitGains->size[0];
                splitGains->size[0] = 0;
                emxEnsureCapacity((emxArray__common *)splitGains, i4, (int)
                                  sizeof(double));
                i4 = iSplits->size[0];
                iSplits->size[0] = 0;
                emxEnsureCapacity((emxArray__common *)iSplits, i4, (int)sizeof
                                  (double));
              } else {
                eml_li_find(bXVaries, ii);
                cdiff = UTrain->size[0];
                i4 = c_UTrain->size[0] * c_UTrain->size[1];
                c_UTrain->size[0] = cdiff;
                c_UTrain->size[1] = ii->size[1];
                emxEnsureCapacity((emxArray__common *)c_UTrain, i4, (int)sizeof
                                  (double));
                loop_ub = ii->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  for (i5 = 0; i5 < cdiff; i5++) {
                    c_UTrain->data[i5 + c_UTrain->size[0] * i4] = UTrain->
                      data[i5 + UTrain->size[0] * (ii->data[ii->size[0] * i4] -
                      1)];
                  }
                }

                i4 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = c_UTrain->size[0];
                UTrain->size[1] = c_UTrain->size[1];
                emxEnsureCapacity((emxArray__common *)UTrain, i4, (int)sizeof
                                  (double));
                loop_ub = c_UTrain->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = c_UTrain->size[0];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    UTrain->data[i5 + UTrain->size[0] * i4] = c_UTrain->data[i5
                      + c_UTrain->size[0] * i4];
                  }
                }

                eml_li_find(bXVaries, ii);
                idx = q2->size[0];
                i4 = e_q2->size[0] * e_q2->size[1];
                e_q2->size[0] = idx;
                e_q2->size[1] = ii->size[1];
                emxEnsureCapacity((emxArray__common *)e_q2, i4, (int)sizeof
                                  (double));
                loop_ub = ii->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  for (i5 = 0; i5 < idx; i5++) {
                    e_q2->data[i5 + e_q2->size[0] * i4] = q2->data[i5 + q2->
                      size[0] * (ii->data[ii->size[0] * i4] - 1)];
                  }
                }

                i4 = q2->size[0] * q2->size[1];
                q2->size[0] = e_q2->size[0];
                q2->size[1] = e_q2->size[1];
                emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
                loop_ub = e_q2->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = e_q2->size[0];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    q2->data[i5 + q2->size[0] * i4] = e_q2->data[i5 + e_q2->
                      size[0] * i4];
                  }
                }

                nProjDirs = UTrain->size[1];
                i4 = splitGains->size[0];
                splitGains->size[0] = UTrain->size[1];
                emxEnsureCapacity((emxArray__common *)splitGains, i4, (int)
                                  sizeof(double));
                loop_ub = UTrain->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  splitGains->data[i4] = rtNaN;
                }

                i4 = iSplits->size[0];
                iSplits->size[0] = UTrain->size[1];
                emxEnsureCapacity((emxArray__common *)iSplits, i4, (int)sizeof
                                  (double));
                loop_ub = UTrain->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  iSplits->data[i4] = rtNaN;
                }
              }

              /*     %% Search over splits using provided method */
              for (nVarAtt = 0; nVarAtt < nProjDirs; nVarAtt++) {
                /*  Calculate the probabilities of being at each class in each of child */
                /*  nodes based on proportion of training data for each of possible */
                /*  splits using current projection */
                loop_ub = UTrain->size[0];
                i4 = b_UTrain->size[0];
                b_UTrain->size[0] = loop_ub;
                emxEnsureCapacity((emxArray__common *)b_UTrain, i4, (int)sizeof
                                  (double));
                for (i4 = 0; i4 < loop_ub; i4++) {
                  b_UTrain->data[i4] = UTrain->data[i4 + UTrain->size[0] *
                    nVarAtt];
                }

                c_eml_sort(b_UTrain, UTrainSort, c_ii);
                i4 = iTrainThis->size[0];
                iTrainThis->size[0] = c_ii->size[0];
                emxEnsureCapacity((emxArray__common *)iTrainThis, i4, (int)
                                  sizeof(double));
                loop_ub = c_ii->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  iTrainThis->data[i4] = c_ii->data[i4];
                }

                loop_ub = YTrain->size[1];
                i4 = YTrainSort->size[0] * YTrainSort->size[1];
                YTrainSort->size[0] = c_ii->size[0];
                YTrainSort->size[1] = loop_ub;
                emxEnsureCapacity((emxArray__common *)YTrainSort, i4, (int)
                                  sizeof(boolean_T));
                for (i4 = 0; i4 < loop_ub; i4++) {
                  cdiff = c_ii->size[0];
                  for (i5 = 0; i5 < cdiff; i5++) {
                    YTrainSort->data[i5 + YTrainSort->size[0] * i4] =
                      YTrain->data[(c_ii->data[i5] + YTrain->size[0] * i4) - 1];
                  }
                }

                if (YTrain->size[1] == 1) {
                  idx = iTrainThis->size[0];
                  if (idx < 1) {
                    cdiff = -1;
                    ar = 0;
                  } else {
                    br = (int)floor(((double)idx - 1.0) + 0.5);
                    ar = br + 1;
                    cdiff = (br - idx) + 1;
                    if (fabs(cdiff) < 4.4408920985006262E-16 * (double)idx) {
                      br++;
                      ar = idx;
                    } else if (cdiff > 0) {
                      ar = br;
                    } else {
                      br++;
                    }

                    cdiff = br - 1;
                  }

                  i4 = iCanBeSelected->size[0] * iCanBeSelected->size[1];
                  iCanBeSelected->size[0] = 1;
                  iCanBeSelected->size[1] = cdiff + 1;
                  emxEnsureCapacity((emxArray__common *)iCanBeSelected, i4, (int)
                                    sizeof(double));
                  if (cdiff + 1 > 0) {
                    iCanBeSelected->data[0] = 1.0;
                    if (cdiff + 1 > 1) {
                      iCanBeSelected->data[cdiff] = ar;
                      idx = cdiff / 2;
                      for (k = 1; k < idx; k++) {
                        iCanBeSelected->data[k] = 1.0 + (double)k;
                        iCanBeSelected->data[cdiff - k] = ar - k;
                      }

                      if (idx << 1 == cdiff) {
                        iCanBeSelected->data[idx] = (1.0 + (double)ar) / 2.0;
                      } else {
                        iCanBeSelected->data[idx] = 1.0 + (double)idx;
                        iCanBeSelected->data[idx + 1] = ar - idx;
                      }
                    }
                  }

                  i4 = f_iCanBeSelected->size[0];
                  f_iCanBeSelected->size[0] = iCanBeSelected->size[1];
                  emxEnsureCapacity((emxArray__common *)f_iCanBeSelected, i4,
                                    (int)sizeof(double));
                  loop_ub = iCanBeSelected->size[1];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    f_iCanBeSelected->data[i4] = iCanBeSelected->
                      data[iCanBeSelected->size[0] * i4];
                  }

                  cdiff = iCanBeSelected->size[1];
                  i4 = r4->size[0] * r4->size[1];
                  r4->size[0] = cdiff;
                  r4->size[1] = 1;
                  emxEnsureCapacity((emxArray__common *)r4, i4, (int)sizeof
                                    (double));
                  for (i4 = 0; i4 < cdiff; i4++) {
                    r4->data[i4] = f_iCanBeSelected->data[i4];
                  }

                  idx = 1;
                  if (iTrainThis->size[0] != 1) {
                    idx = 0;
                  }

                  i4 = y->size[0] * y->size[1];
                  y->size[0] = YTrainSort->size[0];
                  y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity((emxArray__common *)y, i4, (int)sizeof
                                    (double));
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    y->data[i4] = YTrainSort->data[i4];
                  }

                  vlen = y->size[idx];
                  if ((!((y->size[0] == 0) || (y->size[1] == 0))) && (y->
                       size[idx] > 1)) {
                    br = 1;
                    k = 1;
                    while (k <= idx) {
                      br *= y->size[0];
                      k = 2;
                    }

                    ar = 1;
                    k = idx + 2;
                    while (k < 3) {
                      ar *= y->size[1];
                      k = 3;
                    }

                    ia = 0;
                    for (idx = 1; idx <= ar; idx++) {
                      ixstart = ia;
                      for (cdiff = 1; cdiff <= br; cdiff++) {
                        ixstart++;
                        ia = ixstart;
                        lambda = y->data[ixstart - 1];
                        for (k = 0; k <= vlen - 2; k++) {
                          ia += br;
                          lambda += y->data[ia - 1];
                          y->data[ia - 1] = lambda;
                        }
                      }
                    }
                  }

                  idx = 1;
                  if (iTrainThis->size[0] != 1) {
                    idx = 0;
                  }

                  i4 = b_x->size[0] * b_x->size[1];
                  b_x->size[0] = YTrainSort->size[0];
                  b_x->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity((emxArray__common *)b_x, i4, (int)sizeof
                                    (double));
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    b_x->data[i4] = YTrainSort->data[i4];
                  }

                  vlen = b_x->size[idx];
                  if ((!((b_x->size[0] == 0) || (b_x->size[1] == 0))) &&
                      (b_x->size[idx] > 1)) {
                    br = 1;
                    k = 1;
                    while (k <= idx) {
                      br *= b_x->size[0];
                      k = 2;
                    }

                    ar = 1;
                    k = idx + 2;
                    while (k < 3) {
                      ar *= b_x->size[1];
                      k = 3;
                    }

                    ia = 0;
                    for (idx = 1; idx <= ar; idx++) {
                      ixstart = ia;
                      for (cdiff = 1; cdiff <= br; cdiff++) {
                        ixstart++;
                        ia = ixstart;
                        lambda = b_x->data[ixstart - 1];
                        for (k = 0; k <= vlen - 2; k++) {
                          ia += br;
                          lambda += b_x->data[ia - 1];
                          b_x->data[ia - 1] = lambda;
                        }
                      }
                    }
                  }

                  cdiff = r4->size[0];
                  idx = r4->size[0];
                  i4 = r5->size[0];
                  r5->size[0] = cdiff;
                  emxEnsureCapacity((emxArray__common *)r5, i4, (int)sizeof
                                    (double));
                  for (i4 = 0; i4 < cdiff; i4++) {
                    r5->data[i4] = r4->data[i4] - y->data[i4];
                  }

                  i4 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                  LeftCumCounts->size[0] = idx;
                  LeftCumCounts->size[1] = 1 + b_x->size[1];
                  emxEnsureCapacity((emxArray__common *)LeftCumCounts, i4, (int)
                                    sizeof(double));
                  for (i4 = 0; i4 < idx; i4++) {
                    LeftCumCounts->data[i4] = r5->data[i4];
                  }

                  loop_ub = b_x->size[1];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    cdiff = b_x->size[0];
                    for (i5 = 0; i5 < cdiff; i5++) {
                      LeftCumCounts->data[i5 + LeftCumCounts->size[0] * (i4 + 1)]
                        = b_x->data[i5 + b_x->size[0] * i4];
                    }
                  }
                } else {
                  i4 = y->size[0] * y->size[1];
                  y->size[0] = YTrainSort->size[0];
                  y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity((emxArray__common *)y, i4, (int)sizeof
                                    (double));
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    y->data[i4] = YTrainSort->data[i4];
                  }

                  vlen = y->size[0];
                  if ((!((y->size[0] == 0) || (y->size[1] == 0))) && (y->size[0]
                       > 1)) {
                    i4 = c_r1->size[0] * c_r1->size[1];
                    c_r1->size[0] = y->size[0];
                    c_r1->size[1] = y->size[1];
                    emxEnsureCapacity((emxArray__common *)c_r1, i4, (int)sizeof
                                      (double));
                    loop_ub = y->size[0] * y->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      c_r1->data[i4] = y->data[i4];
                    }

                    ia = -1;
                    for (idx = 1; idx <= c_r1->size[1]; idx++) {
                      ixstart = ia + 1;
                      ia++;
                      lambda = y->data[ixstart];
                      for (k = 0; k <= vlen - 2; k++) {
                        ia++;
                        lambda += y->data[ia];
                        y->data[ia] = lambda;
                      }
                    }
                  }

                  i4 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                  LeftCumCounts->size[0] = y->size[0];
                  LeftCumCounts->size[1] = y->size[1];
                  emxEnsureCapacity((emxArray__common *)LeftCumCounts, i4, (int)
                                    sizeof(double));
                  loop_ub = y->size[0] * y->size[1];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    LeftCumCounts->data[i4] = y->data[i4];
                  }
                }

                loop_ub = LeftCumCounts->size[1];
                cdiff = LeftCumCounts->size[0];
                i4 = b_LeftCumCounts->size[0] * b_LeftCumCounts->size[1];
                b_LeftCumCounts->size[0] = 1;
                b_LeftCumCounts->size[1] = loop_ub;
                emxEnsureCapacity((emxArray__common *)b_LeftCumCounts, i4, (int)
                                  sizeof(double));
                for (i4 = 0; i4 < loop_ub; i4++) {
                  b_LeftCumCounts->data[b_LeftCumCounts->size[0] * i4] =
                    LeftCumCounts->data[(cdiff + LeftCumCounts->size[0] * i4) -
                    1];
                }

                g_bsxfun(b_LeftCumCounts, LeftCumCounts, RightCumCounts);
                b_diff(UTrainSort, iTrainThis);
                i4 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = iTrainThis->size[0] + 1;
                emxEnsureCapacity((emxArray__common *)bRemainsSelected, i4, (int)
                                  sizeof(boolean_T));
                loop_ub = iTrainThis->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  bRemainsSelected->data[i4] = (iTrainThis->data[i4] >
                    options_XVariationTol);
                }

                bRemainsSelected->data[iTrainThis->size[0]] = false;
                f_sum(LeftCumCounts, iTrainThis);
                h_bsxfun(LeftCumCounts, iTrainThis, pL);
                f_sum(RightCumCounts, iTrainThis);
                i4 = c_RightCumCounts->size[0] * c_RightCumCounts->size[1];
                c_RightCumCounts->size[0] = RightCumCounts->size[0];
                c_RightCumCounts->size[1] = RightCumCounts->size[1];
                emxEnsureCapacity((emxArray__common *)c_RightCumCounts, i4, (int)
                                  sizeof(double));
                loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  c_RightCumCounts->data[i4] = RightCumCounts->data[i4];
                }

                h_bsxfun(c_RightCumCounts, iTrainThis, RightCumCounts);

                /*  Calculate the metric values of the current node and two child nodes */
                if (b_strcmpi(options_splitCriterion_data,
                              options_splitCriterion_size)) {
                  power(pL, c_r1);
                  f_sum(c_r1, metricLeft);
                  i4 = metricLeft->size[0];
                  emxEnsureCapacity((emxArray__common *)metricLeft, i4, (int)
                                    sizeof(double));
                  loop_ub = metricLeft->size[0];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    metricLeft->data[i4] = 1.0 - metricLeft->data[i4];
                  }

                  power(RightCumCounts, c_r1);
                  f_sum(c_r1, metricRight);
                  i4 = metricRight->size[0];
                  emxEnsureCapacity((emxArray__common *)metricRight, i4, (int)
                                    sizeof(double));
                  loop_ub = metricRight->size[0];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    metricRight->data[i4] = 1.0 - metricRight->data[i4];
                  }
                } else {
                  if (c_strcmpi(options_splitCriterion_data,
                                options_splitCriterion_size)) {
                    b_log2(pL, LeftCumCounts);
                    i4 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                    LeftCumCounts->size[0] = pL->size[0];
                    LeftCumCounts->size[1] = pL->size[1];
                    emxEnsureCapacity((emxArray__common *)LeftCumCounts, i4,
                                      (int)sizeof(double));
                    loop_ub = pL->size[0] * pL->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      LeftCumCounts->data[i4] *= pL->data[i4];
                    }

                    i4 = b_pL->size[0] * b_pL->size[1];
                    b_pL->size[0] = pL->size[0];
                    b_pL->size[1] = pL->size[1];
                    emxEnsureCapacity((emxArray__common *)b_pL, i4, (int)sizeof
                                      (boolean_T));
                    loop_ub = pL->size[0] * pL->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      b_pL->data[i4] = (pL->data[i4] == 0.0);
                    }

                    c_eml_li_find(b_pL, c_ii);
                    loop_ub = c_ii->size[0];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      LeftCumCounts->data[c_ii->data[i4] - 1] = 0.0;
                    }

                    f_sum(LeftCumCounts, metricLeft);
                    i4 = metricLeft->size[0];
                    emxEnsureCapacity((emxArray__common *)metricLeft, i4, (int)
                                      sizeof(double));
                    loop_ub = metricLeft->size[0];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      metricLeft->data[i4] = -metricLeft->data[i4];
                    }

                    b_log2(RightCumCounts, LeftCumCounts);
                    i4 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                    LeftCumCounts->size[0] = RightCumCounts->size[0];
                    LeftCumCounts->size[1] = RightCumCounts->size[1];
                    emxEnsureCapacity((emxArray__common *)LeftCumCounts, i4,
                                      (int)sizeof(double));
                    loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      LeftCumCounts->data[i4] *= RightCumCounts->data[i4];
                    }

                    i4 = b_RightCumCounts->size[0] * b_RightCumCounts->size[1];
                    b_RightCumCounts->size[0] = RightCumCounts->size[0];
                    b_RightCumCounts->size[1] = RightCumCounts->size[1];
                    emxEnsureCapacity((emxArray__common *)b_RightCumCounts, i4,
                                      (int)sizeof(boolean_T));
                    loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      b_RightCumCounts->data[i4] = (RightCumCounts->data[i4] ==
                        0.0);
                    }

                    c_eml_li_find(b_RightCumCounts, c_ii);
                    loop_ub = c_ii->size[0];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      LeftCumCounts->data[c_ii->data[i4] - 1] = 0.0;
                    }

                    f_sum(LeftCumCounts, metricRight);
                    i4 = metricRight->size[0];
                    emxEnsureCapacity((emxArray__common *)metricRight, i4, (int)
                                      sizeof(double));
                    loop_ub = metricRight->size[0];
                    for (i4 = 0; i4 < loop_ub; i4++) {
                      metricRight->data[i4] = -metricRight->data[i4];
                    }
                  }
                }

                lambda = metricLeft->data[metricLeft->size[0] - 1];
                i4 = c_bRemainsSelected->size[0];
                c_bRemainsSelected->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity((emxArray__common *)c_bRemainsSelected, i4,
                                  (int)sizeof(boolean_T));
                loop_ub = bRemainsSelected->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  c_bRemainsSelected->data[i4] = !bRemainsSelected->data[i4];
                }

                b_eml_li_find(c_bRemainsSelected, c_ii);
                loop_ub = c_ii->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  metricLeft->data[c_ii->data[i4] - 1] = rtInf;
                }

                i4 = b_bRemainsSelected->size[0];
                b_bRemainsSelected->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity((emxArray__common *)b_bRemainsSelected, i4,
                                  (int)sizeof(boolean_T));
                loop_ub = bRemainsSelected->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  b_bRemainsSelected->data[i4] = !bRemainsSelected->data[i4];
                }

                b_eml_li_find(b_bRemainsSelected, c_ii);
                loop_ub = c_ii->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  metricRight->data[c_ii->data[i4] - 1] = rtInf;
                }

                /*  Calculate gain in metric for each of possible splits based on current */
                /*  metric value minus metric value of child weighted by number of terms */
                /*  in each child */
                if (XTrain->size[0] < 1) {
                  cdiff = -1;
                  ar = 0;
                } else {
                  br = (int)floor(((double)XTrain->size[0] - 1.0) + 0.5);
                  ar = br + 1;
                  cdiff = (br - XTrain->size[0]) + 1;
                  idx = XTrain->size[0];
                  if (fabs(cdiff) < 4.4408920985006262E-16 * (double)idx) {
                    br++;
                    ar = XTrain->size[0];
                  } else if (cdiff > 0) {
                    ar = br;
                  } else {
                    br++;
                  }

                  cdiff = br - 1;
                }

                i4 = iCanBeSelected->size[0] * iCanBeSelected->size[1];
                iCanBeSelected->size[0] = 1;
                iCanBeSelected->size[1] = cdiff + 1;
                emxEnsureCapacity((emxArray__common *)iCanBeSelected, i4, (int)
                                  sizeof(double));
                if (cdiff + 1 > 0) {
                  iCanBeSelected->data[0] = 1.0;
                  if (cdiff + 1 > 1) {
                    iCanBeSelected->data[cdiff] = ar;
                    idx = cdiff / 2;
                    for (k = 1; k < idx; k++) {
                      iCanBeSelected->data[k] = 1.0 + (double)k;
                      iCanBeSelected->data[cdiff - k] = ar - k;
                    }

                    if (idx << 1 == cdiff) {
                      iCanBeSelected->data[idx] = (1.0 + (double)ar) / 2.0;
                    } else {
                      iCanBeSelected->data[idx] = 1.0 + (double)idx;
                      iCanBeSelected->data[idx + 1] = ar - idx;
                    }
                  }
                }

                if (XTrain->size[0] - 1 < 0) {
                  cdiff = -1;
                  nSelected = -1.0;
                  rankX = 0.0;
                } else {
                  nSelected = (double)XTrain->size[0] - 1.0;
                  br = (int)floor(-(0.0 - ((double)XTrain->size[0] - 1.0)) + 0.5);
                  ar = (XTrain->size[0] - br) - 1;
                  cdiff = (int)fabs((double)XTrain->size[0] - 1.0);
                  if (cdiff >= 0) {
                  } else {
                    cdiff = 0;
                  }

                  if (fabs(0.0 - (double)ar) < 4.4408920985006262E-16 * (double)
                      cdiff) {
                    br++;
                    rankX = 0.0;
                  } else if (-ar > 0) {
                    rankX = ((double)XTrain->size[0] - 1.0) + -((double)br - 1.0);
                  } else {
                    br++;
                    rankX = ar;
                  }

                  cdiff = br - 1;
                }

                i4 = indFeatIn->size[0] * indFeatIn->size[1];
                indFeatIn->size[0] = 1;
                indFeatIn->size[1] = cdiff + 1;
                emxEnsureCapacity((emxArray__common *)indFeatIn, i4, (int)sizeof
                                  (double));
                if (cdiff + 1 > 0) {
                  indFeatIn->data[0] = nSelected;
                  if (cdiff + 1 > 1) {
                    indFeatIn->data[cdiff] = rankX;
                    idx = cdiff / 2;
                    for (k = 1; k < idx; k++) {
                      indFeatIn->data[k] = nSelected + -(double)k;
                      indFeatIn->data[cdiff - k] = rankX - (-(double)k);
                    }

                    if (idx << 1 == cdiff) {
                      indFeatIn->data[idx] = (nSelected + rankX) / 2.0;
                    } else {
                      indFeatIn->data[idx] = nSelected + -(double)idx;
                      indFeatIn->data[idx + 1] = rankX - (-(double)idx);
                    }
                  }
                }

                i4 = d_iCanBeSelected->size[0];
                d_iCanBeSelected->size[0] = iCanBeSelected->size[1];
                emxEnsureCapacity((emxArray__common *)d_iCanBeSelected, i4, (int)
                                  sizeof(double));
                loop_ub = iCanBeSelected->size[1];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  d_iCanBeSelected->data[i4] = iCanBeSelected->
                    data[iCanBeSelected->size[0] * i4] * metricLeft->data[i4] +
                    indFeatIn->data[indFeatIn->size[0] * i4] * metricRight->
                    data[i4];
                }

                rdivide(d_iCanBeSelected, XTrain->size[0], iTrainThis);
                i4 = iTrainThis->size[0];
                emxEnsureCapacity((emxArray__common *)iTrainThis, i4, (int)
                                  sizeof(double));
                loop_ub = iTrainThis->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  iTrainThis->data[i4] = lambda - iTrainThis->data[i4];
                }

                /*  Randomly sample from equally best splits */
                if (1 > iTrainThis->size[0] - 1) {
                  i4 = 0;
                } else {
                  i4 = iTrainThis->size[0] - 1;
                }

                ixstart = 1;
                lambda = iTrainThis->data[0];
                idx = 1;
                if (i4 > 1) {
                  if (rtIsNaN(lambda)) {
                    ia = 2;
                    exitg5 = false;
                    while ((!exitg5) && (ia <= i4)) {
                      ixstart = ia;
                      if (!rtIsNaN(iTrainThis->data[ia - 1])) {
                        lambda = iTrainThis->data[ia - 1];
                        idx = ia;
                        exitg5 = true;
                      } else {
                        ia++;
                      }
                    }
                  }

                  if (ixstart < i4) {
                    while (ixstart + 1 <= i4) {
                      if (iTrainThis->data[ixstart] > lambda) {
                        lambda = iTrainThis->data[ixstart];
                        idx = ixstart + 1;
                      }

                      ixstart++;
                    }
                  }
                }

                splitGains->data[nVarAtt] = lambda;
                iSplits->data[nVarAtt] = idx;
                if (1 > iTrainThis->size[0] - 1) {
                  loop_ub = -1;
                } else {
                  loop_ub = iTrainThis->size[0] - 2;
                }

                lambda = splitGains->data[nVarAtt];
                i4 = b_iTrainThis->size[0];
                b_iTrainThis->size[0] = loop_ub + 1;
                emxEnsureCapacity((emxArray__common *)b_iTrainThis, i4, (int)
                                  sizeof(double));
                for (i4 = 0; i4 <= loop_ub; i4++) {
                  b_iTrainThis->data[i4] = iTrainThis->data[i4] - lambda;
                }

                d_abs(b_iTrainThis, iTrainThis);
                i4 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = iTrainThis->size[0];
                emxEnsureCapacity((emxArray__common *)bRemainsSelected, i4, (int)
                                  sizeof(boolean_T));
                loop_ub = iTrainThis->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  bRemainsSelected->data[i4] = (iTrainThis->data[i4] <
                    2.2204460492503131E-15);
                }

                idx = 0;
                i4 = c_ii->size[0];
                c_ii->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof(int));
                cdiff = 1;
                exitg4 = false;
                while ((!exitg4) && (cdiff <= bRemainsSelected->size[0])) {
                  b_guard2 = false;
                  if (bRemainsSelected->data[cdiff - 1]) {
                    idx++;
                    c_ii->data[idx - 1] = cdiff;
                    if (idx >= bRemainsSelected->size[0]) {
                      exitg4 = true;
                    } else {
                      b_guard2 = true;
                    }
                  } else {
                    b_guard2 = true;
                  }

                  if (b_guard2) {
                    cdiff++;
                  }
                }

                if (bRemainsSelected->size[0] == 1) {
                  if (idx == 0) {
                    i4 = c_ii->size[0];
                    c_ii->size[0] = 0;
                    emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof
                                      (int));
                  }
                } else {
                  if (1 > idx) {
                    loop_ub = 0;
                  } else {
                    loop_ub = idx;
                  }

                  i4 = f_ii->size[0];
                  f_ii->size[0] = loop_ub;
                  emxEnsureCapacity((emxArray__common *)f_ii, i4, (int)sizeof
                                    (int));
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    f_ii->data[i4] = c_ii->data[i4];
                  }

                  i4 = c_ii->size[0];
                  c_ii->size[0] = f_ii->size[0];
                  emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof
                                    (int));
                  loop_ub = f_ii->size[0];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    c_ii->data[i4] = f_ii->data[i4];
                  }
                }

                i4 = iTrainThis->size[0];
                iTrainThis->size[0] = c_ii->size[0];
                emxEnsureCapacity((emxArray__common *)iTrainThis, i4, (int)
                                  sizeof(double));
                loop_ub = c_ii->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  iTrainThis->data[i4] = c_ii->data[i4];
                }

                if (iTrainThis->size[0] == 0) {
                  i4 = iTrainThis->size[0];
                  iTrainThis->size[0] = 1;
                  emxEnsureCapacity((emxArray__common *)iTrainThis, i4, (int)
                                    sizeof(double));
                  iTrainThis->data[0] = 1.0;
                }

                lambda = b_rand();
                iSplits->data[nVarAtt] = iTrainThis->data[(int)(1.0 + floor
                  (lambda * (double)iTrainThis->size[0])) - 1];
              }

              /*  If no split gives a positive gain then stop */
              ixstart = 1;
              lambda = splitGains->data[0];
              if (splitGains->size[0] > 1) {
                if (rtIsNaN(splitGains->data[0])) {
                  ia = 2;
                  exitg3 = false;
                  while ((!exitg3) && (ia <= splitGains->size[0])) {
                    ixstart = ia;
                    if (!rtIsNaN(splitGains->data[ia - 1])) {
                      lambda = splitGains->data[ia - 1];
                      exitg3 = true;
                    } else {
                      ia++;
                    }
                  }
                }

                if (ixstart < splitGains->size[0]) {
                  while (ixstart + 1 <= splitGains->size[0]) {
                    if (splitGains->data[ixstart] > lambda) {
                      lambda = splitGains->data[ixstart];
                    }

                    ixstart++;
                  }
                }
              }

              if (lambda < 0.0) {
                *bLeaf = true;
                cdiff = XTrain->size[1];
                i4 = q2->size[0] * q2->size[1];
                q2->size[0] = cdiff;
                emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
                i4 = q2->size[0] * q2->size[1];
                q2->size[1] = 1;
                emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
                cdiff = XTrain->size[1];
                for (i4 = 0; i4 < cdiff; i4++) {
                  q2->data[i4] = 0.0;
                }
              } else {
                /*  Establish between projection direction */
                ixstart = 1;
                lambda = splitGains->data[0];
                if (splitGains->size[0] > 1) {
                  if (rtIsNaN(splitGains->data[0])) {
                    ia = 2;
                    exitg2 = false;
                    while ((!exitg2) && (ia <= splitGains->size[0])) {
                      ixstart = ia;
                      if (!rtIsNaN(splitGains->data[ia - 1])) {
                        lambda = splitGains->data[ia - 1];
                        exitg2 = true;
                      } else {
                        ia++;
                      }
                    }
                  }

                  if (ixstart < splitGains->size[0]) {
                    while (ixstart + 1 <= splitGains->size[0]) {
                      if (splitGains->data[ixstart] > lambda) {
                        lambda = splitGains->data[ixstart];
                      }

                      ixstart++;
                    }
                  }
                }

                i4 = b_splitGains->size[0];
                b_splitGains->size[0] = splitGains->size[0];
                emxEnsureCapacity((emxArray__common *)b_splitGains, i4, (int)
                                  sizeof(double));
                loop_ub = splitGains->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  b_splitGains->data[i4] = splitGains->data[i4] - lambda;
                }

                d_abs(b_splitGains, iTrainThis);
                i4 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = iTrainThis->size[0];
                emxEnsureCapacity((emxArray__common *)bRemainsSelected, i4, (int)
                                  sizeof(boolean_T));
                loop_ub = iTrainThis->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  bRemainsSelected->data[i4] = (iTrainThis->data[i4] <
                    2.2204460492503131E-15);
                }

                idx = 0;
                i4 = c_ii->size[0];
                c_ii->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof(int));
                cdiff = 1;
                exitg1 = false;
                while ((!exitg1) && (cdiff <= bRemainsSelected->size[0])) {
                  b_guard1 = false;
                  if (bRemainsSelected->data[cdiff - 1]) {
                    idx++;
                    c_ii->data[idx - 1] = cdiff;
                    if (idx >= bRemainsSelected->size[0]) {
                      exitg1 = true;
                    } else {
                      b_guard1 = true;
                    }
                  } else {
                    b_guard1 = true;
                  }

                  if (b_guard1) {
                    cdiff++;
                  }
                }

                if (bRemainsSelected->size[0] == 1) {
                  if (idx == 0) {
                    i4 = c_ii->size[0];
                    c_ii->size[0] = 0;
                    emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof
                                      (int));
                  }
                } else {
                  if (1 > idx) {
                    loop_ub = 0;
                  } else {
                    loop_ub = idx;
                  }

                  i4 = e_ii->size[0];
                  e_ii->size[0] = loop_ub;
                  emxEnsureCapacity((emxArray__common *)e_ii, i4, (int)sizeof
                                    (int));
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    e_ii->data[i4] = c_ii->data[i4];
                  }

                  i4 = c_ii->size[0];
                  c_ii->size[0] = e_ii->size[0];
                  emxEnsureCapacity((emxArray__common *)c_ii, i4, (int)sizeof
                                    (int));
                  loop_ub = e_ii->size[0];
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    c_ii->data[i4] = e_ii->data[i4];
                  }
                }

                i4 = iTrainThis->size[0];
                iTrainThis->size[0] = c_ii->size[0];
                emxEnsureCapacity((emxArray__common *)iTrainThis, i4, (int)
                                  sizeof(double));
                loop_ub = c_ii->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  iTrainThis->data[i4] = c_ii->data[i4];
                }

                /*  Use given method to break ties */
                if (d_strcmpi(options_dirIfEqual_data, options_dirIfEqual_size))
                {
                  lambda = b_rand();
                  iDir = (int)iTrainThis->data[(int)(1.0 + floor(lambda *
                    (double)iTrainThis->size[0])) - 1] - 1;
                } else {
                  if (e_strcmpi(options_dirIfEqual_data, options_dirIfEqual_size))
                  {
                    iDir = (int)iTrainThis->data[0] - 1;
                  }
                }

                /*         %% Establish partition point and assign to child */
                loop_ub = q2->size[0];
                idx = q2->size[0];
                i4 = f_q2->size[0];
                f_q2->size[0] = idx;
                emxEnsureCapacity((emxArray__common *)f_q2, i4, (int)sizeof
                                  (double));
                for (i4 = 0; i4 < idx; i4++) {
                  f_q2->data[i4] = q2->data[i4 + q2->size[0] * iDir];
                }

                i4 = q2->size[0] * q2->size[1];
                q2->size[0] = loop_ub;
                q2->size[1] = 1;
                emxEnsureCapacity((emxArray__common *)q2, i4, (int)sizeof(double));
                i4 = 0;
                while (i4 <= 0) {
                  for (i4 = 0; i4 < loop_ub; i4++) {
                    q2->data[i4] = f_q2->data[i4];
                  }

                  i4 = 1;
                }

                loop_ub = UTrain->size[0];
                i4 = iTrainThis->size[0];
                iTrainThis->size[0] = loop_ub;
                emxEnsureCapacity((emxArray__common *)iTrainThis, i4, (int)
                                  sizeof(double));
                for (i4 = 0; i4 < loop_ub; i4++) {
                  iTrainThis->data[i4] = UTrain->data[i4 + UTrain->size[0] *
                    iDir];
                }

                b_eml_sort(iTrainThis, UTrainSort);

                /*  The convoluted nature of the below is to avoid numerical errors */
                nSelected = UTrainSort->data[(int)iSplits->data[iDir] - 1];
                lambda = UTrainSort->data[(int)iSplits->data[iDir] - 1];
                i4 = UTrainSort->size[0];
                emxEnsureCapacity((emxArray__common *)UTrainSort, i4, (int)
                                  sizeof(double));
                loop_ub = UTrainSort->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  UTrainSort->data[i4] -= lambda;
                }

                lambda = UTrainSort->data[(int)iSplits->data[iDir] - 1] * 0.5 +
                  UTrainSort->data[(int)(iSplits->data[iDir] + 1.0) - 1] * 0.5;
                partitionPoint_size[0] = 1;
                partitionPoint_size[1] = 1;
                partitionPoint_data[0] = lambda + nSelected;
                i4 = UTrain->size[0];
                b_partitionPoint_data[0] = lambda + nSelected;
                repmat(b_partitionPoint_data, i4, r4);
                loop_ub = UTrain->size[0];
                i4 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = loop_ub;
                emxEnsureCapacity((emxArray__common *)bRemainsSelected, i4, (int)
                                  sizeof(boolean_T));
                for (i4 = 0; i4 < loop_ub; i4++) {
                  bRemainsSelected->data[i4] = (iTrainThis->data[i4] <= r4->
                    data[i4]);
                }

                cdiff = bRemainsSelected->size[0];
                i4 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
                bLessThanTrain->size[0] = cdiff;
                emxEnsureCapacity((emxArray__common *)bLessThanTrain, i4, (int)
                                  sizeof(boolean_T));
                i4 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
                bLessThanTrain->size[1] = 1;
                emxEnsureCapacity((emxArray__common *)bLessThanTrain, i4, (int)
                                  sizeof(boolean_T));
                loop_ub = bRemainsSelected->size[0];
                for (i4 = 0; i4 < loop_ub; i4++) {
                  bLessThanTrain->data[i4] = bRemainsSelected->data[i4];
                }
              }

              guard1 = true;
            }
          }
        }
      }

      if (guard1) {
        loop_ub = q2->size[0];
        i4 = projMat->size[0];
        projMat->size[0] = loop_ub;
        emxEnsureCapacity((emxArray__common *)projMat, i4, (int)sizeof(double));
        for (i4 = 0; i4 < loop_ub; i4++) {
          projMat->data[i4] = q2->data[i4];
        }
      }

      emxFree_real_T(&e_XTrain);
      emxFree_real_T(&h_iIn);
      emxFree_real_T(&g_iIn);
      emxFree_real_T(&f_iIn);
      emxFree_int32_T(&f_ii);
      emxFree_real_T(&r5);
      emxFree_real_T(&f_iCanBeSelected);
      emxFree_real_T(&f_q2);
      emxFree_int32_T(&e_ii);
      emxFree_real_T(&e_q2);
      emxFree_real_T(&c_UTrain);
      emxFree_real_T(&d_XTrain);
      emxFree_real_T(&e_iIn);
      emxFree_real_T(&d_iIn);
      emxFree_real_T(&c_iIn);
      emxFree_real_T(&d_q2);
      emxFree_real_T(&c_q2);
      emxFree_boolean_T(&b_bInMat);
      emxFree_real_T(&b_XTrainBag);
      emxFree_real_T(&e_iCanBeSelected);
      emxFree_real_T(&b_indFeatIn);
      emxFree_real_T(&f_iTrainThis);
      emxFree_boolean_T(&e_iTrainThis);
      emxFree_real_T(&d_iTrainThis);
      emxFree_boolean_T(&c_iTrainThis);
      emxFree_real_T(&b_UTrain);
      emxFree_real_T(&b_LeftCumCounts);
      emxFree_real_T(&c_RightCumCounts);
      emxFree_boolean_T(&b_pL);
      emxFree_boolean_T(&b_RightCumCounts);
      emxFree_boolean_T(&c_bRemainsSelected);
      emxFree_boolean_T(&b_bRemainsSelected);
      emxFree_real_T(&d_iCanBeSelected);
      emxFree_real_T(&b_iTrainThis);
      emxFree_real_T(&b_YTrainBag);
      emxFree_real_T(&d_r1);
      emxFree_real_T(&b_q2);
      emxFree_real_T(&b_splitGains);
      emxFree_real_T(&y);
      emxFree_real_T(&r4);
      emxFree_real_T(&b_x);
      emxFree_real_T(&r3);
      emxFree_real_T(&YTrainBag);
      emxFree_real_T(&XTrainBag);
      emxFree_real_T(&b_projMat);
      emxFree_real_T(&c_r1);
      emxFree_real_T(&metricRight);
      emxFree_real_T(&metricLeft);
      emxFree_real_T(&pL);
      emxFree_real_T(&RightCumCounts);
      emxFree_real_T(&LeftCumCounts);
      emxFree_boolean_T(&YTrainSort);
      emxFree_real_T(&UTrainSort);
      emxFree_real_T(&iSplits);
      emxFree_real_T(&splitGains);
      emxFree_real_T(&UTrain);
      emxFree_real_T(&q2);
      emxFree_real_T(&b_r1);
      emxFree_real_T(&q1);
    }

    emxFree_int32_T(&c_ii);
    emxFree_int32_T(&ii);
    emxFree_real_T(&iTrainThis);
    emxFree_boolean_T(&bRemainsSelected);
    emxFree_boolean_T(&bXVaries);
    emxFree_boolean_T(&bInMat);
    emxFree_real_T(&indFeatIn);
  }

  emxFree_real_T(&r1);
  emxFree_real_T(&iCanBeSelected);
}

/*
 * File trailer for expandNode.c
 *
 * [EOF]
 */
