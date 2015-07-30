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
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo d_emlrtRSI = { 174, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo e_emlrtRSI = { 165, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo f_emlrtRSI = { 159, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo g_emlrtRSI = { 158, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo h_emlrtRSI = { 136, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo i_emlrtRSI = { 129, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo j_emlrtRSI = { 127, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo k_emlrtRSI = { 121, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo l_emlrtRSI = { 120, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo m_emlrtRSI = { 117, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo n_emlrtRSI = { 114, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo o_emlrtRSI = { 110, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo p_emlrtRSI = { 102, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRSInfo q_emlrtRSI = { 88, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRTEInfo e_emlrtRTEI = { 1, 17, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRTEInfo i_emlrtRTEI = { 126, 13, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtRTEInfo tb_emlrtRTEI = { 17, 9, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m"
};

static emlrtECInfo c_emlrtECI = { -1, 188, 27, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo b_emlrtBCI = { -1, -1, 188, 27, "tree.decisionProjection",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo d_emlrtECI = { -1, 187, 12, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo c_emlrtBCI = { -1, -1, 187, 12, "tree.iIn",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo e_emlrtECI = { -1, 186, 23, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo d_emlrtBCI = { -1, -1, 186, 23, "tree.partitionPoint",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo f_emlrtECI = { -1, 185, 21, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo e_emlrtBCI = { -1, -1, 185, 21, "tree.labelClassId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 184, 43, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo g_emlrtECI = { -1, 183, 14, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo g_emlrtBCI = { -1, -1, 183, 14, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo h_emlrtECI = { -1, 182, 17, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo h_emlrtBCI = { -1, -1, 182, 17, "tree.parentId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 181, 31, "tree.childIds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo i_emlrtECI = { -1, 180, 14, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo j_emlrtBCI = { -1, -1, 180, 14, "tree.bLeaf",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo j_emlrtECI = { -1, 179, 15, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo k_emlrtBCI = { -1, -1, 179, 15, "tree.nodeId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo k_emlrtECI = { -1, 174, 21, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo l_emlrtBCI = { -1, -1, 174, 21, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo m_emlrtBCI = { -1, -1, 166, 9, "partitionPoint",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo l_emlrtECI = { -1, 166, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtECInfo m_emlrtECI = { -1, 164, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo n_emlrtBCI = { -1, -1, 164, 29, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo n_emlrtECI = { -1, 159, 43, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo o_emlrtBCI = { -1, -1, 159, 43, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo o_emlrtECI = { -1, 158, 43, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo p_emlrtBCI = { -1, -1, 158, 43, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo q_emlrtBCI = { -1, -1, 156, 23, "tree.childIds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo p_emlrtECI = { 2, 148, 36, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo r_emlrtBCI = { -1, -1, 136, 9,
  "tree.labelClassId(iCalc) = find(bEqualMaxCounts)", "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo q_emlrtECI = { -1, 136, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtECInfo r_emlrtECI = { -1, 135, 9, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo s_emlrtBCI = { -1, -1, 135, 29, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo s_emlrtECI = { 2, 128, 30, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtECInfo t_emlrtECI = { -1, 127, 13, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo t_emlrtBCI = { -1, -1, 127, 120, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo u_emlrtBCI = { -1, -1, 127, 62, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtECInfo u_emlrtECI = { -1, 102, 26, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo v_emlrtBCI = { -1, -1, 102, 26, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtRTEInfo xd_emlrtRTEI = { 96, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtECInfo v_emlrtECI = { 2, 51, 1, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m"
};

static emlrtBCInfo w_emlrtBCI = { -1, -1, 110, 97, "XTrainGlobal",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtDCInfo c_emlrtDCI = { 110, 97, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  1 };

static emlrtBCInfo x_emlrtBCI = { -1, -1, 111, 22, "YTrainGlobal",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtDCInfo d_emlrtDCI = { 111, 22, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  1 };

static emlrtBCInfo y_emlrtBCI = { -1, -1, 111, 71, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo ab_emlrtBCI = { -1, -1, 141, 42, "tree.nodeId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo bb_emlrtBCI = { -1, -1, 154, 9, "tree.bLeaf",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo cb_emlrtBCI = { -1, -1, 157, 32, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo db_emlrtBCI = { -1, -1, 157, 9, "tree.depth",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo eb_emlrtBCI = { -1, -1, 158, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo fb_emlrtBCI = { -1, -1, 158, 43, "tree.iPresent(iCalc).inds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo gb_emlrtBCI = { -1, -1, 159, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo hb_emlrtBCI = { -1, -1, 159, 43, "tree.iPresent(iCalc).inds",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo ib_emlrtBCI = { -1, -1, 160, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo jb_emlrtBCI = { -1, -1, 161, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo kb_emlrtBCI = { -1, -1, 162, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo lb_emlrtBCI = { -1, -1, 163, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo mb_emlrtBCI = { -1, -1, 165, 12, "tree.labelClassId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo nb_emlrtBCI = { -1, -1, 166, 9, "tree.partitionPoint",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo ob_emlrtBCI = { -1, -1, 167, 9, "tree.iIn",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo pb_emlrtBCI = { -1, -1, 168, 9, "tree.decisionProjection",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo qb_emlrtBCI = { -1, -1, 169, 9, "tree.parentId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo rb_emlrtBCI = { -1, -1, 171, 9, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo sb_emlrtBCI = { -1, -1, 118, 27, "tree.parentId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo tb_emlrtBCI = { -1, -1, 127, 74, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo ub_emlrtBCI = { -1, -1, 127, 132, "tree.trainingCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo vb_emlrtBCI = { -1, -1, 127, 13, "countsAdd",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo wb_emlrtBCI = { -1, -1, 121, 24, "iContention",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtDCInfo e_emlrtDCI = { 121, 24, "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  1 };

static emlrtBCInfo xb_emlrtBCI = { -1, -1, 123, 17, "bEqualMaxCounts",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo yb_emlrtBCI = { -1, -1, 132, 9, "tree.bLeaf",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo ac_emlrtBCI = { -1, -1, 133, 9, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo bc_emlrtBCI = { -1, -1, 134, 9, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo cc_emlrtBCI = { -1, -1, 136, 9, "tree.labelClassId",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo dc_emlrtBCI = { -1, -1, 137, 9, "tree.bExpanded",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo ec_emlrtBCI = { -1, -1, 108, 19, "tree.iFeatNum",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo fc_emlrtBCI = { -1, -1, 110, 97, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtBCInfo gc_emlrtBCI = { -1, -1, 111, 22, "tree.iPresent",
  "growCCTnotRecursive",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\growCCTnotRecursive.m",
  0 };

static emlrtDCInfo o_emlrtDCI = { 17, 37, "eml_li_find",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_li_find.m",
  4 };

/* Function Declarations */
static void b_cast(const emlrtStack *sp, struct5_T y[2000]);
static void c_cast(const emlrtStack *sp, struct4_T y[2000]);
static void d_cast(const emlrtStack *sp, struct3_T y[2000]);

/* Function Definitions */
static void b_cast(const emlrtStack *sp, struct5_T y[2000])
{
  int32_T j;
  int32_T i38;
  for (j = 0; j < 2000; j++) {
    i38 = y[j].phi->size[0];
    y[j].phi->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].phi, i38, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

static void c_cast(const emlrtStack *sp, struct4_T y[2000])
{
  int32_T j;
  int32_T i39;
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &qb_emlrtECI, sp);
    i39 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i39, (int32_T)sizeof
                      (real_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

static void d_cast(const emlrtStack *sp, struct3_T y[2000])
{
  int32_T j;
  int32_T i40;
  for (j = 0; j < 2000; j++) {
    emlrtDimSizeEqCheckFastR2012b(1, 1, &qb_emlrtECI, sp);
    i40 = y[j].inds->size[0] * y[j].inds->size[1];
    y[j].inds->size[0] = 1;
    y[j].inds->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y[j].inds, i40, (int32_T)sizeof
                      (int64_T), (emlrtRTEInfo *)NULL);
    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }
}

void c_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                   emxArray_int32_T *y)
{
  int32_T n;
  int32_T k;
  boolean_T b20;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m35;
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
  st.site = &ef_emlrtRSI;
  k = 0;
  b_st.site = &gf_emlrtRSI;
  if (1 > n) {
    b20 = false;
  } else {
    b20 = (n > 2147483646);
  }

  if (b20) {
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
    m35 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m35);
    st.site = &uo_emlrtRSI;
    f_error(&st, b_y, &o_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &q_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &sc_emlrtRTEI);
  j = 0;
  st.site = &ff_emlrtRSI;
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
  st.site = &ef_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &gf_emlrtRSI;
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
    st.site = &uo_emlrtRSI;
    f_error(&st, b_y, &o_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &o_emlrtDCI, sp);
  j = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &tb_emlrtRTEI);
  j = 0;
  st.site = &ff_emlrtRSI;
  for (i = 1; i <= x->size[1]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void growCCTnotRecursive(c_growManyTreesCompileTestStack *SD, const emlrtStack
  *sp, const emxArray_real_T *XTrain, const emxArray_boolean_T *YTrain,
  boolean_T options_bProjBoot, real_T options_lambda, const char_T
  options_splitCriterion_data[], const int32_T options_splitCriterion_size[2],
  real_T options_minPointsForSplit, const char_T options_dirIfEqual_data[],
  const int32_T options_dirIfEqual_size[2], boolean_T
  c_options_bContinueProjBootDege, real_T options_epsilonCCA, boolean_T
  options_includeOriginalAxes, real_T options_maxDepthSplit, real_T
  options_XVariationTol, emxArray_real_T *iFeatureNum, struct2_T *tree)
{
  int32_T K;
  int32_T i1;
  struct3_T rv1[2000];
  struct4_T rv2[2000];
  int32_T loop_ub;
  struct5_T rv3[2000];
  struct4_T b_tree;
  struct4_T c_tree;
  int32_T cdiff;
  int32_T apnd;
  int32_T absb;
  emxArray_real_T *y;
  struct3_T d_tree;
  struct3_T e_tree;
  real_T fi;
  int64_T i2;
  boolean_T bComplete;
  real_T maxIter;
  int32_T nIter;
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
  struct3_T r_tree;
  struct3_T s_tree;
  struct4_T t_tree;
  struct4_T u_tree;
  struct4_T v_tree;
  struct4_T w_tree;
  struct4_T x_tree;
  struct4_T y_tree;
  struct4_T ab_tree;
  struct4_T bb_tree;
  emxArray_int32_T *b_ii;
  struct3_T cb_tree;
  struct3_T db_tree;
  struct4_T eb_tree;
  struct4_T fb_tree;
  emxArray_int32_T *c_ii;
  boolean_T exitg1;
  int32_T i3;
  const mxArray *b_y;
  const mxArray *m1;
  int32_T ii_data[1];
  boolean_T exitg8;
  const mxArray *c_y;
  int32_T b_ii_data[1];
  int32_T iCalcVarSize_data[1];
  int32_T i4;
  int32_T i5;
  int32_T partitionPoint_size[2];
  real_T partitionPoint_data[1];
  boolean_T bLeaf;
  const mxArray *d_y;
  static const int32_T iv2[2] = { 1, 36 };

  char_T cv4[36];
  static const char_T cv5[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *e_y;
  static const int32_T iv3[2] = { 1, 39 };

  char_T cv6[39];
  static const char_T cv7[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg7;
  int32_T bEqualMaxCounts_size[2];
  boolean_T bEqualMaxCounts_data[10000];
  real_T idRecursion;
  boolean_T exitg4;
  boolean_T exitg5;
  boolean_T guard2 = false;
  const mxArray *f_y;
  real_T childIds[2];
  emxArray_boolean_T b_bEqualMaxCounts_data;
  emxArray_boolean_T c_bEqualMaxCounts_data;
  emxArray_boolean_T d_bEqualMaxCounts_data;
  int32_T b_countsNode[2];
  int32_T b_countsAdd[2];
  const mxArray *g_y;
  static const int32_T iv4[2] = { 1, 36 };

  const mxArray *h_y;
  static const int32_T iv5[2] = { 1, 39 };

  boolean_T exitg6;
  int32_T tmp_data[10000];
  int32_T iv6[2];
  boolean_T exitg3;
  boolean_T guard1 = false;
  const mxArray *i_y;
  int32_T iv7[2];
  const mxArray *j_y;
  static const int32_T iv8[2] = { 1, 36 };

  const mxArray *k_y;
  static const int32_T iv9[2] = { 1, 39 };

  boolean_T exitg2;
  emxArray_real_T *gb_tree;
  emxArray_boolean_T *hb_tree;
  emxArray_real_T *ib_tree;
  emxArray_real_T *jb_tree;
  emxArray_real_T *kb_tree;
  emxArray_real_T *lb_tree;
  emxArray_real_T *mb_tree;
  emxArray_real_T *nb_tree;
  emxArray_struct4_T *ob_tree;
  emxArray_struct5_T *pb_tree;
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
  /*     options     = Options class of type optionsClassCCF.  Some fields are */
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
  K = (int32_T)muDoubleScalarMax(2.0, YTrain->size[1]);
  tree->nextChild = 2.0;
  emlrtDimSizeGeqCheckFastR2012b(10000, K, &v_emlrtECI, sp);
  i1 = tree->bExpanded->size[0];
  tree->bExpanded->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->bExpanded, i1, (int32_T)sizeof
                    (boolean_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->bExpanded->data[i1] = false;
  }

  i1 = tree->nodeId->size[0];
  tree->nodeId->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->nodeId, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->nodeId->data[i1] = 1.0 + (real_T)i1;
  }

  i1 = tree->bLeaf->size[0];
  tree->bLeaf->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->bLeaf, i1, (int32_T)sizeof
                    (boolean_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->bLeaf->data[i1] = false;
  }

  i1 = tree->childIds->size[0] * tree->childIds->size[1];
  tree->childIds->size[0] = 2000;
  tree->childIds->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)tree->childIds, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 4000; i1++) {
    tree->childIds->data[i1] = 0.0;
  }

  i1 = tree->parentId->size[0];
  tree->parentId->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->parentId, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->parentId->data[i1] = 0.0;
  }

  i1 = tree->depth->size[0];
  tree->depth->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->depth, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->depth->data[i1] = 0.0;
  }

  emxInitMatrix_struct3_T(sp, rv1, &e_emlrtRTEI, true);
  d_cast(sp, rv1);
  i1 = tree->iPresent->size[0];
  tree->iPresent->size[0] = 2000;
  emxEnsureCapacity_struct3_T(sp, tree->iPresent, i1, &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    emxCopyStruct_struct3_T(sp, &tree->iPresent->data[i1], &rv1[i1],
      &e_emlrtRTEI);
  }

  emxInitMatrix_struct4_T(sp, rv2, &e_emlrtRTEI, true);
  c_cast(sp, rv2);
  i1 = tree->iFeatNum->size[0];
  tree->iFeatNum->size[0] = 2000;
  emxEnsureCapacity_struct4_T(sp, tree->iFeatNum, i1, &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    emxCopyStruct_struct4_T(sp, &tree->iFeatNum->data[i1], &rv2[i1],
      &e_emlrtRTEI);
  }

  i1 = tree->trainingCounts->size[0] * tree->trainingCounts->size[1];
  tree->trainingCounts->size[0] = 2000;
  tree->trainingCounts->size[1] = K;
  emxEnsureCapacity(sp, (emxArray__common *)tree->trainingCounts, i1, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  loop_ub = 2000 * K;
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->trainingCounts->data[i1] = 0.0;
  }

  i1 = tree->labelClassId->size[0];
  tree->labelClassId->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->labelClassId, i1, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->labelClassId->data[i1] = 0.0;
  }

  i1 = tree->partitionPoint->size[0];
  tree->partitionPoint->size[0] = 2000;
  emxEnsureCapacity(sp, (emxArray__common *)tree->partitionPoint, i1, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    tree->partitionPoint->data[i1] = rtNaN;
  }

  c_cast(sp, rv2);
  i1 = tree->iIn->size[0];
  tree->iIn->size[0] = 2000;
  emxEnsureCapacity_struct4_T(sp, tree->iIn, i1, &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    emxCopyStruct_struct4_T(sp, &tree->iIn->data[i1], &rv2[i1], &e_emlrtRTEI);
  }

  emxInitMatrix_struct5_T(sp, rv3, &e_emlrtRTEI, true);
  b_cast(sp, rv3);
  i1 = tree->decisionProjection->size[0];
  tree->decisionProjection->size[0] = 2000;
  emxEnsureCapacity_struct5_T(sp, tree->decisionProjection, i1, &e_emlrtRTEI);
  for (i1 = 0; i1 < 2000; i1++) {
    emxCopyStruct_struct5_T(sp, &tree->decisionProjection->data[i1], &rv3[i1],
      &e_emlrtRTEI);
  }

  emxInitStruct_struct4_T(sp, &b_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &c_tree, &e_emlrtRTEI, true);
  i1 = tree->iFeatNum->data[0].inds->size[0] * tree->iFeatNum->data[0]
    .inds->size[1];
  tree->iFeatNum->data[0].inds->size[0] = 1;
  tree->iFeatNum->data[0].inds->size[1] = iFeatureNum->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)tree->iFeatNum->data[0].inds, i1,
                    (int32_T)sizeof(real_T), &e_emlrtRTEI);
  emxCopyStruct_struct4_T(sp, &b_tree, &tree->iFeatNum->data[0], &e_emlrtRTEI);
  emxCopyStruct_struct4_T(sp, &c_tree, &tree->iFeatNum->data[0], &e_emlrtRTEI);
  loop_ub = iFeatureNum->size[0] * iFeatureNum->size[1];
  emxFreeStruct_struct4_T(&c_tree);
  emxFreeStruct_struct4_T(&b_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->iFeatNum->data[0].inds->data[i1] = iFeatureNum->data[i1];
  }

  st.site = &q_emlrtRSI;
  b_st.site = &r_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  if (XTrain->size[0] < 1) {
    cdiff = -1;
    apnd = 0;
  } else {
    K = (int32_T)muDoubleScalarFloor(((real_T)XTrain->size[0] - 1.0) + 0.5);
    apnd = K + 1;
    cdiff = (K - XTrain->size[0]) + 1;
    absb = XTrain->size[0];
    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 * (real_T)absb) {
      K++;
      apnd = XTrain->size[0];
    } else if (cdiff > 0) {
      apnd = K;
    } else {
      K++;
    }

    cdiff = K - 1;
  }

  emxInit_real_T(&c_st, &y, 2, &e_emlrtRTEI, true);
  d_st.site = &t_emlrtRSI;
  i1 = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = cdiff + 1;
  emxEnsureCapacity(&c_st, (emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                    &f_emlrtRTEI);
  if (cdiff + 1 > 0) {
    y->data[0] = 1.0;
    if (cdiff + 1 > 1) {
      y->data[cdiff] = apnd;
      i1 = cdiff + (cdiff < 0);
      if (i1 >= 0) {
        K = (int32_T)((uint32_T)i1 >> 1);
      } else {
        K = ~(int32_T)((uint32_T)~i1 >> 1);
      }

      d_st.site = &u_emlrtRSI;
      for (absb = 1; absb < K; absb++) {
        y->data[absb] = 1.0 + (real_T)absb;
        y->data[cdiff - absb] = apnd - absb;
      }

      if (K << 1 == cdiff) {
        y->data[K] = (1.0 + (real_T)apnd) / 2.0;
      } else {
        y->data[K] = 1.0 + (real_T)K;
        y->data[K + 1] = apnd - K;
      }
    }
  }

  emxInitStruct_struct3_T(&c_st, &d_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(&c_st, &e_tree, &e_emlrtRTEI, true);
  i1 = tree->iPresent->data[0].inds->size[0] * tree->iPresent->data[0]
    .inds->size[1];
  tree->iPresent->data[0].inds->size[0] = 1;
  tree->iPresent->data[0].inds->size[1] = y->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)tree->iPresent->data[0].inds, i1,
                    (int32_T)sizeof(int64_T), &e_emlrtRTEI);
  emxCopyStruct_struct3_T(sp, &d_tree, &tree->iPresent->data[0], &e_emlrtRTEI);
  emxCopyStruct_struct3_T(sp, &e_tree, &tree->iPresent->data[0], &e_emlrtRTEI);
  loop_ub = y->size[0] * y->size[1];
  emxFreeStruct_struct3_T(&e_tree);
  emxFreeStruct_struct3_T(&d_tree);
  for (i1 = 0; i1 < loop_ub; i1++) {
    fi = muDoubleScalarRound(y->data[i1]);
    if (fi < 9.2233720368547758E+18) {
      if (fi >= -9.2233720368547758E+18) {
        i2 = (int64_T)fi;
      } else {
        i2 = MIN_int64_T;
      }
    } else if (fi >= 9.2233720368547758E+18) {
      i2 = MAX_int64_T;
    } else {
      i2 = 0LL;
    }

    tree->iPresent->data[0].inds->data[i1] = i2;
  }

  bComplete = false;
  maxIter = 2.0 * (real_T)XTrain->size[0] + 2.0;
  emlrtForLoopVectorCheckR2012b(1.0, 1.0, maxIter, mxDOUBLE_CLASS, (int32_T)
    maxIter, &xd_emlrtRTEI, sp);
  nIter = 0;
  emxInit_real_T(sp, &countsAdd, 2, &i_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &bLessThanTrain, 2, &e_emlrtRTEI, true);
  b_emxInit_real_T(sp, &projMat, 1, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &countsNode, 2, &e_emlrtRTEI, true);
  emxInit_int32_T(sp, &r0, 1, &e_emlrtRTEI, true);
  emxInit_boolean_T(sp, &x, 1, &e_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &ii, 2, &j_emlrtRTEI, true);
  emxInit_boolean_T(sp, &f_tree, 1, &e_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_bLessThanTrain, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &b_XTrain, 2, &e_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_YTrain, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &g_tree, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &h_tree, 2, &e_emlrtRTEI, true);
  b_emxInit_real_T(sp, &i_tree, 1, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &j_tree, 2, &e_emlrtRTEI, true);
  emxInit_real_T(sp, &k_tree, 2, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &l_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &m_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &n_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &o_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &p_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &q_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &r_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &s_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &t_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &u_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &v_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &w_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &x_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &y_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &ab_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &bb_tree, &e_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &b_ii, 2, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &cb_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct3_T(sp, &db_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &eb_tree, &e_emlrtRTEI, true);
  emxInitStruct_struct4_T(sp, &fb_tree, &e_emlrtRTEI, true);
  b_emxInit_int32_T(sp, &c_ii, 2, &e_emlrtRTEI, true);
  exitg1 = false;
  while ((!exitg1) && ((nIter <= (int32_T)maxIter - 1) && (!bComplete))) {
    i1 = tree->bExpanded->size[0];
    i3 = (int32_T)(tree->nextChild - 1.0);
    emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &v_emlrtBCI, sp);
    i1 = (int32_T)(tree->nextChild - 1.0);
    emlrtVectorVectorIndexCheckR2012b(tree->bExpanded->size[0], 1, 1, i1,
      &u_emlrtECI, sp);
    st.site = &p_emlrtRSI;
    loop_ub = (int32_T)(tree->nextChild - 1.0);
    i1 = x->size[0];
    x->size[0] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)x, i1, (int32_T)sizeof(boolean_T),
                      &e_emlrtRTEI);
    for (i1 = 0; i1 < loop_ub; i1++) {
      x->data[i1] = !tree->bExpanded->data[i1];
    }

    b_st.site = &w_emlrtRSI;
    absb = muIntScalarMin_sint32(1, x->size[0]);
    if (absb <= x->size[0]) {
    } else {
      b_y = NULL;
      m1 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m1);
      c_st.site = &gp_emlrtRSI;
      f_error(&c_st, b_y, &g_emlrtMCI);
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

    if (cdiff <= absb) {
    } else {
      c_y = NULL;
      m1 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&c_y, m1);
      c_st.site = &fp_emlrtRSI;
      f_error(&c_st, c_y, &h_emlrtMCI);
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

    for (i1 = 0; i1 < absb; i1++) {
      iCalcVarSize_data[i1] = ii_data[i1];
    }

    if (absb == 0) {
      exitg1 = true;
    } else {
      i1 = iFeatureNum->size[0] * iFeatureNum->size[1];
      iFeatureNum->size[0] = 1;
      i3 = tree->iFeatNum->size[0];
      i4 = iCalcVarSize_data[0];
      iFeatureNum->size[1] = tree->iFeatNum->
        data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &ec_emlrtBCI, sp) - 1]
        .inds->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)iFeatureNum, i1, (int32_T)sizeof
                        (real_T), &e_emlrtRTEI);
      i1 = tree->iFeatNum->size[0];
      i3 = iCalcVarSize_data[0];
      i4 = tree->iFeatNum->size[0];
      apnd = iCalcVarSize_data[0];
      loop_ub = tree->iFeatNum->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
        &ec_emlrtBCI, sp) - 1].inds->size[0] * tree->iFeatNum->
        data[emlrtDynamicBoundsCheckFastR2012b(apnd, 1, i4, &ec_emlrtBCI, sp) -
        1].inds->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        i3 = tree->iFeatNum->size[0];
        i4 = iCalcVarSize_data[0];
        iFeatureNum->data[i1] = tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &ec_emlrtBCI, sp) -
          1].inds->data[i1];
      }

      loop_ub = XTrain->size[1];
      i1 = b_XTrain->size[0] * b_XTrain->size[1];
      i3 = tree->iPresent->size[0];
      i4 = iCalcVarSize_data[0];
      b_XTrain->size[0] = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b
        (i4, 1, i3, &fc_emlrtBCI, sp) - 1].inds->size[1];
      b_XTrain->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_XTrain, i1, (int32_T)sizeof
                        (real_T), &e_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        i3 = tree->iPresent->size[0];
        i4 = iCalcVarSize_data[0];
        K = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
          &fc_emlrtBCI, sp) - 1].inds->size[1];
        for (i3 = 0; i3 < K; i3++) {
          i4 = XTrain->size[0];
          apnd = tree->iPresent->size[0];
          i5 = iCalcVarSize_data[0];
          cdiff = tree->iPresent->size[0];
          absb = iCalcVarSize_data[0];
          i2 = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1,
            apnd, &fc_emlrtBCI, sp) - 1].inds->data[tree->iPresent->
            data[emlrtDynamicBoundsCheckFastR2012b(absb, 1, cdiff, &fc_emlrtBCI,
            sp) - 1].inds->size[0] * i3];
          i2 = (int64_T)emlrtIntegerCheckFastR2012b((real_T)i2, &c_emlrtDCI, sp);
          b_XTrain->data[i3 + b_XTrain->size[0] * i1] = XTrain->data[((int32_T)
            emlrtDynamicBoundsCheckFastInt64(i2, 1, i4, &w_emlrtBCI, sp) +
            XTrain->size[0] * i1) - 1];
        }
      }

      loop_ub = YTrain->size[1];
      i1 = b_YTrain->size[0] * b_YTrain->size[1];
      i3 = tree->iPresent->size[0];
      i4 = iCalcVarSize_data[0];
      b_YTrain->size[0] = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b
        (i4, 1, i3, &gc_emlrtBCI, sp) - 1].inds->size[1];
      b_YTrain->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)b_YTrain, i1, (int32_T)sizeof
                        (boolean_T), &e_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        i3 = tree->iPresent->size[0];
        i4 = iCalcVarSize_data[0];
        K = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3,
          &gc_emlrtBCI, sp) - 1].inds->size[1];
        for (i3 = 0; i3 < K; i3++) {
          i4 = YTrain->size[0];
          apnd = tree->iPresent->size[0];
          i5 = iCalcVarSize_data[0];
          cdiff = tree->iPresent->size[0];
          absb = iCalcVarSize_data[0];
          i2 = tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(i5, 1,
            apnd, &gc_emlrtBCI, sp) - 1].inds->data[tree->iPresent->
            data[emlrtDynamicBoundsCheckFastR2012b(absb, 1, cdiff, &gc_emlrtBCI,
            sp) - 1].inds->size[0] * i3];
          i2 = (int64_T)emlrtIntegerCheckFastR2012b((real_T)i2, &d_emlrtDCI, sp);
          b_YTrain->data[i3 + b_YTrain->size[0] * i1] = YTrain->data[((int32_T)
            emlrtDynamicBoundsCheckFastInt64(i2, 1, i4, &x_emlrtBCI, sp) +
            YTrain->size[0] * i1) - 1];
        }
      }

      i1 = g_tree->size[0] * g_tree->size[1];
      g_tree->size[0] = 1;
      g_tree->size[1] = tree->iFeatNum->data[iCalcVarSize_data[0] - 1]
        .inds->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)g_tree, i1, (int32_T)sizeof
                        (real_T), &e_emlrtRTEI);
      loop_ub = tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[0] *
        tree->iFeatNum->data[iCalcVarSize_data[0] - 1].inds->size[1];
      for (i1 = 0; i1 < loop_ub; i1++) {
        g_tree->data[i1] = tree->iFeatNum->data[iCalcVarSize_data[0] - 1]
          .inds->data[i1];
      }

      i1 = tree->depth->size[0];
      i3 = iCalcVarSize_data[0];
      st.site = &o_emlrtRSI;
      expandNode(&st, b_XTrain, b_YTrain, options_bProjBoot, options_lambda,
                 options_splitCriterion_data, options_splitCriterion_size,
                 options_minPointsForSplit, options_dirIfEqual_data,
                 options_dirIfEqual_size, c_options_bContinueProjBootDege,
                 options_epsilonCCA, options_includeOriginalAxes,
                 options_maxDepthSplit, options_XVariationTol, g_tree,
                 tree->depth->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
                  &y_emlrtBCI, sp) - 1], &bLeaf, bLessThanTrain,
                 partitionPoint_data, partitionPoint_size, projMat, countsNode,
                 y);
      if (bLeaf) {
        st.site = &n_emlrtRSI;
        b_st.site = &bg_emlrtRSI;
        c_st.site = &cg_emlrtRSI;
        if ((countsNode->size[1] == 1) || (countsNode->size[1] != 1)) {
          bComplete = true;
        } else {
          bComplete = false;
        }

        if (bComplete) {
        } else {
          d_y = NULL;
          m1 = emlrtCreateCharArray(2, iv2);
          for (K = 0; K < 36; K++) {
            cv4[K] = cv5[K];
          }

          emlrtInitCharArrayR2013a(&c_st, 36, m1, cv4);
          emlrtAssign(&d_y, m1);
          d_st.site = &mp_emlrtRSI;
          e_st.site = &gq_emlrtRSI;
          f_error(&d_st, b_message(&e_st, d_y, &xb_emlrtMCI), &yb_emlrtMCI);
        }

        if (countsNode->size[1] > 0) {
        } else {
          e_y = NULL;
          m1 = emlrtCreateCharArray(2, iv3);
          for (K = 0; K < 39; K++) {
            cv6[K] = cv7[K];
          }

          emlrtInitCharArrayR2013a(&c_st, 39, m1, cv6);
          emlrtAssign(&e_y, m1);
          d_st.site = &hp_emlrtRSI;
          e_st.site = &cq_emlrtRSI;
          f_error(&d_st, b_message(&e_st, e_y, &y_emlrtMCI), &ab_emlrtMCI);
        }

        d_st.site = &jo_emlrtRSI;
        K = 1;
        fi = countsNode->data[0];
        if (countsNode->size[1] > 1) {
          if (muDoubleScalarIsNaN(countsNode->data[0])) {
            cdiff = 2;
            exitg7 = false;
            while ((!exitg7) && (cdiff <= countsNode->size[1])) {
              K = cdiff;
              if (!muDoubleScalarIsNaN(countsNode->data[cdiff - 1])) {
                fi = countsNode->data[cdiff - 1];
                exitg7 = true;
              } else {
                cdiff++;
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
        loop_ub = countsNode->size[0] * countsNode->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          bEqualMaxCounts_data[i1] = (fi == countsNode->data[i1]);
        }

        idRecursion = iCalcVarSize_data[0];
        exitg4 = false;
        do {
          exitg11 = 0;
          st.site = &m_emlrtRSI;
          if ((!exitg4) && (c_sum(&st, bEqualMaxCounts_data,
                                  bEqualMaxCounts_size) > 1.0)) {
            i1 = tree->parentId->size[0];
            i3 = (int32_T)idRecursion;
            idRecursion = tree->parentId->data[emlrtDynamicBoundsCheckFastR2012b
              (i3, 1, i1, &sb_emlrtBCI, sp) - 1];
            if (idRecursion == 0.0) {
              st.site = &l_emlrtRSI;
              b_st.site = &w_emlrtRSI;
              cdiff = 0;
              i1 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = bEqualMaxCounts_size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)
                                sizeof(int32_T), &h_emlrtRTEI);
              c_st.site = &x_emlrtRSI;
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

              if (cdiff <= bEqualMaxCounts_size[1]) {
              } else {
                f_y = NULL;
                m1 = emlrtCreateString("Assertion failed.");
                emlrtAssign(&f_y, m1);
                c_st.site = &fp_emlrtRSI;
                f_error(&c_st, f_y, &h_emlrtMCI);
              }

              if (bEqualMaxCounts_size[1] == 1) {
                if (cdiff == 0) {
                  i1 = ii->size[0] * ii->size[1];
                  ii->size[0] = 1;
                  ii->size[1] = 0;
                  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)
                                    sizeof(int32_T), &e_emlrtRTEI);
                }
              } else {
                if (1 > cdiff) {
                  loop_ub = 0;
                } else {
                  loop_ub = cdiff;
                }

                i1 = b_ii->size[0] * b_ii->size[1];
                b_ii->size[0] = 1;
                b_ii->size[1] = loop_ub;
                emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i1, (int32_T)
                                  sizeof(int32_T), &e_emlrtRTEI);
                for (i1 = 0; i1 < loop_ub; i1++) {
                  b_ii->data[b_ii->size[0] * i1] = ii->data[i1];
                }

                i1 = ii->size[0] * ii->size[1];
                ii->size[0] = 1;
                ii->size[1] = b_ii->size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)
                                  sizeof(int32_T), &e_emlrtRTEI);
                loop_ub = b_ii->size[1];
                for (i1 = 0; i1 < loop_ub; i1++) {
                  ii->data[ii->size[0] * i1] = b_ii->data[b_ii->size[0] * i1];
                }
              }

              i1 = y->size[0] * y->size[1];
              y->size[0] = 1;
              y->size[1] = ii->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)y, i1, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = ii->size[0] * ii->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                y->data[i1] = ii->data[i1];
              }

              i1 = y->size[1];
              st.site = &k_emlrtRSI;
              fi = b_randi(y->size[1]);
              i3 = (int32_T)emlrtIntegerCheckFastR2012b(fi, &e_emlrtDCI, sp);
              K = (int32_T)y->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
                &wb_emlrtBCI, sp) - 1];
              for (i1 = 0; i1 < 2; i1++) {
                childIds[i1] = bEqualMaxCounts_size[i1];
              }

              bEqualMaxCounts_size[0] = 1;
              bEqualMaxCounts_size[1] = (int32_T)childIds[1];
              loop_ub = (int32_T)childIds[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                bEqualMaxCounts_data[i1] = false;
              }

              i1 = (int32_T)childIds[1];
              bEqualMaxCounts_data[emlrtDynamicBoundsCheckFastR2012b(K, 1, i1,
                &xb_emlrtBCI, sp) - 1] = true;
              exitg4 = true;
            } else {
              for (i1 = 0; i1 < 2; i1++) {
                childIds[i1] = countsNode->size[i1];
              }

              i1 = countsAdd->size[0] * countsAdd->size[1];
              countsAdd->size[0] = 1;
              emxEnsureCapacity(sp, (emxArray__common *)countsAdd, i1, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              i1 = countsAdd->size[0] * countsAdd->size[1];
              countsAdd->size[1] = (int32_T)childIds[1];
              emxEnsureCapacity(sp, (emxArray__common *)countsAdd, i1, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              loop_ub = (int32_T)childIds[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                countsAdd->data[i1] = 0.0;
              }

              b_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
              b_bEqualMaxCounts_data.size = (int32_T *)&bEqualMaxCounts_size;
              b_bEqualMaxCounts_data.allocatedSize = 10000;
              b_bEqualMaxCounts_data.numDimensions = 2;
              b_bEqualMaxCounts_data.canFreeData = false;
              st.site = &j_emlrtRSI;
              eml_li_find(&st, &b_bEqualMaxCounts_data, ii);
              absb = ii->size[1];
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
              i3 = (int32_T)idRecursion;
              K = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &u_emlrtBCI, sp);
              i1 = y->size[0] * y->size[1];
              y->size[0] = 1;
              y->size[1] = ii->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)y, i1, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              loop_ub = ii->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                i3 = tree->trainingCounts->size[1];
                i4 = ii->data[ii->size[0] * i1];
                y->data[y->size[0] * i1] = tree->trainingCounts->data[(K +
                  tree->trainingCounts->size[0] *
                  (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &tb_emlrtBCI, sp)
                   - 1)) - 1];
              }

              d_bEqualMaxCounts_data.data = (boolean_T *)&bEqualMaxCounts_data;
              d_bEqualMaxCounts_data.size = (int32_T *)&bEqualMaxCounts_size;
              d_bEqualMaxCounts_data.allocatedSize = 10000;
              d_bEqualMaxCounts_data.numDimensions = 2;
              d_bEqualMaxCounts_data.canFreeData = false;
              st.site = &j_emlrtRSI;
              eml_li_find(&st, &d_bEqualMaxCounts_data, ii);
              i1 = tree->trainingCounts->size[0];
              i3 = (int32_T)idRecursion;
              K = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &t_emlrtBCI, sp);
              i1 = h_tree->size[0] * h_tree->size[1];
              h_tree->size[0] = 1;
              h_tree->size[1] = ii->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)h_tree, i1, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              loop_ub = ii->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                i3 = tree->trainingCounts->size[1];
                i4 = ii->data[ii->size[0] * i1];
                h_tree->data[h_tree->size[0] * i1] = tree->trainingCounts->data
                  [(K + tree->trainingCounts->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &ub_emlrtBCI,
                      sp) - 1)) - 1];
              }

              st.site = &j_emlrtRSI;
              fi = 10000.0 * g_sum(&st, h_tree);
              i1 = y->size[0] * y->size[1];
              y->size[0] = 1;
              emxEnsureCapacity(sp, (emxArray__common *)y, i1, (int32_T)sizeof
                                (real_T), &e_emlrtRTEI);
              K = y->size[0];
              cdiff = y->size[1];
              loop_ub = K * cdiff;
              for (i1 = 0; i1 < loop_ub; i1++) {
                y->data[i1] /= fi;
              }

              i1 = y->size[1];
              emlrtSizeEqCheck1DFastR2012b(absb, i1, &t_emlrtECI, sp);
              loop_ub = y->size[0] * y->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                i3 = (int32_T)childIds[1];
                countsAdd->data[emlrtDynamicBoundsCheckFastR2012b
                  (SD->f0.tmp_data[i1], 1, i3, &vb_emlrtBCI, sp) - 1] = y->
                  data[i1];
              }

              for (i1 = 0; i1 < 2; i1++) {
                b_countsNode[i1] = countsNode->size[i1];
              }

              for (i1 = 0; i1 < 2; i1++) {
                b_countsAdd[i1] = countsAdd->size[i1];
              }

              emlrtSizeEqCheck2DFastR2012b(b_countsNode, b_countsAdd,
                &s_emlrtECI, sp);
              i1 = countsAdd->size[0] * countsAdd->size[1];
              countsAdd->size[0] = 1;
              countsAdd->size[1] = countsNode->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)countsAdd, i1, (int32_T)
                                sizeof(real_T), &e_emlrtRTEI);
              loop_ub = countsNode->size[0] * countsNode->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                countsAdd->data[i1] += countsNode->data[i1];
              }

              st.site = &i_emlrtRSI;
              b_st.site = &bg_emlrtRSI;
              c_st.site = &cg_emlrtRSI;
              if ((countsAdd->size[1] == 1) || (countsAdd->size[1] != 1)) {
                bComplete = true;
              } else {
                bComplete = false;
              }

              if (bComplete) {
              } else {
                g_y = NULL;
                m1 = emlrtCreateCharArray(2, iv4);
                for (K = 0; K < 36; K++) {
                  cv4[K] = cv5[K];
                }

                emlrtInitCharArrayR2013a(&c_st, 36, m1, cv4);
                emlrtAssign(&g_y, m1);
                d_st.site = &mp_emlrtRSI;
                e_st.site = &gq_emlrtRSI;
                f_error(&d_st, b_message(&e_st, g_y, &xb_emlrtMCI), &yb_emlrtMCI);
              }

              if (countsAdd->size[1] > 0) {
              } else {
                h_y = NULL;
                m1 = emlrtCreateCharArray(2, iv5);
                for (K = 0; K < 39; K++) {
                  cv6[K] = cv7[K];
                }

                emlrtInitCharArrayR2013a(&c_st, 39, m1, cv6);
                emlrtAssign(&h_y, m1);
                d_st.site = &hp_emlrtRSI;
                e_st.site = &cq_emlrtRSI;
                f_error(&d_st, b_message(&e_st, h_y, &y_emlrtMCI), &ab_emlrtMCI);
              }

              d_st.site = &jo_emlrtRSI;
              K = 1;
              fi = countsAdd->data[0];
              if (countsAdd->size[1] > 1) {
                if (muDoubleScalarIsNaN(countsAdd->data[0])) {
                  cdiff = 2;
                  exitg6 = false;
                  while ((!exitg6) && (cdiff <= countsAdd->size[1])) {
                    K = cdiff;
                    if (!muDoubleScalarIsNaN(countsAdd->data[cdiff - 1])) {
                      fi = countsAdd->data[cdiff - 1];
                      exitg6 = true;
                    } else {
                      cdiff++;
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
              loop_ub = countsAdd->size[0] * countsAdd->size[1];
              for (i1 = 0; i1 < loop_ub; i1++) {
                bEqualMaxCounts_data[i1] = (fi == countsAdd->data[i1]);
              }

              emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
            }
          } else {
            exitg11 = 1;
          }
        } while (exitg11 == 0);

        i1 = tree->bLeaf->size[0];
        i3 = iCalcVarSize_data[0];
        tree->bLeaf->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &yb_emlrtBCI, sp) - 1] = true;
        i1 = tree->iPresent->size[0];
        i3 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &ac_emlrtBCI, sp) - 1;
        i3 = tree->iPresent->data[i1].inds->size[0] * tree->iPresent->data[i1].
          inds->size[1];
        tree->iPresent->data[i1].inds->size[0] = 1;
        i1 = tree->iPresent->size[0];
        i4 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &ac_emlrtBCI, sp) - 1;
        tree->iPresent->data[i1].inds->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)tree->iPresent->data[i1].inds,
                          i3, (int32_T)sizeof(int64_T), &e_emlrtRTEI);
        cdiff = tree->iPresent->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct3_T(sp, &cb_tree, &tree->iPresent->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &ac_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        cdiff = tree->iPresent->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct3_T(sp, &db_tree, &tree->iPresent->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &ac_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        i1 = tree->iFeatNum->size[0];
        i3 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &bc_emlrtBCI, sp) - 1;
        i3 = tree->iFeatNum->data[i1].inds->size[0] * tree->iFeatNum->data[i1].
          inds->size[1];
        tree->iFeatNum->data[i1].inds->size[0] = 1;
        i1 = tree->iFeatNum->size[0];
        i4 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &bc_emlrtBCI, sp) - 1;
        tree->iFeatNum->data[i1].inds->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)tree->iFeatNum->data[i1].inds,
                          i3, (int32_T)sizeof(real_T), &e_emlrtRTEI);
        cdiff = tree->iFeatNum->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct4_T(sp, &eb_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &bc_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        cdiff = tree->iFeatNum->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct4_T(sp, &fb_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &bc_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        i1 = tree->trainingCounts->size[0];
        i3 = iCalcVarSize_data[0];
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &s_emlrtBCI, sp);
        loop_ub = tree->trainingCounts->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          tmp_data[i1] = i1;
        }

        iv6[0] = 1;
        iv6[1] = loop_ub;
        emlrtSubAssignSizeCheckR2012b(iv6, 2, *(int32_T (*)[2])countsNode->size,
          2, &r_emlrtECI, sp);
        loop_ub = countsNode->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          tree->trainingCounts->data[(iCalcVarSize_data[0] +
            tree->trainingCounts->size[0] * tmp_data[i1]) - 1] =
            countsNode->data[countsNode->size[0] * i1];
        }

        st.site = &h_emlrtRSI;
        b_st.site = &w_emlrtRSI;
        cdiff = 0;
        i1 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = bEqualMaxCounts_size[1];
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                          (int32_T), &h_emlrtRTEI);
        c_st.site = &x_emlrtRSI;
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

        if (cdiff <= bEqualMaxCounts_size[1]) {
        } else {
          i_y = NULL;
          m1 = emlrtCreateString("Assertion failed.");
          emlrtAssign(&i_y, m1);
          c_st.site = &fp_emlrtRSI;
          f_error(&c_st, i_y, &h_emlrtMCI);
        }

        if (bEqualMaxCounts_size[1] == 1) {
          if (cdiff == 0) {
            i1 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = 0;
            emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                              (int32_T), &e_emlrtRTEI);
          }
        } else {
          if (1 > cdiff) {
            loop_ub = 0;
          } else {
            loop_ub = cdiff;
          }

          i1 = c_ii->size[0] * c_ii->size[1];
          c_ii->size[0] = 1;
          c_ii->size[1] = loop_ub;
          emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i1, (int32_T)sizeof
                            (int32_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < loop_ub; i1++) {
            c_ii->data[c_ii->size[0] * i1] = ii->data[i1];
          }

          i1 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = c_ii->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i1, (int32_T)sizeof
                            (int32_T), &e_emlrtRTEI);
          loop_ub = c_ii->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            ii->data[ii->size[0] * i1] = c_ii->data[c_ii->size[0] * i1];
          }
        }

        i1 = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = ii->size[1];
        emxEnsureCapacity(&st, (emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                          &e_emlrtRTEI);
        loop_ub = ii->size[0] * ii->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          y->data[i1] = ii->data[i1];
        }

        i1 = y->size[1];
        emlrtSizeEqCheck1DFastR2012b(1, i1, &q_emlrtECI, sp);
        i1 = y->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i1, &r_emlrtBCI, sp);
        i1 = tree->labelClassId->size[0];
        i3 = iCalcVarSize_data[0];
        tree->labelClassId->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &cc_emlrtBCI, sp) - 1] = y->data[0];
        i1 = tree->bExpanded->size[0];
        i3 = iCalcVarSize_data[0];
        tree->bExpanded->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &dc_emlrtBCI, sp) - 1] = true;
      } else {
        if (tree->nextChild > (real_T)tree->bLeaf->size[0] - 1.0) {
          K = tree->bExpanded->size[0];
          i1 = tree->bExpanded->size[0];
          tree->bExpanded->size[0] = K + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)tree->bExpanded, i1,
                            (int32_T)sizeof(boolean_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            tree->bExpanded->data[K + i1] = false;
          }

          cdiff = tree->nodeId->size[0];
          K = tree->nodeId->size[0];
          fi = tree->nodeId->data[emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, K,
            &ab_emlrtBCI, sp) - 1];
          i1 = i_tree->size[0];
          i_tree->size[0] = tree->nodeId->size[0] + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)i_tree, i1, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          loop_ub = tree->nodeId->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            i_tree->data[i1] = tree->nodeId->data[i1];
          }

          for (i1 = 0; i1 < 2000; i1++) {
            i_tree->data[i1 + tree->nodeId->size[0]] = fi + (1.0 + (real_T)i1);
          }

          i1 = tree->nodeId->size[0];
          tree->nodeId->size[0] = i_tree->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)tree->nodeId, i1, (int32_T)
                            sizeof(real_T), &e_emlrtRTEI);
          loop_ub = i_tree->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            tree->nodeId->data[i1] = i_tree->data[i1];
          }

          K = tree->bLeaf->size[0];
          i1 = tree->bLeaf->size[0];
          tree->bLeaf->size[0] = K + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)tree->bLeaf, i1, (int32_T)
                            sizeof(boolean_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            tree->bLeaf->data[K + i1] = false;
          }

          i1 = j_tree->size[0] * j_tree->size[1];
          j_tree->size[0] = tree->childIds->size[0] + 2000;
          j_tree->size[1] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)j_tree, i1, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2; i1++) {
            loop_ub = tree->childIds->size[0];
            for (i3 = 0; i3 < loop_ub; i3++) {
              j_tree->data[i3 + j_tree->size[0] * i1] = tree->childIds->data[i3
                + tree->childIds->size[0] * i1];
            }
          }

          for (i1 = 0; i1 < 2; i1++) {
            for (i3 = 0; i3 < 2000; i3++) {
              j_tree->data[(i3 + tree->childIds->size[0]) + j_tree->size[0] * i1]
                = 0.0;
            }
          }

          i1 = tree->childIds->size[0] * tree->childIds->size[1];
          tree->childIds->size[0] = j_tree->size[0];
          tree->childIds->size[1] = 2;
          emxEnsureCapacity(sp, (emxArray__common *)tree->childIds, i1, (int32_T)
                            sizeof(real_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2; i1++) {
            loop_ub = j_tree->size[0];
            for (i3 = 0; i3 < loop_ub; i3++) {
              tree->childIds->data[i3 + tree->childIds->size[0] * i1] =
                j_tree->data[i3 + j_tree->size[0] * i1];
            }
          }

          K = tree->parentId->size[0];
          i1 = tree->parentId->size[0];
          tree->parentId->size[0] = K + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)tree->parentId, i1, (int32_T)
                            sizeof(real_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            tree->parentId->data[K + i1] = 0.0;
          }

          K = tree->depth->size[0];
          i1 = tree->depth->size[0];
          tree->depth->size[0] = K + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)tree->depth, i1, (int32_T)
                            sizeof(real_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            tree->depth->data[K + i1] = 0.0;
          }

          d_cast(sp, rv1);
          K = tree->iPresent->size[0];
          i1 = tree->iPresent->size[0];
          tree->iPresent->size[0] = K + 2000;
          emxEnsureCapacity_struct3_T(sp, tree->iPresent, i1, &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            emxCopyStruct_struct3_T(sp, &tree->iPresent->data[K + i1], &rv1[i1],
              &e_emlrtRTEI);
          }

          c_cast(sp, rv2);
          K = tree->iFeatNum->size[0];
          i1 = tree->iFeatNum->size[0];
          tree->iFeatNum->size[0] = K + 2000;
          emxEnsureCapacity_struct4_T(sp, tree->iFeatNum, i1, &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            emxCopyStruct_struct4_T(sp, &tree->iFeatNum->data[K + i1], &rv2[i1],
              &e_emlrtRTEI);
          }

          i1 = tree->trainingCounts->size[1];
          emlrtDimSizeEqCheckFastR2012b(2, i1, &p_emlrtECI, sp);
          i1 = k_tree->size[0] * k_tree->size[1];
          k_tree->size[0] = tree->trainingCounts->size[0] + 2000;
          k_tree->size[1] = tree->trainingCounts->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)k_tree, i1, (int32_T)sizeof
                            (real_T), &e_emlrtRTEI);
          loop_ub = tree->trainingCounts->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            K = tree->trainingCounts->size[0];
            for (i3 = 0; i3 < K; i3++) {
              k_tree->data[i3 + k_tree->size[0] * i1] = tree->
                trainingCounts->data[i3 + tree->trainingCounts->size[0] * i1];
            }
          }

          for (i1 = 0; i1 < 2; i1++) {
            for (i3 = 0; i3 < 2000; i3++) {
              k_tree->data[(i3 + tree->trainingCounts->size[0]) + k_tree->size[0]
                * i1] = 0.0;
            }
          }

          i1 = tree->trainingCounts->size[0] * tree->trainingCounts->size[1];
          tree->trainingCounts->size[0] = k_tree->size[0];
          tree->trainingCounts->size[1] = k_tree->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)tree->trainingCounts, i1,
                            (int32_T)sizeof(real_T), &e_emlrtRTEI);
          loop_ub = k_tree->size[1];
          for (i1 = 0; i1 < loop_ub; i1++) {
            K = k_tree->size[0];
            for (i3 = 0; i3 < K; i3++) {
              tree->trainingCounts->data[i3 + tree->trainingCounts->size[0] * i1]
                = k_tree->data[i3 + k_tree->size[0] * i1];
            }
          }

          K = tree->labelClassId->size[0];
          i1 = tree->labelClassId->size[0];
          tree->labelClassId->size[0] = K + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)tree->labelClassId, i1,
                            (int32_T)sizeof(real_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            tree->labelClassId->data[K + i1] = 0.0;
          }

          K = tree->partitionPoint->size[0];
          i1 = tree->partitionPoint->size[0];
          tree->partitionPoint->size[0] = K + 2000;
          emxEnsureCapacity(sp, (emxArray__common *)tree->partitionPoint, i1,
                            (int32_T)sizeof(real_T), &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            tree->partitionPoint->data[K + i1] = rtNaN;
          }

          c_cast(sp, rv2);
          K = tree->iIn->size[0];
          i1 = tree->iIn->size[0];
          tree->iIn->size[0] = K + 2000;
          emxEnsureCapacity_struct4_T(sp, tree->iIn, i1, &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            emxCopyStruct_struct4_T(sp, &tree->iIn->data[K + i1], &rv2[i1],
              &e_emlrtRTEI);
          }

          b_cast(sp, rv3);
          K = tree->decisionProjection->size[0];
          i1 = tree->decisionProjection->size[0];
          tree->decisionProjection->size[0] = K + 2000;
          emxEnsureCapacity_struct5_T(sp, tree->decisionProjection, i1,
            &e_emlrtRTEI);
          for (i1 = 0; i1 < 2000; i1++) {
            emxCopyStruct_struct5_T(sp, &tree->decisionProjection->data[K + i1],
              &rv3[i1], &e_emlrtRTEI);
          }
        }

        i1 = tree->bLeaf->size[0];
        i3 = iCalcVarSize_data[0];
        tree->bLeaf->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &bb_emlrtBCI, sp) - 1] = false;
        for (i1 = 0; i1 < 2; i1++) {
          childIds[i1] = tree->nextChild + (real_T)i1;
        }

        cdiff = tree->childIds->size[0];
        i1 = iCalcVarSize_data[0];
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &q_emlrtBCI, sp);
        for (i1 = 0; i1 < 2; i1++) {
          tree->childIds->data[(iCalcVarSize_data[0] + tree->childIds->size[0] *
                                i1) - 1] = childIds[i1];
        }

        cdiff = tree->depth->size[0];
        K = tree->depth->size[0];
        i1 = iCalcVarSize_data[0];
        fi = tree->depth->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K,
          &cb_emlrtBCI, sp) - 1];
        for (i1 = 0; i1 < 2; i1++) {
          i3 = (int32_T)childIds[i1];
          tree->depth->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff,
            &db_emlrtBCI, sp) - 1] = fi + 1.0;
        }

        i1 = tree->iPresent->size[0];
        i3 = iCalcVarSize_data[0];
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &p_emlrtBCI, sp);
        st.site = &g_emlrtRSI;
        c_eml_li_find(&st, bLessThanTrain, r0);
        emlrtVectorVectorIndexCheckR2012b(1, tree->iPresent->
          data[iCalcVarSize_data[0] - 1].inds->size[1], r0->size[0], 1,
          &o_emlrtECI, sp);
        cdiff = tree->iPresent->size[0];
        emxCopyStruct_struct3_T(sp, &l_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1], &e_emlrtRTEI);
        emxCopyStruct_struct3_T(sp, &m_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1], &e_emlrtRTEI);
        emxCopyStruct_struct3_T(sp, &n_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1], &e_emlrtRTEI);
        i1 = (int32_T)childIds[0];
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &eb_emlrtBCI, sp);
        i1 = tree->iPresent->data[(int32_T)childIds[0] - 1].inds->size[0] *
          tree->iPresent->data[(int32_T)childIds[0] - 1].inds->size[1];
        tree->iPresent->data[(int32_T)childIds[0] - 1].inds->size[0] = 1;
        i3 = (int32_T)childIds[0];
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff, &eb_emlrtBCI, sp);
        tree->iPresent->data[(int32_T)childIds[0] - 1].inds->size[1] = r0->size
          [0];
        emxEnsureCapacity(sp, (emxArray__common *)tree->iPresent->data[(int32_T)
                          childIds[0] - 1].inds, i1, (int32_T)sizeof(int64_T),
                          &e_emlrtRTEI);
        loop_ub = r0->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i3 = n_tree.inds->size[1];
          i4 = r0->data[i1];
          apnd = (int32_T)childIds[0];
          i5 = (int32_T)childIds[0];
          tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(apnd, 1, cdiff,
            &eb_emlrtBCI, sp) - 1].inds->data[tree->iPresent->
            data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, cdiff, &eb_emlrtBCI,
            sp) - 1].inds->size[0] * i1] = l_tree.inds->
            data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &fb_emlrtBCI, sp)
            - 1];
        }

        i1 = tree->iPresent->size[0];
        i3 = iCalcVarSize_data[0];
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &o_emlrtBCI, sp);
        i1 = b_bLessThanTrain->size[0] * b_bLessThanTrain->size[1];
        b_bLessThanTrain->size[0] = bLessThanTrain->size[0];
        b_bLessThanTrain->size[1] = bLessThanTrain->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)b_bLessThanTrain, i1, (int32_T)
                          sizeof(boolean_T), &e_emlrtRTEI);
        loop_ub = bLessThanTrain->size[0] * bLessThanTrain->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_bLessThanTrain->data[i1] = !bLessThanTrain->data[i1];
        }

        st.site = &f_emlrtRSI;
        c_eml_li_find(&st, b_bLessThanTrain, r0);
        emlrtVectorVectorIndexCheckR2012b(1, tree->iPresent->
          data[iCalcVarSize_data[0] - 1].inds->size[1], r0->size[0], 1,
          &n_emlrtECI, sp);
        cdiff = tree->iPresent->size[0];
        emxCopyStruct_struct3_T(sp, &o_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1], &e_emlrtRTEI);
        emxCopyStruct_struct3_T(sp, &p_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1], &e_emlrtRTEI);
        emxCopyStruct_struct3_T(sp, &q_tree, &tree->iPresent->
          data[iCalcVarSize_data[0] - 1], &e_emlrtRTEI);
        i1 = (int32_T)childIds[1];
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &gb_emlrtBCI, sp);
        i1 = tree->iPresent->data[(int32_T)childIds[1] - 1].inds->size[0] *
          tree->iPresent->data[(int32_T)childIds[1] - 1].inds->size[1];
        tree->iPresent->data[(int32_T)childIds[1] - 1].inds->size[0] = 1;
        i3 = (int32_T)childIds[1];
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff, &gb_emlrtBCI, sp);
        tree->iPresent->data[(int32_T)childIds[1] - 1].inds->size[1] = r0->size
          [0];
        emxEnsureCapacity(sp, (emxArray__common *)tree->iPresent->data[(int32_T)
                          childIds[1] - 1].inds, i1, (int32_T)sizeof(int64_T),
                          &e_emlrtRTEI);
        loop_ub = r0->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i3 = q_tree.inds->size[1];
          i4 = r0->data[i1];
          apnd = (int32_T)childIds[1];
          i5 = (int32_T)childIds[1];
          tree->iPresent->data[emlrtDynamicBoundsCheckFastR2012b(apnd, 1, cdiff,
            &gb_emlrtBCI, sp) - 1].inds->data[tree->iPresent->
            data[emlrtDynamicBoundsCheckFastR2012b(i5, 1, cdiff, &gb_emlrtBCI,
            sp) - 1].inds->size[0] * i1] = o_tree.inds->
            data[emlrtDynamicBoundsCheckFastR2012b(i4, 1, i3, &hb_emlrtBCI, sp)
            - 1];
        }

        i1 = tree->iPresent->size[0];
        i3 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &ib_emlrtBCI, sp) - 1;
        i3 = tree->iPresent->data[i1].inds->size[0] * tree->iPresent->data[i1].
          inds->size[1];
        tree->iPresent->data[i1].inds->size[0] = 1;
        i1 = tree->iPresent->size[0];
        i4 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &ib_emlrtBCI, sp) - 1;
        tree->iPresent->data[i1].inds->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)tree->iPresent->data[i1].inds,
                          i3, (int32_T)sizeof(int64_T), &e_emlrtRTEI);
        cdiff = tree->iPresent->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct3_T(sp, &r_tree, &tree->iPresent->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &ib_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        cdiff = tree->iPresent->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct3_T(sp, &s_tree, &tree->iPresent->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &ib_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        i1 = tree->iFeatNum->size[0];
        i3 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &jb_emlrtBCI, sp) - 1;
        i3 = tree->iFeatNum->data[i1].inds->size[0] * tree->iFeatNum->data[i1].
          inds->size[1];
        tree->iFeatNum->data[i1].inds->size[0] = 1;
        i1 = tree->iFeatNum->size[0];
        i4 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &jb_emlrtBCI, sp) - 1;
        tree->iFeatNum->data[i1].inds->size[1] = 0;
        emxEnsureCapacity(sp, (emxArray__common *)tree->iFeatNum->data[i1].inds,
                          i3, (int32_T)sizeof(real_T), &e_emlrtRTEI);
        cdiff = tree->iFeatNum->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct4_T(sp, &t_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &jb_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        cdiff = tree->iFeatNum->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct4_T(sp, &u_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &jb_emlrtBCI, sp)
          - 1], &e_emlrtRTEI);
        i1 = tree->iFeatNum->size[0];
        i3 = (int32_T)childIds[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &kb_emlrtBCI, sp) - 1;
        i3 = tree->iFeatNum->data[i1].inds->size[0] * tree->iFeatNum->data[i1].
          inds->size[1];
        tree->iFeatNum->data[i1].inds->size[0] = 1;
        i1 = tree->iFeatNum->size[0];
        i4 = (int32_T)childIds[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &kb_emlrtBCI, sp) - 1;
        tree->iFeatNum->data[i1].inds->size[1] = iFeatureNum->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)tree->iFeatNum->data[i1].inds,
                          i3, (int32_T)sizeof(real_T), &e_emlrtRTEI);
        cdiff = tree->iFeatNum->size[0];
        K = tree->iFeatNum->size[0];
        i1 = (int32_T)childIds[0];
        emxCopyStruct_struct4_T(sp, &v_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K, &kb_emlrtBCI, sp) - 1],
          &e_emlrtRTEI);
        K = tree->iFeatNum->size[0];
        i1 = (int32_T)childIds[0];
        emxCopyStruct_struct4_T(sp, &w_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K, &kb_emlrtBCI, sp) - 1],
          &e_emlrtRTEI);
        loop_ub = iFeatureNum->size[0] * iFeatureNum->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i3 = (int32_T)childIds[0];
          tree->iFeatNum->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff,
            &kb_emlrtBCI, sp) - 1].inds->data[i1] = iFeatureNum->data[i1];
        }

        i1 = tree->iFeatNum->size[0];
        i3 = (int32_T)childIds[1];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &lb_emlrtBCI, sp) - 1;
        i3 = tree->iFeatNum->data[i1].inds->size[0] * tree->iFeatNum->data[i1].
          inds->size[1];
        tree->iFeatNum->data[i1].inds->size[0] = 1;
        i1 = tree->iFeatNum->size[0];
        i4 = (int32_T)childIds[1];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &lb_emlrtBCI, sp) - 1;
        tree->iFeatNum->data[i1].inds->size[1] = iFeatureNum->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)tree->iFeatNum->data[i1].inds,
                          i3, (int32_T)sizeof(real_T), &e_emlrtRTEI);
        cdiff = tree->iFeatNum->size[0];
        K = tree->iFeatNum->size[0];
        i1 = (int32_T)childIds[1];
        emxCopyStruct_struct4_T(sp, &x_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K, &lb_emlrtBCI, sp) - 1],
          &e_emlrtRTEI);
        K = tree->iFeatNum->size[0];
        i1 = (int32_T)childIds[1];
        emxCopyStruct_struct4_T(sp, &y_tree, &tree->iFeatNum->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K, &lb_emlrtBCI, sp) - 1],
          &e_emlrtRTEI);
        loop_ub = iFeatureNum->size[0] * iFeatureNum->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i3 = (int32_T)childIds[1];
          tree->iFeatNum->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff,
            &lb_emlrtBCI, sp) - 1].inds->data[i1] = iFeatureNum->data[i1];
        }

        i1 = tree->trainingCounts->size[0];
        i3 = iCalcVarSize_data[0];
        emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &n_emlrtBCI, sp);
        loop_ub = tree->trainingCounts->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          tmp_data[i1] = i1;
        }

        iv7[0] = 1;
        iv7[1] = loop_ub;
        emlrtSubAssignSizeCheckR2012b(iv7, 2, *(int32_T (*)[2])countsNode->size,
          2, &m_emlrtECI, sp);
        loop_ub = countsNode->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          tree->trainingCounts->data[(iCalcVarSize_data[0] +
            tree->trainingCounts->size[0] * tmp_data[i1]) - 1] =
            countsNode->data[countsNode->size[0] * i1];
        }

        st.site = &e_emlrtRSI;
        b_st.site = &ho_emlrtRSI;
        c_st.site = &io_emlrtRSI;
        if ((countsNode->size[1] == 1) || (countsNode->size[1] != 1)) {
          bComplete = true;
        } else {
          bComplete = false;
        }

        if (bComplete) {
        } else {
          j_y = NULL;
          m1 = emlrtCreateCharArray(2, iv8);
          for (K = 0; K < 36; K++) {
            cv4[K] = cv5[K];
          }

          emlrtInitCharArrayR2013a(&c_st, 36, m1, cv4);
          emlrtAssign(&j_y, m1);
          d_st.site = &mp_emlrtRSI;
          e_st.site = &gq_emlrtRSI;
          f_error(&d_st, b_message(&e_st, j_y, &xb_emlrtMCI), &yb_emlrtMCI);
        }

        if (countsNode->size[1] > 0) {
        } else {
          k_y = NULL;
          m1 = emlrtCreateCharArray(2, iv9);
          for (K = 0; K < 39; K++) {
            cv6[K] = cv7[K];
          }

          emlrtInitCharArrayR2013a(&c_st, 39, m1, cv6);
          emlrtAssign(&k_y, m1);
          d_st.site = &hp_emlrtRSI;
          e_st.site = &cq_emlrtRSI;
          f_error(&d_st, b_message(&e_st, k_y, &y_emlrtMCI), &ab_emlrtMCI);
        }

        d_st.site = &jo_emlrtRSI;
        K = 1;
        fi = countsNode->data[0];
        absb = 1;
        if (countsNode->size[1] > 1) {
          if (muDoubleScalarIsNaN(countsNode->data[0])) {
            cdiff = 2;
            exitg2 = false;
            while ((!exitg2) && (cdiff <= countsNode->size[1])) {
              K = cdiff;
              if (!muDoubleScalarIsNaN(countsNode->data[cdiff - 1])) {
                fi = countsNode->data[cdiff - 1];
                absb = cdiff;
                exitg2 = true;
              } else {
                cdiff++;
              }
            }
          }

          if (K < countsNode->size[1]) {
            while (K + 1 <= countsNode->size[1]) {
              if (countsNode->data[K] > fi) {
                fi = countsNode->data[K];
                absb = K + 1;
              }

              K++;
            }
          }
        }

        i1 = tree->labelClassId->size[0];
        i3 = iCalcVarSize_data[0];
        tree->labelClassId->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &mb_emlrtBCI, sp) - 1] = absb;
        i1 = partitionPoint_size[0] * partitionPoint_size[1];
        emlrtSizeEqCheck1DFastR2012b(1, i1, &l_emlrtECI, sp);
        emlrtDynamicBoundsCheckFastR2012b(1, 1, partitionPoint_size[0],
          &m_emlrtBCI, sp);
        emlrtDynamicBoundsCheckFastR2012b(1, 1, partitionPoint_size[1],
          &m_emlrtBCI, sp);
        i1 = tree->partitionPoint->size[0];
        i3 = iCalcVarSize_data[0];
        tree->partitionPoint->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &nb_emlrtBCI, sp) - 1] = partitionPoint_data[0];
        i1 = tree->iIn->size[0];
        i3 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &ob_emlrtBCI, sp) - 1;
        i3 = tree->iIn->data[i1].inds->size[0] * tree->iIn->data[i1].inds->size
          [1];
        tree->iIn->data[i1].inds->size[0] = 1;
        i1 = tree->iIn->size[0];
        i4 = iCalcVarSize_data[0];
        i1 = emlrtDynamicBoundsCheckFastR2012b(i4, 1, i1, &ob_emlrtBCI, sp) - 1;
        tree->iIn->data[i1].inds->size[1] = y->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)tree->iIn->data[i1].inds, i3,
                          (int32_T)sizeof(real_T), &e_emlrtRTEI);
        cdiff = tree->iIn->size[0];
        K = tree->iIn->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct4_T(sp, &ab_tree, &tree->iIn->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K, &ob_emlrtBCI, sp) - 1],
          &e_emlrtRTEI);
        K = tree->iIn->size[0];
        i1 = iCalcVarSize_data[0];
        emxCopyStruct_struct4_T(sp, &bb_tree, &tree->iIn->
          data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, K, &ob_emlrtBCI, sp) - 1],
          &e_emlrtRTEI);
        loop_ub = y->size[0] * y->size[1];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i3 = iCalcVarSize_data[0];
          tree->iIn->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff,
            &ob_emlrtBCI, sp) - 1].inds->data[i1] = y->data[i1];
        }

        cdiff = tree->decisionProjection->size[0];
        i1 = iCalcVarSize_data[0];
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, cdiff, &pb_emlrtBCI, sp);
        i1 = tree->decisionProjection->data[iCalcVarSize_data[0] - 1].phi->size
          [0];
        tree->decisionProjection->data[iCalcVarSize_data[0] - 1].phi->size[0] =
          projMat->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)tree->decisionProjection->
                          data[iCalcVarSize_data[0] - 1].phi, i1, (int32_T)
                          sizeof(real_T), &e_emlrtRTEI);
        loop_ub = projMat->size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          i3 = iCalcVarSize_data[0];
          tree->decisionProjection->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1,
            cdiff, &pb_emlrtBCI, sp) - 1].phi->data[i1] = projMat->data[i1];
        }

        cdiff = tree->parentId->size[0];
        for (i1 = 0; i1 < 2; i1++) {
          i3 = (int32_T)childIds[i1];
          tree->parentId->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, cdiff,
            &qb_emlrtBCI, sp) - 1] = iCalcVarSize_data[0];
        }

        tree->nextChild += 2.0;
        i1 = tree->bExpanded->size[0];
        i3 = iCalcVarSize_data[0];
        tree->bExpanded->data[emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1,
          &rb_emlrtBCI, sp) - 1] = true;
      }

      i1 = tree->bExpanded->size[0];
      i3 = (int32_T)(tree->nextChild - 1.0);
      emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &l_emlrtBCI, sp);
      i1 = (int32_T)(tree->nextChild - 1.0);
      emlrtVectorVectorIndexCheckR2012b(tree->bExpanded->size[0], 1, 1, i1,
        &k_emlrtECI, sp);
      loop_ub = (int32_T)(tree->nextChild - 1.0);
      i1 = f_tree->size[0];
      f_tree->size[0] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)f_tree, i1, (int32_T)sizeof
                        (boolean_T), &e_emlrtRTEI);
      for (i1 = 0; i1 < loop_ub; i1++) {
        f_tree->data[i1] = tree->bExpanded->data[i1];
      }

      st.site = &d_emlrtRSI;
      bComplete = c_all(&st, f_tree);
      nIter++;
      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }
  }

  emxFree_int32_T(&c_ii);
  emxFreeStruct_struct4_T(&fb_tree);
  emxFreeStruct_struct4_T(&eb_tree);
  emxFreeStruct_struct3_T(&db_tree);
  emxFreeStruct_struct3_T(&cb_tree);
  emxFree_int32_T(&b_ii);
  emxFreeStruct_struct4_T(&bb_tree);
  emxFreeStruct_struct4_T(&ab_tree);
  emxFreeStruct_struct4_T(&y_tree);
  emxFreeStruct_struct4_T(&x_tree);
  emxFreeStruct_struct4_T(&w_tree);
  emxFreeStruct_struct4_T(&v_tree);
  emxFreeStruct_struct4_T(&u_tree);
  emxFreeStruct_struct4_T(&t_tree);
  emxFreeStruct_struct3_T(&s_tree);
  emxFreeStruct_struct3_T(&r_tree);
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
  emxFreeMatrix_struct5_T(rv3);
  emxFreeMatrix_struct4_T(rv2);
  emxFreeMatrix_struct3_T(rv1);
  emxFree_int32_T(&ii);
  emxFree_boolean_T(&x);
  emxFree_real_T(&y);
  emxFree_int32_T(&r0);
  emxFree_real_T(&countsNode);
  emxFree_real_T(&projMat);
  emxFree_boolean_T(&bLessThanTrain);
  emxFree_real_T(&countsAdd);
  b_emxInit_real_T(sp, &gb_tree, 1, &e_emlrtRTEI, true);
  fi = tree->nextChild - 1.0;
  i1 = tree->nodeId->size[0];
  i3 = (int32_T)(tree->nextChild - 1.0);
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &k_emlrtBCI, sp);
  i1 = (int32_T)(tree->nextChild - 1.0);
  emlrtVectorVectorIndexCheckR2012b(tree->nodeId->size[0], 1, 1, i1, &j_emlrtECI,
    sp);
  loop_ub = (int32_T)(tree->nextChild - 1.0);
  i1 = gb_tree->size[0];
  gb_tree->size[0] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)gb_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  for (i1 = 0; i1 < loop_ub; i1++) {
    gb_tree->data[i1] = tree->nodeId->data[i1];
  }

  i1 = tree->nodeId->size[0];
  tree->nodeId->size[0] = gb_tree->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tree->nodeId, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  loop_ub = gb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->nodeId->data[i1] = gb_tree->data[i1];
  }

  emxFree_real_T(&gb_tree);
  emxInit_boolean_T(sp, &hb_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->bLeaf->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &j_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->bLeaf->size[0], 1, 1, (int32_T)fi,
    &i_emlrtECI, sp);
  i1 = hb_tree->size[0];
  hb_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity(sp, (emxArray__common *)hb_tree, i1, (int32_T)sizeof
                    (boolean_T), &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    hb_tree->data[i1] = tree->bLeaf->data[i1];
  }

  i1 = tree->bLeaf->size[0];
  tree->bLeaf->size[0] = hb_tree->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tree->bLeaf, i1, (int32_T)sizeof
                    (boolean_T), &e_emlrtRTEI);
  loop_ub = hb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->bLeaf->data[i1] = hb_tree->data[i1];
  }

  emxFree_boolean_T(&hb_tree);
  emxInit_real_T(sp, &ib_tree, 2, &e_emlrtRTEI, true);
  i1 = tree->childIds->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &i_emlrtBCI, sp);
  i1 = ib_tree->size[0] * ib_tree->size[1];
  ib_tree->size[0] = (int32_T)fi;
  ib_tree->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)ib_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    loop_ub = (int32_T)fi;
    for (i3 = 0; i3 < loop_ub; i3++) {
      ib_tree->data[i3 + ib_tree->size[0] * i1] = tree->childIds->data[i3 +
        tree->childIds->size[0] * i1];
    }
  }

  i1 = tree->childIds->size[0] * tree->childIds->size[1];
  tree->childIds->size[0] = ib_tree->size[0];
  tree->childIds->size[1] = 2;
  emxEnsureCapacity(sp, (emxArray__common *)tree->childIds, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  for (i1 = 0; i1 < 2; i1++) {
    loop_ub = ib_tree->size[0];
    for (i3 = 0; i3 < loop_ub; i3++) {
      tree->childIds->data[i3 + tree->childIds->size[0] * i1] = ib_tree->data[i3
        + ib_tree->size[0] * i1];
    }
  }

  emxFree_real_T(&ib_tree);
  b_emxInit_real_T(sp, &jb_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->parentId->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &h_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->parentId->size[0], 1, 1, (int32_T)fi,
    &h_emlrtECI, sp);
  i1 = jb_tree->size[0];
  jb_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity(sp, (emxArray__common *)jb_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    jb_tree->data[i1] = tree->parentId->data[i1];
  }

  i1 = tree->parentId->size[0];
  tree->parentId->size[0] = jb_tree->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tree->parentId, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  loop_ub = jb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->parentId->data[i1] = jb_tree->data[i1];
  }

  emxFree_real_T(&jb_tree);
  b_emxInit_real_T(sp, &kb_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->depth->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &g_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->depth->size[0], 1, 1, (int32_T)fi,
    &g_emlrtECI, sp);
  i1 = kb_tree->size[0];
  kb_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity(sp, (emxArray__common *)kb_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    kb_tree->data[i1] = tree->depth->data[i1];
  }

  i1 = tree->depth->size[0];
  tree->depth->size[0] = kb_tree->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tree->depth, i1, (int32_T)sizeof
                    (real_T), &e_emlrtRTEI);
  loop_ub = kb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->depth->data[i1] = kb_tree->data[i1];
  }

  emxFree_real_T(&kb_tree);
  emxInit_real_T(sp, &lb_tree, 2, &e_emlrtRTEI, true);
  i1 = tree->trainingCounts->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &f_emlrtBCI, sp);
  cdiff = tree->trainingCounts->size[1];
  i1 = lb_tree->size[0] * lb_tree->size[1];
  lb_tree->size[0] = (int32_T)fi;
  lb_tree->size[1] = cdiff;
  emxEnsureCapacity(sp, (emxArray__common *)lb_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  for (i1 = 0; i1 < cdiff; i1++) {
    loop_ub = (int32_T)fi;
    for (i3 = 0; i3 < loop_ub; i3++) {
      lb_tree->data[i3 + lb_tree->size[0] * i1] = tree->trainingCounts->data[i3
        + tree->trainingCounts->size[0] * i1];
    }
  }

  i1 = tree->trainingCounts->size[0] * tree->trainingCounts->size[1];
  tree->trainingCounts->size[0] = lb_tree->size[0];
  tree->trainingCounts->size[1] = lb_tree->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)tree->trainingCounts, i1, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  loop_ub = lb_tree->size[1];
  for (i1 = 0; i1 < loop_ub; i1++) {
    K = lb_tree->size[0];
    for (i3 = 0; i3 < K; i3++) {
      tree->trainingCounts->data[i3 + tree->trainingCounts->size[0] * i1] =
        lb_tree->data[i3 + lb_tree->size[0] * i1];
    }
  }

  emxFree_real_T(&lb_tree);
  b_emxInit_real_T(sp, &mb_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->labelClassId->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &e_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->labelClassId->size[0], 1, 1, (int32_T)
    fi, &f_emlrtECI, sp);
  i1 = mb_tree->size[0];
  mb_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity(sp, (emxArray__common *)mb_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    mb_tree->data[i1] = tree->labelClassId->data[i1];
  }

  i1 = tree->labelClassId->size[0];
  tree->labelClassId->size[0] = mb_tree->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tree->labelClassId, i1, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  loop_ub = mb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->labelClassId->data[i1] = mb_tree->data[i1];
  }

  emxFree_real_T(&mb_tree);
  b_emxInit_real_T(sp, &nb_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->partitionPoint->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &d_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->partitionPoint->size[0], 1, 1,
    (int32_T)fi, &e_emlrtECI, sp);
  i1 = nb_tree->size[0];
  nb_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity(sp, (emxArray__common *)nb_tree, i1, (int32_T)sizeof(real_T),
                    &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    nb_tree->data[i1] = tree->partitionPoint->data[i1];
  }

  i1 = tree->partitionPoint->size[0];
  tree->partitionPoint->size[0] = nb_tree->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)tree->partitionPoint, i1, (int32_T)
                    sizeof(real_T), &e_emlrtRTEI);
  loop_ub = nb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    tree->partitionPoint->data[i1] = nb_tree->data[i1];
  }

  emxFree_real_T(&nb_tree);
  emxInit_struct4_T(sp, &ob_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->iIn->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &c_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->iIn->size[0], 1, 1, (int32_T)fi,
    &d_emlrtECI, sp);
  i1 = ob_tree->size[0];
  ob_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity_struct4_T(sp, ob_tree, i1, &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    emxCopyStruct_struct4_T(sp, &ob_tree->data[i1], &tree->iIn->data[i1],
      &e_emlrtRTEI);
  }

  i1 = tree->iIn->size[0];
  tree->iIn->size[0] = ob_tree->size[0];
  emxEnsureCapacity_struct4_T(sp, tree->iIn, i1, &e_emlrtRTEI);
  loop_ub = ob_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    emxCopyStruct_struct4_T(sp, &tree->iIn->data[i1], &ob_tree->data[i1],
      &e_emlrtRTEI);
  }

  emxFree_struct4_T(&ob_tree);
  emxInit_struct5_T(sp, &pb_tree, 1, &e_emlrtRTEI, true);
  i1 = tree->decisionProjection->size[0];
  i3 = (int32_T)fi;
  emlrtDynamicBoundsCheckFastR2012b(i3, 1, i1, &b_emlrtBCI, sp);
  emlrtVectorVectorIndexCheckR2012b(tree->decisionProjection->size[0], 1, 1,
    (int32_T)fi, &c_emlrtECI, sp);
  i1 = pb_tree->size[0];
  pb_tree->size[0] = (int32_T)fi;
  emxEnsureCapacity_struct5_T(sp, pb_tree, i1, &e_emlrtRTEI);
  loop_ub = (int32_T)fi;
  for (i1 = 0; i1 < loop_ub; i1++) {
    emxCopyStruct_struct5_T(sp, &pb_tree->data[i1], &tree->
      decisionProjection->data[i1], &e_emlrtRTEI);
  }

  i1 = tree->decisionProjection->size[0];
  tree->decisionProjection->size[0] = pb_tree->size[0];
  emxEnsureCapacity_struct5_T(sp, tree->decisionProjection, i1, &e_emlrtRTEI);
  loop_ub = pb_tree->size[0];
  for (i1 = 0; i1 < loop_ub; i1++) {
    emxCopyStruct_struct5_T(sp, &tree->decisionProjection->data[i1],
      &pb_tree->data[i1], &e_emlrtRTEI);
  }

  emxFree_struct5_T(&pb_tree);
  tree->nextChild = 0.0;
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (growCCTnotRecursive.c) */
