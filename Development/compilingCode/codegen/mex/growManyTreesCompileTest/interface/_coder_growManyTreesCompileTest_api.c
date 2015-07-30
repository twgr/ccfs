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
static emlrtRTEInfo ud_emlrtRTEI = { 1, 1, "_coder_growManyTreesCompileTest_api",
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
  int32_T iv97[2];
  boolean_T bv7[2];
  int32_T i47;
  static const boolean_T bv8[2] = { false, true };

  int32_T iv98[2];
  for (i47 = 0; i47 < 2; i47++) {
    iv97[i47] = 1 + 19 * i47;
    bv7[i47] = bv8[i47];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv97, bv7, iv98);
  ret_size[0] = iv98[0];
  ret_size[1] = iv98[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct4_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int32_T iv87[1];
  int32_T i;
  int32_T b_j0;
  int32_T i42;
  int32_T loop_ub;
  const mxArray *b_y;
  const mxArray *m43;
  real_T *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_u, 2, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  iv87[0] = u->size[0];
  emlrtAssign(&y, emlrtCreateStructArray(1, iv87, 0, NULL));
  emlrtCreateField(y, "inds");
  i = 0;
  for (b_j0 = 0; b_j0 < u->size[0U]; b_j0++) {
    i42 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = 1;
    b_u->size[1] = u->data[b_j0].inds->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i42, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].inds->size[0] * u->data[b_j0].inds->size[1];
    for (i42 = 0; i42 < loop_ub; i42++) {
      b_u->data[i42] = u->data[b_j0].inds->data[i42];
    }

    b_y = NULL;
    m43 = emlrtCreateNumericArray(2, *(int32_T (*)[1])b_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m43);
    i42 = 0;
    for (loop_ub = 0; loop_ub < b_u->size[1]; loop_ub++) {
      pData[i42] = b_u->data[b_u->size[0] * loop_ub];
      i42++;
    }

    emlrtAssign(&b_y, m43);
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
  int32_T iv99[2];
  boolean_T bv9[2];
  int32_T i48;
  static const boolean_T bv10[2] = { false, true };

  int32_T iv100[2];
  for (i48 = 0; i48 < 2; i48++) {
    iv99[i48] = 1 + -2 * i48;
    bv9[i48] = bv10[i48];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv99, bv9,
    iv100);
  i48 = ret->size[0] * ret->size[1];
  ret->size[0] = iv100[0];
  ret->size[1] = iv100[1];
  emxEnsureCapacity(sp, (emxArray__common *)ret, i48, (int32_T)sizeof(real_T),
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
  int32_T iv101[2];
  boolean_T bv11[2];
  int32_T i49;
  static const boolean_T bv12[2] = { false, true };

  int32_T iv102[2];
  for (i49 = 0; i49 < 2; i49++) {
    iv101[i49] = 1 + -2 * i49;
    bv11[i49] = bv12[i49];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv101, bv11,
    iv102);
  ret->size[0] = iv102[0];
  ret->size[1] = iv102[1];
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
  int32_T iv84[1];
  int32_T i;
  int32_T b_j0;
  const mxArray *b_y;
  const mxArray *m42;
  int32_T i41;
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
  int32_T iv85[1];
  int32_T c_j0;
  const mxArray *j_y;
  int64_T *b_pData;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  int32_T iv86[1];
  const mxArray *o_y;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_boolean_T(sp, &b_u, 1, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &c_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_boolean_T(sp, &d_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &e_u, 2, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &f_u, 1, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &g_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_real_T(sp, &h_u, 2, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &i_u, 1, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &j_u, 1, (emlrtRTEInfo *)NULL, true);
  emxInit_int64_T(sp, &k_u, 2, (emlrtRTEInfo *)NULL, true);
  b_emxInit_real_T(sp, &l_u, 1, (emlrtRTEInfo *)NULL, true);
  y = NULL;
  iv84[0] = u->size[0];
  emlrtAssign(&y, emlrtCreateStructArray(1, iv84, 0, NULL));
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
    m42 = emlrtCreateDoubleScalar(u->data[b_j0].nextChild);
    emlrtAssign(&b_y, m42);
    emlrtAddField(y, b_y, "nextChild", i);
    i41 = b_u->size[0];
    b_u->size[0] = u->data[b_j0].bExpanded->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_u, i41, (int32_T)sizeof
                      (boolean_T), (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].bExpanded->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      b_u->data[i41] = u->data[b_j0].bExpanded->data[i41];
    }

    c_y = NULL;
    m42 = emlrtCreateLogicalArray(1, *(int32_T (*)[1])b_u->size);
    emlrtInitLogicalArray(b_u->size[0], m42, b_u->data);
    emlrtAssign(&c_y, m42);
    emlrtAddField(y, c_y, "bExpanded", i);
    i41 = c_u->size[0];
    c_u->size[0] = u->data[b_j0].nodeId->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)c_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].nodeId->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      c_u->data[i41] = u->data[b_j0].nodeId->data[i41];
    }

    d_y = NULL;
    m42 = emlrtCreateNumericArray(1, *(int32_T (*)[1])c_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < c_u->size[0]; b_i++) {
      pData[i41] = c_u->data[b_i];
      i41++;
    }

    emlrtAssign(&d_y, m42);
    emlrtAddField(y, d_y, "nodeId", i);
    i41 = d_u->size[0];
    d_u->size[0] = u->data[b_j0].bLeaf->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)d_u, i41, (int32_T)sizeof
                      (boolean_T), (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].bLeaf->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      d_u->data[i41] = u->data[b_j0].bLeaf->data[i41];
    }

    e_y = NULL;
    m42 = emlrtCreateLogicalArray(1, *(int32_T (*)[1])d_u->size);
    emlrtInitLogicalArray(d_u->size[0], m42, d_u->data);
    emlrtAssign(&e_y, m42);
    emlrtAddField(y, e_y, "bLeaf", i);
    i41 = e_u->size[0] * e_u->size[1];
    e_u->size[0] = u->data[b_j0].childIds->size[0];
    e_u->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)e_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].childIds->size[0] * u->data[b_j0].childIds->size[1];
    for (i41 = 0; i41 < loop_ub; i41++) {
      e_u->data[i41] = u->data[b_j0].childIds->data[i41];
    }

    f_y = NULL;
    m42 = emlrtCreateNumericArray(2, *(int32_T (*)[1])e_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < 2; b_i++) {
      for (loop_ub = 0; loop_ub < e_u->size[0]; loop_ub++) {
        pData[i41] = e_u->data[loop_ub + e_u->size[0] * b_i];
        i41++;
      }
    }

    emlrtAssign(&f_y, m42);
    emlrtAddField(y, f_y, "childIds", i);
    i41 = f_u->size[0];
    f_u->size[0] = u->data[b_j0].parentId->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)f_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].parentId->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      f_u->data[i41] = u->data[b_j0].parentId->data[i41];
    }

    g_y = NULL;
    m42 = emlrtCreateNumericArray(1, *(int32_T (*)[1])f_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < f_u->size[0]; b_i++) {
      pData[i41] = f_u->data[b_i];
      i41++;
    }

    emlrtAssign(&g_y, m42);
    emlrtAddField(y, g_y, "parentId", i);
    i41 = g_u->size[0];
    g_u->size[0] = u->data[b_j0].depth->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)g_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].depth->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      g_u->data[i41] = u->data[b_j0].depth->data[i41];
    }

    h_y = NULL;
    m42 = emlrtCreateNumericArray(1, *(int32_T (*)[1])g_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < g_u->size[0]; b_i++) {
      pData[i41] = g_u->data[b_i];
      i41++;
    }

    emlrtAssign(&h_y, m42);
    emlrtAddField(y, h_y, "depth", i);
    i_y = NULL;
    loop_ub = u->data[b_j0].iPresent->size[0];
    iv85[0] = loop_ub;
    emlrtAssign(&i_y, emlrtCreateStructArray(1, iv85, 0, NULL));
    emlrtCreateField(i_y, "inds");
    b_i = 0;
    for (c_j0 = 0; c_j0 < u->data[b_j0].iPresent->size[0U]; c_j0++) {
      i41 = k_u->size[0] * k_u->size[1];
      k_u->size[0] = 1;
      k_u->size[1] = u->data[b_j0].iPresent->data[c_j0].inds->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)k_u, i41, (int32_T)sizeof
                        (int64_T), (emlrtRTEInfo *)NULL);
      loop_ub = u->data[b_j0].iPresent->data[c_j0].inds->size[0] * u->data[b_j0]
        .iPresent->data[c_j0].inds->size[1];
      for (i41 = 0; i41 < loop_ub; i41++) {
        k_u->data[i41] = u->data[b_j0].iPresent->data[c_j0].inds->data[i41];
      }

      j_y = NULL;
      m42 = emlrtCreateNumericArray(2, *(int32_T (*)[1])k_u->size, mxINT64_CLASS,
        mxREAL);
      b_pData = (int64_T *)mxGetData(m42);
      i41 = 0;
      for (loop_ub = 0; loop_ub < k_u->size[1]; loop_ub++) {
        b_pData[i41] = k_u->data[k_u->size[0] * loop_ub];
        i41++;
      }

      emlrtAssign(&j_y, m42);
      emlrtAddField(i_y, j_y, "inds", b_i);
      b_i++;
    }

    emlrtAddField(y, i_y, "iPresent", i);
    emlrtAddField(y, b_emlrt_marshallOut(sp, u->data[b_j0].iFeatNum), "iFeatNum",
                  i);
    i41 = h_u->size[0] * h_u->size[1];
    h_u->size[0] = u->data[b_j0].trainingCounts->size[0];
    h_u->size[1] = u->data[b_j0].trainingCounts->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)h_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].trainingCounts->size[0] * u->data[b_j0].
      trainingCounts->size[1];
    for (i41 = 0; i41 < loop_ub; i41++) {
      h_u->data[i41] = u->data[b_j0].trainingCounts->data[i41];
    }

    k_y = NULL;
    m42 = emlrtCreateNumericArray(2, *(int32_T (*)[1])h_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < h_u->size[1]; b_i++) {
      for (loop_ub = 0; loop_ub < h_u->size[0]; loop_ub++) {
        pData[i41] = h_u->data[loop_ub + h_u->size[0] * b_i];
        i41++;
      }
    }

    emlrtAssign(&k_y, m42);
    emlrtAddField(y, k_y, "trainingCounts", i);
    i41 = i_u->size[0];
    i_u->size[0] = u->data[b_j0].labelClassId->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)i_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].labelClassId->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      i_u->data[i41] = u->data[b_j0].labelClassId->data[i41];
    }

    l_y = NULL;
    m42 = emlrtCreateNumericArray(1, *(int32_T (*)[1])i_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < i_u->size[0]; b_i++) {
      pData[i41] = i_u->data[b_i];
      i41++;
    }

    emlrtAssign(&l_y, m42);
    emlrtAddField(y, l_y, "labelClassId", i);
    i41 = j_u->size[0];
    j_u->size[0] = u->data[b_j0].partitionPoint->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)j_u, i41, (int32_T)sizeof(real_T),
                      (emlrtRTEInfo *)NULL);
    loop_ub = u->data[b_j0].partitionPoint->size[0];
    for (i41 = 0; i41 < loop_ub; i41++) {
      j_u->data[i41] = u->data[b_j0].partitionPoint->data[i41];
    }

    m_y = NULL;
    m42 = emlrtCreateNumericArray(1, *(int32_T (*)[1])j_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (real_T *)mxGetPr(m42);
    i41 = 0;
    for (b_i = 0; b_i < j_u->size[0]; b_i++) {
      pData[i41] = j_u->data[b_i];
      i41++;
    }

    emlrtAssign(&m_y, m42);
    emlrtAddField(y, m_y, "partitionPoint", i);
    emlrtAddField(y, b_emlrt_marshallOut(sp, u->data[b_j0].iIn), "iIn", i);
    n_y = NULL;
    loop_ub = u->data[b_j0].decisionProjection->size[0];
    iv86[0] = loop_ub;
    emlrtAssign(&n_y, emlrtCreateStructArray(1, iv86, 0, NULL));
    emlrtCreateField(n_y, "phi");
    b_i = 0;
    for (c_j0 = 0; c_j0 < u->data[b_j0].decisionProjection->size[0U]; c_j0++) {
      i41 = l_u->size[0];
      l_u->size[0] = u->data[b_j0].decisionProjection->data[c_j0].phi->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)l_u, i41, (int32_T)sizeof(real_T),
                        (emlrtRTEInfo *)NULL);
      loop_ub = u->data[b_j0].decisionProjection->data[c_j0].phi->size[0];
      for (i41 = 0; i41 < loop_ub; i41++) {
        l_u->data[i41] = u->data[b_j0].decisionProjection->data[c_j0].phi->
          data[i41];
      }

      o_y = NULL;
      m42 = emlrtCreateNumericArray(1, *(int32_T (*)[1])l_u->size,
        mxDOUBLE_CLASS, mxREAL);
      pData = (real_T *)mxGetPr(m42);
      i41 = 0;
      for (loop_ub = 0; loop_ub < l_u->size[0]; loop_ub++) {
        pData[i41] = l_u->data[loop_ub];
        i41++;
      }

      emlrtAssign(&o_y, m42);
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
  int32_T iv89[2];
  boolean_T bv1[2];
  int32_T i;
  int32_T iv90[2];
  for (i = 0; i < 2; i++) {
    iv89[i] = -1;
    bv1[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv89, bv1, iv90);
  ret->size[0] = iv90[0];
  ret->size[1] = iv90[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (real_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int32_T iv91[2];
  boolean_T bv2[2];
  int32_T i44;
  int32_T iv92[2];
  for (i44 = 0; i44 < 2; i44++) {
    iv91[i44] = 10001 * i44 - 1;
    bv2[i44] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv91, bv2,
    iv92);
  ret->size[0] = iv92[0];
  ret->size[1] = iv92[1];
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
  int32_T iv93[2];
  boolean_T bv3[2];
  int32_T i45;
  static const boolean_T bv4[2] = { false, true };

  int32_T iv94[2];
  for (i45 = 0; i45 < 2; i45++) {
    iv93[i45] = 1 + 9 * i45;
    bv3[i45] = bv4[i45];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv93, bv3, iv94);
  ret_size[0] = iv94[0];
  ret_size[1] = iv94[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret_data[], int32_T ret_size[2])
{
  int32_T iv95[2];
  boolean_T bv5[2];
  int32_T i46;
  static const boolean_T bv6[2] = { false, true };

  int32_T iv96[2];
  for (i46 = 0; i46 < 2; i46++) {
    iv95[i46] = 1 + (i46 << 1);
    bv5[i46] = bv6[i46];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv95, bv5, iv96);
  ret_size[0] = iv96[0];
  ret_size[1] = iv96[1];
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
  emxInit_real_T(&st, &XTrain, 2, &ud_emlrtRTEI, true);
  b_emxInit_boolean_T(&st, &YTrain, 2, &ud_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &options, &ud_emlrtRTEI, true);
  emxInit_real_T(&st, &iFeatureNum, 2, &ud_emlrtRTEI, true);
  emxInit_struct2_T(&st, &trees, 1, &ud_emlrtRTEI, true);

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
