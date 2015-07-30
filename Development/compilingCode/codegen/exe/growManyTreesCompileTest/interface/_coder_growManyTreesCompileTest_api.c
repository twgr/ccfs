/*
 * File: _coder_growManyTreesCompileTest_api.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "_coder_growManyTreesCompileTest_api.h"

/* Type Definitions */
#ifndef struct_emxArray__common
#define struct_emxArray__common

struct emxArray__common
{
  void *data;
  int *size;
  int allocatedSize;
  int numDimensions;
  boolean_T canFreeData;
};

#endif                                 /*struct_emxArray__common*/

#ifndef typedef_emxArray__common
#define typedef_emxArray__common

typedef struct emxArray__common emxArray__common;

#endif                                 /*typedef_emxArray__common*/

/* Function Declarations */
static double emlrt_marshallIn(const emlrtStack *sp, const mxArray *nTrees,
  const char *identifier);
static double b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XTrain,
  const char *identifier, emxArray_real_T *y);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *YTrain,
  const char *identifier, emxArray_boolean_T *y);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *options,
  const char *identifier, struct0_T *y);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char y_data[], int y_size[2]);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, double y_data[], int y_size[2]);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char y_data[], int y_size[2]);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iFeatureNum,
  const char *identifier, emxArray_real_T *y);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct2_T *u);
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct4_T *u);
static double q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);
static boolean_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char ret_data[], int ret_size[2]);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, double ret_data[], int ret_size[2]);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char ret_data[], int ret_size[2]);
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int numDimensions, boolean_T doPush);
static void emxFree_real_T(emxArray_real_T **pEmxArray);
static void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int numDimensions, boolean_T doPush);
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  boolean_T doPush);
static void emxInitStruct_struct1_T(struct1_T *pStruct);
static void emxInit_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  **pEmxArray, int numDimensions, boolean_T doPush);
static void emxFree_struct2_T(emxArray_struct2_T **pEmxArray);
static void emxFreeStruct_struct2_T(struct2_T *pStruct);
static void emxFree_struct3_T(emxArray_struct3_T **pEmxArray);
static void emxFree_int64_T(emxArray_int64_T **pEmxArray);
static void emxFreeStruct_struct3_T(struct3_T *pStruct);
static void emxFree_struct4_T(emxArray_struct4_T **pEmxArray);
static void emxFreeStruct_struct4_T(struct4_T *pStruct);
static void emxFree_struct5_T(emxArray_struct5_T **pEmxArray);
static void emxFreeStruct_struct5_T(struct5_T *pStruct);
static void emxFreeStruct_struct0_T(struct0_T *pStruct);
static void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize);
static void b_emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int numDimensions, boolean_T doPush);
static void b_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int numDimensions, boolean_T doPush);
static void emxInit_int64_T(const emlrtStack *sp, emxArray_int64_T **pEmxArray,
  int numDimensions, boolean_T doPush);

/* Function Definitions */

/*
 * Arguments    : emlrtContext *aContext
 * Return Type  : void
 */
void growManyTreesCompileTest_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void growManyTreesCompileTest_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void growManyTreesCompileTest_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  growManyTreesCompileTest_xil_terminate();
}

/*
 * Arguments    : const mxArray *prhs[5]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void growManyTreesCompileTest_api(const mxArray *prhs[5], const mxArray *plhs[1])
{
  emxArray_real_T *XTrain;
  emxArray_boolean_T *YTrain;
  struct0_T options;
  emxArray_real_T *iFeatureNum;
  emxArray_struct2_T *trees;
  double nTrees;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInit_real_T(&st, &XTrain, 2, true);
  emxInit_boolean_T(&st, &YTrain, 2, true);
  emxInitStruct_struct0_T(&st, &options, true);
  emxInit_real_T(&st, &iFeatureNum, 2, true);
  emxInit_struct2_T(&st, &trees, 1, true);
  prhs[1] = emlrtProtectR2012b(prhs[1], 1, false, -1);
  prhs[2] = emlrtProtectR2012b(prhs[2], 2, false, -1);
  prhs[4] = emlrtProtectR2012b(prhs[4], 4, false, -1);

  /* Marshall function inputs */
  nTrees = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "nTrees");
  c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "XTrain", XTrain);
  e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "YTrain", YTrain);
  g_emlrt_marshallIn(&st, emlrtAliasP(prhs[3]), "options", &options);
  o_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "iFeatureNum", iFeatureNum);

  /* Invoke the target function */
  growManyTreesCompileTest(nTrees, XTrain, YTrain, &options, iFeatureNum, trees);

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

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *nTrees
 *                const char *identifier
 * Return Type  : double
 */
static double emlrt_marshallIn(const emlrtStack *sp, const mxArray *nTrees,
  const char *identifier)
{
  double y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(nTrees), &thisId);
  emlrtDestroyArray(&nTrees);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : double
 */
static double b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  double y;
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *XTrain
 *                const char *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *XTrain,
  const char *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  d_emlrt_marshallIn(sp, emlrtAlias(XTrain), &thisId, y);
  emlrtDestroyArray(&XTrain);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  r_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *YTrain
 *                const char *identifier
 *                emxArray_boolean_T *y
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *YTrain,
  const char *identifier, emxArray_boolean_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  f_emlrt_marshallIn(sp, emlrtAlias(YTrain), &thisId, y);
  emlrtDestroyArray(&YTrain);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_boolean_T *y
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *options
 *                const char *identifier
 *                struct0_T *y
 * Return Type  : void
 */
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *options,
  const char *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  h_emlrt_marshallIn(sp, emlrtAlias(options), &thisId, y);
  emlrtDestroyArray(&options);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct0_T *y
 * Return Type  : void
 */
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
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
  y->bProjBoot = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "bProjBoot")), &thisId);
  thisId.fIdentifier = "lambda";
  y->lambda = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "lambda")), &thisId);
  thisId.fIdentifier = "splitCriterion";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "splitCriterion")), &thisId, y->splitCriterion.data, y->splitCriterion.size);
  thisId.fIdentifier = "minPointsForSplit";
  y->minPointsForSplit = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "minPointsForSplit")), &thisId);
  thisId.fIdentifier = "dirIfEqual";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "dirIfEqual")),
                     &thisId, y->dirIfEqual.data, y->dirIfEqual.size);
  thisId.fIdentifier = "bContinueProjBootDegenerate";
  y->bContinueProjBootDegenerate = i_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "bContinueProjBootDegenerate")), &thisId);
  thisId.fIdentifier = "epsilonCCA";
  y->epsilonCCA = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "epsilonCCA")), &thisId);
  thisId.fIdentifier = "bBagTrees";
  y->bBagTrees = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "bBagTrees")), &thisId);
  thisId.fIdentifier = "bUseParallel";
  y->bUseParallel = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "bUseParallel")), &thisId);
  thisId.fIdentifier = "projections";
  k_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "projections")),
                     &thisId, &y->projections);
  thisId.fIdentifier = "includeOriginalAxes";
  y->includeOriginalAxes = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a
    (sp, u, 0, "includeOriginalAxes")), &thisId);
  thisId.fIdentifier = "treeRotation";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "treeRotation")),
                     &thisId, y->treeRotation.data, y->treeRotation.size);
  thisId.fIdentifier = "RotForM";
  y->RotForM = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "RotForM")), &thisId);
  thisId.fIdentifier = "RotForpS";
  y->RotForpS = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0,
    "RotForpS")), &thisId);
  thisId.fIdentifier = "RotForpClassLeaveOut";
  y->RotForpClassLeaveOut = b_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "RotForpClassLeaveOut")), &thisId);
  thisId.fIdentifier = "bRandomRotationStart";
  y->bRandomRotationStart = i_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2013a(sp, u, 0, "bRandomRotationStart")), &thisId);
  thisId.fIdentifier = "voteFactor";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "voteFactor")),
                     &thisId, y->voteFactor);
  thisId.fIdentifier = "maxDepthSplit";
  y->maxDepthSplit = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "maxDepthSplit")), &thisId);
  thisId.fIdentifier = "XVariationTol";
  y->XVariationTol = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "XVariationTol")), &thisId);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : boolean_T
 */
static boolean_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char y_data[], int y_size[2])
{
  u_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct1_T *y
 * Return Type  : void
 */
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[4] = { "CCA", "PCA", "CCAclasswise", "Rand" };

  thisId.fParent = parentId;
  emlrtCheckStructR2012b(sp, parentId, u, 4, fieldNames, 0U, 0);
  thisId.fIdentifier = "CCA";
  y->CCA = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "CCA")),
    &thisId);
  thisId.fIdentifier = "PCA";
  y->PCA = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "PCA")),
    &thisId);
  thisId.fIdentifier = "CCAclasswise";
  y->CCAclasswise = i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u,
    0, "CCAclasswise")), &thisId);
  thisId.fIdentifier = "Rand";
  l_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2013a(sp, u, 0, "Rand")),
                     &thisId, y->Rand.data, y->Rand.size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                double y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, double y_data[], int y_size[2])
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                char y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char y_data[], int y_size[2])
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y_data, y_size);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  x_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *iFeatureNum
 *                const char *identifier
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *iFeatureNum,
  const char *identifier, emxArray_real_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  p_emlrt_marshallIn(sp, emlrtAlias(iFeatureNum), &thisId, y);
  emlrtDestroyArray(&iFeatureNum);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                emxArray_real_T *y
 * Return Type  : void
 */
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const emxArray_struct2_T *u
 * Return Type  : const mxArray *
 */
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
  int iv0[1];
  int i;
  int b_j0;
  const mxArray *b_y;
  const mxArray *m0;
  int i0;
  int loop_ub;
  const mxArray *c_y;
  const mxArray *d_y;
  double *pData;
  int b_i;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *h_y;
  const mxArray *i_y;
  int iv1[1];
  int c_j0;
  const mxArray *j_y;
  long long *b_pData;
  const mxArray *k_y;
  const mxArray *l_y;
  const mxArray *m_y;
  const mxArray *n_y;
  int iv2[1];
  const mxArray *o_y;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_boolean_T(sp, &b_u, 1, true);
  b_emxInit_real_T(sp, &c_u, 1, true);
  b_emxInit_boolean_T(sp, &d_u, 1, true);
  emxInit_real_T(sp, &e_u, 2, true);
  b_emxInit_real_T(sp, &f_u, 1, true);
  b_emxInit_real_T(sp, &g_u, 1, true);
  emxInit_real_T(sp, &h_u, 2, true);
  b_emxInit_real_T(sp, &i_u, 1, true);
  b_emxInit_real_T(sp, &j_u, 1, true);
  emxInit_int64_T(sp, &k_u, 2, true);
  b_emxInit_real_T(sp, &l_u, 1, true);
  y = NULL;
  iv0[0] = u->size[0];
  emlrtAssign(&y, emlrtCreateStructArray(1, iv0, 0, NULL));
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
    m0 = emlrtCreateDoubleScalar(u->data[b_j0].nextChild);
    emlrtAssign(&b_y, m0);
    emlrtAddField(y, b_y, "nextChild", i);
    i0 = b_u->size[0];
    b_u->size[0] = u->data[b_j0].bExpanded->size[0];
    emxEnsureCapacity((emxArray__common *)b_u, i0, (int)sizeof(boolean_T));
    loop_ub = u->data[b_j0].bExpanded->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      b_u->data[i0] = u->data[b_j0].bExpanded->data[i0];
    }

    c_y = NULL;
    m0 = emlrtCreateLogicalArray(1, *(int (*)[1])b_u->size);
    emlrtInitLogicalArray(b_u->size[0], m0, b_u->data);
    emlrtAssign(&c_y, m0);
    emlrtAddField(y, c_y, "bExpanded", i);
    i0 = c_u->size[0];
    c_u->size[0] = u->data[b_j0].nodeId->size[0];
    emxEnsureCapacity((emxArray__common *)c_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].nodeId->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      c_u->data[i0] = u->data[b_j0].nodeId->data[i0];
    }

    d_y = NULL;
    m0 = emlrtCreateNumericArray(1, *(int (*)[1])c_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < c_u->size[0]; b_i++) {
      pData[i0] = c_u->data[b_i];
      i0++;
    }

    emlrtAssign(&d_y, m0);
    emlrtAddField(y, d_y, "nodeId", i);
    i0 = d_u->size[0];
    d_u->size[0] = u->data[b_j0].bLeaf->size[0];
    emxEnsureCapacity((emxArray__common *)d_u, i0, (int)sizeof(boolean_T));
    loop_ub = u->data[b_j0].bLeaf->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      d_u->data[i0] = u->data[b_j0].bLeaf->data[i0];
    }

    e_y = NULL;
    m0 = emlrtCreateLogicalArray(1, *(int (*)[1])d_u->size);
    emlrtInitLogicalArray(d_u->size[0], m0, d_u->data);
    emlrtAssign(&e_y, m0);
    emlrtAddField(y, e_y, "bLeaf", i);
    i0 = e_u->size[0] * e_u->size[1];
    e_u->size[0] = u->data[b_j0].childIds->size[0];
    e_u->size[1] = 2;
    emxEnsureCapacity((emxArray__common *)e_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].childIds->size[0] * u->data[b_j0].childIds->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      e_u->data[i0] = u->data[b_j0].childIds->data[i0];
    }

    f_y = NULL;
    m0 = emlrtCreateNumericArray(2, *(int (*)[1])e_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < 2; b_i++) {
      for (loop_ub = 0; loop_ub < e_u->size[0]; loop_ub++) {
        pData[i0] = e_u->data[loop_ub + e_u->size[0] * b_i];
        i0++;
      }
    }

    emlrtAssign(&f_y, m0);
    emlrtAddField(y, f_y, "childIds", i);
    i0 = f_u->size[0];
    f_u->size[0] = u->data[b_j0].parentId->size[0];
    emxEnsureCapacity((emxArray__common *)f_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].parentId->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      f_u->data[i0] = u->data[b_j0].parentId->data[i0];
    }

    g_y = NULL;
    m0 = emlrtCreateNumericArray(1, *(int (*)[1])f_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < f_u->size[0]; b_i++) {
      pData[i0] = f_u->data[b_i];
      i0++;
    }

    emlrtAssign(&g_y, m0);
    emlrtAddField(y, g_y, "parentId", i);
    i0 = g_u->size[0];
    g_u->size[0] = u->data[b_j0].depth->size[0];
    emxEnsureCapacity((emxArray__common *)g_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].depth->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      g_u->data[i0] = u->data[b_j0].depth->data[i0];
    }

    h_y = NULL;
    m0 = emlrtCreateNumericArray(1, *(int (*)[1])g_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < g_u->size[0]; b_i++) {
      pData[i0] = g_u->data[b_i];
      i0++;
    }

    emlrtAssign(&h_y, m0);
    emlrtAddField(y, h_y, "depth", i);
    i_y = NULL;
    loop_ub = u->data[b_j0].iPresent->size[0];
    iv1[0] = loop_ub;
    emlrtAssign(&i_y, emlrtCreateStructArray(1, iv1, 0, NULL));
    emlrtCreateField(i_y, "inds");
    b_i = 0;
    for (c_j0 = 0; c_j0 < u->data[b_j0].iPresent->size[0U]; c_j0++) {
      i0 = k_u->size[0] * k_u->size[1];
      k_u->size[0] = 1;
      k_u->size[1] = u->data[b_j0].iPresent->data[c_j0].inds->size[1];
      emxEnsureCapacity((emxArray__common *)k_u, i0, (int)sizeof(long long));
      loop_ub = u->data[b_j0].iPresent->data[c_j0].inds->size[0] * u->data[b_j0]
        .iPresent->data[c_j0].inds->size[1];
      for (i0 = 0; i0 < loop_ub; i0++) {
        k_u->data[i0] = u->data[b_j0].iPresent->data[c_j0].inds->data[i0];
      }

      j_y = NULL;
      m0 = emlrtCreateNumericArray(2, *(int (*)[1])k_u->size, mxINT64_CLASS,
        mxREAL);
      b_pData = (long long *)mxGetData(m0);
      i0 = 0;
      for (loop_ub = 0; loop_ub < k_u->size[1]; loop_ub++) {
        b_pData[i0] = k_u->data[k_u->size[0] * loop_ub];
        i0++;
      }

      emlrtAssign(&j_y, m0);
      emlrtAddField(i_y, j_y, "inds", b_i);
      b_i++;
    }

    emlrtAddField(y, i_y, "iPresent", i);
    emlrtAddField(y, b_emlrt_marshallOut(sp, u->data[b_j0].iFeatNum), "iFeatNum",
                  i);
    i0 = h_u->size[0] * h_u->size[1];
    h_u->size[0] = u->data[b_j0].trainingCounts->size[0];
    h_u->size[1] = u->data[b_j0].trainingCounts->size[1];
    emxEnsureCapacity((emxArray__common *)h_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].trainingCounts->size[0] * u->data[b_j0].
      trainingCounts->size[1];
    for (i0 = 0; i0 < loop_ub; i0++) {
      h_u->data[i0] = u->data[b_j0].trainingCounts->data[i0];
    }

    k_y = NULL;
    m0 = emlrtCreateNumericArray(2, *(int (*)[1])h_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < h_u->size[1]; b_i++) {
      for (loop_ub = 0; loop_ub < h_u->size[0]; loop_ub++) {
        pData[i0] = h_u->data[loop_ub + h_u->size[0] * b_i];
        i0++;
      }
    }

    emlrtAssign(&k_y, m0);
    emlrtAddField(y, k_y, "trainingCounts", i);
    i0 = i_u->size[0];
    i_u->size[0] = u->data[b_j0].labelClassId->size[0];
    emxEnsureCapacity((emxArray__common *)i_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].labelClassId->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      i_u->data[i0] = u->data[b_j0].labelClassId->data[i0];
    }

    l_y = NULL;
    m0 = emlrtCreateNumericArray(1, *(int (*)[1])i_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < i_u->size[0]; b_i++) {
      pData[i0] = i_u->data[b_i];
      i0++;
    }

    emlrtAssign(&l_y, m0);
    emlrtAddField(y, l_y, "labelClassId", i);
    i0 = j_u->size[0];
    j_u->size[0] = u->data[b_j0].partitionPoint->size[0];
    emxEnsureCapacity((emxArray__common *)j_u, i0, (int)sizeof(double));
    loop_ub = u->data[b_j0].partitionPoint->size[0];
    for (i0 = 0; i0 < loop_ub; i0++) {
      j_u->data[i0] = u->data[b_j0].partitionPoint->data[i0];
    }

    m_y = NULL;
    m0 = emlrtCreateNumericArray(1, *(int (*)[1])j_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m0);
    i0 = 0;
    for (b_i = 0; b_i < j_u->size[0]; b_i++) {
      pData[i0] = j_u->data[b_i];
      i0++;
    }

    emlrtAssign(&m_y, m0);
    emlrtAddField(y, m_y, "partitionPoint", i);
    emlrtAddField(y, b_emlrt_marshallOut(sp, u->data[b_j0].iIn), "iIn", i);
    n_y = NULL;
    loop_ub = u->data[b_j0].decisionProjection->size[0];
    iv2[0] = loop_ub;
    emlrtAssign(&n_y, emlrtCreateStructArray(1, iv2, 0, NULL));
    emlrtCreateField(n_y, "phi");
    b_i = 0;
    for (c_j0 = 0; c_j0 < u->data[b_j0].decisionProjection->size[0U]; c_j0++) {
      i0 = l_u->size[0];
      l_u->size[0] = u->data[b_j0].decisionProjection->data[c_j0].phi->size[0];
      emxEnsureCapacity((emxArray__common *)l_u, i0, (int)sizeof(double));
      loop_ub = u->data[b_j0].decisionProjection->data[c_j0].phi->size[0];
      for (i0 = 0; i0 < loop_ub; i0++) {
        l_u->data[i0] = u->data[b_j0].decisionProjection->data[c_j0].phi->
          data[i0];
      }

      o_y = NULL;
      m0 = emlrtCreateNumericArray(1, *(int (*)[1])l_u->size, mxDOUBLE_CLASS,
        mxREAL);
      pData = (double *)mxGetPr(m0);
      i0 = 0;
      for (loop_ub = 0; loop_ub < l_u->size[0]; loop_ub++) {
        pData[i0] = l_u->data[loop_ub];
        i0++;
      }

      emlrtAssign(&o_y, m0);
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

/*
 * Arguments    : const emlrtStack *sp
 *                const emxArray_struct4_T *u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp, const
  emxArray_struct4_T *u)
{
  const mxArray *y;
  emxArray_real_T *b_u;
  int iv3[1];
  int i;
  int b_j0;
  int i1;
  int loop_ub;
  const mxArray *b_y;
  const mxArray *m1;
  double *pData;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_u, 2, true);
  y = NULL;
  iv3[0] = u->size[0];
  emlrtAssign(&y, emlrtCreateStructArray(1, iv3, 0, NULL));
  emlrtCreateField(y, "inds");
  i = 0;
  for (b_j0 = 0; b_j0 < u->size[0U]; b_j0++) {
    i1 = b_u->size[0] * b_u->size[1];
    b_u->size[0] = 1;
    b_u->size[1] = u->data[b_j0].inds->size[1];
    emxEnsureCapacity((emxArray__common *)b_u, i1, (int)sizeof(double));
    loop_ub = u->data[b_j0].inds->size[0] * u->data[b_j0].inds->size[1];
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_u->data[i1] = u->data[b_j0].inds->data[i1];
    }

    b_y = NULL;
    m1 = emlrtCreateNumericArray(2, *(int (*)[1])b_u->size, mxDOUBLE_CLASS,
      mxREAL);
    pData = (double *)mxGetPr(m1);
    i1 = 0;
    for (loop_ub = 0; loop_ub < b_u->size[1]; loop_ub++) {
      pData[i1] = b_u->data[b_u->size[0] * loop_ub];
      i1++;
    }

    emlrtAssign(&b_y, m1);
    emlrtAddField(y, b_y, "inds", i);
    i++;
  }

  emxFree_real_T(&b_u);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : double
 */
static double q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  double ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(double *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int iv4[2];
  boolean_T bv0[2];
  int i;
  int iv5[2];
  for (i = 0; i < 2; i++) {
    iv4[i] = -1;
    bv0[i] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv4, bv0, iv5);
  ret->size[0] = iv5[0];
  ret->size[1] = iv5[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (double *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_boolean_T *ret
 * Return Type  : void
 */
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  int iv6[2];
  boolean_T bv1[2];
  int i2;
  int iv7[2];
  for (i2 = 0; i2 < 2; i2++) {
    iv6[i2] = 10001 * i2 - 1;
    bv1[i2] = true;
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, iv6, bv1, iv7);
  ret->size[0] = iv7[0];
  ret->size[1] = iv7[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (boolean_T *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : boolean_T
 */
static boolean_T t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  boolean_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "logical", false, 0U, 0);
  ret = *mxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char ret_data[]
 *                int ret_size[2]
 * Return Type  : void
 */
static void u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char ret_data[], int ret_size[2])
{
  int iv8[2];
  boolean_T bv2[2];
  int i3;
  static const boolean_T bv3[2] = { false, true };

  int iv9[2];
  for (i3 = 0; i3 < 2; i3++) {
    iv8[i3] = 1 + 9 * i3;
    bv2[i3] = bv3[i3];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv8, bv2, iv9);
  ret_size[0] = iv9[0];
  ret_size[1] = iv9[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                double ret_data[]
 *                int ret_size[2]
 * Return Type  : void
 */
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, double ret_data[], int ret_size[2])
{
  int iv10[2];
  boolean_T bv4[2];
  int i4;
  static const boolean_T bv5[2] = { false, true };

  int iv11[2];
  for (i4 = 0; i4 < 2; i4++) {
    iv10[i4] = 1 + (i4 << 1);
    bv4[i4] = bv5[i4];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv10, bv4, iv11);
  ret_size[0] = iv11[0];
  ret_size[1] = iv11[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 8, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                char ret_data[]
 *                int ret_size[2]
 * Return Type  : void
 */
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char ret_data[], int ret_size[2])
{
  int iv12[2];
  boolean_T bv6[2];
  int i5;
  static const boolean_T bv7[2] = { false, true };

  int iv13[2];
  for (i5 = 0; i5 < 2; i5++) {
    iv12[i5] = 1 + 19 * i5;
    bv6[i5] = bv7[i5];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv12, bv6, iv13);
  ret_size[0] = iv13[0];
  ret_size[1] = iv13[1];
  emlrtImportArrayR2011b(src, (void *)ret_data, 1, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int iv14[2];
  boolean_T bv8[2];
  int i6;
  static const boolean_T bv9[2] = { false, true };

  int iv15[2];
  for (i6 = 0; i6 < 2; i6++) {
    iv14[i6] = 1 + -2 * i6;
    bv8[i6] = bv9[i6];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv14, bv8, iv15);
  i6 = ret->size[0] * ret->size[1];
  ret->size[0] = iv15[0];
  ret->size[1] = iv15[1];
  emxEnsureCapacity((emxArray__common *)ret, i6, (int)sizeof(double));
  emlrtImportArrayR2011b(src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                emxArray_real_T *ret
 * Return Type  : void
 */
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  int iv16[2];
  boolean_T bv10[2];
  int i7;
  static const boolean_T bv11[2] = { false, true };

  int iv17[2];
  for (i7 = 0; i7 < 2; i7++) {
    iv16[i7] = 1 + -2 * i7;
    bv10[i7] = bv11[i7];
  }

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv16, bv10,
    iv17);
  ret->size[0] = iv17[0];
  ret->size[1] = iv17[1];
  ret->allocatedSize = ret->size[0] * ret->size[1];
  ret->data = (double *)mxGetData(src);
  ret->canFreeData = false;
  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)emlrtMallocMex((unsigned int)(sizeof(int) *
    numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_real_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_real_T(emxArray_real_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_real_T *)NULL) {
    if (((*pEmxArray)->data != (double *)NULL) && (*pEmxArray)->canFreeData) {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_real_T *)NULL;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_boolean_T **pEmxArray
 *                int numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int numDimensions, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)emlrtMallocMex((unsigned int)(sizeof(int) *
    numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_boolean_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_boolean_T(emxArray_boolean_T **pEmxArray)
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

/*
 * Arguments    : const emlrtStack *sp
 *                struct0_T *pStruct
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInitStruct_struct0_T(const emlrtStack *sp, struct0_T *pStruct,
  boolean_T doPush)
{
  pStruct->splitCriterion.size[0] = 0;
  pStruct->splitCriterion.size[1] = 0;
  pStruct->dirIfEqual.size[0] = 0;
  pStruct->dirIfEqual.size[1] = 0;
  emxInitStruct_struct1_T(&pStruct->projections);
  pStruct->treeRotation.size[0] = 0;
  pStruct->treeRotation.size[1] = 0;
  emxInit_real_T(sp, &pStruct->voteFactor, 2, doPush);
}

/*
 * Arguments    : struct1_T *pStruct
 * Return Type  : void
 */
static void emxInitStruct_struct1_T(struct1_T *pStruct)
{
  pStruct->Rand.size[0] = 0;
  pStruct->Rand.size[1] = 0;
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_struct2_T **pEmxArray
 *                int numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_struct2_T(const emlrtStack *sp, emxArray_struct2_T
  **pEmxArray, int numDimensions, boolean_T doPush)
{
  emxArray_struct2_T *emxArray;
  int i;
  *pEmxArray = (emxArray_struct2_T *)emlrtMallocMex(sizeof(emxArray_struct2_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_struct2_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (struct2_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)emlrtMallocMex((unsigned int)(sizeof(int) *
    numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : emxArray_struct2_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_struct2_T(emxArray_struct2_T **pEmxArray)
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct2_T *)NULL;
  }
}

/*
 * Arguments    : struct2_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct2_T(struct2_T *pStruct)
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
 * Arguments    : emxArray_struct3_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_struct3_T(emxArray_struct3_T **pEmxArray)
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct3_T *)NULL;
  }
}

/*
 * Arguments    : emxArray_int64_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_int64_T(emxArray_int64_T **pEmxArray)
{
  if (*pEmxArray != (emxArray_int64_T *)NULL) {
    if (((*pEmxArray)->data != (long long *)NULL) && (*pEmxArray)->canFreeData)
    {
      emlrtFreeMex((void *)(*pEmxArray)->data);
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_int64_T *)NULL;
  }
}

/*
 * Arguments    : struct3_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct3_T(struct3_T *pStruct)
{
  emxFree_int64_T(&pStruct->inds);
}

/*
 * Arguments    : emxArray_struct4_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_struct4_T(emxArray_struct4_T **pEmxArray)
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct4_T *)NULL;
  }
}

/*
 * Arguments    : struct4_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct4_T(struct4_T *pStruct)
{
  emxFree_real_T(&pStruct->inds);
}

/*
 * Arguments    : emxArray_struct5_T **pEmxArray
 * Return Type  : void
 */
static void emxFree_struct5_T(emxArray_struct5_T **pEmxArray)
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
        emlrtFreeMex((void *)(*pEmxArray)->data);
      }
    }

    emlrtFreeMex((void *)(*pEmxArray)->size);
    emlrtFreeMex((void *)*pEmxArray);
    *pEmxArray = (emxArray_struct5_T *)NULL;
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
 * Arguments    : struct0_T *pStruct
 * Return Type  : void
 */
static void emxFreeStruct_struct0_T(struct0_T *pStruct)
{
  emxFree_real_T(&pStruct->voteFactor);
}

/*
 * Arguments    : emxArray__common *emxArray
 *                int oldNumel
 *                int elementSize
 * Return Type  : void
 */
static void emxEnsureCapacity(emxArray__common *emxArray, int oldNumel, int
  elementSize)
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

    newData = emlrtCallocMex((unsigned int)i, (unsigned int)elementSize);
    if (emxArray->data != NULL) {
      memcpy(newData, emxArray->data, (unsigned int)(elementSize * oldNumel));
      if (emxArray->canFreeData) {
        emlrtFreeMex(emxArray->data);
      }
    }

    emxArray->data = newData;
    emxArray->allocatedSize = i;
    emxArray->canFreeData = true;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_boolean_T **pEmxArray
 *                int numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void b_emxInit_boolean_T(const emlrtStack *sp, emxArray_boolean_T
  **pEmxArray, int numDimensions, boolean_T doPush)
{
  emxArray_boolean_T *emxArray;
  int i;
  *pEmxArray = (emxArray_boolean_T *)emlrtMallocMex(sizeof(emxArray_boolean_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_boolean_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (boolean_T *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)emlrtMallocMex((unsigned int)(sizeof(int) *
    numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_real_T **pEmxArray
 *                int numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void b_emxInit_real_T(const emlrtStack *sp, emxArray_real_T **pEmxArray,
  int numDimensions, boolean_T doPush)
{
  emxArray_real_T *emxArray;
  int i;
  *pEmxArray = (emxArray_real_T *)emlrtMallocMex(sizeof(emxArray_real_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_real_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (double *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)emlrtMallocMex((unsigned int)(sizeof(int) *
    numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * Arguments    : const emlrtStack *sp
 *                emxArray_int64_T **pEmxArray
 *                int numDimensions
 *                boolean_T doPush
 * Return Type  : void
 */
static void emxInit_int64_T(const emlrtStack *sp, emxArray_int64_T **pEmxArray,
  int numDimensions, boolean_T doPush)
{
  emxArray_int64_T *emxArray;
  int i;
  *pEmxArray = (emxArray_int64_T *)emlrtMallocMex(sizeof(emxArray_int64_T));
  if (doPush) {
    emlrtPushHeapReferenceStackR2012b(sp, (void *)pEmxArray, (void (*)(void *))
      emxFree_int64_T);
  }

  emxArray = *pEmxArray;
  emxArray->data = (long long *)NULL;
  emxArray->numDimensions = numDimensions;
  emxArray->size = (int *)emlrtMallocMex((unsigned int)(sizeof(int) *
    numDimensions));
  emxArray->allocatedSize = 0;
  emxArray->canFreeData = true;
  for (i = 0; i < numDimensions; i++) {
    emxArray->size[i] = 0;
  }
}

/*
 * File trailer for _coder_growManyTreesCompileTest_api.c
 *
 * [EOF]
 */
