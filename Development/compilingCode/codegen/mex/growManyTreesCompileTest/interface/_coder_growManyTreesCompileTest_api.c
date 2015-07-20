/*
 * _coder_growManyTreesCompileTest_api.c
 *
 * Code generation for function '_coder_growManyTreesCompileTest_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "_coder_growManyTreesCompileTest_api.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo he_emlrtRTEI = { 1, 1, "_coder_growManyTreesCompileTest_api",
  "" };

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2]);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct4_T *u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nTrees,
  const char_T *identifier);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XTrain,
  const char_T *identifier, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct2_T *u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *YTrain,
  const char_T *identifier, emxArray_boolean_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *options,
  const char_T *identifier, struct0_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[2]);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iFeatureNum,
  const char_T *identifier, emxArray_real_T *y);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);
static boolean_T w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2]);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[2]);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2])
{
  int32_T iv134[2];
  boolean_T bv10[2];
  int32_T i78;
  static const boolean_T bv11[2] = { false, true };

  int32_T iv135[2];
  for (i78 = 0; i78 < 2; i78++) {
    iv134[i78] = 1 + 19 * i78;
    bv10[i78] = bv11[i78];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv134, bv10,
    iv135);
  ret_size[0] = iv135[0];
  ret_size[1] = iv135[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct4_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T iv124[1];
  int32_T i;
  int32_T b_j0;
  int32_T i73;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m48;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  iv124[0] = u->size[0];
  emlrtAssign(&y, emlrtCreateStructArray(1, iv124, 0, NULL));
  emlrtCreateField(y, "inds");
  i = 0;
  for (b_j0 = 0; b_j0 < u->size[0U]; b_j0++) {
    i73 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = 1;
    b_u->size[1] = u->data[b_j0].inds->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i73, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].inds->size[0] * u->data[b_j0].inds->size[1];
    for (i73 = 0; i73 < loop_ub; i73++) {
      b_u->data[i73] = u->data[b_j0].inds->data[i73];
    }

    b_y = NULL;
    m48 = emlrtCreateNumericArray(2, *(int32_T (*)[1])b_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m48);
    i73 = 0;
    for (loop_ub = 0; loop_ub < b_u->size[1]; loop_ub++) {
      pData[i73] = b_u->data[b_u->size[0] * loop_ub];
      i73++;
    }

    emlrtAssign(&b_y, m48);
    emlrtAddField(y, b_y, "inds", i);
    i++;
  }

  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv136[2];
  boolean_T bv12[2];
  int32_T i79;
  static const boolean_T bv13[2] = { false, true };

  int32_T iv137[2];
  for (i79 = 0; i79 < 2; i79++) {
    iv136[i79] = 1 + -2 * i79;
    bv12[i79] = bv13[i79];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv136, bv12,
    iv137);
  i79 = ret->size[0] * ret->size[1];
  ret->size[0] = iv137[0];
  ret->size[1] = iv137[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i79, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static real_T c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *nTrees,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(nTrees), &thisId);
  emlrtDestroyArray(&nTrees);
  return y;
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv138[2];
  boolean_T bv14[2];
  int32_T i80;
  static const boolean_T bv15[2] = { false, true };

  int32_T iv139[2];
  for (i80 = 0; i80 < 2; i80++) {
    iv138[i80] = 1 + -2 * i80;
    bv14[i80] = bv15[i80];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv138, bv14,
    iv139);
  ret->size[0] = iv139[0];
  ret->size[1] = iv139[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static real_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XTrain,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(XTrain), &thisId, y);
  emlrtDestroyArray(&XTrain);
}

static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct2_T *u)
{
  const mxArray *y;
  emxArray_boolean_T *b_u;
  emxArray_real_T *c_u;
  emxArray_boolean_T *d_u;
  emxArray_real_T *e_u;
  emxArray_real_T *f_u;
  emxArray_real_T *g_u;
  emxArray_real_T *h_u;
  emxArray_real_T *i_u;
  emxArray_real_T *j_u;
  emxArray_int64_T *k_u;
  emxArray_real_T *l_u;
  int32_T iv121[1];
  int32_T i;
  int32_T b_j0;
  const mxArray *b_y;
  const mxArray *m47;
  int32_T i72;
  int32_T loop_ub;
  const mxArray *c_y;
  const mxArray *d_y;
  real_T *pData;
  int32_T b_i;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  int32_T iv122[1];
  int32_T c_j0;
  const mxArray *j_y;
  int64_T *b_pData;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  int32_T iv123[1];
  const mxArray *o_y;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &c_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_boolean_T(sp, &d_u, 1, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &e_u, 2, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &f_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &g_u, 1, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &h_u, 2, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &i_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &j_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_int64_T(sp, &k_u, 2, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &l_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  iv121[0] = u->size[0];
  emlrtAssign(&y, emlrtCreateStructArray(1, iv121, 0, NULL));
  emlrtCreateField(y, "nextChild");
  emlrtCreateField(y, "bExpanded");
  emlrtCreateField(y, "nodeId");
  emlrtCreateField(y, "bLeaf");
  emlrtCreateField(y, "childIds");
  emlrtCreateField(y, "parentId");
  emlrtCreateField(y, "depth");
  emlrtCreateField(y, "iPresent");
  emlrtCreateField(y, "iFeatNum");
  emlrtCreateField(y, "trainingCounts");
  emlrtCreateField(y, "labelClassId");
  emlrtCreateField(y, "partitionPoint");
  emlrtCreateField(y, "iIn");
  emlrtCreateField(y, "decisionProjection");
  i = 0;
  for (b_j0 = 0; b_j0 < u->size[0U]; b_j0++) {
    b_y = NULL;
    m47 = emlrtCreateDoubleScalar(u->data[b_j0].nextChild);
    emlrtAssign(&b_y, m47);
    emlrtAddField(y, b_y, "nextChild", i);
    i72 = b_u->size[0];
    b_u->size[0] = u->data[b_j0].bExpanded->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i72, (int32_T)sizeof
                      (boolean_T), (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].bExpanded->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      b_u->data[i72] = u->data[b_j0].bExpanded->data[i72];
    }

    c_y = NULL;
    m47 = emlrtCreateLogicalArray(1, *(int32_T (*)[1])b_u->size);
    emlrtInitLogicalArray(b_u->size[0], m47, b_u->data);
    emlrtAssign(&c_y, m47);
    emlrtAddField(y, c_y, "bExpanded", i);
    i72 = c_u->size[0];
    c_u->size[0] = u->data[b_j0].nodeId->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)c_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].nodeId->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      c_u->data[i72] = u->data[b_j0].nodeId->data[i72];
    }

    d_y = NULL;
    m47 = emlrtCreateNumericArray(1, *(int32_T (*)[1])c_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < c_u->size[0]; b_i++) {
      pData[i72] = c_u->data[b_i];
      i72++;
    }

    emlrtAssign(&d_y, m47);
    emlrtAddField(y, d_y, "nodeId", i);
    i72 = d_u->size[0];
    d_u->size[0] = u->data[b_j0].bLeaf->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)d_u, i72, (int32_T)sizeof
                      (boolean_T), (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].bLeaf->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      d_u->data[i72] = u->data[b_j0].bLeaf->data[i72];
    }

    e_y = NULL;
    m47 = emlrtCreateLogicalArray(1, *(int32_T (*)[1])d_u->size);
    emlrtInitLogicalArray(d_u->size[0], m47, d_u->data);
    emlrtAssign(&e_y, m47);
    emlrtAddField(y, e_y, "bLeaf", i);
    i72 = e_u->size[0] * e_u->size[1];
    e_u->size[0] = u->data[b_j0].childIds->size[0];
    e_u->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)e_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].childIds->size[0] * u->data[b_j0].childIds->size[1];
    for (i72 = 0; i72 < loop_ub; i72++) {
      e_u->data[i72] = u->data[b_j0].childIds->data[i72];
    }

    f_y = NULL;
    m47 = emlrtCreateNumericArray(2, *(int32_T (*)[1])e_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < 2; b_i++) {
      for (loop_ub = 0; loop_ub < e_u->size[0]; loop_ub++) {
        pData[i72] = e_u->data[loop_ub + e_u->size[0] * b_i];
        i72++;
      }
    }

    emlrtAssign(&f_y, m47);
    emlrtAddField(y, f_y, "childIds", i);
    i72 = f_u->size[0];
    f_u->size[0] = u->data[b_j0].parentId->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)f_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].parentId->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      f_u->data[i72] = u->data[b_j0].parentId->data[i72];
    }

    g_y = NULL;
    m47 = emlrtCreateNumericArray(1, *(int32_T (*)[1])f_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < f_u->size[0]; b_i++) {
      pData[i72] = f_u->data[b_i];
      i72++;
    }

    emlrtAssign(&g_y, m47);
    emlrtAddField(y, g_y, "parentId", i);
    i72 = g_u->size[0];
    g_u->size[0] = u->data[b_j0].depth->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)g_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].depth->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      g_u->data[i72] = u->data[b_j0].depth->data[i72];
    }

    h_y = NULL;
    m47 = emlrtCreateNumericArray(1, *(int32_T (*)[1])g_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < g_u->size[0]; b_i++) {
      pData[i72] = g_u->data[b_i];
      i72++;
    }

    emlrtAssign(&h_y, m47);
    emlrtAddField(y, h_y, "depth", i);
    i_y = NULL;
    loop_ub = u->data[b_j0].iPresent->size[0];
    iv122[0] = loop_ub;
    emlrtAssign(&i_y, emlrtCreateStructArray(1, iv122, 0, NULL));
    emlrtCreateField(i_y, "inds");
    b_i = 0;
    for (c_j0 = 0; c_j0 < u->data[b_j0].iPresent->size[0U]; c_j0++) {
      i72 = k_u->size[0] * k_u->size[1];
      k_u->size[0] = 1;
      k_u->size[1] = u->data[b_j0].iPresent->data[c_j0].inds->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)k_u, i72, (int32_T)sizeof
                        (int64_T), (emlrtRTEInfo *)NULL);
      loop_ub = u->data[b_j0].iPresent->data[c_j0].inds->size[0] * u->data[b_j0]
        .iPresent->data[c_j0].inds->size[1];
      for (i72 = 0; i72 < loop_ub; i72++) {
        k_u->data[i72] = u->data[b_j0].iPresent->data[c_j0].inds->data[i72];
      }

      j_y = NULL;
      m47 = emlrtCreateNumericArray(2, *(int32_T (*)[1])k_u->size, mxINT64_CLASS,
        mxREAL);
      b_pData = (int64_T *)mxGetData(m47);
      i72 = 0;
      for (loop_ub = 0; loop_ub < k_u->size[1]; loop_ub++) {
        b_pData[i72] = k_u->data[k_u->size[0] * loop_ub];
        i72++;
      }

      emlrtAssign(&j_y, m47);
      emlrtAddField(i_y, j_y, "inds", b_i);
      b_i++;
    }

    emlrtAddField(y, i_y, "iPresent", i);
    emlrtAddField(y, b_emlrt_marshallOut(sp, u->data[b_j0].iFeatNum), "iFeatNum",
                  i);
    i72 = h_u->size[0] * h_u->size[1];
    h_u->size[0] = u->data[b_j0].trainingCounts->size[0];
    h_u->size[1] = u->data[b_j0].trainingCounts->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)h_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].trainingCounts->size[0] * u->data[b_j0].
      trainingCounts->size[1];
    for (i72 = 0; i72 < loop_ub; i72++) {
      h_u->data[i72] = u->data[b_j0].trainingCounts->data[i72];
    }

    k_y = NULL;
    m47 = emlrtCreateNumericArray(2, *(int32_T (*)[1])h_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < h_u->size[1]; b_i++) {
      for (loop_ub = 0; loop_ub < h_u->size[0]; loop_ub++) {
        pData[i72] = h_u->data[loop_ub + h_u->size[0] * b_i];
        i72++;
      }
    }

    emlrtAssign(&k_y, m47);
    emlrtAddField(y, k_y, "trainingCounts", i);
    i72 = i_u->size[0];
    i_u->size[0] = u->data[b_j0].labelClassId->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)i_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].labelClassId->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      i_u->data[i72] = u->data[b_j0].labelClassId->data[i72];
    }

    l_y = NULL;
    m47 = emlrtCreateNumericArray(1, *(int32_T (*)[1])i_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < i_u->size[0]; b_i++) {
      pData[i72] = i_u->data[b_i];
      i72++;
    }

    emlrtAssign(&l_y, m47);
    emlrtAddField(y, l_y, "labelClassId", i);
    i72 = j_u->size[0];
    j_u->size[0] = u->data[b_j0].partitionPoint->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)j_u, i72, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].partitionPoint->size[0];
    for (i72 = 0; i72 < loop_ub; i72++) {
      j_u->data[i72] = u->data[b_j0].partitionPoint->data[i72];
    }

    m_y = NULL;
    m47 = emlrtCreateNumericArray(1, *(int32_T (*)[1])j_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m47);
    i72 = 0;
    for (b_i = 0; b_i < j_u->size[0]; b_i++) {
      pData[i72] = j_u->data[b_i];
      i72++;
    }

    emlrtAssign(&m_y, m47);
    emlrtAddField(y, m_y, "partitionPoint", i);
    emlrtAddField(y, b_emlrt_marshallOut(sp, u->data[b_j0].iIn), "iIn", i);
    n_y = NULL;
    loop_ub = u->data[b_j0].decisionProjection->size[0];
    iv123[0] = loop_ub;
    emlrtAssign(&n_y, emlrtCreateStructArray(1, iv123, 0, NULL));
    emlrtCreateField(n_y, "phi");
    b_i = 0;
    for (c_j0 = 0; c_j0 < u->data[b_j0].decisionProjection->size[0U]; c_j0++) {
      i72 = l_u->size[0];
      l_u->size[0] = u->data[b_j0].decisionProjection->data[c_j0].phi->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)l_u, i72, (int32_T)sizeof(real_T),
                        (emlrtRTEInfo *)NULL);
      loop_ub = u->data[b_j0].decisionProjection->data[c_j0].phi->size[0];
      for (i72 = 0; i72 < loop_ub; i72++) {
        l_u->data[i72] = u->data[b_j0].decisionProjection->data[c_j0].phi->
          data[i72];
      }

      o_y = NULL;
      m47 = emlrtCreateNumericArray(1, *(int32_T (*)[1])l_u->size,
        mxDOUBLE_CLASS, mxREAL);
      pData = (real_T *)mxGetPr(m47);
      i72 = 0;
      for (loop_ub = 0; loop_ub < l_u->size[0]; loop_ub++) {
        pData[i72] = l_u->data[loop_ub];
        i72++;
      }

      emlrtAssign(&o_y, m47);
      emlrtAddField(n_y, o_y, "phi", b_i);
      b_i++;
    }

    emlrtAddField(y, n_y, "decisionProjection", i);
    i++;
  }

  emxFree_real_T(&l_u);
  emxFree_int64_T(&k_u);
  emxFree_real_T(&j_u);
  emxFree_real_T(&i_u);
  emxFree_real_T(&h_u);
  emxFree_real_T(&g_u);
  emxFree_real_T(&f_u);
  emxFree_real_T(&e_u);
  emxFree_boolean_T(&d_u);
  emxFree_real_T(&c_u);
  emxFree_boolean_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *YTrain,
  const char_T *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(sp, emlrtAlias(YTrain), &thisId, y);
  emlrtDestroyArray(&YTrain);
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *options,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  j_emlrt_marshallIn(sp, emlrtAlias(options), &thisId, y);
  emlrtDestroyArray(&options);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[19] = { "bProjBoot", "lambda", "splitCriterion",
    "minPointsForSplit", "dirIfEqual", "bContinueProjBootDegenerate",
    "epsilonCCA", "bBagTrees", "bUseParallel", "projections",
    "includeOriginalAxes", "treeRotation", "RotForM", "RotForpS",
    "RotForpClassLeaveOut", "bRandomRotationStart", "voteFactor",
    "maxDepthSplit", "XVariationTol" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 19, fieldNames, 0U, 0);
  thisId.fIdentifier = "bProjBoot";
  y->bProjBoot = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "bProjBoot")), &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "lambda")), &thisId);
  thisId.fIdentifier = "splitCriterion";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "splitCriterion")), &thisId, y->splitCriterion.data, y->splitCriterion.size);
  thisId.fIdentifier = "minPointsForSplit";
  y->minPointsForSplit = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "minPointsForSplit")), &thisId);
  thisId.fIdentifier = "dirIfEqual";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "dirIfEqual")),
                     &thisId, y->dirIfEqual.data, y->dirIfEqual.size);
  thisId.fIdentifier = "bContinueProjBootDegenerate";
  y->bContinueProjBootDegenerate = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "bContinueProjBootDegenerate")), &thisId);
  thisId.fIdentifier = "epsilonCCA";
  y->epsilonCCA = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "epsilonCCA")), &thisId);
  thisId.fIdentifier = "bBagTrees";
  y->bBagTrees = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "bBagTrees")), &thisId);
  thisId.fIdentifier = "bUseParallel";
  y->bUseParallel = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "bUseParallel")), &thisId);
  thisId.fIdentifier = "projections";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "projections")),
                     &thisId, &y->projections);
  thisId.fIdentifier = "includeOriginalAxes";
  y->includeOriginalAxes = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "includeOriginalAxes")), &thisId);
  thisId.fIdentifier = "treeRotation";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "treeRotation")),
                     &thisId, y->treeRotation.data, y->treeRotation.size);
  thisId.fIdentifier = "RotForM";
  y->RotForM = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "RotForM")), &thisId);
  thisId.fIdentifier = "RotForpS";
  y->RotForpS = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "RotForpS")), &thisId);
  thisId.fIdentifier = "RotForpClassLeaveOut";
  y->RotForpClassLeaveOut = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "RotForpClassLeaveOut")), &thisId);
  thisId.fIdentifier = "bRandomRotationStart";
  y->bRandomRotationStart = k_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "bRandomRotationStart")), &thisId);
  thisId.fIdentifier = "voteFactor";
  p_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "voteFactor")),
                     &thisId, y->voteFactor);
  thisId.fIdentifier = "maxDepthSplit";
  y->maxDepthSplit = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "maxDepthSplit")), &thisId);
  thisId.fIdentifier = "XVariationTol";
  y->XVariationTol = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "XVariationTol")), &thisId);
  emlrtDestroyArray(&u);
}

static boolean_T k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = w_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2])
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "CCA", "PCA", "CCAclasswise", "Rand" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, 0);
  thisId.fIdentifier = "CCA";
  y->CCA = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "CCA")),
    &thisId);
  thisId.fIdentifier = "PCA";
  y->PCA = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "PCA")),
    &thisId);
  thisId.fIdentifier = "CCAclasswise";
  y->CCAclasswise = k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "CCAclasswise")), &thisId);
  thisId.fIdentifier = "Rand";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Rand")),
                     &thisId, y->Rand.data, y->Rand.size);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y_data[], int32_T y_size[2])
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y_data[], int32_T y_size[2])
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iFeatureNum,
  const char_T *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  r_emlrt_marshallIn(sp, emlrtAlias(iFeatureNum), &thisId, y);
  emlrtDestroyArray(&iFeatureNum);
}

static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int32_T iv126[2];
  boolean_T bv4[2];
  int32_T i;
  int32_T iv127[2];
  for (i = 0; i < 2; i++) {
    iv126[i] = -1;
    bv4[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv126, bv4,
    iv127);
  ret->size[0] = iv127[0];
  ret->size[1] = iv127[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv128[2];
  boolean_T bv5[2];
  int32_T i75;
  int32_T iv129[2];
  for (i75 = 0; i75 < 2; i75++) {
    iv128[i75] = 10001 * i75 - 1;
    bv5[i75] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv128, bv5,
    iv129);
  ret->size[0] = iv129[0];
  ret->size[1] = iv129[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static boolean_T w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, 0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret_data[], int32_T ret_size[2])
{
  int32_T iv130[2];
  boolean_T bv6[2];
  int32_T i76;
  static const boolean_T bv7[2] = { false, true };

  int32_T iv131[2];
  for (i76 = 0; i76 < 2; i76++) {
    iv130[i76] = 1 + 9 * i76;
    bv6[i76] = bv7[i76];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv130, bv6, iv131);
  ret_size[0] = iv131[0];
  ret_size[1] = iv131[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[2])
{
  int32_T iv132[2];
  boolean_T bv8[2];
  int32_T i77;
  static const boolean_T bv9[2] = { false, true };

  int32_T iv133[2];
  for (i77 = 0; i77 < 2; i77++) {
    iv132[i77] = 1 + (i77 << 1);
    bv8[i77] = bv9[i77];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv132, bv8,
    iv133);
  ret_size[0] = iv133[0];
  ret_size[1] = iv133[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

void growManyTreesCompileTest_api(c_growManyTreesCompileTestStack *SD, const
  mxArray * const prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *XTrain;
  emxArray_boolean_T *YTrain;
  struct0_T options;
  emxArray_real_T *iFeatureNum;
  emxArray_struct2_T *trees;
  real_T nTrees;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  b_emxInit_real_T(&st, &XTrain, 2, &he_emlrtRTEI, true);
  b_emxInit_boolean_T(&st, &YTrain, 2, &he_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &options, &he_emlrtRTEI, true);
  b_emxInit_real_T(&st, &iFeatureNum, 2, &he_emlrtRTEI, true);
  emxInit_struct2_T(&st, &trees, 1, &he_emlrtRTEI, true);

  /* Marshall function inputs */
  nTrees = c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "nTrees");
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "XTrain", XTrain);
  g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "YTrain", YTrain);
  i_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "options", &options);
  q_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "iFeatureNum", iFeatureNum);

  /* Invoke the target function */
  growManyTreesCompileTest(SD, &st, nTrees, XTrain, YTrain, &options,
    iFeatureNum, trees);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, trees);
  emxFree_struct2_T(&trees);
  iFeatureNum->canFreeData = false;
  emxFree_real_T(&iFeatureNum);
  emxFreeStruct_struct0_T(&options);
  YTrain->canFreeData = false;
  emxFree_boolean_T(&YTrain);
  XTrain->canFreeData = false;
  emxFree_real_T(&XTrain);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_growManyTreesCompileTest_api.c) */
