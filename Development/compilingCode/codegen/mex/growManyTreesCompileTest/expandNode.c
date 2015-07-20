/*
 * expandNode.c
 *
 * Code generation for function 'expandNode'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "expandNode.h"
#include "randi.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "abs.h"
#include "power.h"
#include "rdivide.h"
#include "growCCTnotRecursive.h"
#include "twoPointMaxMarginSplit.h"
#include "eml_int_forloop_overflow_check.h"
#include "sum.h"
#include "log2.h"
#include "error.h"
#include "strcmpi.h"
#include "bsxfun.h"
#include "diff.h"
#include "eml_sort.h"
#include "all.h"
#include "any.h"
#include "repmat.h"
#include "queryIfColumnsVary.h"
#include "eye.h"
#include "sqrt.h"
#include "mldivide.h"
#include "svd.h"
#include "diag.h"
#include "qr.h"
#include "queryIfOnlyTwoUniqueRows.h"
#include "randomSubspace.h"
#include "randperm.h"
#include "fastUnique.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo y_emlrtRSI = { 304, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ab_emlrtRSI = { 303, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo bb_emlrtRSI = { 301, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo cb_emlrtRSI = { 292, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo db_emlrtRSI = { 282, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo eb_emlrtRSI = { 279, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo fb_emlrtRSI = { 278, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo gb_emlrtRSI = { 277, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo hb_emlrtRSI = { 275, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ib_emlrtRSI = { 274, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo jb_emlrtRSI = { 266, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo kb_emlrtRSI = { 261, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo lb_emlrtRSI = { 257, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo mb_emlrtRSI = { 256, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo nb_emlrtRSI = { 248, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ob_emlrtRSI = { 253, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo pb_emlrtRSI = { 247, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo qb_emlrtRSI = { 244, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo rb_emlrtRSI = { 240, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo sb_emlrtRSI = { 239, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo tb_emlrtRSI = { 238, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ub_emlrtRSI = { 237, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo vb_emlrtRSI = { 236, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo wb_emlrtRSI = { 235, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo xb_emlrtRSI = { 234, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo yb_emlrtRSI = { 233, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ac_emlrtRSI = { 232, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo bc_emlrtRSI = { 231, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo cc_emlrtRSI = { 228, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo dc_emlrtRSI = { 227, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ec_emlrtRSI = { 226, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo fc_emlrtRSI = { 225, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo gc_emlrtRSI = { 223, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo hc_emlrtRSI = { 221, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ic_emlrtRSI = { 218, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo jc_emlrtRSI = { 203, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo kc_emlrtRSI = { 202, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo lc_emlrtRSI = { 196, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo mc_emlrtRSI = { 194, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo nc_emlrtRSI = { 192, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo oc_emlrtRSI = { 189, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo pc_emlrtRSI = { 182, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo qc_emlrtRSI = { 174, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo rc_emlrtRSI = { 173, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo sc_emlrtRSI = { 162, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo tc_emlrtRSI = { 160, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo uc_emlrtRSI = { 148, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo vc_emlrtRSI = { 146, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo wc_emlrtRSI = { 140, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo xc_emlrtRSI = { 138, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo yc_emlrtRSI = { 134, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ad_emlrtRSI = { 133, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo bd_emlrtRSI = { 126, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo cd_emlrtRSI = { 125, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo dd_emlrtRSI = { 123, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ed_emlrtRSI = { 122, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo fd_emlrtRSI = { 114, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo gd_emlrtRSI = { 110, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo hd_emlrtRSI = { 107, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo id_emlrtRSI = { 96, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo jd_emlrtRSI = { 95, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo kd_emlrtRSI = { 88, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ld_emlrtRSI = { 75, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo md_emlrtRSI = { 70, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo nd_emlrtRSI = { 69, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo od_emlrtRSI = { 68, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo pd_emlrtRSI = { 67, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo qd_emlrtRSI = { 65, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo rd_emlrtRSI = { 60, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo sd_emlrtRSI = { 59, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo td_emlrtRSI = { 58, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ud_emlrtRSI = { 57, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo vd_emlrtRSI = { 56, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo wd_emlrtRSI = { 55, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo xd_emlrtRSI = { 54, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo yd_emlrtRSI = { 51, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ae_emlrtRSI = { 49, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo be_emlrtRSI = { 43, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ce_emlrtRSI = { 41, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo de_emlrtRSI = { 38, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ee_emlrtRSI = { 36, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo fe_emlrtRSI = { 35, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ge_emlrtRSI = { 22, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo he_emlrtRSI = { 20, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo ie_emlrtRSI = { 10, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo je_emlrtRSI = { 8, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRSInfo we_emlrtRSI = { 86, "eml_matrix_vstride",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_matrix_vstride.m"
};

static emlrtRSInfo xe_emlrtRSI = { 49, "prodsize",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\prodsize.m"
};

static emlrtRSInfo no_emlrtRSI = { 20, "sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRSInfo oo_emlrtRSI = { 20, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtRSInfo po_emlrtRSI = { 37, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtRSInfo qo_emlrtRSI = { 35, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtRSInfo ro_emlrtRSI = { 32, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtMCInfo e_emlrtMCI = { 405, 5, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtMCInfo f_emlrtMCI = { 404, 15, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRTEInfo o_emlrtRTEI = { 1, 78, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo p_emlrtRTEI = { 35, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo q_emlrtRTEI = { 38, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo r_emlrtRTEI = { 39, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo s_emlrtRTEI = { 41, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo t_emlrtRTEI = { 49, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo u_emlrtRTEI = { 52, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo v_emlrtRTEI = { 58, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo w_emlrtRTEI = { 88, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo x_emlrtRTEI = { 125, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo y_emlrtRTEI = { 199, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo ab_emlrtRTEI = { 200, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo bb_emlrtRTEI = { 218, 10, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo cb_emlrtRTEI = { 219, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo db_emlrtRTEI = { 221, 13, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo eb_emlrtRTEI = { 225, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo fb_emlrtRTEI = { 227, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo gb_emlrtRTEI = { 232, 13, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo hb_emlrtRTEI = { 233, 13, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo ib_emlrtRTEI = { 33, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo jb_emlrtRTEI = { 34, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtRTEInfo kb_emlrtRTEI = { 1, 50, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo w_emlrtECI = { 2, 114, 26, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 148, 58, "r1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 154, 19, "q1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 154, 37, "r1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 154, 45, "r1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 162, 58, "r2", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 168, 19, "q2", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 174, 24, "L", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtECInfo x_emlrtECI = { 2, 177, 21, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo y_emlrtECI = { -1, 177, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo ab_emlrtECI = { 1, 189, 19, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 218, 50, "UTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtECInfo bb_emlrtECI = { 2, 221, 30, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo cb_emlrtECI = { 1, 221, 29, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 225, 54, "LeftCumCounts",
  "expandNode", "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtECInfo db_emlrtECI = { 2, 235, 22, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo eb_emlrtECI = { 2, 238, 22, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo fb_emlrtECI = { -1, 253, 37, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtECInfo gb_emlrtECI = { -1, 253, 56, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 256, 54, "metricGain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtECInfo hb_emlrtECI = { -1, 256, 54, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 257, 30, "metricGain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtECInfo ib_emlrtECI = { -1, 257, 30, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 280, 20, "iEqualMax", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 289, 27, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 291, 27, "UTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtECInfo jb_emlrtECI = { 2, 301, 26, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m" };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 311, 21, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 39, 11, "iCanBeSelected",
  "expandNode", "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo f_emlrtDCI = { 39, 11, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 1 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 49, 40, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 54, 11, "iIn", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 56, 9, "iFeatureNum", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 56, 21, "iInNew", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 57, 18, "bInMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 57, 18, "iInNew", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 66, 19, "iCanBeSelected",
  "expandNode", "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo g_emlrtDCI = { 66, 19, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 1 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 69, 48, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 70, 25, "iInNew", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 92, 26, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 89, 24, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo h_emlrtDCI = { 89, 24, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 1 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 89, 35, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 90, 24, "YTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 101, 30, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 123, 29, "YTrainBag", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo i_emlrtDCI = { 177, 37, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 4 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 177, 13, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 192, 23, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 202, 27, "UTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 203, 29, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 278, 20, "iEqualMax", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo j_emlrtDCI = { 278, 20, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 1 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 284, 18, "iSplits", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 295, 30, "UTrainSort", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo k_emlrtDCI = { 295, 30, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 1 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 297, 26, "UTrainSort", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 297, 49, "UTrainSort", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 219, 29, "YTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 236, 13, "pLProd", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 239, 13, "pRProd", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 246, 25, "metricLeft", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 247, 9, "metricLeft", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 248, 9, "metricRight", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 256, 10, "splitGains", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 256, 30, "iSplits", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 257, 50, "splitGains", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 261, 9, "iSplits", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 261, 28, "iEqualMax", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtDCInfo l_emlrtDCI = { 261, 28, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 1 };

static emlrtDCInfo m_emlrtDCI = { 165, 28, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 4 };

static emlrtDCInfo n_emlrtDCI = { 151, 28, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 4 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 114, 36, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\expandNode.m", 0 };

static emlrtRSInfo jq_emlrtRSI = { 404, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

static emlrtRSInfo er_emlrtRSI = { 405, "colon",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" };

/* Function Declarations */
static void b_emlrt_update_log_39(const boolean_T in[2],
  emlrtLocationLoggingDataType table[613]);
static void b_emlrt_update_log_40(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
static void b_emlrt_update_log_41(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
static void emlrt_update_log_39(const boolean_T in[2],
  emlrtLocationLoggingDataType table[613], boolean_T out[2]);
static void emlrt_update_log_40(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
static void emlrt_update_log_41(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);

/* Function Definitions */
static void b_emlrt_update_log_39(const boolean_T in[2],
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  int32_T i;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);
  for (i = 0; i < 2; i++) {
    /* Simulation Min-Max logging. */
    if ((int32_T)in[i] < (int32_T)localMin) {
      localMin = in[i];
    }

    if ((int32_T)in[i] > (int32_T)localMax) {
      localMax = in[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

static void b_emlrt_update_log_40(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0] * in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

static void b_emlrt_update_log_41(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

static void emlrt_update_log_39(const boolean_T in[2],
  emlrtLocationLoggingDataType table[613], boolean_T out[2])
{
  int32_T i62;
  for (i62 = 0; i62 < 2; i62++) {
    out[i62] = in[i62];
  }

  b_emlrt_update_log_39(out, table);
}

static void emlrt_update_log_40(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i63;
  int32_T loop_ub;
  i63 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i63, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i63 = 0; i63 < loop_ub; i63++) {
    out->data[i63] = in->data[i63];
  }

  b_emlrt_update_log_40(out, table);
}

static void emlrt_update_log_41(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i64;
  int32_T loop_ub;
  i64 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)out, i64, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i64 = 0; i64 < loop_ub; i64++) {
    out->data[i64] = in->data[i64];
  }

  b_emlrt_update_log_41(out, table);
}

void expandNode(const emlrtStack *sp, const emxArray_real_T *XTrain, const
                emxArray_boolean_T *YTrain, const struct0_T *options,
                emxArray_real_T *iFeatureNum, real_T depth, boolean_T *bLeaf,
                emxArray_boolean_T *bLessThanTrain, real_T partitionPoint_data[],
                int32_T partitionPoint_size[2], emxArray_real_T *projMat,
                emxArray_real_T *countsNode, emxArray_real_T *iIn)
{
  emxArray_real_T *b_XTrain;
  emxArray_boolean_T *b_YTrain;
  struct0_T b_options;
  emxArray_real_T *b_iFeatureNum;
  boolean_T b2;
  emxArray_boolean_T *r21;
  int32_T i5;
  int32_T tmp_size[2];
  real_T tmp_data[1];
  emxArray_real_T *r22;
  emxArray_real_T *r23;
  emxArray_real_T *iFeatIn;
  real_T b_tmp_data[1];
  int32_T nm1d2;
  real_T YTrain_data[1];
  real_T c_tmp_data[1];
  real_T d_tmp_data[2];
  int32_T b_tmp_size[2];
  emxArray_real_T e_tmp_data;
  emxArray_real_T *b_iFeatIn;
  int32_T loop_ub;
  real_T N;
  boolean_T overflow;
  emxArray_real_T *r24;
  emxArray_real_T *c_iFeatIn;
  emxArray_real_T *r25;
  boolean_T f_tmp_data[10000];
  int32_T c_tmp_size[2];
  real_T dv8[2];
  int32_T c_YTrain[1];
  emxArray_boolean_T d_YTrain;
  boolean_T bv2[2];
  boolean_T bv3[2];
  emxArray_real_T *iCanBeSelected;
  emxArray_boolean_T *bXVaries;
  emxArray_boolean_T *b_bXVaries;
  emxArray_real_T *b_iCanBeSelected;
  emxArray_real_T *indFeatIn;
  emxArray_real_T *c_iCanBeSelected;
  real_T lambda;
  int32_T ix;
  real_T apnd;
  int32_T ixstart;
  emxArray_real_T *y;
  emxArray_real_T *b_y;
  int32_T d_iFeatIn[1];
  emxArray_real_T *c_iFeatureNum;
  emxArray_boolean_T *bInMat;
  emxArray_boolean_T *b_bInMat;
  emxArray_boolean_T *c_bXVaries;
  emxArray_int32_T *ii;
  int32_T idx;
  boolean_T exitg8;
  boolean_T guard4 = false;
  const mxArray *c_y;
  const mxArray *m3;
  emxArray_int32_T *b_ii;
  emxArray_real_T *c_ii;
  emxArray_real_T *c_XTrain;
  int32_T i;
  emxArray_boolean_T *d_bXVaries;
  emxArray_boolean_T *bRemainsSelected;
  emxArray_real_T *muX;
  emxArray_int32_T *d_ii;
  emxArray_real_T *iInNew;
  emxArray_real_T *b_iIn;
  real_T nSelected;
  emxArray_int32_T *r26;
  emxArray_real_T *d_iCanBeSelected;
  emxArray_boolean_T *b_bRemainsSelected;
  emxArray_boolean_T *r27;
  emxArray_boolean_T *r28;
  emxArray_boolean_T *e_bXVaries;
  emxArray_real_T *r29;
  emxArray_real_T *r30;
  emxArray_boolean_T *f_bXVaries;
  emxArray_boolean_T *g_bXVaries;
  emxArray_real_T *d_XTrain;
  emxArray_real_T *e_ii;
  emxArray_boolean_T *h_bXVaries;
  emxArray_boolean_T *c_bInMat;
  emxArray_real_T *d_iFeatureNum;
  emxArray_real_T *e_iCanBeSelected;
  emxArray_int32_T *f_ii;
  boolean_T exitg6;
  int32_T e_iFeatIn[1];
  boolean_T exitg7;
  boolean_T guard3 = false;
  const mxArray *d_y;
  emxArray_real_T *e_iFeatureNum;
  emxArray_real_T *iTrainThis;
  emxArray_real_T *XTrainBag;
  emxArray_real_T *e_XTrain;
  int32_T cdiff;
  emxArray_boolean_T *e_YTrain;
  emxArray_real_T *f_XTrain;
  emxArray_boolean_T *i_bXVaries;
  emxArray_real_T *splitGains;
  emxArray_real_T *iSplits;
  emxArray_real_T *UTrainSort;
  emxArray_boolean_T *YTrainSort;
  emxArray_real_T *LeftCumCounts;
  emxArray_real_T *RightCumCounts;
  emxArray_real_T *pL;
  emxArray_real_T *metricLeft;
  emxArray_real_T *metricRight;
  emxArray_real_T *r1;
  emxArray_real_T *q2;
  emxArray_real_T *b_projMat;
  emxArray_real_T *YTrainBag;
  emxArray_real_T *c_projMat;
  emxArray_real_T *r31;
  emxArray_int32_T *r32;
  emxArray_real_T *e_y;
  emxArray_real_T *r33;
  emxArray_real_T *r34;
  emxArray_real_T *r35;
  emxArray_real_T *d_projMat;
  emxArray_real_T *r36;
  emxArray_real_T *b_UTrainSort;
  emxArray_real_T *c_UTrainSort;
  emxArray_real_T *b_XTrainBag;
  emxArray_real_T *e_projMat;
  emxArray_real_T *g_ii;
  emxArray_real_T *f_y;
  emxArray_real_T *g_y;
  emxArray_real_T *b_splitGains;
  emxArray_real_T *r37;
  emxArray_boolean_T *r38;
  emxArray_real_T *r39;
  emxArray_real_T *r40;
  emxArray_real_T *f_projMat;
  emxArray_real_T *c_XTrainBag;
  emxArray_real_T *r41;
  emxArray_boolean_T *j_bXVaries;
  emxArray_real_T *g_projMat;
  emxArray_real_T *r42;
  emxArray_real_T *f_iFeatIn;
  emxArray_real_T *g_iFeatIn;
  emxArray_real_T *r43;
  emxArray_real_T *r44;
  emxArray_real_T *d_XTrainBag;
  emxArray_real_T *b_YTrainBag;
  emxArray_real_T *c_YTrainBag;
  emxArray_real_T *b_q2;
  emxArray_real_T *h_ii;
  emxArray_real_T *h_y;
  emxArray_real_T *i_y;
  emxArray_real_T *b_iTrainThis;
  emxArray_real_T *metricCurrent;
  emxArray_real_T *j_y;
  emxArray_real_T *k_y;
  emxArray_real_T *c_iTrainThis;
  emxArray_real_T *l_y;
  emxArray_real_T *h_iFeatIn;
  emxArray_real_T *i_iFeatIn;
  emxArray_real_T *r45;
  emxArray_real_T *r46;
  emxArray_boolean_T *c_bRemainsSelected;
  emxArray_real_T *r47;
  emxArray_real_T *r48;
  emxArray_boolean_T *d_bRemainsSelected;
  emxArray_real_T *r49;
  emxArray_real_T *r50;
  emxArray_real_T *m_y;
  emxArray_real_T *n_y;
  emxArray_real_T *r51;
  emxArray_real_T *r52;
  emxArray_boolean_T *b_RightCumCounts;
  emxArray_real_T *c_RightCumCounts;
  emxArray_real_T *r53;
  emxArray_real_T *o_y;
  emxArray_real_T *p_y;
  emxArray_real_T *r54;
  emxArray_real_T *r55;
  emxArray_boolean_T *b_pL;
  emxArray_real_T *c_pL;
  emxArray_real_T *r56;
  emxArray_real_T *r57;
  emxArray_real_T *q_y;
  emxArray_real_T *r58;
  emxArray_real_T *r59;
  emxArray_real_T *r_y;
  emxArray_real_T *r60;
  emxArray_real_T *s_y;
  emxArray_real_T *t_y;
  emxArray_boolean_T *u_y;
  emxArray_real_T *v_y;
  emxArray_real_T *b_LeftCumCounts;
  emxArray_real_T *w_y;
  emxArray_real_T *r61;
  emxArray_real_T *x_y;
  emxArray_real_T *r62;
  emxArray_real_T *y_y;
  emxArray_real_T *j_iFeatIn;
  emxArray_boolean_T *f_YTrain;
  emxArray_real_T *i_ii;
  emxArray_real_T *d_UTrainSort;
  emxArray_real_T *e_XTrainBag;
  emxArray_real_T *r63;
  emxArray_boolean_T *ab_y;
  emxArray_real_T *bb_y;
  emxArray_real_T *cb_y;
  emxArray_real_T *db_y;
  emxArray_real_T *d_YTrainBag;
  emxArray_real_T *c_q2;
  emxArray_real_T *e_YTrainBag;
  emxArray_real_T *b_r1;
  emxArray_real_T *h_projMat;
  emxArray_real_T *r64;
  emxArray_boolean_T *eb_y;
  emxArray_real_T *fb_y;
  emxArray_real_T *gb_y;
  emxArray_real_T *hb_y;
  emxArray_real_T *k_iFeatIn;
  emxArray_real_T *c_r1;
  emxArray_real_T *i_projMat;
  emxArray_real_T *l_iFeatIn;
  emxArray_real_T *m_iFeatIn;
  emxArray_real_T *n_iFeatIn;
  emxArray_real_T *o_iFeatIn;
  emxArray_boolean_T *d_bInMat;
  emxArray_boolean_T *k_bXVaries;
  emxArray_real_T *g_XTrain;
  emxArray_real_T *r65;
  emxArray_real_T *p_iFeatIn;
  emxArray_real_T *c_iIn;
  emxArray_real_T *d_iIn;
  emxArray_real_T *e_iIn;
  emxArray_real_T *f_iIn;
  emxArray_real_T *g_iIn;
  emxArray_real_T *h_iIn;
  emxArray_real_T *i_iIn;
  emxArray_int32_T *j_ii;
  emxArray_real_T *j_projMat;
  emxArray_real_T *q_iFeatIn;
  emxArray_int32_T *k_ii;
  emxArray_real_T *j_iIn;
  emxArray_real_T *k_iIn;
  emxArray_real_T *l_iIn;
  emxArray_real_T *m_iIn;
  emxArray_real_T *n_iIn;
  emxArray_real_T *o_iIn;
  emxArray_real_T *p_iIn;
  emxArray_real_T *b_muX;
  emxArray_real_T *f_XTrainBag;
  emxArray_real_T *k_projMat;
  emxArray_real_T *b_emlrtLocationLoggingDataTable;
  emxArray_real_T *c_emlrtLocationLoggingDataTable;
  emxArray_real_T *d_emlrtLocationLoggingDataTable;
  emxArray_real_T *e_UTrainSort;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T b_guard3 = false;
  boolean_T b_guard4 = false;
  boolean_T guard5 = false;
  int32_T d_tmp_size[2];
  real_T dv9[2];
  int32_T e_bInMat[1];
  boolean_T bSplit;
  int32_T l_ii[2];
  const mxArray *ib_y;
  static const int32_T iv38[2] = { 1, 45 };

  char_T cv12[45];
  static const char_T cv13[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *jb_y;
  static const int32_T iv39[2] = { 1, 21 };

  char_T cv14[21];
  static const char_T cv15[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  uint32_T unnamed_idx_1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  boolean_T projMat_data[1];
  int32_T projMat_size[2];
  emxArray_boolean_T b_projMat_data;
  real_T x1;
  real_T x2;
  real_T rankX;
  real_T d;
  const mxArray *kb_y;
  static const int32_T iv40[2] = { 1, 45 };

  const mxArray *lb_y;
  static const int32_T iv41[2] = { 1, 21 };

  uint32_T unnamed_idx_0;
  const mxArray *mb_y;
  static const int32_T iv42[2] = { 1, 45 };

  const mxArray *nb_y;
  static const int32_T iv43[2] = { 1, 21 };

  emxArray_real_T ob_y;
  int32_T iv44[1];
  int32_T nVarAtt;
  int32_T vlen;
  boolean_T b3;
  boolean_T b4;
  boolean_T b5;
  boolean_T b6;
  const mxArray *pb_y;
  static const int32_T iv45[2] = { 1, 21 };

  static const char_T cv16[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  const mxArray *qb_y;
  static const int32_T iv46[2] = { 1, 21 };

  const mxArray *rb_y;
  static const int32_T iv47[2] = { 1, 36 };

  char_T cv17[36];
  static const char_T cv18[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *sb_y;
  static const int32_T iv48[2] = { 1, 39 };

  char_T cv19[39];
  static const char_T cv20[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg5;
  boolean_T b_ixstart;
  boolean_T exitg4;
  boolean_T b_guard2 = false;
  const mxArray *tb_y;
  real_T g_tmp_data[1];
  int32_T e_tmp_size[1];
  emxArray_real_T h_tmp_data;
  const mxArray *ub_y;
  static const int32_T iv49[2] = { 1, 36 };

  const mxArray *vb_y;
  static const int32_T iv50[2] = { 1, 39 };

  boolean_T exitg3;
  int32_T f_tmp_size[2];
  real_T i_tmp_data[1];
  const mxArray *wb_y;
  static const int32_T iv51[2] = { 1, 36 };

  const mxArray *xb_y;
  static const int32_T iv52[2] = { 1, 39 };

  boolean_T exitg2;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  const mxArray *yb_y;
  real_T iDir;
  int32_T d_iTrainThis[2];
  int32_T e_bRemainsSelected[2];
  int32_T b_bLessThanTrain[1];
  int32_T c_bLessThanTrain[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  int32_T exitg11;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &c_st;
  g_st.tls = c_st.tls;
  h_st.prev = &f_st;
  h_st.tls = f_st.tls;
  i_st.prev = &d_st;
  i_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_XTrain, 2, &o_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_YTrain, 2, &o_emlrtRTEI, true);
  emxInitStruct_struct0_T(sp, &b_options, &o_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_iFeatureNum, 2, &o_emlrtRTEI, true);
  b2 = false;

  /* logging input variable 'XTrain' for function 'expandNode' */
  emlrt_update_log_2(sp, XTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[192U], b_XTrain);

  /* logging input variable 'YTrain' for function 'expandNode' */
  emlrt_update_log_3(sp, YTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[193U], b_YTrain);

  /* logging input variable 'options' for function 'expandNode' */
  emlrt_update_log_4(sp, options, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[194U], &b_options);

  /* logging input variable 'iFeatureNum' for function 'expandNode' */
  emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[213U], b_iFeatureNum);

  /* logging input variable 'depth' for function 'expandNode' */
  emlrt_update_log_1(depth, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[214U]);
  emxFree_real_T(&b_iFeatureNum);
  emxFreeStruct_struct0_T(&b_options);
  emxFree_boolean_T(&b_YTrain);
  emxFree_real_T(&b_XTrain);
  b_emxInit_boolean_T(sp, &r21, 2, &o_emlrtRTEI, true);
  i5 = r21->size[0] * r21->size[1];
  r21->size[0] = 0;
  r21->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)r21, i5, (int32_T)sizeof(boolean_T),
                    &o_emlrtRTEI);
  emlrt_update_log_37(sp, r21, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[215U], bLessThanTrain);
  emxFree_boolean_T(&r21);
  tmp_size[0] = 1;
  tmp_size[1] = 1;
  tmp_data[0] = 0.0;
  emlrt_update_log_34(tmp_data, tmp_size, *(emlrtLocationLoggingDataType (*)[613])
                      &emlrtLocationLoggingDataTables[216U], partitionPoint_data,
                      partitionPoint_size);
  emxInit_real_T(sp, &r22, 1, &o_emlrtRTEI, true);
  i5 = r22->size[0];
  r22->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r22, i5, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  emlrt_update_log_20(sp, r22, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[217U], projMat);
  emxFree_real_T(&r22);
  b_emxInit_real_T(sp, &r23, 2, &o_emlrtRTEI, true);
  i5 = r23->size[0] * r23->size[1];
  r23->size[0] = 1;
  r23->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)r23, i5, (int32_T)sizeof(real_T),
                    &o_emlrtRTEI);
  emlrt_update_log_5(sp, r23, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[218U], iIn);
  emxFree_real_T(&r23);
  b_emxInit_real_T(sp, &iFeatIn, 2, &r_emlrtRTEI, true);
  if (YTrain->size[1] == 1) {
    st.site = &je_emlrtRSI;
    sum(&st, YTrain, tmp_data, tmp_size);
    b_tmp_data[0] = tmp_data[0];
    emlrt_update_log_35(b_tmp_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[221U], tmp_data, tmp_size);
    nm1d2 = YTrain->size[0];
    YTrain_data[0] = (real_T)nm1d2 - tmp_data[0];
    emlrt_update_log_35(YTrain_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[220U], tmp_data, tmp_size);
    st.site = &je_emlrtRSI;
    sum(&st, YTrain, b_tmp_data, tmp_size);
    c_tmp_data[0] = b_tmp_data[0];
    emlrt_update_log_35(c_tmp_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[222U], b_tmp_data,
                        tmp_size);
    b_tmp_size[0] = 1;
    b_tmp_size[1] = 2;
    d_tmp_data[0] = tmp_data[0];
    d_tmp_data[b_tmp_size[0]] = b_tmp_data[0];
    e_tmp_data.data = (real_T *)&d_tmp_data;
    e_tmp_data.size = (int32_T *)&b_tmp_size;
    e_tmp_data.allocatedSize = 2;
    e_tmp_data.numDimensions = 2;
    e_tmp_data.canFreeData = false;
    emlrt_update_log_38(sp, &e_tmp_data, *(emlrtLocationLoggingDataType (*)[613])
                        &emlrtLocationLoggingDataTables[219U], countsNode);
  } else {
    b_emxInit_real_T(sp, &b_iFeatIn, 2, &o_emlrtRTEI, true);
    st.site = &ie_emlrtRSI;
    b_sum(&st, YTrain, iFeatIn);
    i5 = b_iFeatIn->size[0] * b_iFeatIn->size[1];
    b_iFeatIn->size[0] = 1;
    b_iFeatIn->size[1] = iFeatIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_iFeatIn, i5, (int32_T)sizeof
                      (real_T), &o_emlrtRTEI);
    loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      b_iFeatIn->data[i5] = iFeatIn->data[i5];
    }

    emlrt_update_log_5(sp, b_iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[224U], iFeatIn);
    emlrt_update_log_38(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[223U], countsNode);
    emxFree_real_T(&b_iFeatIn);
  }

  N = emlrt_update_log_1(XTrain->size[0], *(emlrtLocationLoggingDataType (*)[613])
    &emlrtLocationLoggingDataTables[225U]);

  /*  Return if one training point, pure node or if options for returning */
  /*  fulfilled.  A little case to deal with a binary YTrain is required. */
  if ((N < emlrt_update_log_1(muDoubleScalarMax(2.0, options->minPointsForSplit),
        *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables
        [227U])) || (depth > options->maxDepthSplit)) {
    overflow = true;
  } else {
    overflow = false;
  }

  *bLeaf = emlrt_update_log_31(overflow, *(emlrtLocationLoggingDataType (*)[613])
    &emlrtLocationLoggingDataTables[226U]);
  b_emxInit_real_T(sp, &r24, 2, &o_emlrtRTEI, true);
  if (!*bLeaf) {
    if (YTrain->size[1] > 1) {
      b_emxInit_real_T(sp, &c_iFeatIn, 2, &o_emlrtRTEI, true);
      st.site = &he_emlrtRSI;
      b_sum(&st, YTrain, iFeatIn);
      i5 = c_iFeatIn->size[0] * c_iFeatIn->size[1];
      c_iFeatIn->size[0] = 1;
      c_iFeatIn->size[1] = iFeatIn->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)c_iFeatIn, i5, (int32_T)sizeof
                        (real_T), &o_emlrtRTEI);
      loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
      for (i5 = 0; i5 < loop_ub; i5++) {
        c_iFeatIn->data[i5] = iFeatIn->data[i5];
      }

      b_emxInit_real_T(sp, &r25, 2, &o_emlrtRTEI, true);
      emlrt_update_log_5(sp, c_iFeatIn, *(emlrtLocationLoggingDataType (*)[613])
                         &emlrtLocationLoggingDataTables[231U], iFeatIn);
      b_abs(sp, iFeatIn, r24);
      i5 = r25->size[0] * r25->size[1];
      r25->size[0] = 1;
      r25->size[1] = r24->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r25, i5, (int32_T)sizeof(real_T),
                        &o_emlrtRTEI);
      loop_ub = r24->size[0] * r24->size[1];
      emxFree_real_T(&c_iFeatIn);
      for (i5 = 0; i5 < loop_ub; i5++) {
        r25->data[i5] = r24->data[i5];
      }

      emlrt_update_log_38(sp, r25, *(emlrtLocationLoggingDataType (*)[613])&
                          emlrtLocationLoggingDataTables[230U], r24);
      c_tmp_size[0] = 1;
      c_tmp_size[1] = r24->size[1];
      loop_ub = r24->size[0] * r24->size[1];
      emxFree_real_T(&r25);
      for (i5 = 0; i5 < loop_ub; i5++) {
        f_tmp_data[i5] = (r24->data[i5] > 1.0E-12);
      }

      st.site = &he_emlrtRSI;
      *bLeaf = emlrt_update_log_31(emlrt_update_log_1(c_sum(&st, f_tmp_data,
        c_tmp_size), *(emlrtLocationLoggingDataType (*)[613])&
        emlrtLocationLoggingDataTables[229U]) < 2.0,
        *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables
        [228U]);
    } else {
      dv8[0] = 0.0;
      dv8[1] = YTrain->size[0];
      c_YTrain[0] = YTrain->size[0] * YTrain->size[1];
      d_YTrain = *YTrain;
      d_YTrain.size = (int32_T *)&c_YTrain;
      d_YTrain.numDimensions = 1;
      st.site = &ge_emlrtRSI;
      bsxfun(emlrt_update_log_1(d_sum(&st, &d_YTrain),
              *(emlrtLocationLoggingDataType (*)[613])&
              emlrtLocationLoggingDataTables[234U]), dv8, bv2);
      for (i5 = 0; i5 < 2; i5++) {
        bv3[i5] = bv2[i5];
      }

      emlrt_update_log_39(bv3, *(emlrtLocationLoggingDataType (*)[613])&
                          emlrtLocationLoggingDataTables[233U], bv2);
      *bLeaf = emlrt_update_log_31(any(bv2), *(emlrtLocationLoggingDataType (*)
        [613])&emlrtLocationLoggingDataTables[232U]);
    }
  }

  if (*bLeaf) {
  } else {
    b_emxInit_real_T(sp, &iCanBeSelected, 2, &p_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &bXVaries, 2, &t_emlrtRTEI, true);

    /* % Subsample features as required for hyperplane sampling */
    st.site = &fe_emlrtRSI;
    fastUnique(&st, iFeatureNum, iFeatIn);
    emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[235U], iCanBeSelected);
    i5 = bXVaries->size[0] * bXVaries->size[1];
    bXVaries->size[0] = 1;
    bXVaries->size[1] = iCanBeSelected->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)bXVaries, i5, (int32_T)sizeof
                      (boolean_T), &o_emlrtRTEI);
    loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      bXVaries->data[i5] = muDoubleScalarIsNaN(iCanBeSelected->data[i5]);
    }

    b_emxInit_boolean_T(sp, &b_bXVaries, 2, &o_emlrtRTEI, true);
    i5 = b_bXVaries->size[0] * b_bXVaries->size[1];
    b_bXVaries->size[0] = 1;
    b_bXVaries->size[1] = bXVaries->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_bXVaries, i5, (int32_T)sizeof
                      (boolean_T), &o_emlrtRTEI);
    loop_ub = bXVaries->size[0] * bXVaries->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      b_bXVaries->data[i5] = bXVaries->data[i5];
    }

    b_emxInit_real_T(sp, &b_iCanBeSelected, 2, &o_emlrtRTEI, true);
    emlrt_update_log_28(sp, b_bXVaries, *(emlrtLocationLoggingDataType (*)[613])
                        &emlrtLocationLoggingDataTables[237U], bXVaries);
    st.site = &ee_emlrtRSI;
    eml_null_assignment(&st, iCanBeSelected, bXVaries);
    i5 = b_iCanBeSelected->size[0] * b_iCanBeSelected->size[1];
    b_iCanBeSelected->size[0] = 1;
    b_iCanBeSelected->size[1] = iCanBeSelected->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_iCanBeSelected, i5, (int32_T)
                      sizeof(real_T), &o_emlrtRTEI);
    loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
    emxFree_boolean_T(&b_bXVaries);
    for (i5 = 0; i5 < loop_ub; i5++) {
      b_iCanBeSelected->data[i5] = iCanBeSelected->data[i5];
    }

    b_emxInit_real_T(sp, &indFeatIn, 2, &q_emlrtRTEI, true);
    b_emxInit_real_T(sp, &c_iCanBeSelected, 2, &o_emlrtRTEI, true);
    emlrt_update_log_5(sp, b_iCanBeSelected, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[236U], iCanBeSelected);
    lambda = emlrt_update_log_1(muDoubleScalarMin(iCanBeSelected->size[1],
      options->lambda), *(emlrtLocationLoggingDataType (*)[613])&
      emlrtLocationLoggingDataTables[238U]);
    st.site = &de_emlrtRSI;
    randperm(&st, iCanBeSelected->size[1], lambda, iFeatIn);
    emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[239U], indFeatIn);
    i5 = c_iCanBeSelected->size[0] * c_iCanBeSelected->size[1];
    c_iCanBeSelected->size[0] = 1;
    c_iCanBeSelected->size[1] = indFeatIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_iCanBeSelected, i5, (int32_T)
                      sizeof(real_T), &o_emlrtRTEI);
    loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
    emxFree_real_T(&b_iCanBeSelected);
    for (i5 = 0; i5 < loop_ub; i5++) {
      ix = iCanBeSelected->size[1];
      apnd = indFeatIn->data[i5];
      ixstart = (int32_T)emlrtIntegerCheckFastR2012b(apnd, &f_emlrtDCI, sp);
      c_iCanBeSelected->data[i5] = iCanBeSelected->
        data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix, &xc_emlrtBCI, sp)
        - 1];
    }

    emxInit_real_T(sp, &y, 1, &o_emlrtRTEI, true);
    emxInit_real_T(sp, &b_y, 1, &o_emlrtRTEI, true);
    emlrt_update_log_5(sp, c_iCanBeSelected, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[240U], iFeatIn);
    st.site = &ce_emlrtRSI;
    d_iFeatIn[0] = iFeatIn->size[1];
    e_tmp_data = *iFeatIn;
    e_tmp_data.size = (int32_T *)&d_iFeatIn;
    e_tmp_data.numDimensions = 1;
    b_st.site = &pe_emlrtRSI;
    b_eml_sort(&b_st, &e_tmp_data, y);
    i5 = b_y->size[0];
    b_y->size[0] = y->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_y, i5, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    loop_ub = y->size[0];
    emxFree_real_T(&c_iCanBeSelected);
    for (i5 = 0; i5 < loop_ub; i5++) {
      b_y->data[i5] = y->data[i5];
    }

    b_emxInit_real_T(sp, &c_iFeatureNum, 2, &o_emlrtRTEI, true);
    emlrt_update_log_20(sp, b_y, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[242U], y);
    nm1d2 = iFeatureNum->size[1];
    i5 = c_iFeatureNum->size[0] * c_iFeatureNum->size[1];
    c_iFeatureNum->size[0] = 1;
    c_iFeatureNum->size[1] = nm1d2;
    emxEnsureCapacity(sp, (emxArray__common *)c_iFeatureNum, i5, (int32_T)sizeof
                      (real_T), &o_emlrtRTEI);
    emxFree_real_T(&b_y);
    for (i5 = 0; i5 < nm1d2; i5++) {
      c_iFeatureNum->data[c_iFeatureNum->size[0] * i5] = iFeatureNum->data[i5];
    }

    b_emxInit_boolean_T(sp, &bInMat, 2, &s_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &b_bInMat, 2, &o_emlrtRTEI, true);
    st.site = &ce_emlrtRSI;
    b_bsxfun(&st, c_iFeatureNum, y, bInMat);
    i5 = b_bInMat->size[0] * b_bInMat->size[1];
    b_bInMat->size[0] = bInMat->size[0];
    b_bInMat->size[1] = bInMat->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_bInMat, i5, (int32_T)sizeof
                      (boolean_T), &o_emlrtRTEI);
    loop_ub = bInMat->size[0] * bInMat->size[1];
    emxFree_real_T(&c_iFeatureNum);
    for (i5 = 0; i5 < loop_ub; i5++) {
      b_bInMat->data[i5] = bInMat->data[i5];
    }

    b_emxInit_boolean_T(sp, &c_bXVaries, 2, &o_emlrtRTEI, true);
    emlrt_update_log_30(sp, b_bInMat, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[241U], bInMat);
    st.site = &be_emlrtRSI;
    b_any(&st, bInMat, bXVaries);
    i5 = c_bXVaries->size[0] * c_bXVaries->size[1];
    c_bXVaries->size[0] = 1;
    c_bXVaries->size[1] = bXVaries->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_bXVaries, i5, (int32_T)sizeof
                      (boolean_T), &o_emlrtRTEI);
    loop_ub = bXVaries->size[0] * bXVaries->size[1];
    emxFree_boolean_T(&b_bInMat);
    for (i5 = 0; i5 < loop_ub; i5++) {
      c_bXVaries->data[i5] = bXVaries->data[i5];
    }

    b_emxInit_int32_T(sp, &ii, 2, &n_emlrtRTEI, true);
    emlrt_update_log_28(sp, c_bXVaries, *(emlrtLocationLoggingDataType (*)[613])
                        &emlrtLocationLoggingDataTables[244U], bXVaries);
    st.site = &be_emlrtRSI;
    b_st.site = &w_emlrtRSI;
    idx = 0;
    i5 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = bXVaries->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i5, (int32_T)sizeof(int32_T),
                      &i_emlrtRTEI);
    c_st.site = &x_emlrtRSI;
    emxFree_boolean_T(&c_bXVaries);
    if (1 > bXVaries->size[1]) {
      overflow = false;
    } else {
      overflow = (bXVaries->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    nm1d2 = 1;
    exitg8 = false;
    while ((!exitg8) && (nm1d2 <= bXVaries->size[1])) {
      guard4 = false;
      if (bXVaries->data[nm1d2 - 1]) {
        idx++;
        ii->data[idx - 1] = nm1d2;
        if (idx >= bXVaries->size[1]) {
          exitg8 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }

      if (guard4) {
        nm1d2++;
      }
    }

    if (idx <= bXVaries->size[1]) {
    } else {
      c_y = NULL;
      m3 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&c_y, m3);
      c_st.site = &bq_emlrtRSI;
      f_error(&c_st, c_y, &j_emlrtMCI);
    }

    if (bXVaries->size[1] == 1) {
      if (idx == 0) {
        i5 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i5, (int32_T)sizeof
                          (int32_T), &o_emlrtRTEI);
      }
    } else {
      if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      b_emxInit_int32_T(&b_st, &b_ii, 2, &o_emlrtRTEI, true);
      i5 = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = 1;
      b_ii->size[1] = loop_ub;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i5, (int32_T)sizeof
                        (int32_T), &o_emlrtRTEI);
      for (i5 = 0; i5 < loop_ub; i5++) {
        b_ii->data[b_ii->size[0] * i5] = ii->data[i5];
      }

      i5 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = b_ii->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i5, (int32_T)sizeof
                        (int32_T), &o_emlrtRTEI);
      loop_ub = b_ii->size[1];
      for (i5 = 0; i5 < loop_ub; i5++) {
        ii->data[ii->size[0] * i5] = b_ii->data[b_ii->size[0] * i5];
      }

      emxFree_int32_T(&b_ii);
    }

    b_emxInit_real_T(&b_st, &c_ii, 2, &o_emlrtRTEI, true);
    i5 = c_ii->size[0] * c_ii->size[1];
    c_ii->size[0] = 1;
    c_ii->size[1] = ii->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_ii, i5, (int32_T)sizeof(real_T),
                      &o_emlrtRTEI);
    loop_ub = ii->size[0] * ii->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      c_ii->data[i5] = ii->data[i5];
    }

    b_emxInit_real_T(sp, &c_XTrain, 2, &o_emlrtRTEI, true);
    emlrt_update_log_5(sp, c_ii, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[243U], iIn);

    /*  Check for variation along selected dimensions and resample features that */
    /*  have no variation */
    loop_ub = XTrain->size[0];
    i5 = c_XTrain->size[0] * c_XTrain->size[1];
    c_XTrain->size[0] = loop_ub;
    c_XTrain->size[1] = iIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_XTrain, i5, (int32_T)sizeof
                      (real_T), &o_emlrtRTEI);
    i = iIn->size[1];
    emxFree_real_T(&c_ii);
    for (i5 = 0; i5 < i; i5++) {
      for (ix = 0; ix < loop_ub; ix++) {
        ixstart = XTrain->size[1];
        nm1d2 = (int32_T)iIn->data[iIn->size[0] * i5];
        c_XTrain->data[ix + c_XTrain->size[0] * i5] = XTrain->data[ix +
          XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
          &yc_emlrtBCI, sp) - 1)];
      }
    }

    b_emxInit_boolean_T(sp, &d_bXVaries, 2, &o_emlrtRTEI, true);
    st.site = &ae_emlrtRSI;
    queryIfColumnsVary(&st, c_XTrain, options->XVariationTol, bXVaries);
    i5 = d_bXVaries->size[0] * d_bXVaries->size[1];
    d_bXVaries->size[0] = 1;
    d_bXVaries->size[1] = bXVaries->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)d_bXVaries, i5, (int32_T)sizeof
                      (boolean_T), &o_emlrtRTEI);
    loop_ub = bXVaries->size[0] * bXVaries->size[1];
    emxFree_real_T(&c_XTrain);
    for (i5 = 0; i5 < loop_ub; i5++) {
      d_bXVaries->data[i5] = bXVaries->data[i5];
    }

    emlrt_update_log_28(sp, d_bXVaries, *(emlrtLocationLoggingDataType (*)[613])
                        &emlrtLocationLoggingDataTables[245U], bXVaries);
    emxFree_boolean_T(&d_bXVaries);
    emxInit_boolean_T(sp, &bRemainsSelected, 1, &v_emlrtRTEI, true);
    b_emxInit_real_T(sp, &muX, 2, &x_emlrtRTEI, true);
    emxInit_int32_T(sp, &d_ii, 1, &n_emlrtRTEI, true);
    st.site = &yd_emlrtRSI;
    if (!emlrt_update_log_31(all(&st, bXVaries), *(emlrtLocationLoggingDataType
          (*)[613])&emlrtLocationLoggingDataTables[246U])) {
      b_emxInit_real_T(sp, &iInNew, 2, &u_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_iIn, 2, &o_emlrtRTEI, true);
      emlrt_update_log_5(sp, iIn, *(emlrtLocationLoggingDataType (*)[613])&
                         emlrtLocationLoggingDataTables[247U], iInNew);
      nSelected = emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])
        &emlrtLocationLoggingDataTables[248U]);
      st.site = &xd_emlrtRSI;
      eml_li_find(&st, bXVaries, ii);
      i5 = b_iIn->size[0] * b_iIn->size[1];
      b_iIn->size[0] = 1;
      b_iIn->size[1] = ii->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_iIn, i5, (int32_T)sizeof
                        (real_T), &o_emlrtRTEI);
      loop_ub = ii->size[0] * ii->size[1];
      for (i5 = 0; i5 < loop_ub; i5++) {
        ix = iIn->size[1];
        ixstart = ii->data[i5];
        b_iIn->data[i5] = iIn->data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
          ix, &ad_emlrtBCI, sp) - 1];
      }

      emlrt_update_log_5(sp, b_iIn, *(emlrtLocationLoggingDataType (*)[613])&
                         emlrtLocationLoggingDataTables[249U], iIn);
      emxFree_real_T(&b_iIn);
      b_emxInit_int32_T(sp, &r26, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &d_iCanBeSelected, 2, &o_emlrtRTEI, true);
      emxInit_boolean_T(sp, &b_bRemainsSelected, 1, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &r27, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &r28, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &e_bXVaries, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r29, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r30, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &f_bXVaries, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &g_bXVaries, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &d_XTrain, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_ii, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &h_bXVaries, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &c_bInMat, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &d_iFeatureNum, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_iCanBeSelected, 2, &o_emlrtRTEI, true);
      b_emxInit_int32_T(sp, &f_ii, 2, &o_emlrtRTEI, true);
      exitg6 = false;
      do {
        exitg11 = 0;
        st.site = &wd_emlrtRSI;
        if ((!exitg6) && ((!emlrt_update_log_31(all(&st, bXVaries),
               *(emlrtLocationLoggingDataType (*)[613])&
               emlrtLocationLoggingDataTables[250U])) && (lambda > 0.0))) {
          i5 = f_bXVaries->size[0] * f_bXVaries->size[1];
          f_bXVaries->size[0] = 1;
          f_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)f_bXVaries, i5, (int32_T)
                            sizeof(boolean_T), &o_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            f_bXVaries->data[i5] = !bXVaries->data[i5];
          }

          st.site = &vd_emlrtRSI;
          eml_li_find(&st, f_bXVaries, ii);
          i5 = r26->size[0] * r26->size[1];
          r26->size[0] = 1;
          r26->size[1] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r26, i5, (int32_T)sizeof
                            (int32_T), &o_emlrtRTEI);
          loop_ub = ii->size[0] * ii->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            ix = iFeatureNum->size[1];
            ixstart = iInNew->size[1];
            nm1d2 = ii->data[i5];
            ixstart = (int32_T)iInNew->data[emlrtDynamicBoundsCheckFastR2012b
              (nm1d2, 1, ixstart, &cd_emlrtBCI, sp) - 1];
            r26->data[i5] = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
              &bd_emlrtBCI, sp);
          }

          i5 = r29->size[0] * r29->size[1];
          r29->size[0] = 1;
          r29->size[1] = r26->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r29, i5, (int32_T)sizeof
                            (real_T), &o_emlrtRTEI);
          loop_ub = r26->size[0] * r26->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            r29->data[i5] = rtNaN;
          }

          emlrt_update_log_5(sp, r29, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[251U], r30);
          loop_ub = r30->size[0] * r30->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            iFeatureNum->data[r26->data[i5] - 1] = r30->data[i5];
          }

          i5 = e_bXVaries->size[0] * e_bXVaries->size[1];
          e_bXVaries->size[0] = 1;
          e_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)e_bXVaries, i5, (int32_T)
                            sizeof(boolean_T), &o_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            e_bXVaries->data[i5] = !bXVaries->data[i5];
          }

          st.site = &ud_emlrtRSI;
          eml_li_find(&st, e_bXVaries, ii);
          i5 = d_ii->size[0];
          d_ii->size[0] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)d_ii, i5, (int32_T)sizeof
                            (int32_T), &o_emlrtRTEI);
          loop_ub = ii->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            ix = bInMat->size[1];
            ixstart = iInNew->size[1];
            nm1d2 = ii->data[ii->size[0] * i5];
            ixstart = (int32_T)iInNew->data[emlrtDynamicBoundsCheckFastR2012b
              (nm1d2, 1, ixstart, &ed_emlrtBCI, sp) - 1];
            d_ii->data[i5] = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
              &dd_emlrtBCI, sp);
          }

          i5 = bInMat->size[0];
          ix = r27->size[0] * r27->size[1];
          r27->size[0] = i5;
          emxEnsureCapacity(sp, (emxArray__common *)r27, ix, (int32_T)sizeof
                            (boolean_T), &o_emlrtRTEI);
          nm1d2 = d_ii->size[0];
          ix = r27->size[0] * r27->size[1];
          r27->size[1] = nm1d2;
          emxEnsureCapacity(sp, (emxArray__common *)r27, ix, (int32_T)sizeof
                            (boolean_T), &o_emlrtRTEI);
          loop_ub = i5 * d_ii->size[0];
          for (i5 = 0; i5 < loop_ub; i5++) {
            r27->data[i5] = false;
          }

          emlrt_update_log_30(sp, r27, *(emlrtLocationLoggingDataType (*)[613])&
                              emlrtLocationLoggingDataTables[252U], r28);
          loop_ub = r28->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            i = r28->size[0];
            for (ix = 0; ix < i; ix++) {
              bInMat->data[ix + bInMat->size[0] * (d_ii->data[i5] - 1)] =
                r28->data[ix + r28->size[0] * i5];
            }
          }

          st.site = &td_emlrtRSI;
          c_any(&st, bInMat, bRemainsSelected);
          i5 = b_bRemainsSelected->size[0];
          b_bRemainsSelected->size[0] = bRemainsSelected->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)b_bRemainsSelected, i5,
                            (int32_T)sizeof(boolean_T), &o_emlrtRTEI);
          loop_ub = bRemainsSelected->size[0];
          for (i5 = 0; i5 < loop_ub; i5++) {
            b_bRemainsSelected->data[i5] = bRemainsSelected->data[i5];
          }

          emlrt_update_log_19(sp, b_bRemainsSelected,
                              *(emlrtLocationLoggingDataType (*)[613])&
                              emlrtLocationLoggingDataTables[253U],
                              bRemainsSelected);
          st.site = &sd_emlrtRSI;
          nSelected = emlrt_update_log_1(nSelected + emlrt_update_log_1(d_sum
            (&st, bRemainsSelected), *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[255U]),
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[254U]);
          st.site = &rd_emlrtRSI;
          b_eml_null_assignment(&st, iCanBeSelected, indFeatIn);
          i5 = d_iCanBeSelected->size[0] * d_iCanBeSelected->size[1];
          d_iCanBeSelected->size[0] = 1;
          d_iCanBeSelected->size[1] = iCanBeSelected->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)d_iCanBeSelected, i5,
                            (int32_T)sizeof(real_T), &o_emlrtRTEI);
          loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            d_iCanBeSelected->data[i5] = iCanBeSelected->data[i5];
          }

          emlrt_update_log_5(sp, d_iCanBeSelected,
                             *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[256U],
                             iCanBeSelected);
          lambda = emlrt_update_log_1(lambda - nSelected,
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[258U]);
          lambda = emlrt_update_log_1(muDoubleScalarMin(iCanBeSelected->size[1],
            lambda), *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[257U]);
          if (lambda < 1.0) {
            exitg6 = true;
          } else {
            st.site = &qd_emlrtRSI;
            randperm(&st, iCanBeSelected->size[1], lambda, iFeatIn);
            emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[259U], indFeatIn);
            i5 = e_iCanBeSelected->size[0] * e_iCanBeSelected->size[1];
            e_iCanBeSelected->size[0] = 1;
            e_iCanBeSelected->size[1] = indFeatIn->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)e_iCanBeSelected, i5,
                              (int32_T)sizeof(real_T), &o_emlrtRTEI);
            loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              ix = iCanBeSelected->size[1];
              apnd = indFeatIn->data[i5];
              ixstart = (int32_T)emlrtIntegerCheckFastR2012b(apnd, &g_emlrtDCI,
                sp);
              e_iCanBeSelected->data[i5] = iCanBeSelected->
                data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
                &fd_emlrtBCI, sp) - 1];
            }

            emlrt_update_log_5(sp, e_iCanBeSelected,
                               *(emlrtLocationLoggingDataType (*)[613])&
                               emlrtLocationLoggingDataTables[260U], iFeatIn);
            nm1d2 = iFeatureNum->size[1];
            i5 = d_iFeatureNum->size[0] * d_iFeatureNum->size[1];
            d_iFeatureNum->size[0] = 1;
            d_iFeatureNum->size[1] = nm1d2;
            emxEnsureCapacity(sp, (emxArray__common *)d_iFeatureNum, i5,
                              (int32_T)sizeof(real_T), &o_emlrtRTEI);
            for (i5 = 0; i5 < nm1d2; i5++) {
              d_iFeatureNum->data[d_iFeatureNum->size[0] * i5] =
                iFeatureNum->data[i5];
            }

            e_iFeatIn[0] = iFeatIn->size[1];
            e_tmp_data = *iFeatIn;
            e_tmp_data.size = (int32_T *)&e_iFeatIn;
            e_tmp_data.numDimensions = 1;
            st.site = &pd_emlrtRSI;
            b_bsxfun(&st, d_iFeatureNum, &e_tmp_data, bInMat);
            i5 = c_bInMat->size[0] * c_bInMat->size[1];
            c_bInMat->size[0] = bInMat->size[0];
            c_bInMat->size[1] = bInMat->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)c_bInMat, i5, (int32_T)
                              sizeof(boolean_T), &o_emlrtRTEI);
            loop_ub = bInMat->size[0] * bInMat->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              c_bInMat->data[i5] = bInMat->data[i5];
            }

            emlrt_update_log_30(sp, c_bInMat, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[261U], bInMat);
            st.site = &od_emlrtRSI;
            b_any(&st, bInMat, bXVaries);
            i5 = h_bXVaries->size[0] * h_bXVaries->size[1];
            h_bXVaries->size[0] = 1;
            h_bXVaries->size[1] = bXVaries->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)h_bXVaries, i5, (int32_T)
                              sizeof(boolean_T), &o_emlrtRTEI);
            loop_ub = bXVaries->size[0] * bXVaries->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              h_bXVaries->data[i5] = bXVaries->data[i5];
            }

            emlrt_update_log_28(sp, h_bXVaries, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[263U], bXVaries);
            st.site = &od_emlrtRSI;
            b_st.site = &w_emlrtRSI;
            idx = 0;
            i5 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = bXVaries->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)ii, i5, (int32_T)sizeof
                              (int32_T), &i_emlrtRTEI);
            c_st.site = &x_emlrtRSI;
            if (1 > bXVaries->size[1]) {
              overflow = false;
            } else {
              overflow = (bXVaries->size[1] > 2147483646);
            }

            if (overflow) {
              d_st.site = &v_emlrtRSI;
              check_forloop_overflow_error(&d_st);
            }

            nm1d2 = 1;
            exitg7 = false;
            while ((!exitg7) && (nm1d2 <= bXVaries->size[1])) {
              guard3 = false;
              if (bXVaries->data[nm1d2 - 1]) {
                idx++;
                ii->data[idx - 1] = nm1d2;
                if (idx >= bXVaries->size[1]) {
                  exitg7 = true;
                } else {
                  guard3 = true;
                }
              } else {
                guard3 = true;
              }

              if (guard3) {
                nm1d2++;
              }
            }

            if (idx <= bXVaries->size[1]) {
            } else {
              d_y = NULL;
              m3 = emlrtCreateString("Assertion failed.");
              emlrtAssign(&d_y, m3);
              c_st.site = &bq_emlrtRSI;
              f_error(&c_st, d_y, &j_emlrtMCI);
            }

            if (bXVaries->size[1] == 1) {
              if (idx == 0) {
                i5 = ii->size[0] * ii->size[1];
                ii->size[0] = 1;
                ii->size[1] = 0;
                emxEnsureCapacity(&b_st, (emxArray__common *)ii, i5, (int32_T)
                                  sizeof(int32_T), &o_emlrtRTEI);
              }
            } else {
              if (1 > idx) {
                loop_ub = 0;
              } else {
                loop_ub = idx;
              }

              i5 = f_ii->size[0] * f_ii->size[1];
              f_ii->size[0] = 1;
              f_ii->size[1] = loop_ub;
              emxEnsureCapacity(&b_st, (emxArray__common *)f_ii, i5, (int32_T)
                                sizeof(int32_T), &o_emlrtRTEI);
              for (i5 = 0; i5 < loop_ub; i5++) {
                f_ii->data[f_ii->size[0] * i5] = ii->data[i5];
              }

              i5 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = f_ii->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)ii, i5, (int32_T)
                                sizeof(int32_T), &o_emlrtRTEI);
              loop_ub = f_ii->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                ii->data[ii->size[0] * i5] = f_ii->data[f_ii->size[0] * i5];
              }
            }

            i5 = e_ii->size[0] * e_ii->size[1];
            e_ii->size[0] = 1;
            e_ii->size[1] = ii->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)e_ii, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            loop_ub = ii->size[0] * ii->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              e_ii->data[i5] = ii->data[i5];
            }

            emlrt_update_log_5(sp, e_ii, *(emlrtLocationLoggingDataType (*)[613])
                               &emlrtLocationLoggingDataTables[262U], iInNew);
            loop_ub = XTrain->size[0];
            i5 = d_XTrain->size[0] * d_XTrain->size[1];
            d_XTrain->size[0] = loop_ub;
            d_XTrain->size[1] = iInNew->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)d_XTrain, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            i = iInNew->size[1];
            for (i5 = 0; i5 < i; i5++) {
              for (ix = 0; ix < loop_ub; ix++) {
                ixstart = XTrain->size[1];
                nm1d2 = (int32_T)iInNew->data[iInNew->size[0] * i5];
                d_XTrain->data[ix + d_XTrain->size[0] * i5] = XTrain->data[ix +
                  XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1,
                  ixstart, &gd_emlrtBCI, sp) - 1)];
              }
            }

            st.site = &nd_emlrtRSI;
            queryIfColumnsVary(&st, d_XTrain, options->XVariationTol, bXVaries);
            i5 = g_bXVaries->size[0] * g_bXVaries->size[1];
            g_bXVaries->size[0] = 1;
            g_bXVaries->size[1] = bXVaries->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)g_bXVaries, i5, (int32_T)
                              sizeof(boolean_T), &o_emlrtRTEI);
            loop_ub = bXVaries->size[0] * bXVaries->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              g_bXVaries->data[i5] = bXVaries->data[i5];
            }

            emlrt_update_log_28(sp, g_bXVaries, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[264U], bXVaries);
            st.site = &md_emlrtRSI;
            b_st.site = &md_emlrtRSI;
            eml_li_find(&b_st, bXVaries, ii);
            i5 = muX->size[0] * muX->size[1];
            muX->size[0] = 1;
            muX->size[1] = iIn->size[1] + ii->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)muX, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            loop_ub = iIn->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              muX->data[muX->size[0] * i5] = iIn->data[iIn->size[0] * i5];
            }

            loop_ub = ii->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              ix = iInNew->size[1];
              ixstart = ii->data[ii->size[0] * i5];
              muX->data[muX->size[0] * (i5 + iIn->size[1])] = iInNew->
                data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
                &hd_emlrtBCI, &st) - 1];
            }

            b_st.site = &pe_emlrtRSI;
            eml_sort(&b_st, muX, iFeatIn);
            emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[265U], iIn);
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }
        } else {
          exitg11 = 1;
        }
      } while (exitg11 == 0);

      emxFree_int32_T(&f_ii);
      emxFree_real_T(&e_iCanBeSelected);
      emxFree_real_T(&d_iFeatureNum);
      emxFree_boolean_T(&c_bInMat);
      emxFree_boolean_T(&h_bXVaries);
      emxFree_real_T(&e_ii);
      emxFree_real_T(&d_XTrain);
      emxFree_boolean_T(&g_bXVaries);
      emxFree_boolean_T(&f_bXVaries);
      emxFree_real_T(&r30);
      emxFree_real_T(&r29);
      emxFree_boolean_T(&e_bXVaries);
      emxFree_boolean_T(&r28);
      emxFree_boolean_T(&r27);
      emxFree_boolean_T(&b_bRemainsSelected);
      emxFree_real_T(&d_iCanBeSelected);
      emxFree_int32_T(&r26);
      emxFree_real_T(&iInNew);
    }

    emxFree_real_T(&indFeatIn);
    emxFree_real_T(&iCanBeSelected);
    b_emxInit_real_T(sp, &e_iFeatureNum, 2, &o_emlrtRTEI, true);
    i5 = e_iFeatureNum->size[0] * e_iFeatureNum->size[1];
    e_iFeatureNum->size[0] = 1;
    e_iFeatureNum->size[1] = iFeatureNum->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)e_iFeatureNum, i5, (int32_T)sizeof
                      (real_T), &o_emlrtRTEI);
    loop_ub = iFeatureNum->size[0] * iFeatureNum->size[1];
    for (i5 = 0; i5 < loop_ub; i5++) {
      e_iFeatureNum->data[i5] = iFeatureNum->data[i5];
    }

    st.site = &ld_emlrtRSI;
    randomSubspace(&st, e_iFeatureNum, options->lambda, options->XVariationTol,
                   XTrain, iFeatIn);
    emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[266U], iIn);
    emxFree_real_T(&e_iFeatureNum);
    if (iIn->size[1] == 0) {
      /*  This means that there was no variation along any feature, therefore */
      /*  exit. */
      *bLeaf = emlrt_update_log_31(true, *(emlrtLocationLoggingDataType (*)[613])
        &emlrtLocationLoggingDataTables[267U]);
    } else {
      /* % Projection bootstrap if required */
      emxInit_real_T(sp, &iTrainThis, 1, &w_emlrtRTEI, true);
      b_emxInit_real_T(sp, &XTrainBag, 2, &ib_emlrtRTEI, true);
      if (options->bProjBoot) {
        b_emxInit_real_T(sp, &e_XTrain, 2, &o_emlrtRTEI, true);
        st.site = &kd_emlrtRSI;
        randi(&st, XTrain->size[0], XTrain->size[0], y);
        emlrt_update_log_20(sp, y, *(emlrtLocationLoggingDataType (*)[613])&
                            emlrtLocationLoggingDataTables[268U], iTrainThis);
        i5 = e_XTrain->size[0] * e_XTrain->size[1];
        e_XTrain->size[0] = iTrainThis->size[0];
        e_XTrain->size[1] = iIn->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)e_XTrain, i5, (int32_T)sizeof
                          (real_T), &o_emlrtRTEI);
        loop_ub = iIn->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          i = iTrainThis->size[0];
          for (ix = 0; ix < i; ix++) {
            ixstart = XTrain->size[0];
            apnd = iTrainThis->data[ix];
            nm1d2 = (int32_T)emlrtIntegerCheckFastR2012b(apnd, &h_emlrtDCI, sp);
            idx = XTrain->size[1];
            cdiff = (int32_T)iIn->data[iIn->size[0] * i5];
            e_XTrain->data[ix + e_XTrain->size[0] * i5] = XTrain->data
              [(emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                 &jd_emlrtBCI, sp) + XTrain->size[0] *
                (emlrtDynamicBoundsCheckFastR2012b(cdiff, 1, idx, &kd_emlrtBCI,
                  sp) - 1)) - 1];
          }
        }

        b_emxInit_boolean_T(sp, &e_YTrain, 2, &o_emlrtRTEI, true);
        emlrt_update_log_2(sp, e_XTrain, *(emlrtLocationLoggingDataType (*)[613])
                           &emlrtLocationLoggingDataTables[269U], XTrainBag);
        loop_ub = YTrain->size[1];
        i5 = e_YTrain->size[0] * e_YTrain->size[1];
        e_YTrain->size[0] = iTrainThis->size[0];
        e_YTrain->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)e_YTrain, i5, (int32_T)sizeof
                          (boolean_T), &o_emlrtRTEI);
        emxFree_real_T(&e_XTrain);
        for (i5 = 0; i5 < loop_ub; i5++) {
          i = iTrainThis->size[0];
          for (ix = 0; ix < i; ix++) {
            ixstart = YTrain->size[0];
            nm1d2 = (int32_T)iTrainThis->data[ix];
            e_YTrain->data[ix + e_YTrain->size[0] * i5] = YTrain->data
              [(emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                 &ld_emlrtBCI, sp) + YTrain->size[0] * i5) - 1];
          }
        }

        emlrt_update_log_30(sp, e_YTrain, *(emlrtLocationLoggingDataType (*)[613])
                            &emlrtLocationLoggingDataTables[270U], bInMat);
        emxFree_boolean_T(&e_YTrain);
      } else {
        b_emxInit_real_T(sp, &f_XTrain, 2, &o_emlrtRTEI, true);
        loop_ub = XTrain->size[0];
        i5 = f_XTrain->size[0] * f_XTrain->size[1];
        f_XTrain->size[0] = loop_ub;
        f_XTrain->size[1] = iIn->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)f_XTrain, i5, (int32_T)sizeof
                          (real_T), &o_emlrtRTEI);
        i = iIn->size[1];
        for (i5 = 0; i5 < i; i5++) {
          for (ix = 0; ix < loop_ub; ix++) {
            ixstart = XTrain->size[1];
            nm1d2 = (int32_T)iIn->data[iIn->size[0] * i5];
            f_XTrain->data[ix + f_XTrain->size[0] * i5] = XTrain->data[ix +
              XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1,
              ixstart, &id_emlrtBCI, sp) - 1)];
          }
        }

        emlrt_update_log_2(sp, f_XTrain, *(emlrtLocationLoggingDataType (*)[613])
                           &emlrtLocationLoggingDataTables[271U], XTrainBag);
        emlrt_update_log_30(sp, YTrain, *(emlrtLocationLoggingDataType (*)[613])
                            &emlrtLocationLoggingDataTables[272U], bInMat);
        emxFree_real_T(&f_XTrain);
      }

      b_emxInit_boolean_T(sp, &i_bXVaries, 2, &o_emlrtRTEI, true);
      st.site = &jd_emlrtRSI;
      queryIfColumnsVary(&st, XTrainBag, options->XVariationTol, bXVaries);
      i5 = i_bXVaries->size[0] * i_bXVaries->size[1];
      i_bXVaries->size[0] = 1;
      i_bXVaries->size[1] = bXVaries->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)i_bXVaries, i5, (int32_T)sizeof
                        (boolean_T), &o_emlrtRTEI);
      loop_ub = bXVaries->size[0] * bXVaries->size[1];
      for (i5 = 0; i5 < loop_ub; i5++) {
        i_bXVaries->data[i5] = bXVaries->data[i5];
      }

      emlrt_update_log_28(sp, i_bXVaries, *(emlrtLocationLoggingDataType (*)[613])
                          &emlrtLocationLoggingDataTables[273U], bXVaries);
      emxFree_boolean_T(&i_bXVaries);
      emxInit_real_T(sp, &splitGains, 1, &y_emlrtRTEI, true);
      emxInit_real_T(sp, &iSplits, 1, &ab_emlrtRTEI, true);
      emxInit_real_T(sp, &UTrainSort, 1, &bb_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &YTrainSort, 2, &cb_emlrtRTEI, true);
      b_emxInit_real_T(sp, &LeftCumCounts, 2, &db_emlrtRTEI, true);
      b_emxInit_real_T(sp, &RightCumCounts, 2, &eb_emlrtRTEI, true);
      b_emxInit_real_T(sp, &pL, 2, &fb_emlrtRTEI, true);
      emxInit_real_T(sp, &metricLeft, 1, &gb_emlrtRTEI, true);
      emxInit_real_T(sp, &metricRight, 1, &hb_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r1, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &q2, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_projMat, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &YTrainBag, 2, &jb_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_projMat, 2, &kb_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r31, 2, &o_emlrtRTEI, true);
      emxInit_int32_T(sp, &r32, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_y, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r33, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r34, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r35, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &d_projMat, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r36, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &b_UTrainSort, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &c_UTrainSort, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &b_XTrainBag, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_projMat, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &g_ii, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &f_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &g_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &b_splitGains, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r37, 1, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &r38, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r39, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r40, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &f_projMat, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_XTrainBag, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r41, 1, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &j_bXVaries, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &g_projMat, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r42, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &f_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &g_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r43, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r44, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &d_XTrainBag, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_YTrainBag, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_YTrainBag, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_q2, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &h_ii, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &h_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &i_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &b_iTrainThis, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &metricCurrent, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &j_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &k_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &c_iTrainThis, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &l_y, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &h_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &i_iFeatIn, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r45, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r46, 1, &o_emlrtRTEI, true);
      emxInit_boolean_T(sp, &c_bRemainsSelected, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r47, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r48, 1, &o_emlrtRTEI, true);
      emxInit_boolean_T(sp, &d_bRemainsSelected, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r49, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r50, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &m_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &n_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r51, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r52, 1, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &b_RightCumCounts, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_RightCumCounts, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r53, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &o_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &p_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r54, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r55, 1, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &b_pL, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_pL, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r56, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r57, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &q_y, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r58, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r59, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r_y, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r60, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &s_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &t_y, 1, &o_emlrtRTEI, true);
      emxInit_boolean_T(sp, &u_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &v_y, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_LeftCumCounts, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &w_y, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r61, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &x_y, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r62, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &y_y, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &j_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &f_YTrain, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &i_ii, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &d_UTrainSort, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &e_XTrainBag, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r63, 1, &o_emlrtRTEI, true);
      emxInit_boolean_T(sp, &ab_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &bb_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &cb_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &db_y, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &d_YTrainBag, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_q2, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_YTrainBag, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_r1, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &h_projMat, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &r64, 1, &o_emlrtRTEI, true);
      emxInit_boolean_T(sp, &eb_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &fb_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &gb_y, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &hb_y, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &k_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_r1, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &i_projMat, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &l_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &m_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &n_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &o_iFeatIn, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &d_bInMat, 2, &o_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &k_bXVaries, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &g_XTrain, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r65, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &p_iFeatIn, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &c_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &d_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &e_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &f_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &g_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &h_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &i_iIn, 1, &o_emlrtRTEI, true);
      emxInit_int32_T(sp, &j_ii, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &j_projMat, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &q_iFeatIn, 1, &o_emlrtRTEI, true);
      emxInit_int32_T(sp, &k_ii, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &j_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &k_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &l_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &m_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &n_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &o_iIn, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &p_iIn, 1, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_muX, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &f_XTrainBag, 2, &o_emlrtRTEI, true);
      b_emxInit_real_T(sp, &k_projMat, 2, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &b_emlrtLocationLoggingDataTable, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &c_emlrtLocationLoggingDataTable, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &d_emlrtLocationLoggingDataTable, 1, &o_emlrtRTEI, true);
      emxInit_real_T(sp, &e_UTrainSort, 1, &o_emlrtRTEI, true);
      guard1 = false;
      guard2 = false;
      b_guard3 = false;
      b_guard4 = false;
      guard5 = false;
      st.site = &id_emlrtRSI;
      if (!emlrt_update_log_31(d_any(&st, bXVaries),
           *(emlrtLocationLoggingDataType (*)[613])&
           emlrtLocationLoggingDataTables[274U])) {
        b_guard4 = true;
      } else if (bInMat->size[1] > 1) {
        st.site = &id_emlrtRSI;
        b_sum(&st, bInMat, iFeatIn);
        i5 = p_iFeatIn->size[0] * p_iFeatIn->size[1];
        p_iFeatIn->size[0] = 1;
        p_iFeatIn->size[1] = iFeatIn->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)p_iFeatIn, i5, (int32_T)sizeof
                          (real_T), &o_emlrtRTEI);
        loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          p_iFeatIn->data[i5] = iFeatIn->data[i5];
        }

        emlrt_update_log_5(sp, p_iFeatIn, *(emlrtLocationLoggingDataType (*)[613])
                           &emlrtLocationLoggingDataTables[277U], iFeatIn);
        b_abs(sp, iFeatIn, r24);
        i5 = r65->size[0] * r65->size[1];
        r65->size[0] = 1;
        r65->size[1] = r24->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r65, i5, (int32_T)sizeof
                          (real_T), &o_emlrtRTEI);
        loop_ub = r24->size[0] * r24->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          r65->data[i5] = r24->data[i5];
        }

        emlrt_update_log_38(sp, r65, *(emlrtLocationLoggingDataType (*)[613])&
                            emlrtLocationLoggingDataTables[276U], r24);
        d_tmp_size[0] = 1;
        d_tmp_size[1] = r24->size[1];
        loop_ub = r24->size[0] * r24->size[1];
        for (i5 = 0; i5 < loop_ub; i5++) {
          f_tmp_data[i5] = (r24->data[i5] > 1.0E-12);
        }

        st.site = &id_emlrtRSI;
        if (emlrt_update_log_1(c_sum(&st, f_tmp_data, d_tmp_size),
                               *(emlrtLocationLoggingDataType (*)[613])&
                               emlrtLocationLoggingDataTables[275U]) < 2.0) {
          b_guard4 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }

      if (guard5) {
        if (bInMat->size[1] == 1) {
          dv9[0] = 0.0;
          dv9[1] = bInMat->size[0];
          e_bInMat[0] = bInMat->size[0];
          d_YTrain = *bInMat;
          d_YTrain.size = (int32_T *)&e_bInMat;
          d_YTrain.numDimensions = 1;
          st.site = &id_emlrtRSI;
          bsxfun(emlrt_update_log_1(d_sum(&st, &d_YTrain),
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[280U]), dv9, bv2);
          for (i5 = 0; i5 < 2; i5++) {
            bv3[i5] = bv2[i5];
          }

          emlrt_update_log_39(bv3, *(emlrtLocationLoggingDataType (*)[613])&
                              emlrtLocationLoggingDataTables[279U], bv2);
          if (emlrt_update_log_31(any(bv2), *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[278U])) {
            b_guard4 = true;
          } else {
            b_guard3 = true;
          }
        } else {
          b_guard3 = true;
        }
      }

      if (b_guard4) {
        if (!options->bContinueProjBootDegenerate) {
          *bLeaf = emlrt_update_log_31(true, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[281U]);
        } else {
          loop_ub = XTrain->size[0];
          i5 = g_XTrain->size[0] * g_XTrain->size[1];
          g_XTrain->size[0] = loop_ub;
          g_XTrain->size[1] = iIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)g_XTrain, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          i = iIn->size[1];
          for (i5 = 0; i5 < i; i5++) {
            for (ix = 0; ix < loop_ub; ix++) {
              ixstart = XTrain->size[1];
              nm1d2 = (int32_T)iIn->data[iIn->size[0] * i5];
              g_XTrain->data[ix + g_XTrain->size[0] * i5] = XTrain->data[ix +
                XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1,
                ixstart, &md_emlrtBCI, sp) - 1)];
            }
          }

          emlrt_update_log_2(sp, g_XTrain, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[282U], XTrainBag);
          emlrt_update_log_30(sp, YTrain, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[283U], bInMat);
          b_guard3 = true;
        }
      }

      if (b_guard3) {
        st.site = &hd_emlrtRSI;
        if ((XTrainBag->size[0] == 2) || emlrt_update_log_31
            (queryIfOnlyTwoUniqueRows(&st, XTrainBag),
             *(emlrtLocationLoggingDataType (*)[613])&
             emlrtLocationLoggingDataTables[284U])) {
          /*  Check for only having two points */
          /*  If there are only two points setup a maximum marginal split between the points */
          st.site = &gd_emlrtRSI;
          twoPointMaxMarginSplit(&st, XTrainBag, bInMat, options->XVariationTol,
            &bSplit, b_projMat, partitionPoint_data, partitionPoint_size);
          bSplit = emlrt_update_log_31(bSplit, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[430U]);
          emlrt_update_log_2(sp, b_projMat, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[429U], c_projMat);
          l_ii[0] = partitionPoint_size[0];
          l_ii[1] = partitionPoint_size[1];
          loop_ub = partitionPoint_size[0] * partitionPoint_size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            tmp_data[i5] = partitionPoint_data[i5];
          }

          emlrt_update_log_34(tmp_data, l_ii, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[428U], partitionPoint_data,
                              partitionPoint_size);
          if (!bSplit) {
            *bLeaf = emlrt_update_log_31(true, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[285U]);
          } else {
            st.site = &fd_emlrtRSI;
            loop_ub = XTrain->size[0];
            i5 = XTrainBag->size[0] * XTrainBag->size[1];
            XTrainBag->size[0] = loop_ub;
            XTrainBag->size[1] = iIn->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)XTrainBag, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            i = iIn->size[1];
            for (i5 = 0; i5 < i; i5++) {
              for (ix = 0; ix < loop_ub; ix++) {
                ixstart = XTrain->size[1];
                nm1d2 = (int32_T)iIn->data[iIn->size[0] * i5];
                XTrainBag->data[ix + XTrainBag->size[0] * i5] = XTrain->data[ix
                  + XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(nm1d2,
                  1, ixstart, &je_emlrtBCI, &st) - 1)];
              }
            }

            b_st.site = &di_emlrtRSI;
            i5 = j_iIn->size[0];
            j_iIn->size[0] = iIn->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)j_iIn, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            loop_ub = iIn->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              j_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
            }

            if (!(j_iIn->size[0] == c_projMat->size[0])) {
              i5 = XTrain->size[0];
              ix = k_iIn->size[0];
              k_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)k_iIn, ix, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = iIn->size[1];
              for (ix = 0; ix < loop_ub; ix++) {
                k_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
              }

              if (((i5 == 1) && (k_iIn->size[0] == 1)) || ((c_projMat->size[0] ==
                    1) && (c_projMat->size[1] == 1))) {
                ib_y = NULL;
                m3 = emlrtCreateCharArray(2, iv38);
                for (i = 0; i < 45; i++) {
                  cv12[i] = cv13[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 45, m3, cv12);
                emlrtAssign(&ib_y, m3);
                c_st.site = &yp_emlrtRSI;
                e_st.site = &wq_emlrtRSI;
                f_error(&c_st, b_message(&e_st, ib_y, &jb_emlrtMCI),
                        &kb_emlrtMCI);
              } else {
                jb_y = NULL;
                m3 = emlrtCreateCharArray(2, iv39);
                for (i = 0; i < 21; i++) {
                  cv14[i] = cv15[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 21, m3, cv14);
                emlrtAssign(&jb_y, m3);
                c_st.site = &aq_emlrtRSI;
                e_st.site = &xq_emlrtRSI;
                f_error(&c_st, b_message(&e_st, jb_y, &lb_emlrtMCI),
                        &mb_emlrtMCI);
              }
            }

            i5 = l_iIn->size[0];
            l_iIn->size[0] = iIn->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)l_iIn, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            loop_ub = iIn->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              l_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
            }

            if ((l_iIn->size[0] == 1) || (c_projMat->size[0] == 1)) {
              i5 = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[0] = XTrainBag->size[0];
              YTrainBag->size[1] = c_projMat->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = XTrainBag->size[0];
              for (i5 = 0; i5 < loop_ub; i5++) {
                i = c_projMat->size[1];
                for (ix = 0; ix < i; ix++) {
                  YTrainBag->data[i5 + YTrainBag->size[0] * ix] = 0.0;
                  idx = XTrainBag->size[1];
                  for (ixstart = 0; ixstart < idx; ixstart++) {
                    YTrainBag->data[i5 + YTrainBag->size[0] * ix] +=
                      XTrainBag->data[i5 + XTrainBag->size[0] * ixstart] *
                      c_projMat->data[ixstart + c_projMat->size[0] * ix];
                  }
                }
              }
            } else {
              i5 = XTrain->size[0];
              unnamed_idx_1 = (uint32_T)c_projMat->size[1];
              ix = r33->size[0] * r33->size[1];
              r33->size[0] = i5;
              emxEnsureCapacity(&st, (emxArray__common *)r33, ix, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              ix = r33->size[0] * r33->size[1];
              r33->size[1] = (int32_T)unnamed_idx_1;
              emxEnsureCapacity(&st, (emxArray__common *)r33, ix, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = i5 * (int32_T)unnamed_idx_1;
              for (ix = 0; ix < loop_ub; ix++) {
                r33->data[ix] = 0.0;
              }

              b_st.site = &ci_emlrtRSI;
              c_st.site = &ei_emlrtRSI;
              ix = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[0] = i5;
              emxEnsureCapacity(&c_st, (emxArray__common *)YTrainBag, ix,
                                (int32_T)sizeof(real_T), &o_emlrtRTEI);
              ix = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[1] = (int32_T)unnamed_idx_1;
              emxEnsureCapacity(&c_st, (emxArray__common *)YTrainBag, ix,
                                (int32_T)sizeof(real_T), &o_emlrtRTEI);
              loop_ub = i5 * (int32_T)unnamed_idx_1;
              for (i5 = 0; i5 < loop_ub; i5++) {
                YTrainBag->data[i5] = 0.0;
              }

              i5 = XTrain->size[0];
              if ((i5 < 1) || (c_projMat->size[1] < 1)) {
              } else {
                d_st.site = &fi_emlrtRSI;
                lambda = 1.0;
                nSelected = 0.0;
                TRANSB = 'N';
                TRANSA = 'N';
                f_st.site = &fi_emlrtRSI;
                i5 = XTrain->size[0];
                m_t = (ptrdiff_t)(i5);
                f_st.site = &fi_emlrtRSI;
                n_t = (ptrdiff_t)(c_projMat->size[1]);
                f_st.site = &fi_emlrtRSI;
                i5 = m_iIn->size[0];
                m_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&f_st, (emxArray__common *)m_iIn, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  m_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
                }

                k_t = (ptrdiff_t)(m_iIn->size[0]);
                f_st.site = &fi_emlrtRSI;
                i5 = XTrain->size[0];
                lda_t = (ptrdiff_t)(i5);
                f_st.site = &fi_emlrtRSI;
                i5 = n_iIn->size[0];
                n_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&f_st, (emxArray__common *)n_iIn, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  n_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
                }

                ldb_t = (ptrdiff_t)(n_iIn->size[0]);
                f_st.site = &fi_emlrtRSI;
                i5 = XTrain->size[0];
                ldc_t = (ptrdiff_t)(i5);
                alpha1_t = (double *)(&lambda);
                i5 = XTrain->size[0];
                ix = o_iIn->size[0];
                o_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&d_st, (emxArray__common *)o_iIn, ix, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (ix = 0; ix < loop_ub; ix++) {
                  o_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
                }

                i5 *= o_iIn->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI, &d_st);
                i5 = p_iIn->size[0];
                p_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&d_st, (emxArray__common *)p_iIn, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  p_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
                }

                Aia0_t = (double *)(&XTrainBag->data[0]);
                i5 = c_projMat->size[0] * c_projMat->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI, &d_st);
                Bib0_t = (double *)(&c_projMat->data[0]);
                beta1_t = (double *)(&nSelected);
                i5 = r33->size[0] * r33->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI, &d_st);
                Cic0_t = (double *)(&YTrainBag->data[0]);
                dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                      &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
              }
            }

            emlrt_update_log_2(sp, YTrainBag, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[287U], r33);
            i5 = b_projMat->size[0] * b_projMat->size[1];
            b_projMat->size[0] = r33->size[0];
            b_projMat->size[1] = r33->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)b_projMat, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            loop_ub = r33->size[0] * r33->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              b_projMat->data[i5] = r33->data[i5];
            }

            for (i5 = 0; i5 < 2; i5++) {
              l_ii[i5] = b_projMat->size[i5];
            }

            for (i5 = 0; i5 < 2; i5++) {
              tmp_size[i5] = partitionPoint_size[i5];
            }

            emlrtSizeEqCheck2DFastR2012b(l_ii, tmp_size, &w_emlrtECI, sp);
            projMat_size[0] = b_projMat->size[0];
            projMat_size[1] = b_projMat->size[1];
            loop_ub = b_projMat->size[0] * b_projMat->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              projMat_data[i5] = (b_projMat->data[i5] <= partitionPoint_data[i5]);
            }

            b_projMat_data.data = (boolean_T *)&projMat_data;
            b_projMat_data.size = (int32_T *)&projMat_size;
            b_projMat_data.allocatedSize = 1;
            b_projMat_data.numDimensions = 2;
            b_projMat_data.canFreeData = false;
            emlrt_update_log_37(sp, &b_projMat_data,
                                *(emlrtLocationLoggingDataType (*)[613])&
                                emlrtLocationLoggingDataTables[286U],
                                bLessThanTrain);
            emlrt_update_log_1(1.0, *(emlrtLocationLoggingDataType (*)[613])&
                               emlrtLocationLoggingDataTables[288U]);
          }

          guard1 = true;
        } else {
          /* [projMat, partitionPoint, bLessThanTrain, bLeaf] = getProjAndPartPoint(XTrainBag,XTrain,YTrain,iIn,options.includeOriginalAxes,options.XVariationTol,options.splitCriterion,options.dirIfEqual,options.epsilonCCA); */
          /*  Generate the new features as required */
          /* projMat = componentAnalysisForCompiling(XTrainBag,XTrainBag,options.epsilonCCA); */
          st.site = &ed_emlrtRSI;
          b_any(&st, bInMat, bXVaries);
          i5 = k_bXVaries->size[0] * k_bXVaries->size[1];
          k_bXVaries->size[0] = 1;
          k_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)k_bXVaries, i5, (int32_T)
                            sizeof(boolean_T), &o_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            k_bXVaries->data[i5] = bXVaries->data[i5];
          }

          emlrt_update_log_28(sp, k_bXVaries, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[289U], bXVaries);
          st.site = &dd_emlrtRSI;
          eml_li_find(&st, bXVaries, ii);
          loop_ub = bInMat->size[0];
          i5 = d_bInMat->size[0] * d_bInMat->size[1];
          d_bInMat->size[0] = loop_ub;
          d_bInMat->size[1] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)d_bInMat, i5, (int32_T)
                            sizeof(boolean_T), &o_emlrtRTEI);
          i = ii->size[1];
          for (i5 = 0; i5 < i; i5++) {
            for (ix = 0; ix < loop_ub; ix++) {
              ixstart = bInMat->size[1];
              nm1d2 = ii->data[ii->size[0] * i5];
              d_bInMat->data[ix + d_bInMat->size[0] * i5] = bInMat->data[ix +
                bInMat->size[0] * (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1,
                ixstart, &nd_emlrtBCI, sp) - 1)];
            }
          }

          emlrt_update_log_30(sp, d_bInMat, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[290U], bInMat);
          st.site = &cd_emlrtRSI;
          e_sum(&st, XTrainBag, iFeatIn);
          i5 = o_iFeatIn->size[0] * o_iFeatIn->size[1];
          o_iFeatIn->size[0] = 1;
          o_iFeatIn->size[1] = iFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)o_iFeatIn, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            o_iFeatIn->data[i5] = iFeatIn->data[i5];
          }

          emlrt_update_log_5(sp, o_iFeatIn, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[292U], iFeatIn);
          i5 = n_iFeatIn->size[0] * n_iFeatIn->size[1];
          n_iFeatIn->size[0] = 1;
          n_iFeatIn->size[1] = iFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)n_iFeatIn, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          nm1d2 = XTrainBag->size[0];
          loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            n_iFeatIn->data[i5] = iFeatIn->data[i5] / (real_T)nm1d2;
          }

          emlrt_update_log_5(sp, n_iFeatIn, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[291U], muX);
          st.site = &bd_emlrtRSI;
          b_sum(&st, bInMat, iFeatIn);
          i5 = m_iFeatIn->size[0] * m_iFeatIn->size[1];
          m_iFeatIn->size[0] = 1;
          m_iFeatIn->size[1] = iFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)m_iFeatIn, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            m_iFeatIn->data[i5] = iFeatIn->data[i5];
          }

          emlrt_update_log_5(sp, m_iFeatIn, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[294U], iFeatIn);
          i5 = l_iFeatIn->size[0] * l_iFeatIn->size[1];
          l_iFeatIn->size[0] = 1;
          l_iFeatIn->size[1] = iFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)l_iFeatIn, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          nm1d2 = bInMat->size[0];
          loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            l_iFeatIn->data[i5] = iFeatIn->data[i5] / (real_T)nm1d2;
          }

          emlrt_update_log_5(sp, l_iFeatIn, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[293U], iFeatIn);

          /*  Subtraction of the mean is common to the process of calculating the */
          /*  projection matrices for both CCA and PCA but for computational */
          /*  effificently we don't make this translation when actually applying the */
          /*  projections */
          st.site = &ad_emlrtRSI;
          d_bsxfun(&st, XTrainBag, muX, r33);
          emlrt_update_log_2(sp, r33, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[295U], XTrainBag);
          st.site = &yc_emlrtRSI;
          e_bsxfun(&st, bInMat, iFeatIn, r33);
          emlrt_update_log_2(sp, r33, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[296U], YTrainBag);
          x1 = emlrt_update_log_1(XTrainBag->size[0],
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[445U]);
          x2 = emlrt_update_log_1(XTrainBag->size[1],
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[444U]);
          if (YTrainBag->size[0] != x1) {
            st.site = &xc_emlrtRSI;
            error(&st);
          } else {
            if (x1 == 1.0) {
              st.site = &wc_emlrtRSI;
              b_error(&st);
            }
          }

          nSelected = emlrt_update_log_1(YTrainBag->size[1],
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[297U]);

          /*  This code is a reduction of the function canoncorr.  This */
          /*  method is explained in the supplementary material */
          st.site = &vc_emlrtRSI;
          qr(&st, XTrainBag, c_projMat, r1, iFeatIn);
          i5 = i_projMat->size[0] * i_projMat->size[1];
          i_projMat->size[0] = c_projMat->size[0];
          i_projMat->size[1] = c_projMat->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)i_projMat, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          loop_ub = c_projMat->size[0] * c_projMat->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            i_projMat->data[i5] = c_projMat->data[i5];
          }

          emlrt_update_log_2(sp, i_projMat, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[443U], c_projMat);
          i5 = c_r1->size[0] * c_r1->size[1];
          c_r1->size[0] = r1->size[0];
          c_r1->size[1] = r1->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)c_r1, i5, (int32_T)sizeof
                            (real_T), &o_emlrtRTEI);
          loop_ub = r1->size[0] * r1->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            c_r1->data[i5] = r1->data[i5];
          }

          emlrt_update_log_2(sp, c_r1, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[442U], r1);
          i5 = k_iFeatIn->size[0] * k_iFeatIn->size[1];
          k_iFeatIn->size[0] = 1;
          k_iFeatIn->size[1] = iFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)k_iFeatIn, i5, (int32_T)
                            sizeof(real_T), &o_emlrtRTEI);
          loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
          for (i5 = 0; i5 < loop_ub; i5++) {
            k_iFeatIn->data[i5] = iFeatIn->data[i5];
          }

          emlrt_update_log_5(sp, k_iFeatIn, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[441U], iFeatIn);

          /*  Reduce to full rank within some tolerance */
          i5 = r1->size[0] * r1->size[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &ic_emlrtBCI, sp);
          lambda = muDoubleScalarAbs(r1->data[0]);
          st.site = &uc_emlrtRSI;
          diag(&st, r1, y);
          i5 = hb_y->size[0];
          hb_y->size[0] = y->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)hb_y, i5, (int32_T)sizeof
                            (real_T), &o_emlrtRTEI);
          loop_ub = y->size[0];
          for (i5 = 0; i5 < loop_ub; i5++) {
            hb_y->data[i5] = y->data[i5];
          }

          emlrt_update_log_20(sp, hb_y, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[300U], y);
          i5 = gb_y->size[0];
          gb_y->size[0] = y->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)gb_y, i5, (int32_T)sizeof
                            (real_T), &o_emlrtRTEI);
          loop_ub = y->size[0];
          for (i5 = 0; i5 < loop_ub; i5++) {
            gb_y->data[i5] = y->data[i5];
          }

          d_abs(sp, gb_y, y);
          i5 = fb_y->size[0];
          fb_y->size[0] = y->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)fb_y, i5, (int32_T)sizeof
                            (real_T), &o_emlrtRTEI);
          loop_ub = y->size[0];
          for (i5 = 0; i5 < loop_ub; i5++) {
            fb_y->data[i5] = y->data[i5];
          }

          emlrt_update_log_20(sp, fb_y, *(emlrtLocationLoggingDataType (*)[613])
                              &emlrtLocationLoggingDataTables[299U], y);
          apnd = emlrt_update_log_1(options->epsilonCCA * emlrt_update_log_1
            (lambda, *(emlrtLocationLoggingDataType (*)[613])&
             emlrtLocationLoggingDataTables[302U]),
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[301U]);
          i5 = eb_y->size[0];
          eb_y->size[0] = y->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)eb_y, i5, (int32_T)sizeof
                            (boolean_T), &o_emlrtRTEI);
          loop_ub = y->size[0];
          for (i5 = 0; i5 < loop_ub; i5++) {
            eb_y->data[i5] = (y->data[i5] >= apnd);
          }

          st.site = &uc_emlrtRSI;
          rankX = emlrt_update_log_1(d_sum(&st, eb_y),
            *(emlrtLocationLoggingDataType (*)[613])&
            emlrtLocationLoggingDataTables[298U]);
          if (rankX == 0.0) {
            /* warning('X doesnt vary so component analysis fails'); */
            apnd = emlrt_update_log_1((real_T)XTrainBag->size[1] - 1.0,
              *(emlrtLocationLoggingDataType (*)[613])&
              emlrtLocationLoggingDataTables[304U]);
            i5 = r64->size[0];
            r64->size[0] = 1 + (int32_T)emlrtNonNegativeCheckFastR2012b(apnd,
              &n_emlrtDCI, sp);
            emxEnsureCapacity(sp, (emxArray__common *)r64, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            r64->data[0] = 1.0;
            loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(apnd, &n_emlrtDCI,
              sp);
            for (i5 = 0; i5 < loop_ub; i5++) {
              r64->data[i5 + 1] = 0.0;
            }

            emlrt_update_log_20(sp, r64, *(emlrtLocationLoggingDataType (*)[613])
                                &emlrtLocationLoggingDataTables[303U], projMat);
          } else {
            if (rankX < x2) {
              i5 = c_projMat->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &jc_emlrtBCI, sp);
              i5 = c_projMat->size[1];
              ix = (int32_T)rankX;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &jc_emlrtBCI, sp);
              loop_ub = c_projMat->size[0];
              i5 = h_projMat->size[0] * h_projMat->size[1];
              h_projMat->size[0] = loop_ub;
              h_projMat->size[1] = (int32_T)rankX;
              emxEnsureCapacity(sp, (emxArray__common *)h_projMat, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              i = (int32_T)rankX;
              for (i5 = 0; i5 < i; i5++) {
                for (ix = 0; ix < loop_ub; ix++) {
                  h_projMat->data[ix + h_projMat->size[0] * i5] =
                    c_projMat->data[ix + c_projMat->size[0] * i5];
                }
              }

              emlrt_update_log_2(sp, h_projMat, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[305U], c_projMat);
              i5 = r1->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &kc_emlrtBCI, sp);
              i5 = r1->size[0];
              ix = (int32_T)rankX;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &kc_emlrtBCI, sp);
              i5 = r1->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &lc_emlrtBCI, sp);
              i5 = r1->size[1];
              ix = (int32_T)rankX;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &lc_emlrtBCI, sp);
              i5 = b_r1->size[0] * b_r1->size[1];
              b_r1->size[0] = (int32_T)rankX;
              b_r1->size[1] = (int32_T)rankX;
              emxEnsureCapacity(sp, (emxArray__common *)b_r1, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = (int32_T)rankX;
              for (i5 = 0; i5 < loop_ub; i5++) {
                i = (int32_T)rankX;
                for (ix = 0; ix < i; ix++) {
                  b_r1->data[ix + b_r1->size[0] * i5] = r1->data[ix + r1->size[0]
                    * i5];
                }
              }

              emlrt_update_log_2(sp, b_r1, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[306U], r1);
            }

            /*  This code is a reduction of the function canoncorr.  This */
            /*  method is explained in the supplementary material */
            i5 = e_YTrainBag->size[0] * e_YTrainBag->size[1];
            e_YTrainBag->size[0] = YTrainBag->size[0];
            e_YTrainBag->size[1] = YTrainBag->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)e_YTrainBag, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            loop_ub = YTrainBag->size[0] * YTrainBag->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              e_YTrainBag->data[i5] = YTrainBag->data[i5];
            }

            st.site = &tc_emlrtRSI;
            qr(&st, e_YTrainBag, q2, YTrainBag, muX);
            i5 = c_q2->size[0] * c_q2->size[1];
            c_q2->size[0] = q2->size[0];
            c_q2->size[1] = q2->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)c_q2, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            loop_ub = q2->size[0] * q2->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              c_q2->data[i5] = q2->data[i5];
            }

            emlrt_update_log_2(sp, c_q2, *(emlrtLocationLoggingDataType (*)[613])
                               &emlrtLocationLoggingDataTables[440U], q2);
            i5 = d_YTrainBag->size[0] * d_YTrainBag->size[1];
            d_YTrainBag->size[0] = YTrainBag->size[0];
            d_YTrainBag->size[1] = YTrainBag->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)d_YTrainBag, i5, (int32_T)
                              sizeof(real_T), &o_emlrtRTEI);
            loop_ub = YTrainBag->size[0] * YTrainBag->size[1];
            for (i5 = 0; i5 < loop_ub; i5++) {
              d_YTrainBag->data[i5] = YTrainBag->data[i5];
            }

            emlrt_update_log_2(sp, d_YTrainBag, *(emlrtLocationLoggingDataType (*)
              [613])&emlrtLocationLoggingDataTables[439U], YTrainBag);
            emlrt_update_log_5(sp, muX, *(emlrtLocationLoggingDataType (*)[613])
                               &emlrtLocationLoggingDataTables[438U], b_muX);

            /*  Reduce to full rank within some tolerance */
            i5 = YTrainBag->size[0] * YTrainBag->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &mc_emlrtBCI, sp);
            lambda = muDoubleScalarAbs(YTrainBag->data[0]);
            st.site = &sc_emlrtRSI;
            diag(&st, YTrainBag, y);
            i5 = db_y->size[0];
            db_y->size[0] = y->size[0];
            emxEnsureCapacity(sp, (emxArray__common *)db_y, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            loop_ub = y->size[0];
            for (i5 = 0; i5 < loop_ub; i5++) {
              db_y->data[i5] = y->data[i5];
            }

            emlrt_update_log_20(sp, db_y, *(emlrtLocationLoggingDataType (*)[613])
                                &emlrtLocationLoggingDataTables[309U], y);
            i5 = cb_y->size[0];
            cb_y->size[0] = y->size[0];
            emxEnsureCapacity(sp, (emxArray__common *)cb_y, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            loop_ub = y->size[0];
            for (i5 = 0; i5 < loop_ub; i5++) {
              cb_y->data[i5] = y->data[i5];
            }

            d_abs(sp, cb_y, y);
            i5 = bb_y->size[0];
            bb_y->size[0] = y->size[0];
            emxEnsureCapacity(sp, (emxArray__common *)bb_y, i5, (int32_T)sizeof
                              (real_T), &o_emlrtRTEI);
            loop_ub = y->size[0];
            for (i5 = 0; i5 < loop_ub; i5++) {
              bb_y->data[i5] = y->data[i5];
            }

            emlrt_update_log_20(sp, bb_y, *(emlrtLocationLoggingDataType (*)[613])
                                &emlrtLocationLoggingDataTables[308U], y);
            apnd = emlrt_update_log_1(options->epsilonCCA * emlrt_update_log_1
              (lambda, *(emlrtLocationLoggingDataType (*)[613])&
               emlrtLocationLoggingDataTables[311U]),
              *(emlrtLocationLoggingDataType (*)[613])&
              emlrtLocationLoggingDataTables[310U]);
            i5 = ab_y->size[0];
            ab_y->size[0] = y->size[0];
            emxEnsureCapacity(sp, (emxArray__common *)ab_y, i5, (int32_T)sizeof
                              (boolean_T), &o_emlrtRTEI);
            loop_ub = y->size[0];
            for (i5 = 0; i5 < loop_ub; i5++) {
              ab_y->data[i5] = (y->data[i5] >= apnd);
            }

            st.site = &sc_emlrtRSI;
            lambda = emlrt_update_log_1(d_sum(&st, ab_y),
              *(emlrtLocationLoggingDataType (*)[613])&
              emlrtLocationLoggingDataTables[307U]);
            if (lambda == 0.0) {
              /* warning('Y doesnt vary so component analysis fails'); */
              apnd = emlrt_update_log_1((real_T)XTrainBag->size[1] - 1.0,
                *(emlrtLocationLoggingDataType (*)[613])&
                emlrtLocationLoggingDataTables[313U]);
              i5 = r63->size[0];
              r63->size[0] = 1 + (int32_T)emlrtNonNegativeCheckFastR2012b(apnd,
                &m_emlrtDCI, sp);
              emxEnsureCapacity(sp, (emxArray__common *)r63, i5, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              r63->data[0] = 1.0;
              loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(apnd,
                &m_emlrtDCI, sp);
              for (i5 = 0; i5 < loop_ub; i5++) {
                r63->data[i5 + 1] = 0.0;
              }

              emlrt_update_log_20(sp, r63, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[312U], projMat);
            } else {
              if (lambda < nSelected) {
                i5 = q2->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &nc_emlrtBCI, sp);
                i5 = q2->size[1];
                ix = (int32_T)lambda;
                emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &nc_emlrtBCI, sp);
                loop_ub = q2->size[0];
                i5 = b_q2->size[0] * b_q2->size[1];
                b_q2->size[0] = loop_ub;
                b_q2->size[1] = (int32_T)lambda;
                emxEnsureCapacity(sp, (emxArray__common *)b_q2, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                i = (int32_T)lambda;
                for (i5 = 0; i5 < i; i5++) {
                  for (ix = 0; ix < loop_ub; ix++) {
                    b_q2->data[ix + b_q2->size[0] * i5] = q2->data[ix + q2->
                      size[0] * i5];
                  }
                }

                emlrt_update_log_2(sp, b_q2, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[314U], q2);
              }

              /*  Solve CCA using the decompositions */
              d = emlrt_update_log_1(muDoubleScalarMin(rankX, lambda),
                *(emlrtLocationLoggingDataType (*)[613])&
                emlrtLocationLoggingDataTables[315U]);
              st.site = &rc_emlrtRSI;
              i5 = XTrainBag->size[0] * XTrainBag->size[1];
              XTrainBag->size[0] = c_projMat->size[1];
              XTrainBag->size[1] = c_projMat->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)XTrainBag, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = c_projMat->size[0];
              for (i5 = 0; i5 < loop_ub; i5++) {
                i = c_projMat->size[1];
                for (ix = 0; ix < i; ix++) {
                  XTrainBag->data[ix + XTrainBag->size[0] * i5] =
                    c_projMat->data[i5 + c_projMat->size[0] * ix];
                }
              }

              b_st.site = &di_emlrtRSI;
              if (!(XTrainBag->size[1] == q2->size[0])) {
                if (((XTrainBag->size[0] == 1) && (XTrainBag->size[1] == 1)) ||
                    ((q2->size[0] == 1) && (q2->size[1] == 1))) {
                  kb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv40);
                  for (i = 0; i < 45; i++) {
                    cv12[i] = cv13[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m3, cv12);
                  emlrtAssign(&kb_y, m3);
                  c_st.site = &yp_emlrtRSI;
                  e_st.site = &wq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, kb_y, &jb_emlrtMCI),
                          &kb_emlrtMCI);
                } else {
                  lb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv41);
                  for (i = 0; i < 21; i++) {
                    cv14[i] = cv15[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m3, cv14);
                  emlrtAssign(&lb_y, m3);
                  c_st.site = &aq_emlrtRSI;
                  e_st.site = &xq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, lb_y, &lb_emlrtMCI),
                          &mb_emlrtMCI);
                }
              }

              if ((XTrainBag->size[1] == 1) || (q2->size[0] == 1)) {
                i5 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = XTrainBag->size[0];
                YTrainBag->size[1] = q2->size[1];
                emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = XTrainBag->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i = q2->size[1];
                  for (ix = 0; ix < i; ix++) {
                    YTrainBag->data[i5 + YTrainBag->size[0] * ix] = 0.0;
                    idx = XTrainBag->size[1];
                    for (ixstart = 0; ixstart < idx; ixstart++) {
                      YTrainBag->data[i5 + YTrainBag->size[0] * ix] +=
                        XTrainBag->data[i5 + XTrainBag->size[0] * ixstart] *
                        q2->data[ixstart + q2->size[0] * ix];
                    }
                  }
                }
              } else {
                unnamed_idx_0 = (uint32_T)XTrainBag->size[0];
                unnamed_idx_1 = (uint32_T)q2->size[1];
                i5 = r33->size[0] * r33->size[1];
                r33->size[0] = (int32_T)unnamed_idx_0;
                emxEnsureCapacity(&st, (emxArray__common *)r33, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                i5 = r33->size[0] * r33->size[1];
                r33->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&st, (emxArray__common *)r33, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r33->data[i5] = 0.0;
                }

                b_st.site = &ci_emlrtRSI;
                c_st.site = &ei_emlrtRSI;
                i5 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = (int32_T)unnamed_idx_0;
                emxEnsureCapacity(&c_st, (emxArray__common *)YTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                i5 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&c_st, (emxArray__common *)YTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
                for (i5 = 0; i5 < loop_ub; i5++) {
                  YTrainBag->data[i5] = 0.0;
                }

                if ((XTrainBag->size[0] < 1) || (q2->size[1] < 1) ||
                    (XTrainBag->size[1] < 1)) {
                } else {
                  d_st.site = &fi_emlrtRSI;
                  lambda = 1.0;
                  nSelected = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  f_st.site = &fi_emlrtRSI;
                  m_t = (ptrdiff_t)(XTrainBag->size[0]);
                  f_st.site = &fi_emlrtRSI;
                  n_t = (ptrdiff_t)(q2->size[1]);
                  f_st.site = &fi_emlrtRSI;
                  k_t = (ptrdiff_t)(XTrainBag->size[1]);
                  f_st.site = &fi_emlrtRSI;
                  lda_t = (ptrdiff_t)(XTrainBag->size[0]);
                  f_st.site = &fi_emlrtRSI;
                  ldb_t = (ptrdiff_t)(XTrainBag->size[1]);
                  f_st.site = &fi_emlrtRSI;
                  ldc_t = (ptrdiff_t)(XTrainBag->size[0]);
                  alpha1_t = (double *)(&lambda);
                  i5 = XTrainBag->size[0] * XTrainBag->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI,
                    &d_st);
                  Aia0_t = (double *)(&XTrainBag->data[0]);
                  i5 = q2->size[0] * q2->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI,
                    &d_st);
                  Bib0_t = (double *)(&q2->data[0]);
                  beta1_t = (double *)(&nSelected);
                  i5 = r33->size[0] * r33->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI,
                    &d_st);
                  Cic0_t = (double *)(&YTrainBag->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }

              emlrt_update_log_2(sp, YTrainBag, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[316U], r33);
              st.site = &rc_emlrtRSI;
              svd(&st, r33, YTrainBag, XTrainBag, c_projMat);
              i5 = c_YTrainBag->size[0] * c_YTrainBag->size[1];
              c_YTrainBag->size[0] = YTrainBag->size[0];
              c_YTrainBag->size[1] = YTrainBag->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)c_YTrainBag, i5,
                                (int32_T)sizeof(real_T), &o_emlrtRTEI);
              loop_ub = YTrainBag->size[0] * YTrainBag->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                c_YTrainBag->data[i5] = YTrainBag->data[i5];
              }

              emlrt_update_log_2(sp, c_YTrainBag, *(emlrtLocationLoggingDataType
                                  (*)[613])&emlrtLocationLoggingDataTables[437U],
                                 YTrainBag);
              emlrt_update_log_2(sp, XTrainBag, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[436U], f_XTrainBag);
              emlrt_update_log_2(sp, c_projMat, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[435U], k_projMat);
              i5 = YTrainBag->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &oc_emlrtBCI, sp);
              i5 = YTrainBag->size[1];
              ix = (int32_T)d;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &oc_emlrtBCI, sp);
              apnd = emlrt_update_log_1(x1 - 1.0, *(emlrtLocationLoggingDataType
                (*)[613])&emlrtLocationLoggingDataTables[320U]);
              loop_ub = YTrainBag->size[0];
              i5 = b_YTrainBag->size[0] * b_YTrainBag->size[1];
              b_YTrainBag->size[0] = loop_ub;
              b_YTrainBag->size[1] = (int32_T)d;
              emxEnsureCapacity(sp, (emxArray__common *)b_YTrainBag, i5,
                                (int32_T)sizeof(real_T), &o_emlrtRTEI);
              i = (int32_T)d;
              for (i5 = 0; i5 < i; i5++) {
                for (ix = 0; ix < loop_ub; ix++) {
                  b_YTrainBag->data[ix + b_YTrainBag->size[0] * i5] =
                    YTrainBag->data[ix + YTrainBag->size[0] * i5];
                }
              }

              st.site = &qc_emlrtRSI;
              mldivide(&st, r1, b_YTrainBag, r33);
              emlrt_update_log_2(sp, r33, *(emlrtLocationLoggingDataType (*)[613])
                                 &emlrtLocationLoggingDataTables[318U],
                                 XTrainBag);
              st.site = &qc_emlrtRSI;
              c_sqrt(&st, &apnd);
              lambda = emlrt_update_log_1(apnd, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[319U]);
              i5 = d_XTrainBag->size[0] * d_XTrainBag->size[1];
              d_XTrainBag->size[0] = XTrainBag->size[0];
              d_XTrainBag->size[1] = XTrainBag->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)d_XTrainBag, i5,
                                (int32_T)sizeof(real_T), &o_emlrtRTEI);
              loop_ub = XTrainBag->size[0] * XTrainBag->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                d_XTrainBag->data[i5] = XTrainBag->data[i5] * lambda;
              }

              emlrt_update_log_2(sp, d_XTrainBag, *(emlrtLocationLoggingDataType
                                  (*)[613])&emlrtLocationLoggingDataTables[317U],
                                 c_projMat);

              /*  Put coefficients back to their full size and their correct order */
              apnd = emlrt_update_log_1(x2 - rankX,
                *(emlrtLocationLoggingDataType (*)[613])&
                emlrtLocationLoggingDataTables[322U]);
              emlrtNonNegativeCheckFastR2012b(apnd, &i_emlrtDCI, sp);
              i5 = r31->size[0] * r31->size[1];
              r31->size[0] = (int32_T)apnd;
              emxEnsureCapacity(sp, (emxArray__common *)r31, i5, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              apnd = emlrt_update_log_1(x2 - rankX,
                *(emlrtLocationLoggingDataType (*)[613])&
                emlrtLocationLoggingDataTables[322U]);
              emlrtNonNegativeCheckFastR2012b(apnd, &i_emlrtDCI, sp);
              i5 = r31->size[0] * r31->size[1];
              r31->size[1] = (int32_T)d;
              emxEnsureCapacity(sp, (emxArray__common *)r31, i5, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              apnd = emlrt_update_log_1(x2 - rankX,
                *(emlrtLocationLoggingDataType (*)[613])&
                emlrtLocationLoggingDataTables[322U]);
              loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(apnd,
                &i_emlrtDCI, sp) * (int32_T)d;
              for (i5 = 0; i5 < loop_ub; i5++) {
                r31->data[i5] = 0.0;
              }

              i5 = c_projMat->size[1];
              ix = r31->size[1];
              emlrtDimSizeEqCheckFastR2012b(i5, ix, &x_emlrtECI, sp);
              i5 = d_ii->size[0];
              d_ii->size[0] = iFeatIn->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)d_ii, i5, (int32_T)
                                sizeof(int32_T), &o_emlrtRTEI);
              loop_ub = iFeatIn->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                ix = c_projMat->size[0];
                ixstart = (int32_T)iFeatIn->data[iFeatIn->size[0] * i5];
                d_ii->data[i5] = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                  ix, &od_emlrtBCI, sp) - 1;
              }

              loop_ub = c_projMat->size[1];
              i5 = r32->size[0];
              r32->size[0] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r32, i5, (int32_T)sizeof
                                (int32_T), &o_emlrtRTEI);
              for (i5 = 0; i5 < loop_ub; i5++) {
                r32->data[i5] = i5;
              }

              i5 = r33->size[0] * r33->size[1];
              r33->size[0] = c_projMat->size[0] + r31->size[0];
              r33->size[1] = c_projMat->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r33, i5, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              loop_ub = c_projMat->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                i = c_projMat->size[0];
                for (ix = 0; ix < i; ix++) {
                  r33->data[ix + r33->size[0] * i5] = c_projMat->data[ix +
                    c_projMat->size[0] * i5];
                }
              }

              loop_ub = r31->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                i = r31->size[0];
                for (ix = 0; ix < i; ix++) {
                  r33->data[(ix + c_projMat->size[0]) + r33->size[0] * i5] =
                    r31->data[ix + r31->size[0] * i5];
                }
              }

              l_ii[0] = d_ii->size[0];
              l_ii[1] = r32->size[0];
              emlrtSubAssignSizeCheckR2012b(l_ii, 2, *(int32_T (*)[2])r33->size,
                2, &y_emlrtECI, sp);
              emlrt_update_log_2(sp, r33, *(emlrtLocationLoggingDataType (*)[613])
                                 &emlrtLocationLoggingDataTables[321U], r44);
              loop_ub = r44->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                i = r44->size[0];
                for (ix = 0; ix < i; ix++) {
                  c_projMat->data[d_ii->data[ix] + c_projMat->size[0] *
                    r32->data[i5]] = r44->data[ix + r44->size[0] * i5];
                }
              }

              /*  Normalize the projection matrices.  This ensures that the later tests for */
              /*  close points are triggered appropriately and is useful for */
              /*  interpretability. */
              power(sp, c_projMat, r33);
              i5 = r43->size[0] * r43->size[1];
              r43->size[0] = r33->size[0];
              r43->size[1] = r33->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)r43, i5, (int32_T)sizeof
                                (real_T), &o_emlrtRTEI);
              loop_ub = r33->size[0] * r33->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                r43->data[i5] = r33->data[i5];
              }

              emlrt_update_log_2(sp, r43, *(emlrtLocationLoggingDataType (*)[613])
                                 &emlrtLocationLoggingDataTables[326U], r33);
              st.site = &pc_emlrtRSI;
              e_sum(&st, r33, iFeatIn);
              i5 = g_iFeatIn->size[0] * g_iFeatIn->size[1];
              g_iFeatIn->size[0] = 1;
              g_iFeatIn->size[1] = iFeatIn->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)g_iFeatIn, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                g_iFeatIn->data[i5] = iFeatIn->data[i5];
              }

              emlrt_update_log_5(sp, g_iFeatIn, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[325U], iFeatIn);
              st.site = &pc_emlrtRSI;
              d_sqrt(&st, iFeatIn);
              i5 = f_iFeatIn->size[0] * f_iFeatIn->size[1];
              f_iFeatIn->size[0] = 1;
              f_iFeatIn->size[1] = iFeatIn->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)f_iFeatIn, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                f_iFeatIn->data[i5] = iFeatIn->data[i5];
              }

              emlrt_update_log_5(sp, f_iFeatIn, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[324U], iFeatIn);
              st.site = &pc_emlrtRSI;
              f_bsxfun(&st, c_projMat, iFeatIn, r33);
              emlrt_update_log_2(sp, r33, *(emlrtLocationLoggingDataType (*)[613])
                                 &emlrtLocationLoggingDataTables[323U],
                                 c_projMat);

              /*     %% Choose the features to use */
              if (options->includeOriginalAxes) {
                st.site = &oc_emlrtRSI;
                eye(&st, c_projMat->size[0], r33);
                i5 = r42->size[0] * r42->size[1];
                r42->size[0] = r33->size[0];
                r42->size[1] = r33->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)r42, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = r33->size[0] * r33->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r42->data[i5] = r33->data[i5];
                }

                emlrt_update_log_2(sp, r42, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[328U], r33);
                i5 = c_projMat->size[0];
                ix = r33->size[0];
                emlrtDimSizeEqCheckFastR2012b(i5, ix, &ab_emlrtECI, sp);
                i5 = g_projMat->size[0] * g_projMat->size[1];
                g_projMat->size[0] = c_projMat->size[0];
                g_projMat->size[1] = c_projMat->size[1] + r33->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)g_projMat, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = c_projMat->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i = c_projMat->size[0];
                  for (ix = 0; ix < i; ix++) {
                    g_projMat->data[ix + g_projMat->size[0] * i5] =
                      c_projMat->data[ix + c_projMat->size[0] * i5];
                  }
                }

                loop_ub = r33->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i = r33->size[0];
                  for (ix = 0; ix < i; ix++) {
                    g_projMat->data[ix + g_projMat->size[0] * (i5 +
                      c_projMat->size[1])] = r33->data[ix + r33->size[0] * i5];
                  }
                }

                emlrt_update_log_2(sp, g_projMat, *(emlrtLocationLoggingDataType
                                    (*)[613])&emlrtLocationLoggingDataTables
                                   [327U], c_projMat);
              }

              st.site = &nc_emlrtRSI;
              loop_ub = XTrain->size[0];
              i5 = XTrainBag->size[0] * XTrainBag->size[1];
              XTrainBag->size[0] = loop_ub;
              XTrainBag->size[1] = iIn->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)XTrainBag, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              i = iIn->size[1];
              for (i5 = 0; i5 < i; i5++) {
                for (ix = 0; ix < loop_ub; ix++) {
                  ixstart = XTrain->size[1];
                  nm1d2 = (int32_T)iIn->data[iIn->size[0] * i5];
                  XTrainBag->data[ix + XTrainBag->size[0] * i5] = XTrain->
                    data[ix + XTrain->size[0] *
                    (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                      &pd_emlrtBCI, &st) - 1)];
                }
              }

              b_st.site = &di_emlrtRSI;
              i5 = c_iIn->size[0];
              c_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)c_iIn, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = iIn->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                c_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
              }

              if (!(c_iIn->size[0] == c_projMat->size[0])) {
                i5 = XTrain->size[0];
                ix = d_iIn->size[0];
                d_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)d_iIn, ix, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (ix = 0; ix < loop_ub; ix++) {
                  d_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
                }

                if (((i5 == 1) && (d_iIn->size[0] == 1)) || ((c_projMat->size[0]
                      == 1) && (c_projMat->size[1] == 1))) {
                  mb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv42);
                  for (i = 0; i < 45; i++) {
                    cv12[i] = cv13[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m3, cv12);
                  emlrtAssign(&mb_y, m3);
                  c_st.site = &yp_emlrtRSI;
                  e_st.site = &wq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, mb_y, &jb_emlrtMCI),
                          &kb_emlrtMCI);
                } else {
                  nb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv43);
                  for (i = 0; i < 21; i++) {
                    cv14[i] = cv15[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m3, cv14);
                  emlrtAssign(&nb_y, m3);
                  c_st.site = &aq_emlrtRSI;
                  e_st.site = &xq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, nb_y, &lb_emlrtMCI),
                          &mb_emlrtMCI);
                }
              }

              i5 = e_iIn->size[0];
              e_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)e_iIn, i5, (int32_T)
                                sizeof(real_T), &o_emlrtRTEI);
              loop_ub = iIn->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                e_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
              }

              if ((e_iIn->size[0] == 1) || (c_projMat->size[0] == 1)) {
                i5 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = XTrainBag->size[0];
                YTrainBag->size[1] = c_projMat->size[1];
                emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = XTrainBag->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i = c_projMat->size[1];
                  for (ix = 0; ix < i; ix++) {
                    YTrainBag->data[i5 + YTrainBag->size[0] * ix] = 0.0;
                    idx = XTrainBag->size[1];
                    for (ixstart = 0; ixstart < idx; ixstart++) {
                      YTrainBag->data[i5 + YTrainBag->size[0] * ix] +=
                        XTrainBag->data[i5 + XTrainBag->size[0] * ixstart] *
                        c_projMat->data[ixstart + c_projMat->size[0] * ix];
                    }
                  }
                }
              } else {
                i5 = XTrain->size[0];
                unnamed_idx_1 = (uint32_T)c_projMat->size[1];
                ix = r33->size[0] * r33->size[1];
                r33->size[0] = i5;
                emxEnsureCapacity(&st, (emxArray__common *)r33, ix, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                ix = r33->size[0] * r33->size[1];
                r33->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&st, (emxArray__common *)r33, ix, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = i5 * (int32_T)unnamed_idx_1;
                for (ix = 0; ix < loop_ub; ix++) {
                  r33->data[ix] = 0.0;
                }

                b_st.site = &ci_emlrtRSI;
                c_st.site = &ei_emlrtRSI;
                ix = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = i5;
                emxEnsureCapacity(&c_st, (emxArray__common *)YTrainBag, ix,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                ix = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&c_st, (emxArray__common *)YTrainBag, ix,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = i5 * (int32_T)unnamed_idx_1;
                for (i5 = 0; i5 < loop_ub; i5++) {
                  YTrainBag->data[i5] = 0.0;
                }

                i5 = XTrain->size[0];
                if ((i5 < 1) || (c_projMat->size[1] < 1)) {
                } else {
                  d_st.site = &fi_emlrtRSI;
                  lambda = 1.0;
                  nSelected = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  f_st.site = &fi_emlrtRSI;
                  i5 = XTrain->size[0];
                  m_t = (ptrdiff_t)(i5);
                  f_st.site = &fi_emlrtRSI;
                  n_t = (ptrdiff_t)(c_projMat->size[1]);
                  f_st.site = &fi_emlrtRSI;
                  i5 = f_iIn->size[0];
                  f_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&f_st, (emxArray__common *)f_iIn, i5,
                                    (int32_T)sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    f_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
                  }

                  k_t = (ptrdiff_t)(f_iIn->size[0]);
                  f_st.site = &fi_emlrtRSI;
                  i5 = XTrain->size[0];
                  lda_t = (ptrdiff_t)(i5);
                  f_st.site = &fi_emlrtRSI;
                  i5 = g_iIn->size[0];
                  g_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&f_st, (emxArray__common *)g_iIn, i5,
                                    (int32_T)sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    g_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
                  }

                  ldb_t = (ptrdiff_t)(g_iIn->size[0]);
                  f_st.site = &fi_emlrtRSI;
                  i5 = XTrain->size[0];
                  ldc_t = (ptrdiff_t)(i5);
                  alpha1_t = (double *)(&lambda);
                  i5 = XTrain->size[0];
                  ix = h_iIn->size[0];
                  h_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&d_st, (emxArray__common *)h_iIn, ix,
                                    (int32_T)sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (ix = 0; ix < loop_ub; ix++) {
                    h_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
                  }

                  i5 *= h_iIn->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI,
                    &d_st);
                  i5 = i_iIn->size[0];
                  i_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&d_st, (emxArray__common *)i_iIn, i5,
                                    (int32_T)sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    i_iIn->data[i5] = iIn->data[iIn->size[0] * i5];
                  }

                  Aia0_t = (double *)(&XTrainBag->data[0]);
                  i5 = c_projMat->size[0] * c_projMat->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI,
                    &d_st);
                  Bib0_t = (double *)(&c_projMat->data[0]);
                  beta1_t = (double *)(&nSelected);
                  i5 = r33->size[0] * r33->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &hc_emlrtBCI,
                    &d_st);
                  Cic0_t = (double *)(&YTrainBag->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }

              emlrt_update_log_2(sp, YTrainBag, *(emlrtLocationLoggingDataType (*)
                [613])&emlrtLocationLoggingDataTables[329U], XTrainBag);

              /*  This step catches splits based on no significant variation */
              st.site = &mc_emlrtRSI;
              queryIfColumnsVary(&st, XTrainBag, options->XVariationTol,
                                 bXVaries);
              i5 = j_bXVaries->size[0] * j_bXVaries->size[1];
              j_bXVaries->size[0] = 1;
              j_bXVaries->size[1] = bXVaries->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)j_bXVaries, i5, (int32_T)
                                sizeof(boolean_T), &o_emlrtRTEI);
              loop_ub = bXVaries->size[0] * bXVaries->size[1];
              for (i5 = 0; i5 < loop_ub; i5++) {
                j_bXVaries->data[i5] = bXVaries->data[i5];
              }

              emlrt_update_log_28(sp, j_bXVaries, *(emlrtLocationLoggingDataType
                                   (*)[613])&emlrtLocationLoggingDataTables[330U],
                                  bXVaries);
              st.site = &lc_emlrtRSI;
              if (!emlrt_update_log_31(d_any(&st, bXVaries),
                   *(emlrtLocationLoggingDataType (*)[613])&
                   emlrtLocationLoggingDataTables[331U])) {
                *bLeaf = emlrt_update_log_31(true,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[332U]);
                x2 = emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[333U]);
                ob_y.numDimensions = 1;
                iv44[0] = 0;
                ob_y.size = (int32_T *)&iv44;
                ob_y.allocatedSize = 0;
                ob_y.data = NULL;
                emlrt_update_log_20(sp, &ob_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[334U], splitGains);
                i5 = r41->size[0];
                r41->size[0] = 0;
                emxEnsureCapacity(sp, (emxArray__common *)r41, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                emlrt_update_log_20(sp, r41, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[335U], iSplits);
              } else {
                st.site = &kc_emlrtRSI;
                eml_li_find(&st, bXVaries, ii);
                loop_ub = XTrainBag->size[0];
                i5 = c_XTrainBag->size[0] * c_XTrainBag->size[1];
                c_XTrainBag->size[0] = loop_ub;
                c_XTrainBag->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)c_XTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                i = ii->size[1];
                for (i5 = 0; i5 < i; i5++) {
                  for (ix = 0; ix < loop_ub; ix++) {
                    ixstart = XTrainBag->size[1];
                    nm1d2 = ii->data[ii->size[0] * i5];
                    c_XTrainBag->data[ix + c_XTrainBag->size[0] * i5] =
                      XTrainBag->data[ix + XTrainBag->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                        &qd_emlrtBCI, sp) - 1)];
                  }
                }

                emlrt_update_log_2(sp, c_XTrainBag,
                                   *(emlrtLocationLoggingDataType (*)[613])&
                                   emlrtLocationLoggingDataTables[336U],
                                   XTrainBag);
                st.site = &jc_emlrtRSI;
                eml_li_find(&st, bXVaries, ii);
                loop_ub = c_projMat->size[0];
                i5 = f_projMat->size[0] * f_projMat->size[1];
                f_projMat->size[0] = loop_ub;
                f_projMat->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)f_projMat, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                i = ii->size[1];
                for (i5 = 0; i5 < i; i5++) {
                  for (ix = 0; ix < loop_ub; ix++) {
                    ixstart = c_projMat->size[1];
                    nm1d2 = ii->data[ii->size[0] * i5];
                    f_projMat->data[ix + f_projMat->size[0] * i5] =
                      c_projMat->data[ix + c_projMat->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                        &rd_emlrtBCI, sp) - 1)];
                  }
                }

                emlrt_update_log_2(sp, f_projMat, *(emlrtLocationLoggingDataType
                                    (*)[613])&emlrtLocationLoggingDataTables
                                   [337U], c_projMat);
                x2 = emlrt_update_log_1(XTrainBag->size[1],
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[338U]);
                i5 = r40->size[0];
                r40->size[0] = (int32_T)x2;
                emxEnsureCapacity(sp, (emxArray__common *)r40, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = (int32_T)x2;
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r40->data[i5] = rtNaN;
                }

                emlrt_update_log_20(sp, r40, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[339U], splitGains);
                i5 = r39->size[0];
                r39->size[0] = (int32_T)x2;
                emxEnsureCapacity(sp, (emxArray__common *)r39, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = (int32_T)x2;
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r39->data[i5] = rtNaN;
                }

                emlrt_update_log_20(sp, r39, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[340U], iSplits);
              }

              /*     %% Search over splits using provided method */
              nVarAtt = 0;
              while (nVarAtt <= (int32_T)x2 - 1) {
                rankX = emlrt_update_log_1(1.0 + (real_T)nVarAtt,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[427U]);

                /*  Calculate the probabilities of being at each class in each of child */
                /*  nodes based on proportion of training data for each of possible */
                /*  splits using current projection */
                st.site = &ic_emlrtRSI;
                i5 = XTrainBag->size[1];
                ix = (int32_T)rankX;
                emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &pc_emlrtBCI, &st);
                loop_ub = XTrainBag->size[0];
                i5 = e_XTrainBag->size[0];
                e_XTrainBag->size[0] = loop_ub;
                emxEnsureCapacity(&st, (emxArray__common *)e_XTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < loop_ub; i5++) {
                  e_XTrainBag->data[i5] = XTrainBag->data[i5 + XTrainBag->size[0]
                    * ((int32_T)rankX - 1)];
                }

                b_st.site = &no_emlrtRSI;
                c_eml_sort(&b_st, e_XTrainBag, UTrainSort, d_ii);
                i5 = d_UTrainSort->size[0];
                d_UTrainSort->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)d_UTrainSort, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  d_UTrainSort->data[i5] = UTrainSort->data[i5];
                }

                emlrt_update_log_20(sp, d_UTrainSort,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[434U],
                                    UTrainSort);
                i5 = i_ii->size[0];
                i_ii->size[0] = d_ii->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)i_ii, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = d_ii->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i_ii->data[i5] = d_ii->data[i5];
                }

                emlrt_update_log_20(sp, i_ii, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[433U], iTrainThis);
                loop_ub = YTrain->size[1];
                i5 = f_YTrain->size[0] * f_YTrain->size[1];
                f_YTrain->size[0] = iTrainThis->size[0];
                f_YTrain->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)f_YTrain, i5, (int32_T)
                                  sizeof(boolean_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i = iTrainThis->size[0];
                  for (ix = 0; ix < i; ix++) {
                    ixstart = YTrain->size[0];
                    nm1d2 = (int32_T)iTrainThis->data[ix];
                    f_YTrain->data[ix + f_YTrain->size[0] * i5] = YTrain->data
                      [(emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                         &xd_emlrtBCI, sp) + YTrain->size[0] * i5) - 1];
                  }
                }

                emlrt_update_log_3(sp, f_YTrain, *(emlrtLocationLoggingDataType
                                    (*)[613])&emlrtLocationLoggingDataTables
                                   [341U], YTrainSort);
                if (YTrain->size[1] == 1) {
                  st.site = &hc_emlrtRSI;
                  nm1d2 = YTrainSort->size[0] * YTrainSort->size[1];
                  b_st.site = &r_emlrtRSI;
                  c_st.site = &s_emlrtRSI;
                  if (nm1d2 < 1) {
                    idx = -1;
                    i = 0;
                  } else {
                    idx = (int32_T)muDoubleScalarFloor(((real_T)nm1d2 - 1.0) +
                      0.5);
                    i = idx + 1;
                    cdiff = (idx - nm1d2) + 1;
                    if (muDoubleScalarAbs(cdiff) < 4.4408920985006262E-16 *
                        (real_T)nm1d2) {
                      idx++;
                      i = nm1d2;
                    } else if (cdiff > 0) {
                      i = idx;
                    } else {
                      idx++;
                    }

                    idx--;
                  }

                  d_st.site = &t_emlrtRSI;
                  i5 = iFeatIn->size[0] * iFeatIn->size[1];
                  iFeatIn->size[0] = 1;
                  iFeatIn->size[1] = idx + 1;
                  emxEnsureCapacity(&c_st, (emxArray__common *)iFeatIn, i5,
                                    (int32_T)sizeof(real_T), &g_emlrtRTEI);
                  if (idx + 1 > 0) {
                    iFeatIn->data[0] = 1.0;
                    if (idx + 1 > 1) {
                      iFeatIn->data[idx] = i;
                      i5 = idx + (idx < 0);
                      if (i5 >= 0) {
                        nm1d2 = (int32_T)((uint32_T)i5 >> 1);
                      } else {
                        nm1d2 = ~(int32_T)((uint32_T)~i5 >> 1);
                      }

                      d_st.site = &u_emlrtRSI;
                      for (loop_ub = 1; loop_ub < nm1d2; loop_ub++) {
                        iFeatIn->data[loop_ub] = 1.0 + (real_T)loop_ub;
                        iFeatIn->data[idx - loop_ub] = i - loop_ub;
                      }

                      if (nm1d2 << 1 == idx) {
                        iFeatIn->data[nm1d2] = (1.0 + (real_T)i) / 2.0;
                      } else {
                        iFeatIn->data[nm1d2] = 1.0 + (real_T)nm1d2;
                        iFeatIn->data[nm1d2 + 1] = i - nm1d2;
                      }
                    }
                  }

                  i5 = j_iFeatIn->size[0] * j_iFeatIn->size[1];
                  j_iFeatIn->size[0] = 1;
                  j_iFeatIn->size[1] = iFeatIn->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)j_iFeatIn, i5,
                                    (int32_T)sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    j_iFeatIn->data[i5] = iFeatIn->data[i5];
                  }

                  emlrt_update_log_5(sp, j_iFeatIn,
                                     *(emlrtLocationLoggingDataType (*)[613])&
                                     emlrtLocationLoggingDataTables[344U],
                                     iFeatIn);
                  i5 = q_iFeatIn->size[0];
                  q_iFeatIn->size[0] = iFeatIn->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)q_iFeatIn, i5,
                                    (int32_T)sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = iFeatIn->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    q_iFeatIn->data[i5] = iFeatIn->data[iFeatIn->size[0] * i5];
                  }

                  nm1d2 = iFeatIn->size[1];
                  i5 = r35->size[0] * r35->size[1];
                  r35->size[0] = nm1d2;
                  r35->size[1] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)r35, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  for (i5 = 0; i5 < nm1d2; i5++) {
                    r35->data[i5] = q_iFeatIn->data[i5];
                  }

                  st.site = &hc_emlrtRSI;
                  idx = 1;
                  if (YTrainSort->size[0] != 1) {
                    idx = 0;
                  }

                  b_st.site = &oo_emlrtRSI;
                  i5 = e_y->size[0] * e_y->size[1];
                  e_y->size[0] = YTrainSort->size[0];
                  e_y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)e_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    e_y->data[i5] = YTrainSort->data[i5];
                  }

                  vlen = e_y->size[idx];
                  if ((!((e_y->size[0] == 0) || (e_y->size[1] == 0))) &&
                      (e_y->size[idx] > 1)) {
                    c_st.site = &ro_emlrtRSI;
                    d_st.site = &we_emlrtRSI;
                    cdiff = 1;
                    f_st.site = &xe_emlrtRSI;
                    loop_ub = 1;
                    while (loop_ub <= idx) {
                      cdiff *= e_y->size[0];
                      loop_ub = 2;
                    }

                    nm1d2 = 1;
                    loop_ub = idx + 2;
                    while (loop_ub < 3) {
                      nm1d2 *= e_y->size[1];
                      loop_ub = 3;
                    }

                    ix = 0;
                    c_st.site = &qo_emlrtRSI;
                    if (1 > nm1d2) {
                      b3 = false;
                    } else {
                      b3 = (nm1d2 > 2147483646);
                    }

                    if (b3) {
                      d_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&d_st);
                    }

                    for (i = 1; i <= nm1d2; i++) {
                      ixstart = ix;
                      c_st.site = &po_emlrtRSI;
                      if (1 > cdiff) {
                        b4 = false;
                      } else {
                        b4 = (cdiff > 2147483646);
                      }

                      if (b4) {
                        d_st.site = &v_emlrtRSI;
                        check_forloop_overflow_error(&d_st);
                      }

                      for (idx = 1; idx <= cdiff; idx++) {
                        ixstart++;
                        ix = ixstart;
                        nSelected = e_y->data[ixstart - 1];
                        for (loop_ub = 0; loop_ub <= vlen - 2; loop_ub++) {
                          ix += cdiff;
                          nSelected += e_y->data[ix - 1];
                          e_y->data[ix - 1] = nSelected;
                        }
                      }
                    }
                  }

                  i5 = y_y->size[0] * y_y->size[1];
                  y_y->size[0] = e_y->size[0];
                  y_y->size[1] = e_y->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)y_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = e_y->size[0] * e_y->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    y_y->data[i5] = e_y->data[i5];
                  }

                  emlrt_update_log_24(sp, y_y, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[345U], e_y);
                  for (i5 = 0; i5 < 2; i5++) {
                    c_tmp_size[i5] = r35->size[i5];
                  }

                  for (i5 = 0; i5 < 2; i5++) {
                    l_ii[i5] = e_y->size[i5];
                  }

                  emlrtSizeEqCheck2DFastR2012b(c_tmp_size, l_ii, &bb_emlrtECI,
                    sp);
                  i5 = r62->size[0];
                  r62->size[0] = r35->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)r62, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = r35->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r62->data[i5] = r35->data[i5] - e_y->data[i5];
                  }

                  emlrt_update_log_20(sp, r62, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[343U], y);
                  loop_ub = r35->size[0];
                  i5 = r35->size[0] * r35->size[1];
                  r35->size[0] = loop_ub;
                  r35->size[1] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)r35, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r35->data[i5] = y->data[i5];
                  }

                  st.site = &hc_emlrtRSI;
                  idx = 1;
                  if (YTrainSort->size[0] != 1) {
                    idx = 0;
                  }

                  b_st.site = &oo_emlrtRSI;
                  i5 = e_y->size[0] * e_y->size[1];
                  e_y->size[0] = YTrainSort->size[0];
                  e_y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)e_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    e_y->data[i5] = YTrainSort->data[i5];
                  }

                  vlen = e_y->size[idx];
                  if ((!((e_y->size[0] == 0) || (e_y->size[1] == 0))) &&
                      (e_y->size[idx] > 1)) {
                    c_st.site = &ro_emlrtRSI;
                    d_st.site = &we_emlrtRSI;
                    cdiff = 1;
                    f_st.site = &xe_emlrtRSI;
                    loop_ub = 1;
                    while (loop_ub <= idx) {
                      cdiff *= e_y->size[0];
                      loop_ub = 2;
                    }

                    nm1d2 = 1;
                    loop_ub = idx + 2;
                    while (loop_ub < 3) {
                      nm1d2 *= e_y->size[1];
                      loop_ub = 3;
                    }

                    ix = 0;
                    c_st.site = &qo_emlrtRSI;
                    if (1 > nm1d2) {
                      b5 = false;
                    } else {
                      b5 = (nm1d2 > 2147483646);
                    }

                    if (b5) {
                      d_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&d_st);
                    }

                    for (i = 1; i <= nm1d2; i++) {
                      ixstart = ix;
                      c_st.site = &po_emlrtRSI;
                      if (1 > cdiff) {
                        b6 = false;
                      } else {
                        b6 = (cdiff > 2147483646);
                      }

                      if (b6) {
                        d_st.site = &v_emlrtRSI;
                        check_forloop_overflow_error(&d_st);
                      }

                      for (idx = 1; idx <= cdiff; idx++) {
                        ixstart++;
                        ix = ixstart;
                        nSelected = e_y->data[ixstart - 1];
                        for (loop_ub = 0; loop_ub <= vlen - 2; loop_ub++) {
                          ix += cdiff;
                          nSelected += e_y->data[ix - 1];
                          e_y->data[ix - 1] = nSelected;
                        }
                      }
                    }
                  }

                  i5 = x_y->size[0] * x_y->size[1];
                  x_y->size[0] = e_y->size[0];
                  x_y->size[1] = e_y->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)x_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = e_y->size[0] * e_y->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    x_y->data[i5] = e_y->data[i5];
                  }

                  emlrt_update_log_24(sp, x_y, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[346U], e_y);
                  i5 = r35->size[0];
                  ix = e_y->size[0];
                  emlrtDimSizeEqCheckFastR2012b(i5, ix, &cb_emlrtECI, sp);
                  i5 = r61->size[0] * r61->size[1];
                  r61->size[0] = r35->size[0];
                  r61->size[1] = 1 + e_y->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)r61, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = r35->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r61->data[i5] = r35->data[i5];
                  }

                  loop_ub = e_y->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    i = e_y->size[0];
                    for (ix = 0; ix < i; ix++) {
                      r61->data[ix + r61->size[0] * (i5 + 1)] = e_y->data[ix +
                        e_y->size[0] * i5];
                    }
                  }

                  emlrt_update_log_40(sp, r61, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[342U], LeftCumCounts);
                } else {
                  st.site = &gc_emlrtRSI;
                  b_st.site = &oo_emlrtRSI;
                  i5 = e_y->size[0] * e_y->size[1];
                  e_y->size[0] = YTrainSort->size[0];
                  e_y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)e_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    e_y->data[i5] = YTrainSort->data[i5];
                  }

                  vlen = e_y->size[0];
                  if ((!((e_y->size[0] == 0) || (e_y->size[1] == 0))) &&
                      (e_y->size[0] > 1)) {
                    i5 = YTrainBag->size[0] * YTrainBag->size[1];
                    YTrainBag->size[0] = e_y->size[0];
                    YTrainBag->size[1] = e_y->size[1];
                    emxEnsureCapacity(&b_st, (emxArray__common *)YTrainBag, i5,
                                      (int32_T)sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = e_y->size[0] * e_y->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      YTrainBag->data[i5] = e_y->data[i5];
                    }

                    ix = -1;
                    c_st.site = &qo_emlrtRSI;
                    for (i = 1; i <= YTrainBag->size[1]; i++) {
                      ixstart = ix + 1;
                      ix++;
                      nSelected = e_y->data[ixstart];
                      for (loop_ub = 0; loop_ub <= vlen - 2; loop_ub++) {
                        ix++;
                        nSelected += e_y->data[ix];
                        e_y->data[ix] = nSelected;
                      }
                    }
                  }

                  i5 = w_y->size[0] * w_y->size[1];
                  w_y->size[0] = e_y->size[0];
                  w_y->size[1] = e_y->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)w_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = e_y->size[0] * e_y->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    w_y->data[i5] = e_y->data[i5];
                  }

                  emlrt_update_log_24(sp, w_y, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[348U], e_y);
                  emlrt_update_log_40(sp, e_y, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[347U], LeftCumCounts);
                }

                loop_ub = LeftCumCounts->size[1];
                i5 = LeftCumCounts->size[0];
                ix = LeftCumCounts->size[0];
                idx = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &qc_emlrtBCI,
                  sp);
                i5 = b_LeftCumCounts->size[0] * b_LeftCumCounts->size[1];
                b_LeftCumCounts->size[0] = 1;
                b_LeftCumCounts->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_LeftCumCounts, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < loop_ub; i5++) {
                  b_LeftCumCounts->data[b_LeftCumCounts->size[0] * i5] =
                    LeftCumCounts->data[(idx + LeftCumCounts->size[0] * i5) - 1];
                }

                st.site = &fc_emlrtRSI;
                g_bsxfun(&st, b_LeftCumCounts, LeftCumCounts, r34);
                emlrt_update_log_40(sp, r34, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[349U], RightCumCounts);
                st.site = &ec_emlrtRSI;
                b_diff(&st, UTrainSort, y);
                i5 = v_y->size[0];
                v_y->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)v_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  v_y->data[i5] = y->data[i5];
                }

                emlrt_update_log_20(sp, v_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[351U], y);
                i5 = u_y->size[0];
                u_y->size[0] = y->size[0] + 1;
                emxEnsureCapacity(sp, (emxArray__common *)u_y, i5, (int32_T)
                                  sizeof(boolean_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  u_y->data[i5] = (y->data[i5] > options->XVariationTol);
                }

                u_y->data[y->size[0]] = false;
                emlrt_update_log_19(sp, u_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[350U], bRemainsSelected);
                st.site = &dc_emlrtRSI;
                f_sum(&st, LeftCumCounts, y);
                i5 = t_y->size[0];
                t_y->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)t_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  t_y->data[i5] = y->data[i5];
                }

                emlrt_update_log_20(sp, t_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[353U], y);
                st.site = &dc_emlrtRSI;
                h_bsxfun(&st, LeftCumCounts, y, r34);
                emlrt_update_log_40(sp, r34, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[352U], pL);
                st.site = &cc_emlrtRSI;
                f_sum(&st, RightCumCounts, y);
                i5 = s_y->size[0];
                s_y->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)s_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  s_y->data[i5] = y->data[i5];
                }

                emlrt_update_log_20(sp, s_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[355U], y);
                st.site = &cc_emlrtRSI;
                h_bsxfun(&st, RightCumCounts, y, r34);
                emlrt_update_log_40(sp, r34, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[354U], RightCumCounts);

                /*  Calculate the metric values of the current node and two child nodes */
                st.site = &bc_emlrtRSI;
                if (emlrt_update_log_31(b_strcmpi(&st,
                      options->splitCriterion.data, options->splitCriterion.size),
                     *(emlrtLocationLoggingDataType (*)[613])&
                                        emlrtLocationLoggingDataTables[356U])) {
                  power(sp, pL, r33);
                  i5 = r60->size[0] * r60->size[1];
                  r60->size[0] = r33->size[0];
                  r60->size[1] = r33->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)r60, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = r33->size[0] * r33->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r60->data[i5] = r33->data[i5];
                  }

                  emlrt_update_log_2(sp, r60, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[359U], r33);
                  st.site = &ac_emlrtRSI;
                  f_sum(&st, r33, y);
                  i5 = r_y->size[0];
                  r_y->size[0] = y->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)r_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = y->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r_y->data[i5] = y->data[i5];
                  }

                  emlrt_update_log_20(sp, r_y, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[358U], y);
                  i5 = r59->size[0];
                  r59->size[0] = y->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)r59, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = y->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r59->data[i5] = 1.0 - y->data[i5];
                  }

                  emlrt_update_log_20(sp, r59, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[357U], metricLeft);
                  power(sp, RightCumCounts, r33);
                  i5 = r58->size[0] * r58->size[1];
                  r58->size[0] = r33->size[0];
                  r58->size[1] = r33->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)r58, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = r33->size[0] * r33->size[1];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r58->data[i5] = r33->data[i5];
                  }

                  emlrt_update_log_2(sp, r58, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[362U], r33);
                  st.site = &yb_emlrtRSI;
                  f_sum(&st, r33, y);
                  i5 = q_y->size[0];
                  q_y->size[0] = y->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)q_y, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = y->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    q_y->data[i5] = y->data[i5];
                  }

                  emlrt_update_log_20(sp, q_y, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[361U], y);
                  i5 = r57->size[0];
                  r57->size[0] = y->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)r57, i5, (int32_T)
                                    sizeof(real_T), &o_emlrtRTEI);
                  loop_ub = y->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    r57->data[i5] = 1.0 - y->data[i5];
                  }

                  emlrt_update_log_20(sp, r57, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[360U], metricRight);
                } else {
                  st.site = &xb_emlrtRSI;
                  if (emlrt_update_log_31(c_strcmpi(&st,
                        options->splitCriterion.data,
                        options->splitCriterion.size),
                                          *(emlrtLocationLoggingDataType (*)[613])
                                          &emlrtLocationLoggingDataTables[363U]))
                  {
                    st.site = &wb_emlrtRSI;
                    b_log2(&st, pL, r34);
                    i5 = r56->size[0] * r56->size[1];
                    r56->size[0] = r34->size[0];
                    r56->size[1] = r34->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)r56, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = r34->size[0] * r34->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      r56->data[i5] = r34->data[i5];
                    }

                    emlrt_update_log_40(sp, r56, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[365U], r34);
                    for (i5 = 0; i5 < 2; i5++) {
                      tmp_size[i5] = pL->size[i5];
                    }

                    for (i5 = 0; i5 < 2; i5++) {
                      c_tmp_size[i5] = r34->size[i5];
                    }

                    emlrtSizeEqCheck2DFastR2012b(tmp_size, c_tmp_size,
                      &db_emlrtECI, sp);
                    i5 = c_pL->size[0] * c_pL->size[1];
                    c_pL->size[0] = pL->size[0];
                    c_pL->size[1] = pL->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)c_pL, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = pL->size[0] * pL->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      c_pL->data[i5] = pL->data[i5] * r34->data[i5];
                    }

                    emlrt_update_log_40(sp, c_pL, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[364U],
                                        LeftCumCounts);
                    i5 = b_pL->size[0] * b_pL->size[1];
                    b_pL->size[0] = pL->size[0];
                    b_pL->size[1] = pL->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)b_pL, i5, (int32_T)
                                      sizeof(boolean_T), &o_emlrtRTEI);
                    loop_ub = pL->size[0] * pL->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      b_pL->data[i5] = (pL->data[i5] == 0.0);
                    }

                    st.site = &vb_emlrtRSI;
                    c_eml_li_find(&st, b_pL, d_ii);
                    i5 = r54->size[0];
                    r54->size[0] = d_ii->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)r54, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = d_ii->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      r54->data[i5] = 0.0;
                    }

                    emlrt_update_log_20(sp, r54, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[366U], r55);
                    idx = LeftCumCounts->size[0];
                    cdiff = LeftCumCounts->size[1];
                    loop_ub = r55->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      ix = idx * cdiff;
                      ixstart = d_ii->data[i5];
                      LeftCumCounts->data[emlrtDynamicBoundsCheckFastR2012b
                        (ixstart, 1, ix, &yd_emlrtBCI, sp) - 1] = r55->data[i5];
                    }

                    st.site = &ub_emlrtRSI;
                    f_sum(&st, LeftCumCounts, y);
                    i5 = p_y->size[0];
                    p_y->size[0] = y->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)p_y, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = y->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      p_y->data[i5] = y->data[i5];
                    }

                    emlrt_update_log_20(sp, p_y, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[368U], y);
                    i5 = o_y->size[0];
                    o_y->size[0] = y->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)o_y, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = y->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      o_y->data[i5] = -y->data[i5];
                    }

                    emlrt_update_log_20(sp, o_y, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[367U], metricLeft);
                    st.site = &tb_emlrtRSI;
                    b_log2(&st, RightCumCounts, r34);
                    i5 = r53->size[0] * r53->size[1];
                    r53->size[0] = r34->size[0];
                    r53->size[1] = r34->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)r53, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = r34->size[0] * r34->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      r53->data[i5] = r34->data[i5];
                    }

                    emlrt_update_log_40(sp, r53, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[370U], r34);
                    for (i5 = 0; i5 < 2; i5++) {
                      l_ii[i5] = RightCumCounts->size[i5];
                    }

                    for (i5 = 0; i5 < 2; i5++) {
                      c_tmp_size[i5] = r34->size[i5];
                    }

                    emlrtSizeEqCheck2DFastR2012b(l_ii, c_tmp_size, &eb_emlrtECI,
                      sp);
                    i5 = c_RightCumCounts->size[0] * c_RightCumCounts->size[1];
                    c_RightCumCounts->size[0] = RightCumCounts->size[0];
                    c_RightCumCounts->size[1] = RightCumCounts->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)c_RightCumCounts,
                                      i5, (int32_T)sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      c_RightCumCounts->data[i5] = RightCumCounts->data[i5] *
                        r34->data[i5];
                    }

                    emlrt_update_log_40(sp, c_RightCumCounts,
                                        *(emlrtLocationLoggingDataType (*)[613])
                                        &emlrtLocationLoggingDataTables[369U],
                                        LeftCumCounts);
                    i5 = b_RightCumCounts->size[0] * b_RightCumCounts->size[1];
                    b_RightCumCounts->size[0] = RightCumCounts->size[0];
                    b_RightCumCounts->size[1] = RightCumCounts->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)b_RightCumCounts,
                                      i5, (int32_T)sizeof(boolean_T),
                                      &o_emlrtRTEI);
                    loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      b_RightCumCounts->data[i5] = (RightCumCounts->data[i5] ==
                        0.0);
                    }

                    st.site = &sb_emlrtRSI;
                    c_eml_li_find(&st, b_RightCumCounts, d_ii);
                    i5 = r51->size[0];
                    r51->size[0] = d_ii->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)r51, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = d_ii->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      r51->data[i5] = 0.0;
                    }

                    emlrt_update_log_20(sp, r51, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[371U], r52);
                    idx = LeftCumCounts->size[0];
                    cdiff = LeftCumCounts->size[1];
                    loop_ub = r52->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      ix = idx * cdiff;
                      ixstart = d_ii->data[i5];
                      LeftCumCounts->data[emlrtDynamicBoundsCheckFastR2012b
                        (ixstart, 1, ix, &ae_emlrtBCI, sp) - 1] = r52->data[i5];
                    }

                    st.site = &rb_emlrtRSI;
                    f_sum(&st, LeftCumCounts, y);
                    i5 = n_y->size[0];
                    n_y->size[0] = y->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)n_y, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = y->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      n_y->data[i5] = y->data[i5];
                    }

                    emlrt_update_log_20(sp, n_y, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[373U], y);
                    i5 = m_y->size[0];
                    m_y->size[0] = y->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)m_y, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = y->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      m_y->data[i5] = -y->data[i5];
                    }

                    emlrt_update_log_20(sp, m_y, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[372U],
                                        metricRight);
                  } else {
                    i5 = r50->size[0];
                    r50->size[0] = pL->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)r50, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = pL->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      r50->data[i5] = 0.0;
                    }

                    emlrt_update_log_20(sp, r50, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[374U],
                                        c_emlrtLocationLoggingDataTable);
                    i5 = r49->size[0];
                    r49->size[0] = pL->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)r49, i5, (int32_T)
                                      sizeof(real_T), &o_emlrtRTEI);
                    loop_ub = pL->size[0];
                    for (i5 = 0; i5 < loop_ub; i5++) {
                      r49->data[i5] = 0.0;
                    }

                    emlrt_update_log_20(sp, r49, *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[375U],
                                        d_emlrtLocationLoggingDataTable);
                    st.site = &qb_emlrtRSI;
                    c_error(&st);
                  }
                }

                i5 = metricLeft->size[0];
                ix = metricLeft->size[0];
                nSelected = emlrt_update_log_1(metricLeft->
                  data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &be_emlrtBCI,
                  sp) - 1], *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[376U]);
                i5 = d_bRemainsSelected->size[0];
                d_bRemainsSelected->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)d_bRemainsSelected, i5,
                                  (int32_T)sizeof(boolean_T), &o_emlrtRTEI);
                loop_ub = bRemainsSelected->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  d_bRemainsSelected->data[i5] = !bRemainsSelected->data[i5];
                }

                st.site = &pb_emlrtRSI;
                b_eml_li_find(&st, d_bRemainsSelected, d_ii);
                i5 = r47->size[0];
                r47->size[0] = d_ii->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)r47, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = d_ii->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r47->data[i5] = rtInf;
                }

                emlrt_update_log_20(sp, r47, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[377U], r48);
                idx = metricLeft->size[0];
                loop_ub = r48->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  ix = d_ii->data[i5];
                  metricLeft->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, idx,
                    &ce_emlrtBCI, sp) - 1] = r48->data[i5];
                }

                i5 = c_bRemainsSelected->size[0];
                c_bRemainsSelected->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)c_bRemainsSelected, i5,
                                  (int32_T)sizeof(boolean_T), &o_emlrtRTEI);
                loop_ub = bRemainsSelected->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  c_bRemainsSelected->data[i5] = !bRemainsSelected->data[i5];
                }

                st.site = &nb_emlrtRSI;
                b_eml_li_find(&st, c_bRemainsSelected, d_ii);
                i5 = r45->size[0];
                r45->size[0] = d_ii->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)r45, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = d_ii->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r45->data[i5] = rtInf;
                }

                emlrt_update_log_20(sp, r45, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[378U], r46);
                idx = metricRight->size[0];
                loop_ub = r46->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  ix = d_ii->data[i5];
                  metricRight->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, idx,
                    &de_emlrtBCI, sp) - 1] = r46->data[i5];
                }

                /*  Calculate gain in metric for each of possible splits based on current */
                /*  metric value minus metric value of child weighted by number of terms */
                /*  in each child */
                st.site = &ob_emlrtRSI;
                b_st.site = &r_emlrtRSI;
                c_st.site = &s_emlrtRSI;
                if (N < 1.0) {
                  idx = -1;
                  d = 1.0;
                  apnd = 0.0;
                  overflow = false;
                } else if (muDoubleScalarIsInf(N)) {
                  idx = 0;
                  d = rtNaN;
                  apnd = N;
                  overflow = !(1.0 == N);
                } else {
                  d = 1.0;
                  x1 = muDoubleScalarFloor((N - 1.0) + 0.5);
                  apnd = 1.0 + x1;
                  lambda = (1.0 + x1) - N;
                  if (muDoubleScalarAbs(lambda) < 4.4408920985006262E-16 * N) {
                    x1++;
                    apnd = N;
                  } else if (lambda > 0.0) {
                    apnd = 1.0 + (x1 - 1.0);
                  } else {
                    x1++;
                  }

                  overflow = false;
                  idx = (int32_T)x1 - 1;
                }

                d_st.site = &t_emlrtRSI;
                if (!overflow) {
                } else {
                  pb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv45);
                  for (i = 0; i < 21; i++) {
                    cv14[i] = cv16[i];
                  }

                  emlrtInitCharArrayR2013a(&d_st, 21, m3, cv14);
                  emlrtAssign(&pb_y, m3);
                  f_st.site = &jq_emlrtRSI;
                  i_st.site = &er_emlrtRSI;
                  f_error(&f_st, b_message(&i_st, pb_y, &e_emlrtMCI),
                          &f_emlrtMCI);
                }

                i5 = iFeatIn->size[0] * iFeatIn->size[1];
                iFeatIn->size[0] = 1;
                iFeatIn->size[1] = idx + 1;
                emxEnsureCapacity(&c_st, (emxArray__common *)iFeatIn, i5,
                                  (int32_T)sizeof(real_T), &g_emlrtRTEI);
                if (idx + 1 > 0) {
                  iFeatIn->data[0] = d;
                  if (idx + 1 > 1) {
                    iFeatIn->data[idx] = apnd;
                    i5 = idx + (idx < 0);
                    if (i5 >= 0) {
                      nm1d2 = (int32_T)((uint32_T)i5 >> 1);
                    } else {
                      nm1d2 = ~(int32_T)((uint32_T)~i5 >> 1);
                    }

                    d_st.site = &u_emlrtRSI;
                    for (loop_ub = 1; loop_ub < nm1d2; loop_ub++) {
                      iFeatIn->data[loop_ub] = d + (real_T)loop_ub;
                      iFeatIn->data[idx - loop_ub] = apnd - (real_T)loop_ub;
                    }

                    if (nm1d2 << 1 == idx) {
                      iFeatIn->data[nm1d2] = (d + apnd) / 2.0;
                    } else {
                      iFeatIn->data[nm1d2] = d + (real_T)nm1d2;
                      iFeatIn->data[nm1d2 + 1] = apnd - (real_T)nm1d2;
                    }
                  }
                }

                i5 = i_iFeatIn->size[0] * i_iFeatIn->size[1];
                i_iFeatIn->size[0] = 1;
                i_iFeatIn->size[1] = iFeatIn->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)i_iFeatIn, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i_iFeatIn->data[i5] = iFeatIn->data[i5];
                }

                emlrt_update_log_5(sp, i_iFeatIn, *(emlrtLocationLoggingDataType
                                    (*)[613])&emlrtLocationLoggingDataTables
                                   [383U], iFeatIn);
                i5 = y->size[0];
                y->size[0] = iFeatIn->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)y, i5, (int32_T)sizeof
                                  (real_T), &o_emlrtRTEI);
                loop_ub = iFeatIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  y->data[i5] = iFeatIn->data[iFeatIn->size[0] * i5];
                }

                i5 = y->size[0];
                ix = metricLeft->size[0];
                emlrtSizeEqCheck1DFastR2012b(i5, ix, &fb_emlrtECI, sp);
                lambda = emlrt_update_log_1(N - 1.0,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[386U]);
                st.site = &ob_emlrtRSI;
                b_st.site = &s_emlrtRSI;
                if (muDoubleScalarIsNaN(lambda)) {
                  idx = 0;
                  d = rtNaN;
                  apnd = 0.0;
                  overflow = false;
                } else if (lambda < 0.0) {
                  idx = -1;
                  d = -1.0;
                  apnd = 0.0;
                  overflow = false;
                } else if (muDoubleScalarIsInf(lambda)) {
                  idx = 0;
                  d = rtNaN;
                  apnd = 0.0;
                  overflow = !(lambda == 0.0);
                } else {
                  d = lambda;
                  x1 = muDoubleScalarFloor(-(0.0 - lambda) + 0.5);
                  apnd = lambda + -x1;
                  if (muDoubleScalarAbs(0.0 - apnd) < 4.4408920985006262E-16 *
                      muDoubleScalarMax(lambda, 0.0)) {
                    x1++;
                    apnd = 0.0;
                  } else if (0.0 - apnd > 0.0) {
                    apnd = lambda + -(x1 - 1.0);
                  } else {
                    x1++;
                  }

                  overflow = false;
                  idx = (int32_T)x1 - 1;
                }

                c_st.site = &t_emlrtRSI;
                if (!overflow) {
                } else {
                  qb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv46);
                  for (i = 0; i < 21; i++) {
                    cv14[i] = cv16[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 21, m3, cv14);
                  emlrtAssign(&qb_y, m3);
                  d_st.site = &jq_emlrtRSI;
                  g_st.site = &er_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, qb_y, &e_emlrtMCI),
                          &f_emlrtMCI);
                }

                i5 = iFeatIn->size[0] * iFeatIn->size[1];
                iFeatIn->size[0] = 1;
                iFeatIn->size[1] = idx + 1;
                emxEnsureCapacity(&b_st, (emxArray__common *)iFeatIn, i5,
                                  (int32_T)sizeof(real_T), &g_emlrtRTEI);
                if (idx + 1 > 0) {
                  iFeatIn->data[0] = d;
                  if (idx + 1 > 1) {
                    iFeatIn->data[idx] = apnd;
                    i5 = idx + (idx < 0);
                    if (i5 >= 0) {
                      nm1d2 = (int32_T)((uint32_T)i5 >> 1);
                    } else {
                      nm1d2 = ~(int32_T)((uint32_T)~i5 >> 1);
                    }

                    c_st.site = &u_emlrtRSI;
                    for (loop_ub = 1; loop_ub < nm1d2; loop_ub++) {
                      iFeatIn->data[loop_ub] = d + -(real_T)loop_ub;
                      iFeatIn->data[idx - loop_ub] = apnd - (-(real_T)loop_ub);
                    }

                    if (nm1d2 << 1 == idx) {
                      iFeatIn->data[nm1d2] = (d + apnd) / 2.0;
                    } else {
                      iFeatIn->data[nm1d2] = d + -(real_T)nm1d2;
                      iFeatIn->data[nm1d2 + 1] = apnd - (-(real_T)nm1d2);
                    }
                  }
                }

                i5 = h_iFeatIn->size[0] * h_iFeatIn->size[1];
                h_iFeatIn->size[0] = 1;
                h_iFeatIn->size[1] = iFeatIn->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)h_iFeatIn, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  h_iFeatIn->data[i5] = iFeatIn->data[i5];
                }

                emlrt_update_log_5(sp, h_iFeatIn, *(emlrtLocationLoggingDataType
                                    (*)[613])&emlrtLocationLoggingDataTables
                                   [385U], iFeatIn);
                i5 = iTrainThis->size[0];
                iTrainThis->size[0] = iFeatIn->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)iTrainThis, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iFeatIn->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  iTrainThis->data[i5] = iFeatIn->data[iFeatIn->size[0] * i5];
                }

                i5 = iTrainThis->size[0];
                ix = metricRight->size[0];
                emlrtSizeEqCheck1DFastR2012b(i5, ix, &gb_emlrtECI, sp);
                i5 = l_y->size[0];
                l_y->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)l_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  l_y->data[i5] = y->data[i5] * metricLeft->data[i5];
                }

                emlrt_update_log_20(sp, l_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[382U], y);
                i5 = c_iTrainThis->size[0];
                c_iTrainThis->size[0] = iTrainThis->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)c_iTrainThis, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = iTrainThis->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  c_iTrainThis->data[i5] = iTrainThis->data[i5] *
                    metricRight->data[i5];
                }

                emlrt_update_log_20(sp, c_iTrainThis,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[384U],
                                    iTrainThis);
                i5 = y->size[0];
                ix = iTrainThis->size[0];
                emlrtSizeEqCheck1DFastR2012b(i5, ix, &fb_emlrtECI, sp);
                i5 = k_y->size[0];
                k_y->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)k_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  k_y->data[i5] = y->data[i5] + iTrainThis->data[i5];
                }

                emlrt_update_log_20(sp, k_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[381U], iTrainThis);
                rdivide(sp, iTrainThis, N, y);
                i5 = j_y->size[0];
                j_y->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)j_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  j_y->data[i5] = y->data[i5];
                }

                emlrt_update_log_20(sp, j_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[380U], y);
                i5 = metricCurrent->size[0];
                metricCurrent->size[0] = y->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)metricCurrent, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  metricCurrent->data[i5] = nSelected - y->data[i5];
                }

                emlrt_update_log_20(sp, metricCurrent,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[379U],
                                    iTrainThis);

                /*  Randomly sample from equally best splits */
                apnd = emlrt_update_log_1((real_T)iTrainThis->size[0] - 1.0,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[387U]);
                if (1.0 > apnd) {
                  i5 = 0;
                } else {
                  i5 = iTrainThis->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &rc_emlrtBCI, sp);
                  i5 = iTrainThis->size[0];
                  ix = (int32_T)apnd;
                  i5 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &rc_emlrtBCI,
                    sp);
                }

                emlrtVectorVectorIndexCheckR2012b(iTrainThis->size[0], 1, 1, i5,
                  &hb_emlrtECI, sp);
                st.site = &mb_emlrtRSI;
                b_st.site = &cp_emlrtRSI;
                c_st.site = &dp_emlrtRSI;
                if ((i5 == 1) || (i5 != 1)) {
                  overflow = true;
                } else {
                  overflow = false;
                }

                if (overflow) {
                } else {
                  rb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv47);
                  for (i = 0; i < 36; i++) {
                    cv17[i] = cv18[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 36, m3, cv17);
                  emlrtAssign(&rb_y, m3);
                  d_st.site = &iq_emlrtRSI;
                  g_st.site = &dr_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, rb_y, &bc_emlrtMCI),
                          &cc_emlrtMCI);
                }

                if (i5 > 0) {
                } else {
                  sb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv48);
                  for (i = 0; i < 39; i++) {
                    cv19[i] = cv20[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 39, m3, cv19);
                  emlrtAssign(&sb_y, m3);
                  d_st.site = &dq_emlrtRSI;
                  g_st.site = &yq_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, sb_y, &bb_emlrtMCI),
                          &cb_emlrtMCI);
                }

                d_st.site = &ep_emlrtRSI;
                ixstart = 1;
                nSelected = iTrainThis->data[0];
                idx = 1;
                if (i5 > 1) {
                  if (muDoubleScalarIsNaN(nSelected)) {
                    f_st.site = &hg_emlrtRSI;
                    if (i5 > 2147483646) {
                      h_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&h_st);
                    }

                    ix = 2;
                    exitg5 = false;
                    while ((!exitg5) && (ix <= i5)) {
                      ixstart = ix;
                      if (!muDoubleScalarIsNaN(iTrainThis->data[ix - 1])) {
                        nSelected = iTrainThis->data[ix - 1];
                        idx = ix;
                        exitg5 = true;
                      } else {
                        ix++;
                      }
                    }
                  }

                  if (ixstart < i5) {
                    f_st.site = &gg_emlrtRSI;
                    if (ixstart + 1 > i5) {
                      b_ixstart = false;
                    } else {
                      b_ixstart = (i5 > 2147483646);
                    }

                    if (b_ixstart) {
                      h_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&h_st);
                    }

                    while (ixstart + 1 <= i5) {
                      if (iTrainThis->data[ixstart] > nSelected) {
                        nSelected = iTrainThis->data[ixstart];
                        idx = ixstart + 1;
                      }

                      ixstart++;
                    }
                  }
                }

                i5 = splitGains->size[0];
                ix = (int32_T)rankX;
                splitGains->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5,
                  &ee_emlrtBCI, sp) - 1] = emlrt_update_log_1(nSelected,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[432U]);
                i5 = iSplits->size[0];
                ix = (int32_T)rankX;
                iSplits->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5,
                  &fe_emlrtBCI, sp) - 1] = emlrt_update_log_1(idx,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[431U]);
                apnd = emlrt_update_log_1((real_T)iTrainThis->size[0] - 1.0,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[391U]);
                if (1.0 > apnd) {
                  loop_ub = 0;
                } else {
                  i5 = iTrainThis->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &sc_emlrtBCI, sp);
                  i5 = iTrainThis->size[0];
                  ix = (int32_T)apnd;
                  loop_ub = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5,
                    &sc_emlrtBCI, sp);
                }

                emlrtVectorVectorIndexCheckR2012b(iTrainThis->size[0], 1, 1,
                  loop_ub, &ib_emlrtECI, sp);
                st.site = &lb_emlrtRSI;
                i5 = splitGains->size[0];
                ix = (int32_T)rankX;
                nSelected = splitGains->data[emlrtDynamicBoundsCheckFastR2012b
                  (ix, 1, i5, &ge_emlrtBCI, &st) - 1];
                i5 = b_iTrainThis->size[0];
                b_iTrainThis->size[0] = loop_ub;
                emxEnsureCapacity(&st, (emxArray__common *)b_iTrainThis, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < loop_ub; i5++) {
                  b_iTrainThis->data[i5] = iTrainThis->data[i5] - nSelected;
                }

                emlrt_update_log_20(&st, b_iTrainThis,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[390U], y);
                i5 = i_y->size[0];
                i_y->size[0] = y->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)i_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  i_y->data[i5] = y->data[i5];
                }

                d_abs(&st, i_y, y);
                i5 = h_y->size[0];
                h_y->size[0] = y->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)h_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  h_y->data[i5] = y->data[i5];
                }

                emlrt_update_log_20(&st, h_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[389U], y);
                i5 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = y->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)bRemainsSelected, i5,
                                  (int32_T)sizeof(boolean_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  bRemainsSelected->data[i5] = (y->data[i5] <
                    2.2204460492503131E-15);
                }

                b_st.site = &w_emlrtRSI;
                idx = 0;
                i5 = d_ii->size[0];
                d_ii->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i5, (int32_T)
                                  sizeof(int32_T), &h_emlrtRTEI);
                c_st.site = &x_emlrtRSI;
                if (1 > bRemainsSelected->size[0]) {
                  overflow = false;
                } else {
                  overflow = (bRemainsSelected->size[0] > 2147483646);
                }

                if (overflow) {
                  d_st.site = &v_emlrtRSI;
                  check_forloop_overflow_error(&d_st);
                }

                nm1d2 = 1;
                exitg4 = false;
                while ((!exitg4) && (nm1d2 <= bRemainsSelected->size[0])) {
                  b_guard2 = false;
                  if (bRemainsSelected->data[nm1d2 - 1]) {
                    idx++;
                    d_ii->data[idx - 1] = nm1d2;
                    if (idx >= bRemainsSelected->size[0]) {
                      exitg4 = true;
                    } else {
                      b_guard2 = true;
                    }
                  } else {
                    b_guard2 = true;
                  }

                  if (b_guard2) {
                    nm1d2++;
                  }
                }

                if (idx <= bRemainsSelected->size[0]) {
                } else {
                  tb_y = NULL;
                  m3 = emlrtCreateString("Assertion failed.");
                  emlrtAssign(&tb_y, m3);
                  c_st.site = &bq_emlrtRSI;
                  f_error(&c_st, tb_y, &j_emlrtMCI);
                }

                if (bRemainsSelected->size[0] == 1) {
                  if (idx == 0) {
                    i5 = d_ii->size[0];
                    d_ii->size[0] = 0;
                    emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i5,
                                      (int32_T)sizeof(int32_T), &o_emlrtRTEI);
                  }
                } else {
                  if (1 > idx) {
                    loop_ub = 0;
                  } else {
                    loop_ub = idx;
                  }

                  i5 = k_ii->size[0];
                  k_ii->size[0] = loop_ub;
                  emxEnsureCapacity(&b_st, (emxArray__common *)k_ii, i5,
                                    (int32_T)sizeof(int32_T), &o_emlrtRTEI);
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    k_ii->data[i5] = d_ii->data[i5];
                  }

                  i5 = d_ii->size[0];
                  d_ii->size[0] = k_ii->size[0];
                  emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i5,
                                    (int32_T)sizeof(int32_T), &o_emlrtRTEI);
                  loop_ub = k_ii->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    d_ii->data[i5] = k_ii->data[i5];
                  }
                }

                i5 = h_ii->size[0];
                h_ii->size[0] = d_ii->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)h_ii, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = d_ii->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  h_ii->data[i5] = d_ii->data[i5];
                }

                emlrt_update_log_20(sp, h_ii, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[388U], iTrainThis);
                if (iTrainThis->size[0] == 0) {
                  if (!b2) {
                    e_tmp_size[0] = 1;
                    g_tmp_data[0] = 1.0;
                    b2 = true;
                  }

                  h_tmp_data.data = (real_T *)&g_tmp_data;
                  h_tmp_data.size = (int32_T *)&e_tmp_size;
                  h_tmp_data.allocatedSize = 1;
                  h_tmp_data.numDimensions = 1;
                  h_tmp_data.canFreeData = false;
                  emlrt_update_log_20(sp, &h_tmp_data,
                                      *(emlrtLocationLoggingDataType (*)[613])&
                                      emlrtLocationLoggingDataTables[392U],
                                      iTrainThis);
                }

                i5 = iSplits->size[0];
                ix = (int32_T)rankX;
                ixstart = iTrainThis->size[0];
                st.site = &kb_emlrtRSI;
                apnd = emlrt_update_log_1(b_randi(iTrainThis->size[0]),
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[394U]);
                nm1d2 = (int32_T)emlrtIntegerCheckFastR2012b(apnd, &l_emlrtDCI,
                  sp);
                iSplits->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5,
                  &he_emlrtBCI, sp) - 1] = emlrt_update_log_1(iTrainThis->
                  data[emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1, ixstart,
                  &ie_emlrtBCI, sp) - 1], *(emlrtLocationLoggingDataType (*)[613])
                  &emlrtLocationLoggingDataTables[393U]);
                nVarAtt++;
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }

              /*  If no split gives a positive gain then stop */
              st.site = &jb_emlrtRSI;
              b_st.site = &cg_emlrtRSI;
              c_st.site = &dg_emlrtRSI;
              if ((splitGains->size[0] == 1) || (splitGains->size[0] != 1)) {
                b2 = true;
              } else {
                b2 = false;
              }

              if (b2) {
              } else {
                ub_y = NULL;
                m3 = emlrtCreateCharArray(2, iv49);
                for (i = 0; i < 36; i++) {
                  cv17[i] = cv18[i];
                }

                emlrtInitCharArrayR2013a(&c_st, 36, m3, cv17);
                emlrtAssign(&ub_y, m3);
                d_st.site = &iq_emlrtRSI;
                g_st.site = &dr_emlrtRSI;
                f_error(&d_st, b_message(&g_st, ub_y, &bc_emlrtMCI),
                        &cc_emlrtMCI);
              }

              if (splitGains->size[0] > 0) {
              } else {
                vb_y = NULL;
                m3 = emlrtCreateCharArray(2, iv50);
                for (i = 0; i < 39; i++) {
                  cv19[i] = cv20[i];
                }

                emlrtInitCharArrayR2013a(&c_st, 39, m3, cv19);
                emlrtAssign(&vb_y, m3);
                d_st.site = &dq_emlrtRSI;
                g_st.site = &yq_emlrtRSI;
                f_error(&d_st, b_message(&g_st, vb_y, &bb_emlrtMCI),
                        &cb_emlrtMCI);
              }

              d_st.site = &ep_emlrtRSI;
              ixstart = 1;
              nSelected = splitGains->data[0];
              if (splitGains->size[0] > 1) {
                if (muDoubleScalarIsNaN(splitGains->data[0])) {
                  f_st.site = &hg_emlrtRSI;
                  overflow = (splitGains->size[0] > 2147483646);
                  if (overflow) {
                    h_st.site = &v_emlrtRSI;
                    check_forloop_overflow_error(&h_st);
                  }

                  ix = 2;
                  exitg3 = false;
                  while ((!exitg3) && (ix <= splitGains->size[0])) {
                    ixstart = ix;
                    if (!muDoubleScalarIsNaN(splitGains->data[ix - 1])) {
                      nSelected = splitGains->data[ix - 1];
                      exitg3 = true;
                    } else {
                      ix++;
                    }
                  }
                }

                if (ixstart < splitGains->size[0]) {
                  f_st.site = &gg_emlrtRSI;
                  if (ixstart + 1 > splitGains->size[0]) {
                    overflow = false;
                  } else {
                    overflow = (splitGains->size[0] > 2147483646);
                  }

                  if (overflow) {
                    h_st.site = &v_emlrtRSI;
                    check_forloop_overflow_error(&h_st);
                  }

                  while (ixstart + 1 <= splitGains->size[0]) {
                    if (splitGains->data[ixstart] > nSelected) {
                      nSelected = splitGains->data[ixstart];
                    }

                    ixstart++;
                  }
                }
              }

              if (emlrt_update_log_1(nSelected, *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[395U]) < 0.0) {
                *bLeaf = emlrt_update_log_31(true,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[396U]);
                i5 = r38->size[0] * r38->size[1];
                r38->size[0] = 0;
                r38->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)r38, i5, (int32_T)
                                  sizeof(boolean_T), &o_emlrtRTEI);
                emlrt_update_log_37(sp, r38, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[397U], bLessThanTrain);
                f_tmp_size[0] = 1;
                f_tmp_size[1] = 1;
                i_tmp_data[0] = 0.0;
                emlrt_update_log_34(i_tmp_data, f_tmp_size,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[398U],
                                    partitionPoint_data, partitionPoint_size);
                i5 = r37->size[0];
                r37->size[0] = XTrain->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)r37, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = XTrain->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r37->data[i5] = 0.0;
                }

                emlrt_update_log_20(sp, r37, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[399U],
                                    b_emlrtLocationLoggingDataTable);
                guard1 = true;
              } else {
                /*  Establish between projection direction */
                st.site = &ib_emlrtRSI;
                b_st.site = &cg_emlrtRSI;
                c_st.site = &dg_emlrtRSI;
                if ((splitGains->size[0] == 1) || (splitGains->size[0] != 1)) {
                  b2 = true;
                } else {
                  b2 = false;
                }

                if (b2) {
                } else {
                  wb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv51);
                  for (i = 0; i < 36; i++) {
                    cv17[i] = cv18[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 36, m3, cv17);
                  emlrtAssign(&wb_y, m3);
                  d_st.site = &iq_emlrtRSI;
                  g_st.site = &dr_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, wb_y, &bc_emlrtMCI),
                          &cc_emlrtMCI);
                }

                if (splitGains->size[0] > 0) {
                } else {
                  xb_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv52);
                  for (i = 0; i < 39; i++) {
                    cv19[i] = cv20[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 39, m3, cv19);
                  emlrtAssign(&xb_y, m3);
                  d_st.site = &dq_emlrtRSI;
                  g_st.site = &yq_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, xb_y, &bb_emlrtMCI),
                          &cb_emlrtMCI);
                }

                d_st.site = &ep_emlrtRSI;
                ixstart = 1;
                nSelected = splitGains->data[0];
                if (splitGains->size[0] > 1) {
                  if (muDoubleScalarIsNaN(splitGains->data[0])) {
                    f_st.site = &hg_emlrtRSI;
                    overflow = (splitGains->size[0] > 2147483646);
                    if (overflow) {
                      h_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&h_st);
                    }

                    ix = 2;
                    exitg2 = false;
                    while ((!exitg2) && (ix <= splitGains->size[0])) {
                      ixstart = ix;
                      if (!muDoubleScalarIsNaN(splitGains->data[ix - 1])) {
                        nSelected = splitGains->data[ix - 1];
                        exitg2 = true;
                      } else {
                        ix++;
                      }
                    }
                  }

                  if (ixstart < splitGains->size[0]) {
                    f_st.site = &gg_emlrtRSI;
                    if (ixstart + 1 > splitGains->size[0]) {
                      overflow = false;
                    } else {
                      overflow = (splitGains->size[0] > 2147483646);
                    }

                    if (overflow) {
                      h_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&h_st);
                    }

                    while (ixstart + 1 <= splitGains->size[0]) {
                      if (splitGains->data[ixstart] > nSelected) {
                        nSelected = splitGains->data[ixstart];
                      }

                      ixstart++;
                    }
                  }
                }

                lambda = emlrt_update_log_1(nSelected,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[400U]);
                st.site = &hb_emlrtRSI;
                i5 = b_splitGains->size[0];
                b_splitGains->size[0] = splitGains->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)b_splitGains, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = splitGains->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  b_splitGains->data[i5] = splitGains->data[i5] - lambda;
                }

                emlrt_update_log_20(&st, b_splitGains,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[403U], y);
                i5 = g_y->size[0];
                g_y->size[0] = y->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)g_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  g_y->data[i5] = y->data[i5];
                }

                d_abs(&st, g_y, y);
                i5 = f_y->size[0];
                f_y->size[0] = y->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)f_y, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  f_y->data[i5] = y->data[i5];
                }

                emlrt_update_log_20(&st, f_y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[402U], y);
                i5 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = y->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)bRemainsSelected, i5,
                                  (int32_T)sizeof(boolean_T), &o_emlrtRTEI);
                loop_ub = y->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  bRemainsSelected->data[i5] = (y->data[i5] <
                    2.2204460492503131E-15);
                }

                b_st.site = &w_emlrtRSI;
                idx = 0;
                i5 = d_ii->size[0];
                d_ii->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i5, (int32_T)
                                  sizeof(int32_T), &h_emlrtRTEI);
                c_st.site = &x_emlrtRSI;
                if (1 > bRemainsSelected->size[0]) {
                  overflow = false;
                } else {
                  overflow = (bRemainsSelected->size[0] > 2147483646);
                }

                if (overflow) {
                  d_st.site = &v_emlrtRSI;
                  check_forloop_overflow_error(&d_st);
                }

                nm1d2 = 1;
                exitg1 = false;
                while ((!exitg1) && (nm1d2 <= bRemainsSelected->size[0])) {
                  b_guard1 = false;
                  if (bRemainsSelected->data[nm1d2 - 1]) {
                    idx++;
                    d_ii->data[idx - 1] = nm1d2;
                    if (idx >= bRemainsSelected->size[0]) {
                      exitg1 = true;
                    } else {
                      b_guard1 = true;
                    }
                  } else {
                    b_guard1 = true;
                  }

                  if (b_guard1) {
                    nm1d2++;
                  }
                }

                if (idx <= bRemainsSelected->size[0]) {
                } else {
                  yb_y = NULL;
                  m3 = emlrtCreateString("Assertion failed.");
                  emlrtAssign(&yb_y, m3);
                  c_st.site = &bq_emlrtRSI;
                  f_error(&c_st, yb_y, &j_emlrtMCI);
                }

                if (bRemainsSelected->size[0] == 1) {
                  if (idx == 0) {
                    i5 = d_ii->size[0];
                    d_ii->size[0] = 0;
                    emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i5,
                                      (int32_T)sizeof(int32_T), &o_emlrtRTEI);
                  }
                } else {
                  if (1 > idx) {
                    loop_ub = 0;
                  } else {
                    loop_ub = idx;
                  }

                  i5 = j_ii->size[0];
                  j_ii->size[0] = loop_ub;
                  emxEnsureCapacity(&b_st, (emxArray__common *)j_ii, i5,
                                    (int32_T)sizeof(int32_T), &o_emlrtRTEI);
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    j_ii->data[i5] = d_ii->data[i5];
                  }

                  i5 = d_ii->size[0];
                  d_ii->size[0] = j_ii->size[0];
                  emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i5,
                                    (int32_T)sizeof(int32_T), &o_emlrtRTEI);
                  loop_ub = j_ii->size[0];
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    d_ii->data[i5] = j_ii->data[i5];
                  }
                }

                i5 = g_ii->size[0];
                g_ii->size[0] = d_ii->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)g_ii, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = d_ii->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  g_ii->data[i5] = d_ii->data[i5];
                }

                emlrt_update_log_20(sp, g_ii, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[401U], iTrainThis);

                /*  Use given method to break ties */
                st.site = &gb_emlrtRSI;
                if (emlrt_update_log_31(d_strcmpi(&st, options->dirIfEqual.data,
                      options->dirIfEqual.size), *(emlrtLocationLoggingDataType
                      (*)[613])&emlrtLocationLoggingDataTables[404U])) {
                  i5 = iTrainThis->size[0];
                  st.site = &fb_emlrtRSI;
                  apnd = emlrt_update_log_1(b_randi(iTrainThis->size[0]),
                    *(emlrtLocationLoggingDataType (*)[613])&
                    emlrtLocationLoggingDataTables[406U]);
                  ix = (int32_T)emlrtIntegerCheckFastR2012b(apnd, &j_emlrtDCI,
                    sp);
                  iDir = emlrt_update_log_1(iTrainThis->
                    data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5,
                    &sd_emlrtBCI, sp) - 1], *(emlrtLocationLoggingDataType (*)
                    [613])&emlrtLocationLoggingDataTables[405U]);
                } else {
                  st.site = &eb_emlrtRSI;
                  if (emlrt_update_log_31(e_strcmpi(&st,
                        options->dirIfEqual.data, options->dirIfEqual.size),
                                          *(emlrtLocationLoggingDataType (*)[613])
                                          &emlrtLocationLoggingDataTables[407U]))
                  {
                    i5 = iTrainThis->size[0];
                    emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &tc_emlrtBCI, sp);
                    iDir = emlrt_update_log_1(iTrainThis->data[0],
                      *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[408U]);
                  } else {
                    st.site = &db_emlrtRSI;
                    d_error(&st);
                  }
                }

                i5 = iSplits->size[0];
                ix = (int32_T)iDir;
                lambda = emlrt_update_log_1(iSplits->
                  data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &td_emlrtBCI,
                  sp) - 1], *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[409U]);

                /*         %% Establish partition point and assign to child */
                i5 = c_projMat->size[1];
                ix = (int32_T)iDir;
                emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &uc_emlrtBCI, sp);
                loop_ub = c_projMat->size[0];
                i = c_projMat->size[0];
                i5 = j_projMat->size[0];
                j_projMat->size[0] = i;
                emxEnsureCapacity(sp, (emxArray__common *)j_projMat, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < i; i5++) {
                  j_projMat->data[i5] = c_projMat->data[i5 + c_projMat->size[0] *
                    ((int32_T)iDir - 1)];
                }

                i5 = e_projMat->size[0] * e_projMat->size[1];
                e_projMat->size[0] = loop_ub;
                e_projMat->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)e_projMat, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                i5 = 0;
                while (i5 <= 0) {
                  for (i5 = 0; i5 < loop_ub; i5++) {
                    e_projMat->data[i5] = j_projMat->data[i5];
                  }

                  i5 = 1;
                }

                emlrt_update_log_2(sp, e_projMat, *(emlrtLocationLoggingDataType
                                    (*)[613])&emlrtLocationLoggingDataTables
                                   [410U], c_projMat);
                loop_ub = XTrainBag->size[0];
                i5 = XTrainBag->size[1];
                ix = (int32_T)iDir;
                nm1d2 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5,
                  &vc_emlrtBCI, sp);
                i5 = b_XTrainBag->size[0];
                b_XTrainBag->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_XTrainBag, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < loop_ub; i5++) {
                  b_XTrainBag->data[i5] = XTrainBag->data[i5 + XTrainBag->size[0]
                    * (nm1d2 - 1)];
                }

                emlrt_update_log_20(sp, b_XTrainBag,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[411U],
                                    iTrainThis);
                st.site = &cb_emlrtRSI;
                b_st.site = &pe_emlrtRSI;
                b_eml_sort(&b_st, iTrainThis, y);
                emlrt_update_log_20(sp, y, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[412U], UTrainSort);

                /*  The convoluted nature of the below is to avoid numerical errors */
                i5 = UTrainSort->size[0];
                ix = (int32_T)emlrtIntegerCheckFastR2012b(lambda, &k_emlrtDCI,
                  sp);
                nSelected = emlrt_update_log_1(UTrainSort->
                  data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &ud_emlrtBCI,
                  sp) - 1], *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[413U]);
                i5 = c_UTrainSort->size[0];
                c_UTrainSort->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)c_UTrainSort, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  c_UTrainSort->data[i5] = UTrainSort->data[i5] - nSelected;
                }

                emlrt_update_log_20(sp, c_UTrainSort,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[414U],
                                    UTrainSort);
                i5 = UTrainSort->size[0];
                ix = (int32_T)lambda;
                ixstart = UTrainSort->size[0];
                nm1d2 = (int32_T)emlrt_update_log_1(lambda + 1.0,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[418U]);
                lambda = emlrt_update_log_1(emlrt_update_log_1(UTrainSort->
                  data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i5, &vd_emlrtBCI,
                  sp) - 1] * 0.5, *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[416U]) + emlrt_update_log_1
                  (UTrainSort->data[emlrtDynamicBoundsCheckFastR2012b(nm1d2, 1,
                  ixstart, &wd_emlrtBCI, sp) - 1] * 0.5,
                   *(emlrtLocationLoggingDataType (*)[613])&
                   emlrtLocationLoggingDataTables[417U]),
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[415U]);
                f_tmp_size[0] = 1;
                f_tmp_size[1] = 1;
                apnd = emlrt_update_log_1(lambda + nSelected,
                  *(emlrtLocationLoggingDataType (*)[613])&
                  emlrtLocationLoggingDataTables[420U]);
                i_tmp_data[0] = apnd;
                emlrt_update_log_34(i_tmp_data, f_tmp_size,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[419U],
                                    partitionPoint_data, partitionPoint_size);
                i5 = b_UTrainSort->size[0];
                b_UTrainSort->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)b_UTrainSort, i5,
                                  (int32_T)sizeof(real_T), &o_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  b_UTrainSort->data[i5] = UTrainSort->data[i5] + nSelected;
                }

                emlrt_update_log_20(sp, b_UTrainSort,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[421U],
                                    e_UTrainSort);
                st.site = &bb_emlrtRSI;
                repmat(&st, partitionPoint_data, iTrainThis->size[0], r35);
                i5 = r36->size[0] * r36->size[1];
                r36->size[0] = r35->size[0];
                r36->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)r36, i5, (int32_T)
                                  sizeof(real_T), &o_emlrtRTEI);
                loop_ub = r35->size[0] * r35->size[1];
                for (i5 = 0; i5 < loop_ub; i5++) {
                  r36->data[i5] = r35->data[i5];
                }

                emlrt_update_log_41(sp, r36, *(emlrtLocationLoggingDataType (*)
                  [613])&emlrtLocationLoggingDataTables[423U], r35);
                d_iTrainThis[0] = iTrainThis->size[0];
                d_iTrainThis[1] = 1;
                for (i5 = 0; i5 < 2; i5++) {
                  c_tmp_size[i5] = r35->size[i5];
                }

                emlrtSizeEqCheck2DFastR2012b(d_iTrainThis, c_tmp_size,
                  &jb_emlrtECI, sp);
                nm1d2 = iTrainThis->size[0];
                i5 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = nm1d2;
                emxEnsureCapacity(sp, (emxArray__common *)bRemainsSelected, i5,
                                  (int32_T)sizeof(boolean_T), &o_emlrtRTEI);
                for (i5 = 0; i5 < nm1d2; i5++) {
                  bRemainsSelected->data[i5] = (iTrainThis->data[i5] <=
                    r35->data[i5]);
                }

                e_bRemainsSelected[0] = bRemainsSelected->size[0];
                e_bRemainsSelected[1] = 1;
                d_YTrain = *bRemainsSelected;
                d_YTrain.size = (int32_T *)&e_bRemainsSelected;
                d_YTrain.numDimensions = 1;
                emlrt_update_log_37(sp, &d_YTrain,
                                    *(emlrtLocationLoggingDataType (*)[613])&
                                    emlrtLocationLoggingDataTables[422U],
                                    bLessThanTrain);
                b_bLessThanTrain[0] = bLessThanTrain->size[0];
                d_YTrain = *bLessThanTrain;
                d_YTrain.size = (int32_T *)&b_bLessThanTrain;
                d_YTrain.numDimensions = 1;
                st.site = &ab_emlrtRSI;
                if (!emlrt_update_log_31(e_any(&st, &d_YTrain),
                     *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[424U])) {
                  guard2 = true;
                } else {
                  c_bLessThanTrain[0] = bLessThanTrain->size[0];
                  d_YTrain = *bLessThanTrain;
                  d_YTrain.size = (int32_T *)&c_bLessThanTrain;
                  d_YTrain.numDimensions = 1;
                  st.site = &ab_emlrtRSI;
                  if (emlrt_update_log_31(c_all(&st, &d_YTrain),
                                          *(emlrtLocationLoggingDataType (*)[613])
                                          &emlrtLocationLoggingDataTables[425U]))
                  {
                    guard2 = true;
                  } else {
                    guard1 = true;
                  }
                }
              }
            }
          }
        }
      }

      if (guard2) {
        st.site = &y_emlrtRSI;
        e_error(&st);
      }

      if (guard1) {
        i5 = c_projMat->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i5, &wc_emlrtBCI, sp);
        loop_ub = c_projMat->size[0];
        i5 = d_projMat->size[0];
        d_projMat->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)d_projMat, i5, (int32_T)sizeof
                          (real_T), &o_emlrtRTEI);
        for (i5 = 0; i5 < loop_ub; i5++) {
          d_projMat->data[i5] = c_projMat->data[i5];
        }

        emlrt_update_log_20(sp, d_projMat, *(emlrtLocationLoggingDataType (*)
          [613])&emlrtLocationLoggingDataTables[426U], projMat);
      }

      emxFree_real_T(&e_UTrainSort);
      emxFree_real_T(&d_emlrtLocationLoggingDataTable);
      emxFree_real_T(&c_emlrtLocationLoggingDataTable);
      emxFree_real_T(&b_emlrtLocationLoggingDataTable);
      emxFree_real_T(&k_projMat);
      emxFree_real_T(&f_XTrainBag);
      emxFree_real_T(&b_muX);
      emxFree_real_T(&p_iIn);
      emxFree_real_T(&o_iIn);
      emxFree_real_T(&n_iIn);
      emxFree_real_T(&m_iIn);
      emxFree_real_T(&l_iIn);
      emxFree_real_T(&k_iIn);
      emxFree_real_T(&j_iIn);
      emxFree_int32_T(&k_ii);
      emxFree_real_T(&q_iFeatIn);
      emxFree_real_T(&j_projMat);
      emxFree_int32_T(&j_ii);
      emxFree_real_T(&i_iIn);
      emxFree_real_T(&h_iIn);
      emxFree_real_T(&g_iIn);
      emxFree_real_T(&f_iIn);
      emxFree_real_T(&e_iIn);
      emxFree_real_T(&d_iIn);
      emxFree_real_T(&c_iIn);
      emxFree_real_T(&p_iFeatIn);
      emxFree_real_T(&r65);
      emxFree_real_T(&g_XTrain);
      emxFree_boolean_T(&k_bXVaries);
      emxFree_boolean_T(&d_bInMat);
      emxFree_real_T(&o_iFeatIn);
      emxFree_real_T(&n_iFeatIn);
      emxFree_real_T(&m_iFeatIn);
      emxFree_real_T(&l_iFeatIn);
      emxFree_real_T(&i_projMat);
      emxFree_real_T(&c_r1);
      emxFree_real_T(&k_iFeatIn);
      emxFree_real_T(&hb_y);
      emxFree_real_T(&gb_y);
      emxFree_real_T(&fb_y);
      emxFree_boolean_T(&eb_y);
      emxFree_real_T(&r64);
      emxFree_real_T(&h_projMat);
      emxFree_real_T(&b_r1);
      emxFree_real_T(&e_YTrainBag);
      emxFree_real_T(&c_q2);
      emxFree_real_T(&d_YTrainBag);
      emxFree_real_T(&db_y);
      emxFree_real_T(&cb_y);
      emxFree_real_T(&bb_y);
      emxFree_boolean_T(&ab_y);
      emxFree_real_T(&r63);
      emxFree_real_T(&e_XTrainBag);
      emxFree_real_T(&d_UTrainSort);
      emxFree_real_T(&i_ii);
      emxFree_boolean_T(&f_YTrain);
      emxFree_real_T(&j_iFeatIn);
      emxFree_real_T(&y_y);
      emxFree_real_T(&r62);
      emxFree_real_T(&x_y);
      emxFree_real_T(&r61);
      emxFree_real_T(&w_y);
      emxFree_real_T(&b_LeftCumCounts);
      emxFree_real_T(&v_y);
      emxFree_boolean_T(&u_y);
      emxFree_real_T(&t_y);
      emxFree_real_T(&s_y);
      emxFree_real_T(&r60);
      emxFree_real_T(&r_y);
      emxFree_real_T(&r59);
      emxFree_real_T(&r58);
      emxFree_real_T(&q_y);
      emxFree_real_T(&r57);
      emxFree_real_T(&r56);
      emxFree_real_T(&c_pL);
      emxFree_boolean_T(&b_pL);
      emxFree_real_T(&r55);
      emxFree_real_T(&r54);
      emxFree_real_T(&p_y);
      emxFree_real_T(&o_y);
      emxFree_real_T(&r53);
      emxFree_real_T(&c_RightCumCounts);
      emxFree_boolean_T(&b_RightCumCounts);
      emxFree_real_T(&r52);
      emxFree_real_T(&r51);
      emxFree_real_T(&n_y);
      emxFree_real_T(&m_y);
      emxFree_real_T(&r50);
      emxFree_real_T(&r49);
      emxFree_boolean_T(&d_bRemainsSelected);
      emxFree_real_T(&r48);
      emxFree_real_T(&r47);
      emxFree_boolean_T(&c_bRemainsSelected);
      emxFree_real_T(&r46);
      emxFree_real_T(&r45);
      emxFree_real_T(&i_iFeatIn);
      emxFree_real_T(&h_iFeatIn);
      emxFree_real_T(&l_y);
      emxFree_real_T(&c_iTrainThis);
      emxFree_real_T(&k_y);
      emxFree_real_T(&j_y);
      emxFree_real_T(&metricCurrent);
      emxFree_real_T(&b_iTrainThis);
      emxFree_real_T(&i_y);
      emxFree_real_T(&h_y);
      emxFree_real_T(&h_ii);
      emxFree_real_T(&b_q2);
      emxFree_real_T(&c_YTrainBag);
      emxFree_real_T(&b_YTrainBag);
      emxFree_real_T(&d_XTrainBag);
      emxFree_real_T(&r44);
      emxFree_real_T(&r43);
      emxFree_real_T(&g_iFeatIn);
      emxFree_real_T(&f_iFeatIn);
      emxFree_real_T(&r42);
      emxFree_real_T(&g_projMat);
      emxFree_boolean_T(&j_bXVaries);
      emxFree_real_T(&r41);
      emxFree_real_T(&c_XTrainBag);
      emxFree_real_T(&f_projMat);
      emxFree_real_T(&r40);
      emxFree_real_T(&r39);
      emxFree_boolean_T(&r38);
      emxFree_real_T(&r37);
      emxFree_real_T(&b_splitGains);
      emxFree_real_T(&g_y);
      emxFree_real_T(&f_y);
      emxFree_real_T(&g_ii);
      emxFree_real_T(&e_projMat);
      emxFree_real_T(&b_XTrainBag);
      emxFree_real_T(&c_UTrainSort);
      emxFree_real_T(&b_UTrainSort);
      emxFree_real_T(&r36);
      emxFree_real_T(&d_projMat);
      emxFree_real_T(&r35);
      emxFree_real_T(&r34);
      emxFree_real_T(&r33);
      emxFree_real_T(&e_y);
      emxFree_int32_T(&r32);
      emxFree_real_T(&r31);
      emxFree_real_T(&c_projMat);
      emxFree_real_T(&YTrainBag);
      emxFree_real_T(&XTrainBag);
      emxFree_real_T(&b_projMat);
      emxFree_real_T(&q2);
      emxFree_real_T(&r1);
      emxFree_real_T(&metricRight);
      emxFree_real_T(&metricLeft);
      emxFree_real_T(&pL);
      emxFree_real_T(&RightCumCounts);
      emxFree_real_T(&LeftCumCounts);
      emxFree_boolean_T(&YTrainSort);
      emxFree_real_T(&UTrainSort);
      emxFree_real_T(&iSplits);
      emxFree_real_T(&splitGains);
      emxFree_real_T(&iTrainThis);
    }

    emxFree_int32_T(&d_ii);
    emxFree_int32_T(&ii);
    emxFree_real_T(&y);
    emxFree_real_T(&muX);
    emxFree_boolean_T(&bRemainsSelected);
    emxFree_boolean_T(&bXVaries);
    emxFree_boolean_T(&bInMat);
  }

  emxFree_real_T(&r24);
  emxFree_real_T(&iFeatIn);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expandNode.c) */
