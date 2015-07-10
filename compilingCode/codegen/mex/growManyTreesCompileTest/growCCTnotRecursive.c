/*
 * growCCTnotRecursive.c
 *
 * Code generation for function 'growCCTnotRecursive'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growCCTnotRecursive.h"
#include "randi.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "all.h"
#include "sum.h"
#include "eml_int_forloop_overflow_check.h"
#include "expandNode.h"
#include "twoPointMaxMarginSplit.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 174, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo e_emlrtRSI = { 165, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo f_emlrtRSI = { 159, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo g_emlrtRSI = { 158, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo h_emlrtRSI = { 136, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo i_emlrtRSI = { 129, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo j_emlrtRSI = { 127, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo k_emlrtRSI = { 121, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo l_emlrtRSI = { 120, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo m_emlrtRSI = { 117, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo n_emlrtRSI = { 114, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo o_emlrtRSI = { 110, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo p_emlrtRSI = { 102, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRSInfo q_emlrtRSI = { 88, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRTEInfo f_emlrtRTEI = { 1, 17, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRTEInfo j_emlrtRTEI = { 45, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRTEInfo k_emlrtRTEI = { 91, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRTEInfo l_emlrtRTEI = { 92, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRTEInfo m_emlrtRTEI = { 126, 13, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtRTEInfo wb_emlrtRTEI = { 17, 9, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtECInfo c_emlrtECI = { -1, 188, 27, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 188, 27, "tree.decisionProjection",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo d_emlrtECI = { -1, 187, 12, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 187, 12, "tree.iIn",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo e_emlrtECI = { -1, 186, 23, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo d_emlrtBCI = { -1, -1, 186, 23, "tree.partitionPoint",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo f_emlrtECI = { -1, 185, 21, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo e_emlrtBCI = { -1, -1, 185, 21, "tree.labelClassId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 184, 43, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo g_emlrtECI = { -1, 183, 14, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo g_emlrtBCI = { -1, -1, 183, 14, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo h_emlrtECI = { -1, 182, 17, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo h_emlrtBCI = { -1, -1, 182, 17, "tree.parentId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 181, 31, "tree.childIds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo i_emlrtECI = { -1, 180, 14, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo j_emlrtBCI = { -1, -1, 180, 14, "tree.bLeaf",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo j_emlrtECI = { -1, 179, 15, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo k_emlrtBCI = { -1, -1, 179, 15, "tree.nodeId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo k_emlrtECI = { -1, 174, 21, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo l_emlrtBCI = { -1, -1, 174, 21, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 166, 9, "partitionPoint",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo l_emlrtECI = { -1, 166, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtECInfo m_emlrtECI = { -1, 164, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo n_emlrtBCI = { -1, -1, 164, 29, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo n_emlrtECI = { -1, 159, 43, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo o_emlrtBCI = { -1, -1, 159, 43, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo o_emlrtECI = { -1, 158, 43, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo p_emlrtBCI = { -1, -1, 158, 43, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 156, 23, "tree.childIds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo p_emlrtECI = { 2, 148, 36, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo r_emlrtBCI = { -1, -1, 136, 9,
  "tree.labelClassId(iCalc) = find(bEqualMaxCounts)", "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo q_emlrtECI = { -1, 136, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtECInfo r_emlrtECI = { -1, 135, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo s_emlrtBCI = { -1, -1, 135, 29, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo s_emlrtECI = { 2, 128, 30, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtECInfo t_emlrtECI = { -1, 127, 13, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo t_emlrtBCI = { -1, -1, 127, 120, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 127, 62, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtECInfo u_emlrtECI = { -1, 102, 26, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo v_emlrtBCI = { -1, -1, 102, 26, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtRTEInfo ke_emlrtRTEI = { 96, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtECInfo v_emlrtECI = { 2, 51, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m" };

static emlrtBCInfo w_emlrtBCI = { -1, -1, 108, 19, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 110, 97, "XTrainGlobal",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtDCInfo c_emlrtDCI = { 110, 97, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 111, 22, "YTrainGlobal",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtDCInfo d_emlrtDCI = { 111, 22, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 1 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 111, 71, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 141, 42, "tree.nodeId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 154, 9, "tree.bLeaf",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 157, 32, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 157, 9, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 158, 43, "tree.iPresent(iCalc).inds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 158, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 159, 43, "tree.iPresent(iCalc).inds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 159, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 160, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 161, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 162, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 163, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 165, 12, "tree.labelClassId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 166, 9, "tree.partitionPoint",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 167, 9, "tree.iIn",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 168, 9, "tree.decisionProjection",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 169, 9, "tree.parentId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 171, 9, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 118, 27, "tree.parentId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 127, 74, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 127, 132, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 127, 13, "countsAdd",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 121, 24, "iContention",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtDCInfo e_emlrtDCI = { 121, 24, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 1 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 123, 17, "bEqualMaxCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 132, 9, "tree.bLeaf",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 133, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 134, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 136, 9, "tree.labelClassId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 137, 9, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 110, 97, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 111, 22, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\growCCTnotRecursive.m", 0 };

static emlrtDCInfo o_emlrtDCI = { 17, 37, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

/* Function Declarations */
static void b_cast(const emlrtStack *sp, struct5_T y[2000]);
static void b_emlrt_update_log_42(const emxArray_int64_T *in,
  emlrtLocationLoggingDataType table[613]);
static void b_emlrt_update_log_43(const boolean_T in_data[], const int32_T
  in_size[2], emlrtLocationLoggingDataType table[613]);
static void b_emlrt_update_log_44(const real_T in[2],
  emlrtLocationLoggingDataType table[613]);
static void c_cast(const emlrtStack *sp, struct4_T y[2000]);
static void d_cast(const emlrtStack *sp, struct3_T y[2000]);
static void emlrt_update_log_42(const emlrtStack *sp, const emxArray_int64_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_int64_T *out);
static void emlrt_update_log_43(const boolean_T in_data[], const int32_T
  in_size[2], emlrtLocationLoggingDataType table[613], boolean_T out_data[],
  int32_T out_size[2]);
static void emlrt_update_log_44(const real_T in[2], emlrtLocationLoggingDataType
  table[613], real_T out[2]);

/* Function Definitions */
static void b_cast(const emlrtStack *sp, struct5_T y[2000])
{
  int32_T j;
  int32_T i69;
  for (j = 0; j < 2000; j++) {
    i69 = y[j].phi->size[0];
    y[j].phi->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].phi, i69, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

static void b_emlrt_update_log_42(const emxArray_int64_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T d5;
  int64_T localMin;
  int64_T localMax;
  int32_T i;
  d5 = muDoubleScalarFloor(table[0U].SimMin);
  if (d5 < 9.2233720368547758E+18) {
    if (d5 >= -9.2233720368547758E+18) {
      localMin = (int64_T)d5;
    } else {
      localMin = MIN_int64_T;
    }
  } else if (d5 >= 9.2233720368547758E+18) {
    localMin = MAX_int64_T;
  } else {
    localMin = 0LL;
  }

  d5 = muDoubleScalarFloor(table[0U].SimMax);
  if (d5 < 9.2233720368547758E+18) {
    if (d5 >= -9.2233720368547758E+18) {
      localMax = (int64_T)d5;
    } else {
      localMax = MIN_int64_T;
    }
  } else if (d5 >= 9.2233720368547758E+18) {
    localMax = MAX_int64_T;
  } else {
    localMax = 0LL;
  }

  for (i = 0; i < in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = (real_T)localMin;
  table[0U].SimMax = (real_T)localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

static void b_emlrt_update_log_43(const boolean_T in_data[], const int32_T
  in_size[2], emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < in_size[1]; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in_data[i] < (int32_T)localMin) {
      localMin = in_data[i];
    }

    if ((int32_T)in_data[i] > (int32_T)localMax) {
      localMax = in_data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

static void b_emlrt_update_log_44(const real_T in[2],
  emlrtLocationLoggingDataType table[613])
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

static void c_cast(const emlrtStack *sp, struct4_T y[2000])
{
  int32_T j;
  int32_T i70;
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &qb_emlrtECI, sp);
    i70 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i70, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

static void d_cast(const emlrtStack *sp, struct3_T y[2000])
{
  int32_T j;
  int32_T i71;
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &qb_emlrtECI, sp);
    i71 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i71, (int32_T)sizeof
                      (int64_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

static void emlrt_update_log_42(const emlrtStack *sp, const emxArray_int64_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_int64_T *out)
{
  int32_T i65;
  int32_T loop_ub;
  i65 = out->size[0] * out->size[1];
  out->size[0] = 1;
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i65, (int32_T)sizeof(int64_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i65 = 0; i65 < loop_ub; i65++) {
    out->data[i65] = in->data[i65];
  }

  b_emlrt_update_log_42(out, table);
}

static void emlrt_update_log_43(const boolean_T in_data[], const int32_T
  in_size[2], emlrtLocationLoggingDataType table[613], boolean_T out_data[],
  int32_T out_size[2])
{
  int32_T loop_ub;
  int32_T i66;
  out_size[0] = 1;
  out_size[1] = in_size[1];
  loop_ub = in_size[0] * in_size[1];
  for (i66 = 0; i66 < loop_ub; i66++) {
    out_data[i66] = in_data[i66];
  }

  b_emlrt_update_log_43(out_data, out_size, table);
}

static void emlrt_update_log_44(const real_T in[2], emlrtLocationLoggingDataType
  table[613], real_T out[2])
{
  int32_T i67;
  for (i67 = 0; i67 < 2; i67++) {
    out[i67] = in[i67];
  }

  b_emlrt_update_log_44(out, table);
}

void c_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                   emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T b23;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m40;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  n = x->size[0] * x->size[1];
  st.site = &ff_emlrtRSI;
  k = 0;
  b_st.site = &hf_emlrtRSI;
  if (1 > n) {
    b23 = false;
  } else {
    b23 = (n > 2147483646);
  }

  if (b23) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= n) {
  } else {
    b_y = NULL;
    m40 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m40);
    st.site = &pp_emlrtRSI;
    f_error(&st, b_y, &q_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &s_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &fd_emlrtRTEI);
  j = 0;
  st.site = &gf_emlrtRSI;
  for (i = 1; i <= n; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                 emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m8;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ff_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &hf_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[1]) {
  } else {
    b_y = NULL;
    m8 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m8);
    st.site = &pp_emlrtRSI;
    f_error(&st, b_y, &q_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &o_emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &wb_emlrtRTEI);
  j = 0;
  st.site = &gf_emlrtRSI;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void growCCTnotRecursive(c_growManyTreesCompileTestStack *SD, const emlrtStack
  *sp, const emxArray_real_T *XTrain, const emxArray_boolean_T *YTrain, const
  struct0_T *options, emxArray_real_T *iFeatureNum, struct2_T *tree)
{
  emxArray_real_T *b_XTrain;
  emxArray_boolean_T *b_YTrain;
  struct0_T b_options;
  emxArray_real_T *b_iFeatureNum;
  boolean_T b0;
  boolean_T b1;
  real_T K;
  real_T t0_parentId[2];
  int32_T i;
  real_T unusedExpr[2];
  boolean_T t0_bExpanded[2];
  boolean_T b_unusedExpr[2];
  int32_T i1;
  real_T c_unusedExpr[2];
  real_T t0_childIds[4];
  real_T d_unusedExpr[4];
  emxArray_real_T *r4;
  real_T e_unusedExpr[2];
  int32_T loop_ub;
  emxArray_real_T *zeroKCol;
  real_T f_unusedExpr[2];
  real_T t0_nodeId[2];
  boolean_T t0_bLeaf[2];
  real_T childIds[2];
  emxArray_real_T *t0_trainingCounts;
  real_T t0_labelClassId[2];
  real_T t0_partitionPoint[2];
  d_struct_T expl_temp;
  real_T idRecursion;
  boolean_T bv1[2000];
  boolean_T falseCol[2000];
  real_T stepCol[2000];
  emxArray_real_T *r5;
  real_T g_unusedExpr[2000];
  emxArray_real_T *b_zeroKCol;
  real_T nanCol[2000];
  emxArray_boolean_T b_falseCol;
  int32_T iv14[1];
  emxArray_real_T b_stepCol;
  int32_T iv15[1];
  emxArray_boolean_T c_falseCol;
  int32_T iv16[1];
  emxArray_real_T zero2Col;
  int32_T iv17[2];
  emxArray_real_T zeroCol;
  int32_T iv18[1];
  real_T dv6[2000];
  struct3_T rv1[2000];
  struct4_T rv2[2000];
  struct5_T rv3[2000];
  real_T dv7[2000];
  emxArray_real_T r6;
  int32_T iv19[1];
  emxArray_struct3_T r7;
  int32_T iv20[1];
  emxArray_struct4_T r8;
  int32_T iv21[1];
  emxArray_real_T b_zeroCol;
  int32_T iv22[1];
  emxArray_real_T b_nanCol;
  int32_T iv23[1];
  emxArray_struct4_T r9;
  int32_T iv24[1];
  emxArray_struct5_T r10;
  int32_T iv25[1];
  int32_T cdiff;
  int32_T apnd;
  int32_T absb;
  emxArray_real_T *y;
  emxArray_real_T *b_y;
  emxArray_int64_T *c_y;
  int64_T t1_inds;
  emxArray_real_T *XTrainGlobal;
  emxArray_boolean_T *YTrainGlobal;
  boolean_T bComplete;
  real_T maxIter;
  int32_T nIter;
  emxArray_real_T *countsAdd;
  emxArray_boolean_T *bLessThanTrain;
  emxArray_real_T *projMat;
  emxArray_real_T *countsNode;
  emxArray_real_T *r11;
  emxArray_int32_T *r12;
  emxArray_boolean_T *x;
  emxArray_int32_T *ii;
  emxArray_boolean_T *b_tree;
  emxArray_real_T *r13;
  emxArray_real_T *r14;
  emxArray_int64_T *c_tree;
  emxArray_boolean_T *b_bLessThanTrain;
  emxArray_int64_T *d_tree;
  emxArray_struct5_T *e_tree;
  emxArray_struct4_T *f_tree;
  emxArray_real_T *g_tree;
  emxArray_real_T *h_tree;
  emxArray_real_T *i_tree;
  emxArray_struct4_T *j_tree;
  emxArray_struct3_T *k_tree;
  emxArray_real_T *l_tree;
  emxArray_real_T *m_tree;
  emxArray_real_T *n_tree;
  emxArray_boolean_T *o_tree;
  emxArray_real_T *p_tree;
  emxArray_boolean_T *q_tree;
  emxArray_real_T *b_ii;
  emxArray_real_T *r15;
  emxArray_real_T *r16;
  emxArray_real_T *c_ii;
  emxArray_real_T *d_y;
  emxArray_real_T *b_countsNode;
  emxArray_real_T *b_projMat;
  emxArray_boolean_T *c_bLessThanTrain;
  emxArray_real_T *b_XTrainGlobal;
  emxArray_boolean_T *b_YTrainGlobal;
  emxArray_real_T *c_iFeatureNum;
  emxArray_real_T *c_countsNode;
  emxArray_real_T *r17;
  emxArray_real_T *e_y;
  emxArray_real_T *r_tree;
  emxArray_real_T *r18;
  emxArray_int32_T *d_ii;
  emxArray_int32_T *e_ii;
  boolean_T exitg1;
  int32_T i2;
  const mxArray *f_y;
  const mxArray *m1;
  int32_T ii_data[1];
  boolean_T exitg8;
  const mxArray *g_y;
  int32_T b_ii_data[1];
  real_T c_ii_data[1];
  int32_T ii_size[1];
  real_T iCalcVarSize_data[1];
  real_T iCalc;
  int32_T i3;
  int32_T i4;
  int32_T partitionPoint_size[2];
  real_T partitionPoint_data[1];
  boolean_T bLeaf;
  int32_T b_partitionPoint_size[2];
  const mxArray *h_y;
  static const int32_T iv26[2] = { 1, 36 };

  char_T cv4[36];
  static const char_T cv5[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *i_y;
  static const int32_T iv27[2] = { 1, 39 };

  char_T cv6[39];
  static const char_T cv7[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg7;
  boolean_T maxCounts_data[10000];
  int32_T maxCounts_size[2];
  int32_T bEqualMaxCounts_size[2];
  boolean_T bEqualMaxCounts_data[10000];
  boolean_T exitg4;
  boolean_T exitg5;
  boolean_T guard2 = false;
  const mxArray *j_y;
  int32_T tmp_size[2];
  emxArray_boolean_T b_bEqualMaxCounts_data;
  emxArray_boolean_T c_bEqualMaxCounts_data;
  emxArray_boolean_T d_bEqualMaxCounts_data;
  int32_T d_countsNode[2];
  int32_T b_countsAdd[2];
  const mxArray *k_y;
  static const int32_T iv28[2] = { 1, 36 };

  const mxArray *l_y;
  static const int32_T iv29[2] = { 1, 39 };

  boolean_T exitg6;
  int32_T b_maxCounts_size[2];
  emxArray_int64_T r19;
  int32_T iv30[2];
  int32_T iv31[2];
  boolean_T exitg3;
  boolean_T guard1 = false;
  const mxArray *m_y;
  emxArray_int64_T r20;
  int32_T iv32[2];
  int32_T iv33[2];
  const mxArray *n_y;
  static const int32_T iv34[2] = { 1, 36 };

  const mxArray *o_y;
  static const int32_T iv35[2] = { 1, 39 };

  boolean_T exitg2;
  emxArray_real_T *s_tree;
  emxArray_boolean_T *t_tree;
  emxArray_real_T *u_tree;
  emxArray_real_T *v_tree;
  emxArray_real_T *w_tree;
  emxArray_real_T *x_tree;
  emxArray_real_T *y_tree;
  emxArray_real_T *ab_tree;
  emxArray_struct4_T *bb_tree;
  emxArray_struct5_T *cb_tree;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  int32_T exitg11;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_XTrain, 2, &f_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_YTrain, 2, &f_emlrtRTEI, true);
  emxInitStruct_struct0_T(sp, &b_options, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_iFeatureNum, 2, &f_emlrtRTEI, true);
  b0 = false;
  b1 = false;

  /* logging input variable 'XTrain' for function 'growCCTnotRecursive' */
  emlrt_update_log_2(sp, XTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[446U], b_XTrain);

  /* logging input variable 'YTrain' for function 'growCCTnotRecursive' */
  emlrt_update_log_3(sp, YTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[447U], b_YTrain);

  /* logging input variable 'options' for function 'growCCTnotRecursive' */
  emlrt_update_log_4(sp, options, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[448U], &b_options);

  /* logging input variable 'iFeatureNum' for function 'growCCTnotRecursive' */
  emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[467U], b_iFeatureNum);

  /* logging input variable 'depth' for function 'growCCTnotRecursive' */
  emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[468U]);

  /* growTree grows a CCT, recursively calling itself until leaves are reached */
  /*  */
  /*  function CCT = growCCT(XTrain,YTrain,options,iFeatureNum,depth) */
  /*  */
  /*  Function applies greedy splitting according to the CCT algorithm and the */
  /*  provided options structure.  This is equivalent to alogrithm 2 in the */
  /*  paper if the options structure is default.  Algorithm either returns a */
  /*  leaf or forms an internal splitting node in which case the function */
  /*  recursively calls itself for each of the children. */
  /*  */
  /*  Inputs: */
  /*     XTrain      = Array giving training features.  Data should be */
  /*                   processed using processInputData before being passed to */
  /*                   CCT */
  /*     YTrain      = Class data formatted as per output of classExpansion */
  /*     options     = Options class of type optionsClassCCT.  Some fields are */
  /*                   updated during recursion */
  /*     iFeatureNum = Grouping of features as per processInputData.  During */
  /*                   recursion if a feature is found to be identical across */
  /*                   data points, the corresponding values in iFeatureNum are */
  /*                   replaced with NaNs. */
  /*     depth       = Current tree depth (zero based) */
  /*  */
  /*  Outputs */
  /*    tree         = Structure containing learnt tree.  Prediction can be */
  /*                   made using predictFromCCT */
  /*  */
  /*  TR 22/06/15 */
  /* % First do checks for whether we should immediately terminate */
  K = emlrt_update_log_1(muDoubleScalarMax(2.0, YTrain->size[1]),
    *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables[469U]);
  emlrt_update_log_1(2000.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[470U]);
  emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[471U]);
  emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[472U]);
  emlrt_update_log_6(0LL, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[473U]);
  emxFree_real_T(&b_iFeatureNum);
  emxFreeStruct_struct0_T(&b_options);
  emxFree_boolean_T(&b_YTrain);
  emxFree_real_T(&b_XTrain);
  for (i = 0; i < 2; i++) {
    t0_parentId[i] = 0.0;
  }

  emlrt_update_log_7(t0_parentId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[474U], unusedExpr);
  for (i = 0; i < 2; i++) {
    t0_bExpanded[i] = false;
  }

  emlrt_update_log_8(t0_bExpanded, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[475U], b_unusedExpr);
  for (i1 = 0; i1 < 2; i1++) {
    t0_parentId[i1] = 1.0 + (real_T)i1;
  }

  emlrt_update_log_7(t0_parentId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[476U], c_unusedExpr);
  for (i1 = 0; i1 < 4; i1++) {
    t0_childIds[i1] = 0.0;
  }

  emlrt_update_log_9(t0_childIds, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[477U], d_unusedExpr);
  for (i = 0; i < 2; i++) {
    t0_parentId[i] = 1.0;
  }

  b_emxInit_real_T(sp, &r4, 2, &f_emlrtRTEI, true);
  emlrt_update_log_7(t0_parentId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[478U], e_unusedExpr);
  i1 = r4->size[0] * r4->size[1];
  r4->size[0] = 2;
  r4->size[1] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)r4, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)K << 1;
  for (i1 = 0; i1 < loop_ub; i1++) {
    r4->data[i1] = 0.0;
  }

  b_emxInit_real_T(sp, &zeroKCol, 2, &j_emlrtRTEI, true);
  emlrt_update_log_10(sp, r4, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[479U], zeroKCol);
  emxFree_real_T(&r4);
  for (i = 0; i < 2; i++) {
    t0_parentId[i] = rtNaN;
  }

  emlrt_update_log_7(t0_parentId, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[480U], f_unusedExpr);
  emlrt_update_log_11(0LL, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[481U]);
  emlrt_update_log_12(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[482U]);
  emlrt_update_log_13(0.0, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[483U]);
  for (i = 0; i < 2; i++) {
    t0_bExpanded[i] = false;
    t0_nodeId[i] = 1.0 + (real_T)i;
    t0_bLeaf[i] = false;
  }

  for (i1 = 0; i1 < 4; i1++) {
    t0_childIds[i1] = 0.0;
  }

  for (i = 0; i < 2; i++) {
    t0_parentId[i] = 0.0;
    childIds[i] = 0.0;
  }

  b_emxInit_real_T(sp, &t0_trainingCounts, 2, &f_emlrtRTEI, true);
  i1 = t0_trainingCounts->size[0] * t0_trainingCounts->size[1];
  t0_trainingCounts->size[0] = 2;
  t0_trainingCounts->size[1] = zeroKCol->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)t0_trainingCounts, i1, (int32_T)
                    sizeof(real_T), &f_emlrtRTEI);
  loop_ub = zeroKCol->size[0] * zeroKCol->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    t0_trainingCounts->data[i1] = zeroKCol->data[i1];
  }

  emxFree_real_T(&zeroKCol);
  for (i = 0; i < 2; i++) {
    t0_labelClassId[i] = 0.0;
    t0_partitionPoint[i] = rtNaN;
  }

  emxInitStruct_struct_T(sp, &expl_temp, &f_emlrtRTEI, true);
  emlrt_update_log_14(sp, 2.0, t0_bExpanded, t0_nodeId, t0_bLeaf, t0_childIds,
                      t0_parentId, childIds, 0LL, 0.0, t0_trainingCounts,
                      t0_labelClassId, t0_partitionPoint, 0.0, 0.0,
                      *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[484U], &expl_temp);
  idRecursion = expl_temp.nextChild;
  i1 = t0_trainingCounts->size[0] * t0_trainingCounts->size[1];
  t0_trainingCounts->size[0] = 2;
  t0_trainingCounts->size[1] = expl_temp.trainingCounts->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)t0_trainingCounts, i1, (int32_T)
                    sizeof(real_T), &f_emlrtRTEI);
  loop_ub = expl_temp.trainingCounts->size[0] * expl_temp.trainingCounts->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    t0_trainingCounts->data[i1] = expl_temp.trainingCounts->data[i1];
  }

  emxFreeStruct_struct_T(&expl_temp);
  tree->nextChild = idRecursion;
  i1 = t0_trainingCounts->size[1];
  emlrtDimSizeGeqCheckFastR2012b(10000, i1, &v_emlrtECI, sp);
  emxFree_real_T(&t0_trainingCounts);
  memset(&SD->f0.dv4[0], 0, 2000U * sizeof(real_T));
  emlrt_update_log_15(SD->f0.dv4, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[498U], SD->f0.zeroCol);
  for (i = 0; i < 2000; i++) {
    bv1[i] = false;
  }

  emlrt_update_log_16(bv1, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[499U], falseCol);
  for (i1 = 0; i1 < 2000; i1++) {
    SD->f0.tree[i1] = 1.0 + (real_T)i1;
  }

  emlrt_update_log_15(SD->f0.tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[500U], stepCol);
  memset(&SD->f0.dv5[0], 0, 4000U * sizeof(real_T));
  emlrt_update_log_17(SD->f0.dv5, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[501U], SD->f0.zero2Col);
  for (i = 0; i < 2000; i++) {
    SD->f0.tree[i] = 1.0;
  }

  b_emxInit_real_T(sp, &r5, 2, &f_emlrtRTEI, true);
  emlrt_update_log_15(SD->f0.tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[502U], g_unusedExpr);
  i1 = r5->size[0] * r5->size[1];
  r5->size[0] = 2000;
  r5->size[1] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)r5, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = 2000 * (int32_T)K;
  for (i1 = 0; i1 < loop_ub; i1++) {
    r5->data[i1] = 0.0;
  }

  b_emxInit_real_T(sp, &b_zeroKCol, 2, &j_emlrtRTEI, true);
  emlrt_update_log_18(sp, r5, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[503U], b_zeroKCol);
  emxFree_real_T(&r5);
  for (i = 0; i < 2000; i++) {
    SD->f0.tree[i] = rtNaN;
  }

  emlrt_update_log_15(SD->f0.tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[504U], nanCol);
  b_falseCol.numDimensions = 1;
  iv14[0] = 2000;
  b_falseCol.size = (int32_T *)&iv14;
  b_falseCol.allocatedSize = 2000;
  b_falseCol.data = (boolean_T *)&falseCol;
  emlrt_update_log_19(sp, &b_falseCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[505U], tree->bExpanded);
  b_stepCol.numDimensions = 1;
  iv15[0] = 2000;
  b_stepCol.size = (int32_T *)&iv15;
  b_stepCol.allocatedSize = 2000;
  b_stepCol.data = (real_T *)&stepCol;
  emlrt_update_log_20(sp, &b_stepCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[506U], tree->nodeId);
  c_falseCol.numDimensions = 1;
  iv16[0] = 2000;
  c_falseCol.size = (int32_T *)&iv16;
  c_falseCol.allocatedSize = 2000;
  c_falseCol.data = (boolean_T *)&falseCol;
  emlrt_update_log_19(sp, &c_falseCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[507U], tree->bLeaf);
  zero2Col.numDimensions = 2;
  iv17[0] = 2000;
  iv17[1] = 2;
  zero2Col.size = (int32_T *)&iv17;
  zero2Col.allocatedSize = 4000;
  zero2Col.data = (real_T *)&SD->f0.zero2Col;
  emlrt_update_log_21(sp, &zero2Col, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[508U], tree->childIds);
  zeroCol.numDimensions = 1;
  iv18[0] = 2000;
  zeroCol.size = (int32_T *)&iv18;
  zeroCol.allocatedSize = 2000;
  zeroCol.data = (real_T *)&SD->f0.zeroCol;
  emlrt_update_log_20(sp, &zeroCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[509U], tree->parentId);
  memset(&dv6[0], 0, 2000U * sizeof(real_T));
  emxInitMatrix_struct3_T(sp, rv1, &f_emlrtRTEI, true);
  emxInitMatrix_struct4_T(sp, rv2, &f_emlrtRTEI, true);
  emxInitMatrix_struct5_T(sp, rv3, &f_emlrtRTEI, true);
  emlrt_update_log_15(dv6, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[511U], dv7);
  r6.numDimensions = 1;
  iv19[0] = 2000;
  r6.size = (int32_T *)&iv19;
  r6.allocatedSize = 2000;
  r6.data = (real_T *)&dv7;
  emlrt_update_log_20(sp, &r6, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[510U], tree->depth);
  d_cast(sp, rv1);
  r7.numDimensions = 1;
  iv20[0] = 2000;
  r7.size = (int32_T *)&iv20;
  r7.allocatedSize = 2000;
  r7.data = (struct3_T *)&rv1;
  emlrt_update_log_22(sp, &r7, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[512U], tree->iPresent);
  c_cast(sp, rv2);
  r8.numDimensions = 1;
  iv21[0] = 2000;
  r8.size = (int32_T *)&iv21;
  r8.allocatedSize = 2000;
  r8.data = (struct4_T *)&rv2;
  emlrt_update_log_23(sp, &r8, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[513U], tree->iFeatNum);
  emlrt_update_log_24(sp, b_zeroKCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[514U], tree->trainingCounts);
  b_zeroCol.numDimensions = 1;
  iv22[0] = 2000;
  b_zeroCol.size = (int32_T *)&iv22;
  b_zeroCol.allocatedSize = 2000;
  b_zeroCol.data = (real_T *)&SD->f0.zeroCol;
  emlrt_update_log_20(sp, &b_zeroCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[515U], tree->labelClassId);
  b_nanCol.numDimensions = 1;
  iv23[0] = 2000;
  b_nanCol.size = (int32_T *)&iv23;
  b_nanCol.allocatedSize = 2000;
  b_nanCol.data = (real_T *)&nanCol;
  emlrt_update_log_20(sp, &b_nanCol, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[516U], tree->partitionPoint);
  c_cast(sp, rv2);
  r9.numDimensions = 1;
  iv24[0] = 2000;
  r9.size = (int32_T *)&iv24;
  r9.allocatedSize = 2000;
  r9.data = (struct4_T *)&rv2;
  emlrt_update_log_23(sp, &r9, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[517U], tree->iIn);
  b_cast(sp, rv3);
  r10.numDimensions = 1;
  iv25[0] = 2000;
  r10.size = (int32_T *)&iv25;
  r10.allocatedSize = 2000;
  r10.data = (struct5_T *)&rv3;
  emlrt_update_log_25(sp, &r10, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[518U],
                      tree->decisionProjection);
  emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[519U], tree->iFeatNum->data
                     [0].inds);
  st.site = &q_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  emxFree_real_T(&b_zeroKCol);
  if (XTrain->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    i = (int32_T)muDoubleScalarFloor(((real_T)XTrain->size[0] - 1.0) + 0.5);
    apnd = i + 1;
    cdiff = (i - XTrain->size[0]) + 1;
    absb = XTrain->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      i++;
      apnd = XTrain->size[0];
    } else if (cdiff > 0) {
      apnd = i;
    } else {
      i++;
    }

    cdiff = i - 1;
  }

  b_emxInit_real_T(&c_st, &y, 2, &f_emlrtRTEI, true);
  d_st.site = &t_emlrtRSI;
  i1 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                    &g_emlrtRTEI);
  if (cdiff + 1 > 0) {
    y->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      y->data[cdiff] = apnd;
      i1 = cdiff + (cdiff < 0);
      if (i1 >= 0) {
        i = (int32_T)((uint32_T)i1 >> 1);
      } else {
        i = ~(int32_T)((uint32_T)~i1 >> 1);
      }

      d_st.site = &u_emlrtRSI;
      for (absb = 1; absb < i; absb++) {
        y->data[absb] = 1.0 + (real_T)absb;
        y->data[cdiff - absb] = apnd - absb;
      }

      if (i << 1 == cdiff) {
        y->data[i] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        y->data[i] = 1.0 + (real_T)i;
        y->data[i + 1] = apnd - i;
      }
    }
  }

  b_emxInit_real_T(&c_st, &b_y, 2, &f_emlrtRTEI, true);
  i1 = b_y->size[0] * b_y->size[1];
  b_y->size[0] = 1;
  b_y->size[1] = y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_y, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = y->size[0] * y->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    b_y->data[i1] = y->data[i1];
  }

  emxInit_int64_T(sp, &c_y, 2, &f_emlrtRTEI, true);
  emlrt_update_log_5(sp, b_y, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[521U], y);
  i1 = c_y->size[0] * c_y->size[1];
  c_y->size[0] = 1;
  c_y->size[1] = y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_y, i1, (int32_T)sizeof(int64_T),
                    &f_emlrtRTEI);
  loop_ub = y->size[0] * y->size[1];
  emxFree_real_T(&b_y);
  for (i1 = 0; i1 < loop_ub; i1++) {
    K = muDoubleScalarRound(y->data[i1]);
    if (K < 9.2233720368547758E+18) {
      if (K >= -9.2233720368547758E+18) {
        t1_inds = (int64_T)K;
      } else {
        t1_inds = MIN_int64_T;
      }
    } else if (K >= 9.2233720368547758E+18) {
      t1_inds = MAX_int64_T;
    } else {
      t1_inds = 0LL;
    }

    c_y->data[i1] = t1_inds;
  }

  b_emxInit_real_T(sp, &XTrainGlobal, 2, &k_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &YTrainGlobal, 2, &l_emlrtRTEI, true);
  emlrt_update_log_42(sp, c_y, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[520U], tree->iPresent->
                      data[0].inds);
  bComplete = emlrt_update_log_31(false, *(emlrtLocationLoggingDataType (*)[613])
    &emlrtLocationLoggingDataTables[522U]);
  emlrt_update_log_2(sp, XTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[523U], XTrainGlobal);
  emlrt_update_log_3(sp, YTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[524U], YTrainGlobal);
  maxIter = emlrt_update_log_1(emlrt_update_log_1(2.0 * (real_T)XTrain->size[0],
    *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables[526U])
    + 2.0, *(emlrtLocationLoggingDataType (*)[613])&
    emlrtLocationLoggingDataTables[525U]);
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, maxIter, mxDOUBLE_CLASS, (int32_T)
    maxIter, &ke_emlrtRTEI, sp);
  nIter = 0;
  emxFree_int64_T(&c_y);
  b_emxInit_real_T(sp, &countsAdd, 2, &m_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &bLessThanTrain, 2, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &projMat, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &countsNode, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r11, 2, &f_emlrtRTEI, true);
  emxInit_int32_T(sp, &r12, 1, &f_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 1, &f_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &ii, 2, &n_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_tree, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r13, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r14, 2, &f_emlrtRTEI, true);
  emxInit_int64_T(sp, &c_tree, 2, &f_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_bLessThanTrain, 2, &f_emlrtRTEI, true);
  emxInit_int64_T(sp, &d_tree, 2, &f_emlrtRTEI, true);
  emxInit_struct5_T(sp, &e_tree, 1, &f_emlrtRTEI, true);
  emxInit_struct4_T(sp, &f_tree, 1, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &g_tree, 1, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &h_tree, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &i_tree, 2, &f_emlrtRTEI, true);
  emxInit_struct4_T(sp, &j_tree, 1, &f_emlrtRTEI, true);
  emxInit_struct3_T(sp, &k_tree, 1, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &l_tree, 1, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &m_tree, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &n_tree, 2, &f_emlrtRTEI, true);
  emxInit_boolean_T(sp, &o_tree, 1, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &p_tree, 1, &f_emlrtRTEI, true);
  emxInit_boolean_T(sp, &q_tree, 1, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_ii, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r15, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r16, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_ii, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &d_y, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_countsNode, 2, &f_emlrtRTEI, true);
  emxInit_real_T(sp, &b_projMat, 1, &f_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &c_bLessThanTrain, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_XTrainGlobal, 2, &f_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_YTrainGlobal, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_iFeatureNum, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_countsNode, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r17, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &e_y, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r_tree, 2, &f_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r18, 2, &f_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &d_ii, 2, &f_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &e_ii, 2, &f_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && (nIter <= (int32_T)maxIter - 1)) {
    emlrt_update_log_1(1.0 + (real_T)nIter, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[604U]);
    if (bComplete) {
      exitg1 = true;
    } else {
      K = emlrt_update_log_1(tree->nextChild - 1.0,
        *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables
        [528U]);
      i1 = tree->bExpanded->size[0];
      i2 = (int32_T)K;
      emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &v_emlrtBCI, sp);
      emlrtVectorVectorIndexCheckR2012b(tree->bExpanded->size[0], 1, 1, (int32_T)
        K, &u_emlrtECI, sp);
      st.site = &p_emlrtRSI;
      i1 = x->size[0];
      x->size[0] = (int32_T)K;
      emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof
                        (boolean_T), &f_emlrtRTEI);
      loop_ub = (int32_T)K;
      for (i1 = 0; i1 < loop_ub; i1++) {
        x->data[i1] = !tree->bExpanded->data[i1];
      }

      b_st.site = &w_emlrtRSI;
      absb = muIntScalarMin_sint32(1, x->size[0]);
      if (absb <= x->size[0]) {
      } else {
        f_y = NULL;
        m1 = emlrtCreateString("Assertion failed.");
        emlrtAssign(&f_y, m1);
        c_st.site = &cq_emlrtRSI;
        f_error(&c_st, f_y, &i_emlrtMCI);
      }

      cdiff = 0;
      c_st.site = &x_emlrtRSI;
      if (1 > x->size[0]) {
        bComplete = false;
      } else {
        bComplete = (x->size[0] > 2147483646);
      }

      if (bComplete) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      i = 1;
      exitg8 = false;
      while ((!exitg8) && (i <= x->size[0])) {
        if (x->data[i - 1]) {
          cdiff = 1;
          ii_data[0] = i;
          exitg8 = true;
        } else {
          i++;
        }
      }

      if (cdiff <= absb) {
      } else {
        g_y = NULL;
        m1 = emlrtCreateString("Assertion failed.");
        emlrtAssign(&g_y, m1);
        c_st.site = &bq_emlrtRSI;
        f_error(&c_st, g_y, &j_emlrtMCI);
      }

      if (absb == 1) {
        if (cdiff == 0) {
          absb = 0;
        }
      } else {
        if (1 > cdiff) {
          loop_ub = -1;
        } else {
          loop_ub = 0;
        }

        i1 = 0;
        while (i1 <= loop_ub) {
          b_ii_data[0] = ii_data[0];
          i1 = 1;
        }

        absb = loop_ub + 1;
        loop_ub++;
        i1 = 0;
        while (i1 <= loop_ub - 1) {
          ii_data[0] = b_ii_data[0];
          i1 = 1;
        }
      }

      ii_size[0] = absb;
      for (i1 = 0; i1 < absb; i1++) {
        c_ii_data[i1] = ii_data[i1];
      }

      emlrt_update_log_32(c_ii_data, ii_size, *(emlrtLocationLoggingDataType (*)
        [613])&emlrtLocationLoggingDataTables[527U], iCalcVarSize_data, ii_data);
      if (ii_data[0] == 0) {
        exitg1 = true;
      } else {
        iCalc = emlrt_update_log_1(iCalcVarSize_data[0],
          *(emlrtLocationLoggingDataType (*)[613])&
          emlrtLocationLoggingDataTables[529U]);
        i1 = tree->iFeatNum->size[0];
        i2 = (int32_T)iCalc;
        emlrt_update_log_5(sp, tree->iFeatNum->
                           data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
          &w_emlrtBCI, sp) - 1].inds, *(emlrtLocationLoggingDataType (*)[613])&
                           emlrtLocationLoggingDataTables[530U], iFeatureNum);
        loop_ub = XTrainGlobal->size[1];
        i1 = b_XTrainGlobal->size[0] * b_XTrainGlobal->size[1];
        i2 = tree->iPresent->size[0];
        i3 = (int32_T)iCalc;
        b_XTrainGlobal->size[0] = tree->iPresent->
          data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &fc_emlrtBCI, sp) -
          1].inds->size[1];
        b_XTrainGlobal->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)b_XTrainGlobal, i1, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = tree->iPresent->size[0];
          i3 = (int32_T)iCalc;
          i = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
            &fc_emlrtBCI, sp) - 1].inds->size[1];
          for (i2 = 0; i2 < i; i2++) {
            i3 = XTrainGlobal->size[0];
            cdiff = tree->iPresent->size[0];
            absb = (int32_T)iCalc;
            apnd = tree->iPresent->size[0];
            i4 = (int32_T)iCalc;
            t1_inds = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b
              (absb, 1, cdiff, &fc_emlrtBCI, sp) - 1].inds->data[tree->
              iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, apnd,
              &fc_emlrtBCI, sp) - 1].inds->size[0] * i2];
            t1_inds = (int64_T)emlrtIntegerCheckFastR2012b((real_T)t1_inds,
              &c_emlrtDCI, sp);
            b_XTrainGlobal->data[i2 + b_XTrainGlobal->size[0] * i1] =
              XTrainGlobal->data[((int32_T)emlrtDynamicBoundsCheckFastInt64
                                  (t1_inds, 1, i3, &x_emlrtBCI, sp) +
                                  XTrainGlobal->size[0] * i1) - 1];
          }
        }

        loop_ub = YTrainGlobal->size[1];
        i1 = b_YTrainGlobal->size[0] * b_YTrainGlobal->size[1];
        i2 = tree->iPresent->size[0];
        i3 = (int32_T)iCalc;
        b_YTrainGlobal->size[0] = tree->iPresent->
          data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &gc_emlrtBCI, sp) -
          1].inds->size[1];
        b_YTrainGlobal->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)b_YTrainGlobal, i1, (int32_T)
                          sizeof(boolean_T), &f_emlrtRTEI);
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = tree->iPresent->size[0];
          i3 = (int32_T)iCalc;
          i = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
            &gc_emlrtBCI, sp) - 1].inds->size[1];
          for (i2 = 0; i2 < i; i2++) {
            i3 = YTrainGlobal->size[0];
            cdiff = tree->iPresent->size[0];
            absb = (int32_T)iCalc;
            apnd = tree->iPresent->size[0];
            i4 = (int32_T)iCalc;
            t1_inds = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b
              (absb, 1, cdiff, &gc_emlrtBCI, sp) - 1].inds->data[tree->
              iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, apnd,
              &gc_emlrtBCI, sp) - 1].inds->size[0] * i2];
            t1_inds = (int64_T)emlrtIntegerCheckFastR2012b((real_T)t1_inds,
              &d_emlrtDCI, sp);
            b_YTrainGlobal->data[i2 + b_YTrainGlobal->size[0] * i1] =
              YTrainGlobal->data[((int32_T)emlrtDynamicBoundsCheckFastInt64
                                  (t1_inds, 1, i3, &y_emlrtBCI, sp) +
                                  YTrainGlobal->size[0] * i1) - 1];
          }
        }

        i1 = c_iFeatureNum->size[0] * c_iFeatureNum->size[1];
        c_iFeatureNum->size[0] = 1;
        c_iFeatureNum->size[1] = iFeatureNum->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)c_iFeatureNum, i1, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        loop_ub = iFeatureNum->size[0] * iFeatureNum->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          c_iFeatureNum->data[i1] = iFeatureNum->data[i1];
        }

        i1 = tree->depth->size[0];
        i2 = (int32_T)iCalc;
        st.site = &o_emlrtRSI;
        expandNode(&st, b_XTrainGlobal, b_YTrainGlobal, options, c_iFeatureNum,
                   tree->depth->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
                    &ab_emlrtBCI, sp) - 1], &bLeaf, bLessThanTrain,
                   partitionPoint_data, partitionPoint_size, projMat, countsNode,
                   y);
        bComplete = emlrt_update_log_31(bLeaf, *(emlrtLocationLoggingDataType (*)
          [613])&emlrtLocationLoggingDataTables[612U]);
        i1 = c_bLessThanTrain->size[0] * c_bLessThanTrain->size[1];
        c_bLessThanTrain->size[0] = bLessThanTrain->size[0];
        c_bLessThanTrain->size[1] = bLessThanTrain->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)c_bLessThanTrain, i1, (int32_T)
                          sizeof(boolean_T), &f_emlrtRTEI);
        loop_ub = bLessThanTrain->size[0] * bLessThanTrain->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          c_bLessThanTrain->data[i1] = bLessThanTrain->data[i1];
        }

        emlrt_update_log_37(sp, c_bLessThanTrain, *(emlrtLocationLoggingDataType
                             (*)[613])&emlrtLocationLoggingDataTables[611U],
                            bLessThanTrain);
        b_partitionPoint_size[0] = partitionPoint_size[0];
        b_partitionPoint_size[1] = partitionPoint_size[1];
        loop_ub = partitionPoint_size[0] * partitionPoint_size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          c_ii_data[i1] = partitionPoint_data[i1];
        }

        emlrt_update_log_34(c_ii_data, b_partitionPoint_size,
                            *(emlrtLocationLoggingDataType (*)[613])&
                            emlrtLocationLoggingDataTables[610U],
                            partitionPoint_data, partitionPoint_size);
        i1 = b_projMat->size[0];
        b_projMat->size[0] = projMat->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)b_projMat, i1, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        loop_ub = projMat->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_projMat->data[i1] = projMat->data[i1];
        }

        emlrt_update_log_20(sp, b_projMat, *(emlrtLocationLoggingDataType (*)
          [613])&emlrtLocationLoggingDataTables[609U], projMat);
        i1 = b_countsNode->size[0] * b_countsNode->size[1];
        b_countsNode->size[0] = 1;
        b_countsNode->size[1] = countsNode->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)b_countsNode, i1, (int32_T)
                          sizeof(real_T), &f_emlrtRTEI);
        loop_ub = countsNode->size[0] * countsNode->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_countsNode->data[i1] = countsNode->data[i1];
        }

        emlrt_update_log_38(sp, b_countsNode, *(emlrtLocationLoggingDataType (*)
          [613])&emlrtLocationLoggingDataTables[608U], countsNode);
        i1 = d_y->size[0] * d_y->size[1];
        d_y->size[0] = 1;
        d_y->size[1] = y->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)d_y, i1, (int32_T)sizeof
                          (real_T), &f_emlrtRTEI);
        loop_ub = y->size[0] * y->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          d_y->data[i1] = y->data[i1];
        }

        emlrt_update_log_5(sp, d_y, *(emlrtLocationLoggingDataType (*)[613])&
                           emlrtLocationLoggingDataTables[607U], y);
        if (bComplete) {
          st.site = &n_emlrtRSI;
          b_st.site = &cg_emlrtRSI;
          c_st.site = &dg_emlrtRSI;
          if ((countsNode->size[1] == 1) || (countsNode->size[1] != 1)) {
            bComplete = true;
          } else {
            bComplete = false;
          }

          if (bComplete) {
          } else {
            h_y = NULL;
            m1 = emlrtCreateCharArray(2, iv26);
            for (i = 0; i < 36; i++) {
              cv4[i] = cv5[i];
            }

            emlrtInitCharArrayR2013a(&c_st, 36, m1, cv4);
            emlrtAssign(&h_y, m1);
            d_st.site = &iq_emlrtRSI;
            e_st.site = &dr_emlrtRSI;
            f_error(&d_st, b_message(&e_st, h_y, &bc_emlrtMCI), &cc_emlrtMCI);
          }

          if (countsNode->size[1] > 0) {
          } else {
            i_y = NULL;
            m1 = emlrtCreateCharArray(2, iv27);
            for (i = 0; i < 39; i++) {
              cv6[i] = cv7[i];
            }

            emlrtInitCharArrayR2013a(&c_st, 39, m1, cv6);
            emlrtAssign(&i_y, m1);
            d_st.site = &dq_emlrtRSI;
            e_st.site = &yq_emlrtRSI;
            f_error(&d_st, b_message(&e_st, i_y, &bb_emlrtMCI), &cb_emlrtMCI);
          }

          d_st.site = &ep_emlrtRSI;
          i = 1;
          K = countsNode->data[0];
          if (countsNode->size[1] > 1) {
            if (muDoubleScalarIsNaN(countsNode->data[0])) {
              cdiff = 2;
              exitg7 = false;
              while ((!exitg7) && (cdiff <= countsNode->size[1])) {
                i = cdiff;
                if (!muDoubleScalarIsNaN(countsNode->data[cdiff - 1])) {
                  K = countsNode->data[cdiff - 1];
                  exitg7 = true;
                } else {
                  cdiff++;
                }
              }
            }

            if (i < countsNode->size[1]) {
              while (i + 1 <= countsNode->size[1]) {
                if (countsNode->data[i] > K) {
                  K = countsNode->data[i];
                }

                i++;
              }
            }
          }

          K = emlrt_update_log_1(K, *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[531U]);
          maxCounts_size[0] = 1;
          maxCounts_size[1] = countsNode->size[1];
          loop_ub = countsNode->size[0] * countsNode->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            maxCounts_data[i1] = (K == countsNode->data[i1]);
          }

          emlrt_update_log_43(maxCounts_data, maxCounts_size,
                              *(emlrtLocationLoggingDataType (*)[613])&
                              emlrtLocationLoggingDataTables[532U],
                              bEqualMaxCounts_data, bEqualMaxCounts_size);
          idRecursion = emlrt_update_log_1(iCalc, *(emlrtLocationLoggingDataType
            (*)[613])&emlrtLocationLoggingDataTables[533U]);
          exitg4 = false;
          do {
            exitg11 = 0;
            st.site = &m_emlrtRSI;
            if ((!exitg4) && (emlrt_update_log_1(c_sum(&st, bEqualMaxCounts_data,
                   bEqualMaxCounts_size), *(emlrtLocationLoggingDataType (*)[613])
                  &emlrtLocationLoggingDataTables[534U]) > 1.0)) {
              i1 = tree->parentId->size[0];
              i2 = (int32_T)idRecursion;
              idRecursion = emlrt_update_log_1(tree->parentId->
                data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &tb_emlrtBCI,
                sp) - 1], *(emlrtLocationLoggingDataType (*)[613])&
                emlrtLocationLoggingDataTables[535U]);
              if (idRecursion == 0.0) {
                st.site = &l_emlrtRSI;
                b_st.site = &w_emlrtRSI;
                cdiff = 0;
                i1 = ii->size[0] * ii->size[1];
                ii->size[0] = 1;
                ii->size[1] = bEqualMaxCounts_size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)
                                  sizeof(int32_T), &i_emlrtRTEI);
                c_st.site = &x_emlrtRSI;
                i = 1;
                exitg5 = false;
                while ((!exitg5) && (i <= bEqualMaxCounts_size[1])) {
                  guard2 = false;
                  if (bEqualMaxCounts_data[i - 1]) {
                    cdiff++;
                    ii->data[cdiff - 1] = i;
                    if (cdiff >= bEqualMaxCounts_size[1]) {
                      exitg5 = true;
                    } else {
                      guard2 = true;
                    }
                  } else {
                    guard2 = true;
                  }

                  if (guard2) {
                    i++;
                  }
                }

                if (cdiff <= bEqualMaxCounts_size[1]) {
                } else {
                  j_y = NULL;
                  m1 = emlrtCreateString("Assertion failed.");
                  emlrtAssign(&j_y, m1);
                  c_st.site = &bq_emlrtRSI;
                  f_error(&c_st, j_y, &j_emlrtMCI);
                }

                if (bEqualMaxCounts_size[1] == 1) {
                  if (cdiff == 0) {
                    i1 = ii->size[0] * ii->size[1];
                    ii->size[0] = 1;
                    ii->size[1] = 0;
                    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1,
                                      (int32_T)sizeof(int32_T), &f_emlrtRTEI);
                  }
                } else {
                  if (1 > cdiff) {
                    loop_ub = 0;
                  } else {
                    loop_ub = cdiff;
                  }

                  i1 = d_ii->size[0] * d_ii->size[1];
                  d_ii->size[0] = 1;
                  d_ii->size[1] = loop_ub;
                  emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i1,
                                    (int32_T)sizeof(int32_T), &f_emlrtRTEI);
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    d_ii->data[d_ii->size[0] * i1] = ii->data[i1];
                  }

                  i1 = ii->size[0] * ii->size[1];
                  ii->size[0] = 1;
                  ii->size[1] = d_ii->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)
                                    sizeof(int32_T), &f_emlrtRTEI);
                  loop_ub = d_ii->size[1];
                  for (i1 = 0; i1 < loop_ub; i1++) {
                    ii->data[ii->size[0] * i1] = d_ii->data[d_ii->size[0] * i1];
                  }
                }

                i1 = c_ii->size[0] * c_ii->size[1];
                c_ii->size[0] = 1;
                c_ii->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)c_ii, i1, (int32_T)
                                  sizeof(real_T), &f_emlrtRTEI);
                loop_ub = ii->size[0] * ii->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_ii->data[i1] = ii->data[i1];
                }

                emlrt_update_log_5(sp, c_ii, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[537U], y);
                emlrt_update_log_38(sp, y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[536U], countsAdd);
                i1 = countsAdd->size[1];
                st.site = &k_emlrtRSI;
                K = emlrt_update_log_1(b_randi(countsAdd->size[1]),
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[539U]);
                i2 = (int32_T)emlrtIntegerCheckFastR2012b(K, &e_emlrtDCI, sp);
                K = emlrt_update_log_1(countsAdd->
                  data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &xb_emlrtBCI,
                  sp) - 1], *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[538U]);
                for (i1 = 0; i1 < 2; i1++) {
                  childIds[i1] = bEqualMaxCounts_size[i1];
                }

                tmp_size[0] = 1;
                tmp_size[1] = (int32_T)childIds[1];
                loop_ub = (int32_T)childIds[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  maxCounts_data[i1] = false;
                }

                emlrt_update_log_43(maxCounts_data, tmp_size,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[540U],
                                    bEqualMaxCounts_data, bEqualMaxCounts_size);
                i1 = (int32_T)K;
                bEqualMaxCounts_data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
                  bEqualMaxCounts_size[1], &yb_emlrtBCI, sp) - 1] =
                  emlrt_update_log_31(true, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[541U]);
                exitg4 = true;
              } else {
                for (i1 = 0; i1 < 2; i1++) {
                  childIds[i1] = countsNode->size[i1];
                }

                i1 = r18->size[0] * r18->size[1];
                r18->size[0] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)r18, i1, (int32_T)
                                  sizeof(real_T), &f_emlrtRTEI);
                i1 = r18->size[0] * r18->size[1];
                r18->size[1] = (int32_T)childIds[1];
                emxEnsureCapacity(sp, (emxArray__common *)r18, i1, (int32_T)
                                  sizeof(real_T), &f_emlrtRTEI);
                loop_ub = (int32_T)childIds[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  r18->data[i1] = 0.0;
                }

                emlrt_update_log_38(sp, r18, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[542U], countsAdd);
                b_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
                b_bEqualMaxCounts_data.size = (int32_T *)&bEqualMaxCounts_size;
                b_bEqualMaxCounts_data.allocatedSize = 10000;
                b_bEqualMaxCounts_data.numDimensions = 2;
                b_bEqualMaxCounts_data.canFreeData = false;
                st.site = &j_emlrtRSI;
                eml_li_find(&st, &b_bEqualMaxCounts_data, ii);
                i = ii->size[1];
                loop_ub = ii->size[0] * ii->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  SD->f0.tmp_data[i1] = ii->data[i1];
                }

                c_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
                c_bEqualMaxCounts_data.size = (int32_T *)&bEqualMaxCounts_size;
                c_bEqualMaxCounts_data.allocatedSize = 10000;
                c_bEqualMaxCounts_data.numDimensions = 2;
                c_bEqualMaxCounts_data.canFreeData = false;
                st.site = &j_emlrtRSI;
                eml_li_find(&st, &c_bEqualMaxCounts_data, ii);
                i1 = tree->trainingCounts->size[0];
                i2 = (int32_T)idRecursion;
                cdiff = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &u_emlrtBCI,
                  sp);
                i1 = y->size[0] * y->size[1];
                y->size[0] = 1;
                y->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)y, i1, (int32_T)sizeof
                                  (real_T), &f_emlrtRTEI);
                loop_ub = ii->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = tree->trainingCounts->size[1];
                  i3 = ii->data[ii->size[0] * i1];
                  y->data[y->size[0] * i1] = tree->trainingCounts->data[(cdiff +
                    tree->trainingCounts->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &ub_emlrtBCI,
                    sp) - 1)) - 1];
                }

                d_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
                d_bEqualMaxCounts_data.size = (int32_T *)&bEqualMaxCounts_size;
                d_bEqualMaxCounts_data.allocatedSize = 10000;
                d_bEqualMaxCounts_data.numDimensions = 2;
                d_bEqualMaxCounts_data.canFreeData = false;
                st.site = &j_emlrtRSI;
                eml_li_find(&st, &d_bEqualMaxCounts_data, ii);
                i1 = tree->trainingCounts->size[0];
                i2 = (int32_T)idRecursion;
                cdiff = emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &t_emlrtBCI,
                  sp);
                i1 = r_tree->size[0] * r_tree->size[1];
                r_tree->size[0] = 1;
                r_tree->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)r_tree, i1, (int32_T)
                                  sizeof(real_T), &f_emlrtRTEI);
                loop_ub = ii->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  i2 = tree->trainingCounts->size[1];
                  i3 = ii->data[ii->size[0] * i1];
                  r_tree->data[r_tree->size[0] * i1] = tree->
                    trainingCounts->data[(cdiff + tree->trainingCounts->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2, &vb_emlrtBCI,
                    sp) - 1)) - 1];
                }

                st.site = &j_emlrtRSI;
                K = emlrt_update_log_1(10000.0 * emlrt_update_log_1(g_sum(&st,
                  r_tree), *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[546U]),
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[545U]);
                i1 = e_y->size[0] * e_y->size[1];
                e_y->size[0] = 1;
                e_y->size[1] = y->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)e_y, i1, (int32_T)
                                  sizeof(real_T), &f_emlrtRTEI);
                loop_ub = y->size[0] * y->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  e_y->data[i1] = y->data[i1] / K;
                }

                emlrt_update_log_5(sp, e_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[544U], y);
                i1 = r11->size[0] * r11->size[1];
                r11->size[0] = 1;
                r11->size[1] = y->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)r11, i1, (int32_T)
                                  sizeof(real_T), &f_emlrtRTEI);
                loop_ub = y->size[0] * y->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  r11->data[i1] = y->data[i1];
                }

                i1 = r11->size[1];
                emlrtSizeEqCheck1DFastR2012b(i, i1, &t_emlrtECI, sp);
                emlrt_update_log_38(sp, r11, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[543U], r17);
                i = countsAdd->size[1];
                loop_ub = r17->size[0] * r17->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  countsAdd->data[emlrtDynamicBoundsCheckFastR2012b
                    (SD->f0.tmp_data[i1], 1, i, &wb_emlrtBCI, sp) - 1] =
                    r17->data[i1];
                }

                for (i1 = 0; i1 < 2; i1++) {
                  d_countsNode[i1] = countsNode->size[i1];
                }

                for (i1 = 0; i1 < 2; i1++) {
                  b_countsAdd[i1] = countsAdd->size[i1];
                }

                emlrtSizeEqCheck2DFastR2012b(d_countsNode, b_countsAdd,
                  &s_emlrtECI, sp);
                i1 = c_countsNode->size[0] * c_countsNode->size[1];
                c_countsNode->size[0] = 1;
                c_countsNode->size[1] = countsNode->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)c_countsNode, i1,
                                  (int32_T)sizeof(real_T), &f_emlrtRTEI);
                loop_ub = countsNode->size[0] * countsNode->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  c_countsNode->data[i1] = countsNode->data[i1] +
                    countsAdd->data[i1];
                }

                emlrt_update_log_38(sp, c_countsNode,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[547U],
                                    countsAdd);
                st.site = &i_emlrtRSI;
                b_st.site = &cg_emlrtRSI;
                c_st.site = &dg_emlrtRSI;
                if ((countsAdd->size[1] == 1) || (countsAdd->size[1] != 1)) {
                  bComplete = true;
                } else {
                  bComplete = false;
                }

                if (bComplete) {
                } else {
                  k_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv28);
                  for (i = 0; i < 36; i++) {
                    cv4[i] = cv5[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 36, m1, cv4);
                  emlrtAssign(&k_y, m1);
                  d_st.site = &iq_emlrtRSI;
                  e_st.site = &dr_emlrtRSI;
                  f_error(&d_st, b_message(&e_st, k_y, &bc_emlrtMCI),
                          &cc_emlrtMCI);
                }

                if (countsAdd->size[1] > 0) {
                } else {
                  l_y = NULL;
                  m1 = emlrtCreateCharArray(2, iv29);
                  for (i = 0; i < 39; i++) {
                    cv6[i] = cv7[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 39, m1, cv6);
                  emlrtAssign(&l_y, m1);
                  d_st.site = &dq_emlrtRSI;
                  e_st.site = &yq_emlrtRSI;
                  f_error(&d_st, b_message(&e_st, l_y, &bb_emlrtMCI),
                          &cb_emlrtMCI);
                }

                d_st.site = &ep_emlrtRSI;
                i = 1;
                K = countsAdd->data[0];
                if (countsAdd->size[1] > 1) {
                  if (muDoubleScalarIsNaN(countsAdd->data[0])) {
                    cdiff = 2;
                    exitg6 = false;
                    while ((!exitg6) && (cdiff <= countsAdd->size[1])) {
                      i = cdiff;
                      if (!muDoubleScalarIsNaN(countsAdd->data[cdiff - 1])) {
                        K = countsAdd->data[cdiff - 1];
                        exitg6 = true;
                      } else {
                        cdiff++;
                      }
                    }
                  }

                  if (i < countsAdd->size[1]) {
                    while (i + 1 <= countsAdd->size[1]) {
                      if (countsAdd->data[i] > K) {
                        K = countsAdd->data[i];
                      }

                      i++;
                    }
                  }
                }

                K = emlrt_update_log_1(K, *(emlrtLocationLoggingDataType (*)[613])
                  &emlrtLocationLoggingDataTables[548U]);
                b_maxCounts_size[0] = 1;
                b_maxCounts_size[1] = countsAdd->size[1];
                loop_ub = countsAdd->size[0] * countsAdd->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  maxCounts_data[i1] = (K == countsAdd->data[i1]);
                }

                emlrt_update_log_43(maxCounts_data, b_maxCounts_size,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[549U],
                                    bEqualMaxCounts_data, bEqualMaxCounts_size);
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }
            } else {
              exitg11 = 1;
            }
          } while (exitg11 == 0);

          i1 = tree->bLeaf->size[0];
          i2 = (int32_T)iCalc;
          tree->bLeaf->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &ac_emlrtBCI, sp) - 1] = emlrt_update_log_31(true,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[550U]);
          i = tree->iPresent->size[0];
          r19.numDimensions = 2;
          iv30[0] = 1;
          iv30[1] = 0;
          r19.size = (int32_T *)&iv30;
          r19.allocatedSize = 0;
          r19.data = NULL;
          i1 = (int32_T)iCalc;
          emlrt_update_log_42(sp, &r19, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[551U],
                              tree->iPresent->
                              data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &bc_emlrtBCI, sp) - 1].inds);
          if (!b0) {
            i1 = r16->size[0] * r16->size[1];
            r16->size[0] = 1;
            r16->size[1] = 0;
            emxEnsureCapacity(sp, (emxArray__common *)r16, i1, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            b0 = true;
          }

          i = tree->iFeatNum->size[0];
          i1 = (int32_T)iCalc;
          emlrt_update_log_5(sp, r16, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[552U],
                             tree->iFeatNum->
                             data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &cc_emlrtBCI, sp) - 1].inds);
          i1 = tree->trainingCounts->size[0];
          i2 = (int32_T)iCalc;
          emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &s_emlrtBCI, sp);
          loop_ub = tree->trainingCounts->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            SD->f0.b_tmp_data[i1] = i1;
          }

          iv31[0] = 1;
          iv31[1] = loop_ub;
          emlrtSubAssignSizeCheckR2012b(iv31, 2, *(int32_T (*)[2])
            countsNode->size, 2, &r_emlrtECI, sp);
          emlrt_update_log_38(sp, countsNode, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[553U], r15);
          loop_ub = r15->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            tree->trainingCounts->data[((int32_T)iCalc + tree->
              trainingCounts->size[0] * SD->f0.b_tmp_data[i1]) - 1] = r15->
              data[r15->size[0] * i1];
          }

          st.site = &h_emlrtRSI;
          b_st.site = &w_emlrtRSI;
          cdiff = 0;
          i1 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = bEqualMaxCounts_size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                            (int32_T), &i_emlrtRTEI);
          c_st.site = &x_emlrtRSI;
          i = 1;
          exitg3 = false;
          while ((!exitg3) && (i <= bEqualMaxCounts_size[1])) {
            guard1 = false;
            if (bEqualMaxCounts_data[i - 1]) {
              cdiff++;
              ii->data[cdiff - 1] = i;
              if (cdiff >= bEqualMaxCounts_size[1]) {
                exitg3 = true;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              i++;
            }
          }

          if (cdiff <= bEqualMaxCounts_size[1]) {
          } else {
            m_y = NULL;
            m1 = emlrtCreateString("Assertion failed.");
            emlrtAssign(&m_y, m1);
            c_st.site = &bq_emlrtRSI;
            f_error(&c_st, m_y, &j_emlrtMCI);
          }

          if (bEqualMaxCounts_size[1] == 1) {
            if (cdiff == 0) {
              i1 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = 0;
              emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)
                                sizeof(int32_T), &f_emlrtRTEI);
            }
          } else {
            if (1 > cdiff) {
              loop_ub = 0;
            } else {
              loop_ub = cdiff;
            }

            i1 = e_ii->size[0] * e_ii->size[1];
            e_ii->size[0] = 1;
            e_ii->size[1] = loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)e_ii, i1, (int32_T)
                              sizeof(int32_T), &f_emlrtRTEI);
            for (i1 = 0; i1 < loop_ub; i1++) {
              e_ii->data[e_ii->size[0] * i1] = ii->data[i1];
            }

            i1 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = e_ii->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                              (int32_T), &f_emlrtRTEI);
            loop_ub = e_ii->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              ii->data[ii->size[0] * i1] = e_ii->data[e_ii->size[0] * i1];
            }
          }

          i1 = b_ii->size[0] * b_ii->size[1];
          b_ii->size[0] = 1;
          b_ii->size[1] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_ii, i1, (int32_T)sizeof
                            (real_T), &f_emlrtRTEI);
          loop_ub = ii->size[0] * ii->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_ii->data[i1] = ii->data[i1];
          }

          emlrt_update_log_5(sp, b_ii, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[555U], y);
          i1 = r11->size[0] * r11->size[1];
          r11->size[0] = 1;
          r11->size[1] = y->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r11, i1, (int32_T)sizeof
                            (real_T), &f_emlrtRTEI);
          loop_ub = y->size[0] * y->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            r11->data[i1] = y->data[i1];
          }

          i1 = r11->size[1];
          emlrtSizeEqCheck1DFastR2012b(1, i1, &q_emlrtECI, sp);
          i1 = r11->size[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i1, &r_emlrtBCI, sp);
          i1 = tree->labelClassId->size[0];
          i2 = (int32_T)iCalc;
          tree->labelClassId->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &dc_emlrtBCI, sp) - 1] = emlrt_update_log_1(r11->data[0],
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[554U]);
          i1 = tree->bExpanded->size[0];
          i2 = (int32_T)iCalc;
          tree->bExpanded->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &ec_emlrtBCI, sp) - 1] = emlrt_update_log_31(true,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[556U]);
        } else {
          if (tree->nextChild > emlrt_update_log_1((real_T)tree->bLeaf->size[0]
               - 1.0, *(emlrtLocationLoggingDataType (*)[613])&
               emlrtLocationLoggingDataTables[557U])) {
            i1 = q_tree->size[0];
            q_tree->size[0] = tree->bExpanded->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)q_tree, i1, (int32_T)
                              sizeof(boolean_T), &f_emlrtRTEI);
            loop_ub = tree->bExpanded->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              q_tree->data[i1] = tree->bExpanded->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              q_tree->data[i1 + tree->bExpanded->size[0]] = falseCol[i1];
            }

            emlrt_update_log_19(sp, q_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[558U], tree->bExpanded);
            i1 = tree->nodeId->size[0];
            i2 = tree->nodeId->size[0];
            K = tree->nodeId->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
              &bb_emlrtBCI, sp) - 1];
            for (i1 = 0; i1 < 2000; i1++) {
              SD->f0.tree[i1] = K + stepCol[i1];
            }

            emlrt_update_log_15(SD->f0.tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[560U], dv7);
            i1 = p_tree->size[0];
            p_tree->size[0] = tree->nodeId->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)p_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            loop_ub = tree->nodeId->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              p_tree->data[i1] = tree->nodeId->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              p_tree->data[i1 + tree->nodeId->size[0]] = dv7[i1];
            }

            emlrt_update_log_20(sp, p_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[559U], tree->nodeId);
            i1 = o_tree->size[0];
            o_tree->size[0] = tree->bLeaf->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)o_tree, i1, (int32_T)
                              sizeof(boolean_T), &f_emlrtRTEI);
            loop_ub = tree->bLeaf->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              o_tree->data[i1] = tree->bLeaf->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              o_tree->data[i1 + tree->bLeaf->size[0]] = falseCol[i1];
            }

            emlrt_update_log_19(sp, o_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[561U], tree->bLeaf);
            i1 = n_tree->size[0] * n_tree->size[1];
            n_tree->size[0] = tree->childIds->size[0] + 2000;
            n_tree->size[1] = 2;
            emxEnsureCapacity(sp, (emxArray__common *)n_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            for (i1 = 0; i1 < 2; i1++) {
              loop_ub = tree->childIds->size[0];
              for (i2 = 0; i2 < loop_ub; i2++) {
                n_tree->data[i2 + n_tree->size[0] * i1] = tree->childIds->
                  data[i2 + tree->childIds->size[0] * i1];
              }
            }

            for (i1 = 0; i1 < 2; i1++) {
              for (i2 = 0; i2 < 2000; i2++) {
                n_tree->data[(i2 + tree->childIds->size[0]) + n_tree->size[0] *
                  i1] = SD->f0.zero2Col[i2 + 2000 * i1];
              }
            }

            emlrt_update_log_21(sp, n_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[562U], tree->childIds);
            i1 = m_tree->size[0];
            m_tree->size[0] = tree->parentId->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)m_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            loop_ub = tree->parentId->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              m_tree->data[i1] = tree->parentId->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              m_tree->data[i1 + tree->parentId->size[0]] = SD->f0.zeroCol[i1];
            }

            emlrt_update_log_20(sp, m_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[563U], tree->parentId);
            i1 = l_tree->size[0];
            l_tree->size[0] = tree->depth->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)l_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            loop_ub = tree->depth->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              l_tree->data[i1] = tree->depth->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              l_tree->data[i1 + tree->depth->size[0]] = SD->f0.zeroCol[i1];
            }

            emlrt_update_log_20(sp, l_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[564U], tree->depth);
            d_cast(sp, rv1);
            i1 = k_tree->size[0];
            k_tree->size[0] = tree->iPresent->size[0] + 2000;
            emxEnsureCapacity_struct3_T(sp, k_tree, i1, &f_emlrtRTEI);
            loop_ub = tree->iPresent->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              emxCopyStruct_struct3_T(sp, &k_tree->data[i1], &tree->
                iPresent->data[i1], &f_emlrtRTEI);
            }

            for (i1 = 0; i1 < 2000; i1++) {
              emxCopyStruct_struct3_T(sp, &k_tree->data[i1 + tree->
                iPresent->size[0]], &rv1[i1], &f_emlrtRTEI);
            }

            emlrt_update_log_22(sp, k_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[565U], tree->iPresent);
            c_cast(sp, rv2);
            i1 = j_tree->size[0];
            j_tree->size[0] = tree->iFeatNum->size[0] + 2000;
            emxEnsureCapacity_struct4_T(sp, j_tree, i1, &f_emlrtRTEI);
            loop_ub = tree->iFeatNum->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              emxCopyStruct_struct4_T(sp, &j_tree->data[i1], &tree->
                iFeatNum->data[i1], &f_emlrtRTEI);
            }

            for (i1 = 0; i1 < 2000; i1++) {
              emxCopyStruct_struct4_T(sp, &j_tree->data[i1 + tree->
                iFeatNum->size[0]], &rv2[i1], &f_emlrtRTEI);
            }

            emlrt_update_log_23(sp, j_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[566U], tree->iFeatNum);
            i1 = tree->trainingCounts->size[1];
            emlrtDimSizeEqCheckFastR2012b(2, i1, &p_emlrtECI, sp);
            i1 = i_tree->size[0] * i_tree->size[1];
            i_tree->size[0] = tree->trainingCounts->size[0] + 2000;
            i_tree->size[1] = tree->trainingCounts->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)i_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            loop_ub = tree->trainingCounts->size[1];
            for (i1 = 0; i1 < loop_ub; i1++) {
              i = tree->trainingCounts->size[0];
              for (i2 = 0; i2 < i; i2++) {
                i_tree->data[i2 + i_tree->size[0] * i1] = tree->
                  trainingCounts->data[i2 + tree->trainingCounts->size[0] * i1];
              }
            }

            for (i1 = 0; i1 < 2; i1++) {
              for (i2 = 0; i2 < 2000; i2++) {
                i_tree->data[(i2 + tree->trainingCounts->size[0]) + i_tree->
                  size[0] * i1] = SD->f0.zero2Col[i2 + 2000 * i1];
              }
            }

            emlrt_update_log_24(sp, i_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[567U], tree->trainingCounts);
            i1 = h_tree->size[0];
            h_tree->size[0] = tree->labelClassId->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)h_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            loop_ub = tree->labelClassId->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              h_tree->data[i1] = tree->labelClassId->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              h_tree->data[i1 + tree->labelClassId->size[0]] = SD->f0.zeroCol[i1];
            }

            emlrt_update_log_20(sp, h_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[568U], tree->labelClassId);
            i1 = g_tree->size[0];
            g_tree->size[0] = tree->partitionPoint->size[0] + 2000;
            emxEnsureCapacity(sp, (emxArray__common *)g_tree, i1, (int32_T)
                              sizeof(real_T), &f_emlrtRTEI);
            loop_ub = tree->partitionPoint->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              g_tree->data[i1] = tree->partitionPoint->data[i1];
            }

            for (i1 = 0; i1 < 2000; i1++) {
              g_tree->data[i1 + tree->partitionPoint->size[0]] = nanCol[i1];
            }

            emlrt_update_log_20(sp, g_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[569U], tree->partitionPoint);
            c_cast(sp, rv2);
            i1 = f_tree->size[0];
            f_tree->size[0] = tree->iIn->size[0] + 2000;
            emxEnsureCapacity_struct4_T(sp, f_tree, i1, &f_emlrtRTEI);
            loop_ub = tree->iIn->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              emxCopyStruct_struct4_T(sp, &f_tree->data[i1], &tree->iIn->data[i1],
                &f_emlrtRTEI);
            }

            for (i1 = 0; i1 < 2000; i1++) {
              emxCopyStruct_struct4_T(sp, &f_tree->data[i1 + tree->iIn->size[0]],
                &rv2[i1], &f_emlrtRTEI);
            }

            emlrt_update_log_23(sp, f_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[570U], tree->iIn);
            b_cast(sp, rv3);
            i1 = e_tree->size[0];
            e_tree->size[0] = tree->decisionProjection->size[0] + 2000;
            emxEnsureCapacity_struct5_T(sp, e_tree, i1, &f_emlrtRTEI);
            loop_ub = tree->decisionProjection->size[0];
            for (i1 = 0; i1 < loop_ub; i1++) {
              emxCopyStruct_struct5_T(sp, &e_tree->data[i1],
                &tree->decisionProjection->data[i1], &f_emlrtRTEI);
            }

            for (i1 = 0; i1 < 2000; i1++) {
              emxCopyStruct_struct5_T(sp, &e_tree->data[i1 +
                tree->decisionProjection->size[0]], &rv3[i1], &f_emlrtRTEI);
            }

            emlrt_update_log_25(sp, e_tree, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[571U],
                                tree->decisionProjection);
          }

          i1 = tree->bLeaf->size[0];
          i2 = (int32_T)iCalc;
          tree->bLeaf->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &cb_emlrtBCI, sp) - 1] = emlrt_update_log_31(false,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[572U]);
          for (i1 = 0; i1 < 2; i1++) {
            t0_nodeId[i1] = tree->nextChild + (real_T)i1;
          }

          emlrt_update_log_44(t0_nodeId, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[573U], childIds);
          emlrt_update_log_44(childIds, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[574U], t0_parentId);
          i = tree->childIds->size[0];
          i1 = (int32_T)iCalc;
          emlrtDynamicBoundsCheckFastR2012b(i1, 1, i, &q_emlrtBCI, sp);
          for (i1 = 0; i1 < 2; i1++) {
            tree->childIds->data[((int32_T)iCalc + tree->childIds->size[0] * i1)
              - 1] = t0_parentId[i1];
          }

          i1 = tree->depth->size[0];
          i2 = (int32_T)iCalc;
          K = emlrt_update_log_1(tree->depth->
            data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &db_emlrtBCI, sp)
            - 1] + 1.0, *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[576U]);
          for (i1 = 0; i1 < 2; i1++) {
            t0_parentId[i1] = K;
          }

          emlrt_update_log_44(t0_parentId, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[575U], t0_nodeId);
          i = tree->depth->size[0];
          for (i1 = 0; i1 < 2; i1++) {
            i2 = (int32_T)childIds[i1];
            tree->depth->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i,
              &eb_emlrtBCI, sp) - 1] = t0_nodeId[i1];
          }

          i1 = tree->iPresent->size[0];
          i2 = (int32_T)iCalc;
          emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &p_emlrtBCI, sp);
          st.site = &g_emlrtRSI;
          c_eml_li_find(&st, bLessThanTrain, r12);
          emlrtVectorVectorIndexCheckR2012b(1, tree->iPresent->data[(int32_T)
            iCalc - 1].inds->size[1], r12->size[0], 1, &o_emlrtECI, sp);
          i1 = d_tree->size[0] * d_tree->size[1];
          d_tree->size[0] = 1;
          d_tree->size[1] = r12->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)d_tree, i1, (int32_T)sizeof
                            (int64_T), &f_emlrtRTEI);
          loop_ub = r12->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = tree->iPresent->data[(int32_T)iCalc - 1].inds->size[1];
            i3 = r12->data[i1];
            d_tree->data[d_tree->size[0] * i1] = tree->iPresent->data[(int32_T)
              iCalc - 1].inds->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
              &fb_emlrtBCI, sp) - 1];
          }

          i = tree->iPresent->size[0];
          i1 = (int32_T)childIds[0];
          emlrt_update_log_42(sp, d_tree, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[577U],
                              tree->iPresent->
                              data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &gb_emlrtBCI, sp) - 1].inds);
          i1 = tree->iPresent->size[0];
          i2 = (int32_T)iCalc;
          emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &o_emlrtBCI, sp);
          i1 = b_bLessThanTrain->size[0] * b_bLessThanTrain->size[1];
          b_bLessThanTrain->size[0] = bLessThanTrain->size[0];
          b_bLessThanTrain->size[1] = bLessThanTrain->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_bLessThanTrain, i1,
                            (int32_T)sizeof(boolean_T), &f_emlrtRTEI);
          loop_ub = bLessThanTrain->size[0] * bLessThanTrain->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_bLessThanTrain->data[i1] = !bLessThanTrain->data[i1];
          }

          st.site = &f_emlrtRSI;
          c_eml_li_find(&st, b_bLessThanTrain, r12);
          emlrtVectorVectorIndexCheckR2012b(1, tree->iPresent->data[(int32_T)
            iCalc - 1].inds->size[1], r12->size[0], 1, &n_emlrtECI, sp);
          i1 = c_tree->size[0] * c_tree->size[1];
          c_tree->size[0] = 1;
          c_tree->size[1] = r12->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)c_tree, i1, (int32_T)sizeof
                            (int64_T), &f_emlrtRTEI);
          loop_ub = r12->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = tree->iPresent->data[(int32_T)iCalc - 1].inds->size[1];
            i3 = r12->data[i1];
            c_tree->data[c_tree->size[0] * i1] = tree->iPresent->data[(int32_T)
              iCalc - 1].inds->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i2,
              &hb_emlrtBCI, sp) - 1];
          }

          i = tree->iPresent->size[0];
          i1 = (int32_T)childIds[1];
          emlrt_update_log_42(sp, c_tree, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[578U],
                              tree->iPresent->
                              data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &ib_emlrtBCI, sp) - 1].inds);
          i = tree->iPresent->size[0];
          r20.numDimensions = 2;
          iv32[0] = 1;
          iv32[1] = 0;
          r20.size = (int32_T *)&iv32;
          r20.allocatedSize = 0;
          r20.data = NULL;
          i1 = (int32_T)iCalc;
          emlrt_update_log_42(sp, &r20, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[579U],
                              tree->iPresent->
                              data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &jb_emlrtBCI, sp) - 1].inds);
          if (!b1) {
            i1 = r14->size[0] * r14->size[1];
            r14->size[0] = 1;
            r14->size[1] = 0;
            emxEnsureCapacity(sp, (emxArray__common *)r14, i1, (int32_T)sizeof
                              (real_T), &f_emlrtRTEI);
            b1 = true;
          }

          i = tree->iFeatNum->size[0];
          i1 = (int32_T)iCalc;
          emlrt_update_log_5(sp, r14, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[580U],
                             tree->iFeatNum->
                             data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &kb_emlrtBCI, sp) - 1].inds);
          i = tree->iFeatNum->size[0];
          i1 = (int32_T)childIds[0];
          emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[581U], tree->iFeatNum->
                             data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &lb_emlrtBCI, sp) - 1].inds);
          i = tree->iFeatNum->size[0];
          i1 = (int32_T)childIds[1];
          emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[582U], tree->iFeatNum->
                             data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &mb_emlrtBCI, sp) - 1].inds);
          i1 = tree->trainingCounts->size[0];
          i2 = (int32_T)iCalc;
          emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &n_emlrtBCI, sp);
          loop_ub = tree->trainingCounts->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            SD->f0.b_tmp_data[i1] = i1;
          }

          iv33[0] = 1;
          iv33[1] = loop_ub;
          emlrtSubAssignSizeCheckR2012b(iv33, 2, *(int32_T (*)[2])
            countsNode->size, 2, &m_emlrtECI, sp);
          emlrt_update_log_38(sp, countsNode, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[583U], r13);
          loop_ub = r13->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            tree->trainingCounts->data[((int32_T)iCalc + tree->
              trainingCounts->size[0] * SD->f0.b_tmp_data[i1]) - 1] = r13->
              data[r13->size[0] * i1];
          }

          st.site = &e_emlrtRSI;
          b_st.site = &cp_emlrtRSI;
          c_st.site = &dp_emlrtRSI;
          if ((countsNode->size[1] == 1) || (countsNode->size[1] != 1)) {
            bComplete = true;
          } else {
            bComplete = false;
          }

          if (bComplete) {
          } else {
            n_y = NULL;
            m1 = emlrtCreateCharArray(2, iv34);
            for (i = 0; i < 36; i++) {
              cv4[i] = cv5[i];
            }

            emlrtInitCharArrayR2013a(&c_st, 36, m1, cv4);
            emlrtAssign(&n_y, m1);
            d_st.site = &iq_emlrtRSI;
            e_st.site = &dr_emlrtRSI;
            f_error(&d_st, b_message(&e_st, n_y, &bc_emlrtMCI), &cc_emlrtMCI);
          }

          if (countsNode->size[1] > 0) {
          } else {
            o_y = NULL;
            m1 = emlrtCreateCharArray(2, iv35);
            for (i = 0; i < 39; i++) {
              cv6[i] = cv7[i];
            }

            emlrtInitCharArrayR2013a(&c_st, 39, m1, cv6);
            emlrtAssign(&o_y, m1);
            d_st.site = &dq_emlrtRSI;
            e_st.site = &yq_emlrtRSI;
            f_error(&d_st, b_message(&e_st, o_y, &bb_emlrtMCI), &cb_emlrtMCI);
          }

          d_st.site = &ep_emlrtRSI;
          i = 1;
          K = countsNode->data[0];
          absb = 1;
          if (countsNode->size[1] > 1) {
            if (muDoubleScalarIsNaN(countsNode->data[0])) {
              cdiff = 2;
              exitg2 = false;
              while ((!exitg2) && (cdiff <= countsNode->size[1])) {
                i = cdiff;
                if (!muDoubleScalarIsNaN(countsNode->data[cdiff - 1])) {
                  K = countsNode->data[cdiff - 1];
                  absb = cdiff;
                  exitg2 = true;
                } else {
                  cdiff++;
                }
              }
            }

            if (i < countsNode->size[1]) {
              while (i + 1 <= countsNode->size[1]) {
                if (countsNode->data[i] > K) {
                  K = countsNode->data[i];
                  absb = i + 1;
                }

                i++;
              }
            }
          }

          emlrt_update_log_1(K, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[606U]);
          i1 = tree->labelClassId->size[0];
          i2 = (int32_T)iCalc;
          tree->labelClassId->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &nb_emlrtBCI, sp) - 1] = emlrt_update_log_1(absb,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[605U]);
          i1 = partitionPoint_size[0] * partitionPoint_size[1];
          emlrtSizeEqCheck1DFastR2012b(1, i1, &l_emlrtECI, sp);
          emlrtDynamicBoundsCheckFastR2012b(1, 1, partitionPoint_size[0],
            &m_emlrtBCI, sp);
          emlrtDynamicBoundsCheckFastR2012b(1, 1, partitionPoint_size[1],
            &m_emlrtBCI, sp);
          i1 = tree->partitionPoint->size[0];
          i2 = (int32_T)iCalc;
          tree->partitionPoint->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &ob_emlrtBCI, sp) - 1] = emlrt_update_log_1(partitionPoint_data[0], *
            (emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[584U]);
          i = tree->iIn->size[0];
          i1 = (int32_T)iCalc;
          emlrt_update_log_5(sp, y, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[585U], tree->
                             iIn->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1,
            i, &pb_emlrtBCI, sp) - 1].inds);
          i = tree->decisionProjection->size[0];
          i1 = (int32_T)iCalc;
          emlrt_update_log_20(sp, projMat, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[586U],
                              tree->decisionProjection->
                              data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
            &qb_emlrtBCI, sp) - 1].phi);
          for (i1 = 0; i1 < 2; i1++) {
            t0_nodeId[i1] = iCalc;
          }

          emlrt_update_log_44(t0_nodeId, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[587U], t0_parentId);
          i = tree->parentId->size[0];
          for (i1 = 0; i1 < 2; i1++) {
            i2 = (int32_T)childIds[i1];
            tree->parentId->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i,
              &rb_emlrtBCI, sp) - 1] = t0_parentId[i1];
          }

          tree->nextChild = emlrt_update_log_1(tree->nextChild + 2.0,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[588U]);
          i1 = tree->bExpanded->size[0];
          i2 = (int32_T)iCalc;
          tree->bExpanded->data[emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1,
            &sb_emlrtBCI, sp) - 1] = emlrt_update_log_31(true,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[589U]);
        }

        K = emlrt_update_log_1(tree->nextChild - 1.0,
          *(emlrtLocationLoggingDataType (*)[613])&
          emlrtLocationLoggingDataTables[591U]);
        i1 = tree->bExpanded->size[0];
        i2 = (int32_T)K;
        emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &l_emlrtBCI, sp);
        emlrtVectorVectorIndexCheckR2012b(tree->bExpanded->size[0], 1, 1,
          (int32_T)K, &k_emlrtECI, sp);
        i1 = b_tree->size[0];
        b_tree->size[0] = (int32_T)K;
        emxEnsureCapacity(sp, (emxArray__common *)b_tree, i1, (int32_T)sizeof
                          (boolean_T), &f_emlrtRTEI);
        loop_ub = (int32_T)K;
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_tree->data[i1] = tree->bExpanded->data[i1];
        }

        st.site = &d_emlrtRSI;
        bComplete = emlrt_update_log_31(c_all(&st, b_tree),
          *(emlrtLocationLoggingDataType (*)[613])&
          emlrtLocationLoggingDataTables[590U]);
        nIter++;
        emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
      }
    }
  }

  emxFree_int32_T(&e_ii);
  emxFree_int32_T(&d_ii);
  emxFree_real_T(&r18);
  emxFree_real_T(&r_tree);
  emxFree_real_T(&e_y);
  emxFree_real_T(&r17);
  emxFree_real_T(&c_countsNode);
  emxFree_real_T(&c_iFeatureNum);
  emxFree_boolean_T(&b_YTrainGlobal);
  emxFree_real_T(&b_XTrainGlobal);
  emxFree_boolean_T(&c_bLessThanTrain);
  emxFree_real_T(&b_projMat);
  emxFree_real_T(&b_countsNode);
  emxFree_real_T(&d_y);
  emxFree_real_T(&c_ii);
  emxFree_real_T(&r16);
  emxFree_real_T(&r15);
  emxFree_real_T(&b_ii);
  emxFree_boolean_T(&q_tree);
  emxFree_real_T(&p_tree);
  emxFree_boolean_T(&o_tree);
  emxFree_real_T(&n_tree);
  emxFree_real_T(&m_tree);
  emxFree_real_T(&l_tree);
  emxFree_struct3_T(&k_tree);
  emxFree_struct4_T(&j_tree);
  emxFree_real_T(&i_tree);
  emxFree_real_T(&h_tree);
  emxFree_real_T(&g_tree);
  emxFree_struct4_T(&f_tree);
  emxFree_struct5_T(&e_tree);
  emxFree_int64_T(&d_tree);
  emxFree_boolean_T(&b_bLessThanTrain);
  emxFree_int64_T(&c_tree);
  emxFree_real_T(&r14);
  emxFree_real_T(&r13);
  emxFree_boolean_T(&b_tree);
  emxFreeMatrix_struct5_T(rv3);
  emxFreeMatrix_struct4_T(rv2);
  emxFreeMatrix_struct3_T(rv1);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&y);
  emxFree_int32_T(&r12);
  emxFree_real_T(&r11);
  emxFree_real_T(&countsNode);
  emxFree_real_T(&projMat);
  emxFree_boolean_T(&bLessThanTrain);
  emxFree_real_T(&countsAdd);
  emxFree_boolean_T(&YTrainGlobal);
  emxFree_real_T(&XTrainGlobal);
  emxInit_real_T(sp, &s_tree, 1, &f_emlrtRTEI, true);
  K = emlrt_update_log_1(tree->nextChild - 1.0, *(emlrtLocationLoggingDataType (*)
    [613])&emlrtLocationLoggingDataTables[592U]);
  i1 = tree->nodeId->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &k_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->nodeId->size[0], 1, 1, (int32_T)K,
    &j_emlrtECI, sp);
  i1 = s_tree->size[0];
  s_tree->size[0] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)s_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  for (i1 = 0; i1 < loop_ub; i1++) {
    s_tree->data[i1] = tree->nodeId->data[i1];
  }

  emxInit_boolean_T(sp, &t_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_20(sp, s_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[593U], tree->nodeId);
  i1 = tree->bLeaf->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &j_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->bLeaf->size[0], 1, 1, (int32_T)K,
    &i_emlrtECI, sp);
  i1 = t_tree->size[0];
  t_tree->size[0] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)t_tree, i1, (int32_T)sizeof
                    (boolean_T), &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_real_T(&s_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    t_tree->data[i1] = tree->bLeaf->data[i1];
  }

  b_emxInit_real_T(sp, &u_tree, 2, &f_emlrtRTEI, true);
  emlrt_update_log_19(sp, t_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[594U], tree->bLeaf);
  i1 = tree->childIds->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &i_emlrtBCI, sp);
  i1 = u_tree->size[0] * u_tree->size[1];
  u_tree->size[0] = (int32_T)K;
  u_tree->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)u_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  emxFree_boolean_T(&t_tree);
  for (i1 = 0; i1 < 2; i1++) {
    loop_ub = (int32_T)K;
    for (i2 = 0; i2 < loop_ub; i2++) {
      u_tree->data[i2 + u_tree->size[0] * i1] = tree->childIds->data[i2 +
        tree->childIds->size[0] * i1];
    }
  }

  emxInit_real_T(sp, &v_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_21(sp, u_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[595U], tree->childIds);
  i1 = tree->parentId->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &h_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->parentId->size[0], 1, 1, (int32_T)K,
    &h_emlrtECI, sp);
  i1 = v_tree->size[0];
  v_tree->size[0] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)v_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_real_T(&u_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    v_tree->data[i1] = tree->parentId->data[i1];
  }

  emxInit_real_T(sp, &w_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_20(sp, v_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[596U], tree->parentId);
  i1 = tree->depth->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &g_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->depth->size[0], 1, 1, (int32_T)K,
    &g_emlrtECI, sp);
  i1 = w_tree->size[0];
  w_tree->size[0] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)w_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_real_T(&v_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    w_tree->data[i1] = tree->depth->data[i1];
  }

  b_emxInit_real_T(sp, &x_tree, 2, &f_emlrtRTEI, true);
  emlrt_update_log_20(sp, w_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[597U], tree->depth);
  i1 = tree->trainingCounts->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &f_emlrtBCI, sp);
  loop_ub = tree->trainingCounts->size[1];
  i1 = x_tree->size[0] * x_tree->size[1];
  x_tree->size[0] = (int32_T)K;
  x_tree->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)x_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  emxFree_real_T(&w_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    i = (int32_T)K;
    for (i2 = 0; i2 < i; i2++) {
      x_tree->data[i2 + x_tree->size[0] * i1] = tree->trainingCounts->data[i2 +
        tree->trainingCounts->size[0] * i1];
    }
  }

  emxInit_real_T(sp, &y_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_24(sp, x_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[598U], tree->trainingCounts);
  i1 = tree->labelClassId->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &e_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->labelClassId->size[0], 1, 1, (int32_T)
    K, &f_emlrtECI, sp);
  i1 = y_tree->size[0];
  y_tree->size[0] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)y_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_real_T(&x_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    y_tree->data[i1] = tree->labelClassId->data[i1];
  }

  emxInit_real_T(sp, &ab_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_20(sp, y_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[599U], tree->labelClassId);
  i1 = tree->partitionPoint->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &d_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->partitionPoint->size[0], 1, 1,
    (int32_T)K, &e_emlrtECI, sp);
  i1 = ab_tree->size[0];
  ab_tree->size[0] = (int32_T)K;
  emxEnsureCapacity(sp, (emxArray__common *)ab_tree, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_real_T(&y_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    ab_tree->data[i1] = tree->partitionPoint->data[i1];
  }

  emxInit_struct4_T(sp, &bb_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_20(sp, ab_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[600U], tree->partitionPoint);
  i1 = tree->iIn->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &c_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->iIn->size[0], 1, 1, (int32_T)K,
    &d_emlrtECI, sp);
  i1 = bb_tree->size[0];
  bb_tree->size[0] = (int32_T)K;
  emxEnsureCapacity_struct4_T(sp, bb_tree, i1, &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_real_T(&ab_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    emxCopyStruct_struct4_T(sp, &bb_tree->data[i1], &tree->iIn->data[i1],
      &f_emlrtRTEI);
  }

  emxInit_struct5_T(sp, &cb_tree, 1, &f_emlrtRTEI, true);
  emlrt_update_log_23(sp, bb_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[601U], tree->iIn);
  i1 = tree->decisionProjection->size[0];
  i2 = (int32_T)K;
  emlrtDynamicBoundsCheckFastR2012b(i2, 1, i1, &b_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->decisionProjection->size[0], 1, 1,
    (int32_T)K, &c_emlrtECI, sp);
  i1 = cb_tree->size[0];
  cb_tree->size[0] = (int32_T)K;
  emxEnsureCapacity_struct5_T(sp, cb_tree, i1, &f_emlrtRTEI);
  loop_ub = (int32_T)K;
  emxFree_struct4_T(&bb_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    emxCopyStruct_struct5_T(sp, &cb_tree->data[i1], &tree->
      decisionProjection->data[i1], &f_emlrtRTEI);
  }

  emlrt_update_log_25(sp, cb_tree, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[602U],
                      tree->decisionProjection);
  tree->nextChild = emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)
    [613])&emlrtLocationLoggingDataTables[603U]);
  emxFree_struct5_T(&cb_tree);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (growCCTnotRecursive.c) */
