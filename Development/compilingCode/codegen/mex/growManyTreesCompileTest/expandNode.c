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
#include "abs.h"
#include "growManyTreesCompileTest_emxutil.h"
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
#include "randperm.h"
#include "fastUnique.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo y_emlrtRSI = { 299, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ab_emlrtRSI = { 298, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo bb_emlrtRSI = { 296, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo cb_emlrtRSI = { 287, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo db_emlrtRSI = { 277, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo eb_emlrtRSI = { 274, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo fb_emlrtRSI = { 273, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo gb_emlrtRSI = { 272, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo hb_emlrtRSI = { 270, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ib_emlrtRSI = { 269, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo jb_emlrtRSI = { 261, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo kb_emlrtRSI = { 256, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo lb_emlrtRSI = { 252, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo mb_emlrtRSI = { 251, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo nb_emlrtRSI = { 243, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ob_emlrtRSI = { 248, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo pb_emlrtRSI = { 242, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo qb_emlrtRSI = { 239, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo rb_emlrtRSI = { 235, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo sb_emlrtRSI = { 234, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo tb_emlrtRSI = { 233, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ub_emlrtRSI = { 232, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo vb_emlrtRSI = { 231, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo wb_emlrtRSI = { 230, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo xb_emlrtRSI = { 229, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo yb_emlrtRSI = { 228, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ac_emlrtRSI = { 227, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo bc_emlrtRSI = { 226, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo cc_emlrtRSI = { 223, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo dc_emlrtRSI = { 222, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ec_emlrtRSI = { 221, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo fc_emlrtRSI = { 220, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo gc_emlrtRSI = { 218, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo hc_emlrtRSI = { 216, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ic_emlrtRSI = { 213, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo jc_emlrtRSI = { 198, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo kc_emlrtRSI = { 197, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo lc_emlrtRSI = { 191, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo mc_emlrtRSI = { 189, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo nc_emlrtRSI = { 187, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo oc_emlrtRSI = { 184, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo pc_emlrtRSI = { 177, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo qc_emlrtRSI = { 169, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo rc_emlrtRSI = { 168, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo sc_emlrtRSI = { 157, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo tc_emlrtRSI = { 155, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo uc_emlrtRSI = { 143, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo vc_emlrtRSI = { 141, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo wc_emlrtRSI = { 135, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo xc_emlrtRSI = { 133, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo yc_emlrtRSI = { 129, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ad_emlrtRSI = { 128, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo bd_emlrtRSI = { 121, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo cd_emlrtRSI = { 120, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo dd_emlrtRSI = { 118, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ed_emlrtRSI = { 117, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo fd_emlrtRSI = { 111, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo gd_emlrtRSI = { 107, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo hd_emlrtRSI = { 104, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo id_emlrtRSI = { 93, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo jd_emlrtRSI = { 92, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo kd_emlrtRSI = { 85, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ld_emlrtRSI = { 70, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo md_emlrtRSI = { 69, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo nd_emlrtRSI = { 68, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo od_emlrtRSI = { 67, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo pd_emlrtRSI = { 65, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo qd_emlrtRSI = { 60, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo rd_emlrtRSI = { 59, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo sd_emlrtRSI = { 58, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo td_emlrtRSI = { 57, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ud_emlrtRSI = { 56, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo vd_emlrtRSI = { 55, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo wd_emlrtRSI = { 54, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo xd_emlrtRSI = { 51, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo yd_emlrtRSI = { 49, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ae_emlrtRSI = { 43, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo be_emlrtRSI = { 41, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ce_emlrtRSI = { 38, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo de_emlrtRSI = { 36, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ee_emlrtRSI = { 35, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo fe_emlrtRSI = { 22, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ge_emlrtRSI = { 20, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo he_emlrtRSI = { 10, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ie_emlrtRSI = { 8, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRSInfo ve_emlrtRSI = { 86, "eml_matrix_vstride",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_matrix_vstride.m"
};

static emlrtRSInfo we_emlrtRSI = { 49, "prodsize",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\prodsize.m"
};

static emlrtRSInfo hf_emlrtRSI = { 10, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo if_emlrtRSI = { 11, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo jf_emlrtRSI = { 134, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo kf_emlrtRSI = { 137, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo lf_emlrtRSI = { 103, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo lg_emlrtRSI = { 117, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo mg_emlrtRSI = { 132, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo ng_emlrtRSI = { 160, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo sn_emlrtRSI = { 20, "sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sort.m"
};

static emlrtRSInfo tn_emlrtRSI = { 20, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtRSInfo un_emlrtRSI = { 37, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtRSInfo vn_emlrtRSI = { 35, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtRSInfo wn_emlrtRSI = { 32, "cumsum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\cumsum.m"
};

static emlrtMCInfo p_emlrtMCI = { 57, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo q_emlrtMCI = { 56, 19, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo r_emlrtMCI = { 148, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo cb_emlrtMCI = { 125, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo k_emlrtRTEI = { 1, 78, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo l_emlrtRTEI = { 35, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo m_emlrtRTEI = { 38, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo n_emlrtRTEI = { 41, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo o_emlrtRTEI = { 49, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo p_emlrtRTEI = { 52, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo q_emlrtRTEI = { 58, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo r_emlrtRTEI = { 85, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo s_emlrtRTEI = { 141, 6, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo t_emlrtRTEI = { 141, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo u_emlrtRTEI = { 155, 6, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo v_emlrtRTEI = { 187, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo w_emlrtRTEI = { 194, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo x_emlrtRTEI = { 195, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo y_emlrtRTEI = { 213, 10, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo ab_emlrtRTEI = { 214, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo bb_emlrtRTEI = { 216, 13, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo cb_emlrtRTEI = { 220, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo db_emlrtRTEI = { 222, 9, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo eb_emlrtRTEI = { 227, 13, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo fb_emlrtRTEI = { 228, 13, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo gb_emlrtRTEI = { 33, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo hb_emlrtRTEI = { 34, 1, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtRTEInfo ub_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo vd_emlrtRTEI = { 130, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtECInfo w_emlrtECI = { 2, 111, 26, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo ic_emlrtBCI = { -1, -1, 143, 58, "r1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo jc_emlrtBCI = { -1, -1, 149, 19, "q1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo kc_emlrtBCI = { -1, -1, 149, 37, "r1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo lc_emlrtBCI = { -1, -1, 149, 45, "r1", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo mc_emlrtBCI = { -1, -1, 157, 58, "r2", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo nc_emlrtBCI = { -1, -1, 163, 19, "q2", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo oc_emlrtBCI = { -1, -1, 169, 24, "L", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo f_emlrtDCI = { 172, 37, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  4 };

static emlrtECInfo x_emlrtECI = { 2, 172, 21, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtECInfo y_emlrtECI = { -1, 172, 5, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtECInfo ab_emlrtECI = { 1, 184, 19, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo pc_emlrtBCI = { -1, -1, 213, 50, "UTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtECInfo bb_emlrtECI = { 2, 216, 30, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtECInfo cb_emlrtECI = { 1, 216, 29, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo qc_emlrtBCI = { -1, -1, 220, 54, "LeftCumCounts",
  "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtECInfo db_emlrtECI = { 2, 230, 22, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtECInfo eb_emlrtECI = { 2, 233, 22, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtECInfo fb_emlrtECI = { -1, 248, 37, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtECInfo gb_emlrtECI = { -1, 248, 56, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo rc_emlrtBCI = { -1, -1, 251, 54, "metricGain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtECInfo hb_emlrtECI = { -1, 251, 54, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo sc_emlrtBCI = { -1, -1, 252, 30, "metricGain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtECInfo ib_emlrtECI = { -1, 252, 30, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo tc_emlrtBCI = { -1, -1, 275, 20, "iEqualMax", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo uc_emlrtBCI = { -1, -1, 279, 18, "iSplits", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo vc_emlrtBCI = { -1, -1, 284, 27, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo wc_emlrtBCI = { -1, -1, 286, 27, "UTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtECInfo jb_emlrtECI = { 2, 296, 26, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m"
};

static emlrtBCInfo xc_emlrtBCI = { -1, -1, 306, 21, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo yc_emlrtBCI = { -1, -1, 39, 11, "iCanBeSelected",
  "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo g_emlrtDCI = { 39, 11, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  1 };

static emlrtBCInfo ad_emlrtBCI = { -1, -1, 49, 40, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo bd_emlrtBCI = { -1, -1, 54, 11, "iIn", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo cd_emlrtBCI = { -1, -1, 56, 9, "iFeatureNum", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo dd_emlrtBCI = { -1, -1, 56, 21, "iInNew", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo ed_emlrtBCI = { -1, -1, 57, 18, "bInMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo fd_emlrtBCI = { -1, -1, 57, 18, "iInNew", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo gd_emlrtBCI = { -1, -1, 66, 19, "iCanBeSelected",
  "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo h_emlrtDCI = { 66, 19, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  1 };

static emlrtBCInfo hd_emlrtBCI = { -1, -1, 69, 48, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo id_emlrtBCI = { -1, -1, 70, 25, "iInNew", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo jd_emlrtBCI = { -1, -1, 89, 26, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo kd_emlrtBCI = { -1, -1, 86, 24, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo i_emlrtDCI = { 86, 24, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  1 };

static emlrtBCInfo ld_emlrtBCI = { -1, -1, 86, 35, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo md_emlrtBCI = { -1, -1, 87, 24, "YTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo nd_emlrtBCI = { -1, -1, 98, 30, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo od_emlrtBCI = { -1, -1, 118, 29, "YTrainBag", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo pd_emlrtBCI = { -1, -1, 172, 13, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo qd_emlrtBCI = { -1, -1, 187, 23, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo rd_emlrtBCI = { -1, -1, 197, 27, "UTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo sd_emlrtBCI = { -1, -1, 198, 29, "projMat", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo td_emlrtBCI = { -1, -1, 273, 20, "iEqualMax", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo j_emlrtDCI = { 273, 20, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  1 };

static emlrtBCInfo ud_emlrtBCI = { -1, -1, 290, 30, "UTrainSort", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo k_emlrtDCI = { 290, 30, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  1 };

static emlrtBCInfo vd_emlrtBCI = { -1, -1, 292, 26, "UTrainSort", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo wd_emlrtBCI = { -1, -1, 292, 49, "UTrainSort", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo xd_emlrtBCI = { -1, -1, 214, 29, "YTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo yd_emlrtBCI = { -1, -1, 231, 13, "pLProd", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo ae_emlrtBCI = { -1, -1, 234, 13, "pRProd", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo be_emlrtBCI = { -1, -1, 241, 25, "metricLeft", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo ce_emlrtBCI = { -1, -1, 242, 9, "metricLeft", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo de_emlrtBCI = { -1, -1, 243, 9, "metricRight", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo ee_emlrtBCI = { -1, -1, 251, 10, "splitGains", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo fe_emlrtBCI = { -1, -1, 251, 30, "iSplits", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo ge_emlrtBCI = { -1, -1, 252, 50, "splitGains", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo he_emlrtBCI = { -1, -1, 256, 9, "iSplits", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtBCInfo ie_emlrtBCI = { -1, -1, 256, 28, "iEqualMax", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtDCInfo l_emlrtDCI = { 256, 28, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  1 };

static emlrtDCInfo m_emlrtDCI = { 160, 28, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  4 };

static emlrtDCInfo n_emlrtDCI = { 146, 28, "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  4 };

static emlrtBCInfo je_emlrtBCI = { -1, -1, 111, 36, "XTrain", "expandNode",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\Development\\compilingCode\\expandNode.m",
  0 };

static emlrtRSInfo no_emlrtRSI = { 125, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo oo_emlrtRSI = { 148, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo po_emlrtRSI = { 56, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo qp_emlrtRSI = { 57, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

/* Function Declarations */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  const emxArray_real_T *idx);
static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx);
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b);

/* Function Definitions */
static void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x,
  const emxArray_real_T *idx)
{
  boolean_T overflow;
  int32_T i;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv104[2] = { 1, 31 };

  const mxArray *m50;
  char_T cv139[31];
  static const char_T cv140[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T nxin;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  int32_T nxout;
  emxArray_boolean_T *b;
  int32_T k0;
  const mxArray *c_y;
  emxArray_real_T *c_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &hf_emlrtRSI;
  overflow = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i <= idx->size[1] - 1)) {
    if ((idx->data[i] < 1.0) || ((int32_T)idx->data[i] > x->size[1]) ||
        (idx->data[i] != muDoubleScalarFloor(idx->data[i]))) {
      overflow = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (overflow) {
  } else {
    y = NULL;
    m50 = emlrtCreateCharArray(2, iv104);
    for (i = 0; i < 31; i++) {
      cv139[i] = cv140[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m50, cv139);
    emlrtAssign(&y, m50);
    b_st.site = &po_emlrtRSI;
    c_st.site = &qp_emlrtRSI;
    f_error(&b_st, b_message(&c_st, y, &p_emlrtMCI), &q_emlrtMCI);
  }

  st.site = &if_emlrtRSI;
  nxin = x->size[1];
  if (idx->size[1] == 1) {
    b_st.site = &lg_emlrtRSI;
    if ((int32_T)idx->data[0] > x->size[1] - 1) {
      overflow = false;
    } else {
      overflow = (x->size[1] - 1 > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = (int32_T)idx->data[0]; i < nxin; i++) {
      x->data[i - 1] = x->data[i];
    }

    if (nxin - 1 <= nxin) {
    } else {
      b_y = NULL;
      m50 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m50);
      b_st.site = &no_emlrtRSI;
      f_error(&b_st, b_y, &cb_emlrtMCI);
    }

    if (1 > nxin - 1) {
      i = 0;
    } else {
      i = nxin - 1;
    }

    emxInit_real_T(&st, &b_x, 2, &ub_emlrtRTEI, true);
    nxout = b_x->size[0] * b_x->size[1];
    b_x->size[0] = 1;
    b_x->size[1] = i;
    emxEnsureCapacity(&st, (emxArray__common *)b_x, nxout, (int32_T)sizeof
                      (real_T), &ub_emlrtRTEI);
    for (nxout = 0; nxout < i; nxout++) {
      b_x->data[b_x->size[0] * nxout] = x->data[nxout];
    }

    nxout = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = b_x->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)x, nxout, (int32_T)sizeof(real_T),
                      &ub_emlrtRTEI);
    i = b_x->size[1];
    for (nxout = 0; nxout < i; nxout++) {
      x->data[x->size[0] * nxout] = b_x->data[b_x->size[0] * nxout];
    }

    emxFree_real_T(&b_x);
  } else {
    b_emxInit_boolean_T(&st, &b, 2, &vd_emlrtRTEI, true);
    b_st.site = &mg_emlrtRSI;
    nxout = b->size[0] * b->size[1];
    b->size[0] = 1;
    emxEnsureCapacity(&b_st, (emxArray__common *)b, nxout, (int32_T)sizeof
                      (boolean_T), &ub_emlrtRTEI);
    i = x->size[1];
    nxout = b->size[0] * b->size[1];
    b->size[1] = i;
    emxEnsureCapacity(&b_st, (emxArray__common *)b, nxout, (int32_T)sizeof
                      (boolean_T), &ub_emlrtRTEI);
    i = x->size[1];
    for (nxout = 0; nxout < i; nxout++) {
      b->data[nxout] = false;
    }

    d_st.site = &ng_emlrtRSI;
    if (1 > idx->size[1]) {
      overflow = false;
    } else {
      overflow = (idx->size[1] > 2147483646);
    }

    if (overflow) {
      e_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 1; i <= idx->size[1]; i++) {
      b->data[(int32_T)idx->data[i - 1] - 1] = true;
    }

    b_st.site = &jf_emlrtRSI;
    i = num_true(&b_st, b);
    nxout = x->size[1] - i;
    k0 = -1;
    b_st.site = &kf_emlrtRSI;
    if (1 > x->size[1]) {
      overflow = false;
    } else {
      overflow = (x->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = 1; i <= nxin; i++) {
      if ((i > b->size[1]) || (!b->data[i - 1])) {
        k0++;
        x->data[k0] = x->data[i - 1];
      }
    }

    emxFree_boolean_T(&b);
    if (nxout <= nxin) {
    } else {
      c_y = NULL;
      m50 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&c_y, m50);
      b_st.site = &oo_emlrtRSI;
      f_error(&b_st, c_y, &r_emlrtMCI);
    }

    if (1 > nxout) {
      i = 0;
    } else {
      i = nxout;
    }

    emxInit_real_T(&st, &c_x, 2, &ub_emlrtRTEI, true);
    nxout = c_x->size[0] * c_x->size[1];
    c_x->size[0] = 1;
    c_x->size[1] = i;
    emxEnsureCapacity(&st, (emxArray__common *)c_x, nxout, (int32_T)sizeof
                      (real_T), &ub_emlrtRTEI);
    for (nxout = 0; nxout < i; nxout++) {
      c_x->data[c_x->size[0] * nxout] = x->data[nxout];
    }

    nxout = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = c_x->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)x, nxout, (int32_T)sizeof(real_T),
                      &ub_emlrtRTEI);
    i = c_x->size[1];
    for (nxout = 0; nxout < i; nxout++) {
      x->data[x->size[0] * nxout] = c_x->data[c_x->size[0] * nxout];
    }

    emxFree_real_T(&c_x);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx)
{
  int32_T i;
  const mxArray *y;
  static const int32_T iv103[2] = { 1, 31 };

  const mxArray *m49;
  char_T cv137[31];
  static const char_T cv138[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T nxin;
  int32_T nxout;
  int32_T k0;
  boolean_T overflow;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &hf_emlrtRSI;
  i = idx->size[1];
  while ((i >= 1) && (!idx->data[i - 1])) {
    i--;
  }

  if (i <= x->size[1]) {
  } else {
    y = NULL;
    m49 = emlrtCreateCharArray(2, iv103);
    for (i = 0; i < 31; i++) {
      cv137[i] = cv138[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m49, cv137);
    emlrtAssign(&y, m49);
    b_st.site = &po_emlrtRSI;
    c_st.site = &qp_emlrtRSI;
    f_error(&b_st, b_message(&c_st, y, &p_emlrtMCI), &q_emlrtMCI);
  }

  st.site = &if_emlrtRSI;
  nxin = x->size[1];
  b_st.site = &jf_emlrtRSI;
  i = num_true(&b_st, idx);
  nxout = x->size[1] - i;
  k0 = -1;
  b_st.site = &kf_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 1; i <= nxin; i++) {
    if ((i > idx->size[1]) || (!idx->data[i - 1])) {
      k0++;
      x->data[k0] = x->data[i - 1];
    }
  }

  if (nxout <= nxin) {
  } else {
    b_y = NULL;
    m49 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m49);
    b_st.site = &oo_emlrtRSI;
    f_error(&b_st, b_y, &r_emlrtMCI);
  }

  if (1 > nxout) {
    i = 0;
  } else {
    i = nxout;
  }

  emxInit_real_T(&st, &b_x, 2, &ub_emlrtRTEI, true);
  nxout = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, nxout, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  for (nxout = 0; nxout < i; nxout++) {
    b_x->data[b_x->size[0] * nxout] = x->data[nxout];
  }

  nxout = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, nxout, (int32_T)sizeof(real_T),
                    &ub_emlrtRTEI);
  i = b_x->size[1];
  for (nxout = 0; nxout < i; nxout++) {
    x->data[x->size[0] * nxout] = b_x->data[b_x->size[0] * nxout];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b)
{
  int32_T n;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  st.site = &lf_emlrtRSI;
  if (1 > b->size[1]) {
    overflow = false;
  } else {
    overflow = (b->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 1; k <= b->size[1]; k++) {
    n += b->data[k - 1];
  }

  return n;
}

void expandNode(const emlrtStack *sp, const emxArray_real_T *XTrain, const
                emxArray_boolean_T *YTrain, boolean_T options_bProjBoot, real_T
                options_lambda, const char_T options_splitCriterion_data[],
                const int32_T options_splitCriterion_size[2], real_T
                options_minPointsForSplit, const char_T options_dirIfEqual_data[],
                const int32_T options_dirIfEqual_size[2], boolean_T
                c_options_bContinueProjBootDege, real_T options_epsilonCCA,
                boolean_T options_includeOriginalAxes, real_T
                options_maxDepthSplit, real_T options_XVariationTol,
                emxArray_real_T *iFeatureNum, real_T depth, boolean_T *bLeaf,
                emxArray_boolean_T *bLessThanTrain, real_T partitionPoint_data[],
                int32_T partitionPoint_size[2], emxArray_real_T *projMat,
                emxArray_real_T *countsNode, emxArray_real_T *iIn)
{
  int32_T i6;
  emxArray_real_T *iCanBeSelected;
  int32_T tmp_size[2];
  real_T tmp_data[1];
  real_T b_tmp_data[1];
  int32_T i;
  int32_T loop_ub;
  boolean_T overflow;
  emxArray_real_T *r1;
  boolean_T c_tmp_data[10000];
  int32_T b_tmp_size[2];
  real_T dv0[2];
  int32_T b_YTrain[1];
  emxArray_boolean_T c_YTrain;
  boolean_T bv0[2];
  emxArray_boolean_T *bXVaries;
  emxArray_real_T *indFeatIn;
  real_T lambda;
  int32_T ix;
  real_T bnew;
  int32_T ixstart;
  emxArray_real_T *b_iCanBeSelected;
  emxArray_real_T *UTrainSort;
  emxArray_real_T *b_iFeatureNum;
  emxArray_boolean_T *bInMat;
  emxArray_int32_T *ii;
  int32_T idx;
  boolean_T exitg8;
  boolean_T guard4 = false;
  const mxArray *y;
  const mxArray *m3;
  emxArray_int32_T *b_ii;
  emxArray_real_T *b_XTrain;
  int32_T apnd;
  int32_T ndbl;
  emxArray_boolean_T *bRemainsSelected;
  emxArray_int32_T *c_ii;
  emxArray_real_T *iInNew;
  emxArray_real_T *b_iIn;
  real_T nSelected;
  emxArray_int32_T *r2;
  emxArray_real_T *x;
  emxArray_boolean_T *b_bXVaries;
  emxArray_boolean_T *c_bXVaries;
  emxArray_real_T *c_XTrain;
  emxArray_real_T *c_iFeatureNum;
  emxArray_real_T *c_iCanBeSelected;
  emxArray_int32_T *d_ii;
  boolean_T exitg6;
  boolean_T exitg7;
  boolean_T guard3 = false;
  const mxArray *b_y;
  emxArray_real_T *iTrainThis;
  emxArray_real_T *XTrainBag;
  emxArray_real_T *q1;
  emxArray_real_T *b_r1;
  emxArray_real_T *q2;
  emxArray_real_T *UTrain;
  emxArray_real_T *splitGains;
  emxArray_real_T *iSplits;
  emxArray_boolean_T *YTrainSort;
  emxArray_real_T *LeftCumCounts;
  emxArray_real_T *RightCumCounts;
  emxArray_real_T *pL;
  emxArray_real_T *metricLeft;
  emxArray_real_T *metricRight;
  emxArray_real_T *b_q1;
  emxArray_real_T *b_projMat;
  emxArray_real_T *YTrainBag;
  emxArray_int32_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *a;
  emxArray_real_T *c_y;
  emxArray_real_T *b_splitGains;
  emxArray_real_T *b_q2;
  emxArray_real_T *c_q1;
  emxArray_real_T *b_UTrain;
  emxArray_real_T *b_iTrainThis;
  emxArray_real_T *b_UTrainSort;
  emxArray_boolean_T *b_bRemainsSelected;
  emxArray_boolean_T *c_bRemainsSelected;
  emxArray_boolean_T *b_RightCumCounts;
  emxArray_boolean_T *b_pL;
  emxArray_real_T *c_RightCumCounts;
  emxArray_real_T *c_UTrainSort;
  emxArray_real_T *b_LeftCumCounts;
  emxArray_real_T *c_UTrain;
  emxArray_boolean_T *d_UTrainSort;
  emxArray_real_T *e_UTrainSort;
  emxArray_boolean_T *f_UTrainSort;
  emxArray_real_T *g_UTrainSort;
  emxArray_real_T *b_indFeatIn;
  emxArray_real_T *d_iCanBeSelected;
  emxArray_real_T *b_XTrainBag;
  emxArray_boolean_T *b_bInMat;
  emxArray_real_T *c_q2;
  emxArray_real_T *c_iIn;
  emxArray_real_T *d_iIn;
  emxArray_real_T *e_iIn;
  emxArray_real_T *f_iIn;
  emxArray_real_T *g_iIn;
  emxArray_real_T *h_iIn;
  emxArray_real_T *i_iIn;
  emxArray_real_T *d_UTrain;
  emxArray_real_T *d_q2;
  emxArray_int32_T *e_ii;
  emxArray_real_T *e_q2;
  emxArray_boolean_T *d_bRemainsSelected;
  emxArray_boolean_T *e_bRemainsSelected;
  emxArray_real_T *e_iCanBeSelected;
  emxArray_real_T *r5;
  emxArray_int32_T *f_ii;
  emxArray_real_T *j_iIn;
  emxArray_real_T *k_iIn;
  emxArray_real_T *l_iIn;
  emxArray_real_T *m_iIn;
  emxArray_real_T *n_iIn;
  emxArray_real_T *o_iIn;
  emxArray_real_T *p_iIn;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T b_guard3 = false;
  boolean_T b_guard4 = false;
  boolean_T guard5 = false;
  int32_T c_tmp_size[2];
  real_T dv1[2];
  int32_T c_bInMat[1];
  boolean_T bSplit;
  const mxArray *d_y;
  static const int32_T iv12[2] = { 1, 45 };

  char_T cv12[45];
  static const char_T cv13[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *e_y;
  static const int32_T iv13[2] = { 1, 21 };

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
  real_T rankX;
  real_T d;
  const mxArray *f_y;
  static const int32_T iv14[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv15[2] = { 1, 21 };

  uint32_T unnamed_idx_0;
  int32_T g_ii[2];
  const mxArray *h_y;
  static const int32_T iv16[2] = { 1, 45 };

  const mxArray *i_y;
  static const int32_T iv17[2] = { 1, 21 };

  int32_T nProjDirs;
  int32_T nVarAtt;
  int32_T vlen;
  boolean_T b0;
  boolean_T b1;
  boolean_T b2;
  boolean_T b3;
  const mxArray *j_y;
  static const int32_T iv18[2] = { 1, 36 };

  char_T cv16[36];
  static const char_T cv17[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *k_y;
  static const int32_T iv19[2] = { 1, 39 };

  char_T cv18[39];
  static const char_T cv19[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg5;
  boolean_T exitg4;
  boolean_T b_guard2 = false;
  const mxArray *l_y;
  const mxArray *m_y;
  static const int32_T iv20[2] = { 1, 36 };

  const mxArray *n_y;
  static const int32_T iv21[2] = { 1, 39 };

  boolean_T exitg3;
  const mxArray *o_y;
  static const int32_T iv22[2] = { 1, 36 };

  const mxArray *p_y;
  static const int32_T iv23[2] = { 1, 39 };

  boolean_T exitg2;
  boolean_T exitg1;
  boolean_T b_guard1 = false;
  const mxArray *q_y;
  int32_T iDir;
  real_T b_partitionPoint_data[1];
  int32_T iv24[2];
  int32_T f_bRemainsSelected[1];
  int32_T g_bRemainsSelected[1];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
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
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  i6 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
  bLessThanTrain->size[0] = 0;
  bLessThanTrain->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)bLessThanTrain, i6, (int32_T)sizeof
                    (boolean_T), &k_emlrtRTEI);
  partitionPoint_size[0] = 1;
  partitionPoint_size[1] = 1;
  partitionPoint_data[0] = 0.0;
  i6 = projMat->size[0];
  projMat->size[0] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)projMat, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  i6 = iIn->size[0] * iIn->size[1];
  iIn->size[0] = 1;
  iIn->size[1] = 0;
  emxEnsureCapacity(sp, (emxArray__common *)iIn, i6, (int32_T)sizeof(real_T),
                    &k_emlrtRTEI);
  emxInit_real_T(sp, &iCanBeSelected, 2, &l_emlrtRTEI, true);
  if (YTrain->size[1] == 1) {
    st.site = &ie_emlrtRSI;
    sum(&st, YTrain, tmp_data, tmp_size);
    st.site = &ie_emlrtRSI;
    sum(&st, YTrain, b_tmp_data, tmp_size);
    i = YTrain->size[0];
    i6 = countsNode->size[0] * countsNode->size[1];
    countsNode->size[0] = 1;
    countsNode->size[1] = 2;
    emxEnsureCapacity(sp, (emxArray__common *)countsNode, i6, (int32_T)sizeof
                      (real_T), &k_emlrtRTEI);
    countsNode->data[0] = (real_T)i - tmp_data[0];
    countsNode->data[countsNode->size[0]] = b_tmp_data[0];
  } else {
    st.site = &he_emlrtRSI;
    b_sum(&st, YTrain, iCanBeSelected);
    i6 = countsNode->size[0] * countsNode->size[1];
    countsNode->size[0] = 1;
    countsNode->size[1] = iCanBeSelected->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)countsNode, i6, (int32_T)sizeof
                      (real_T), &k_emlrtRTEI);
    loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      countsNode->data[i6] = iCanBeSelected->data[i6];
    }
  }

  /*  Return if one training point, pure node or if options for returning */
  /*  fulfilled.  A little case to deal with a binary YTrain is required. */
  if ((XTrain->size[0] < muDoubleScalarMax(2.0, options_minPointsForSplit)) ||
      (depth > options_maxDepthSplit)) {
    overflow = true;
  } else {
    overflow = false;
  }

  *bLeaf = overflow;
  emxInit_real_T(sp, &r1, 2, &k_emlrtRTEI, true);
  if (!overflow) {
    if (YTrain->size[1] > 1) {
      st.site = &ge_emlrtRSI;
      b_sum(&st, YTrain, iCanBeSelected);
      b_abs(sp, iCanBeSelected, r1);
      b_tmp_size[0] = 1;
      b_tmp_size[1] = r1->size[1];
      loop_ub = r1->size[0] * r1->size[1];
      for (i6 = 0; i6 < loop_ub; i6++) {
        c_tmp_data[i6] = (r1->data[i6] > 1.0E-12);
      }

      st.site = &ge_emlrtRSI;
      *bLeaf = (c_sum(&st, c_tmp_data, b_tmp_size) < 2.0);
    } else {
      dv0[0] = 0.0;
      dv0[1] = YTrain->size[0];
      b_YTrain[0] = YTrain->size[0] * YTrain->size[1];
      c_YTrain = *YTrain;
      c_YTrain.size = (int32_T *)&b_YTrain;
      c_YTrain.numDimensions = 1;
      st.site = &fe_emlrtRSI;
      bsxfun(d_sum(&st, &c_YTrain), dv0, bv0);
      *bLeaf = any(bv0);
    }
  }

  if (*bLeaf) {
  } else {
    b_emxInit_boolean_T(sp, &bXVaries, 2, &o_emlrtRTEI, true);

    /* % Subsample features as required for hyperplane sampling */
    st.site = &ee_emlrtRSI;
    fastUnique(&st, iFeatureNum, iCanBeSelected);
    i6 = bXVaries->size[0] * bXVaries->size[1];
    bXVaries->size[0] = 1;
    bXVaries->size[1] = iCanBeSelected->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)bXVaries, i6, (int32_T)sizeof
                      (boolean_T), &k_emlrtRTEI);
    loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      bXVaries->data[i6] = muDoubleScalarIsNaN(iCanBeSelected->data[i6]);
    }

    emxInit_real_T(sp, &indFeatIn, 2, &m_emlrtRTEI, true);
    st.site = &de_emlrtRSI;
    eml_null_assignment(&st, iCanBeSelected, bXVaries);
    lambda = muDoubleScalarMin(iCanBeSelected->size[1], options_lambda);
    st.site = &ce_emlrtRSI;
    randperm(&st, iCanBeSelected->size[1], lambda, indFeatIn);
    loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      ix = iCanBeSelected->size[1];
      bnew = indFeatIn->data[i6];
      ixstart = (int32_T)emlrtIntegerCheckFastR2012b(bnew, &g_emlrtDCI, sp);
      emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix, &yc_emlrtBCI, sp);
    }

    b_emxInit_real_T(sp, &b_iCanBeSelected, 1, &k_emlrtRTEI, true);
    st.site = &be_emlrtRSI;
    i6 = b_iCanBeSelected->size[0];
    b_iCanBeSelected->size[0] = indFeatIn->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_iCanBeSelected, i6, (int32_T)
                      sizeof(real_T), &k_emlrtRTEI);
    loop_ub = indFeatIn->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      b_iCanBeSelected->data[i6] = iCanBeSelected->data[(int32_T)indFeatIn->
        data[i6] - 1];
    }

    b_emxInit_real_T(&st, &UTrainSort, 1, &y_emlrtRTEI, true);
    emxInit_real_T(&st, &b_iFeatureNum, 2, &k_emlrtRTEI, true);
    b_st.site = &oe_emlrtRSI;
    b_eml_sort(&b_st, b_iCanBeSelected, UTrainSort);
    i = iFeatureNum->size[1];
    i6 = b_iFeatureNum->size[0] * b_iFeatureNum->size[1];
    b_iFeatureNum->size[0] = 1;
    b_iFeatureNum->size[1] = i;
    emxEnsureCapacity(sp, (emxArray__common *)b_iFeatureNum, i6, (int32_T)sizeof
                      (real_T), &k_emlrtRTEI);
    emxFree_real_T(&b_iCanBeSelected);
    for (i6 = 0; i6 < i; i6++) {
      b_iFeatureNum->data[b_iFeatureNum->size[0] * i6] = iFeatureNum->data[i6];
    }

    b_emxInit_boolean_T(sp, &bInMat, 2, &n_emlrtRTEI, true);
    b_emxInit_int32_T(sp, &ii, 2, &j_emlrtRTEI, true);
    st.site = &be_emlrtRSI;
    b_bsxfun(&st, b_iFeatureNum, UTrainSort, bInMat);
    st.site = &ae_emlrtRSI;
    b_any(&st, bInMat, bXVaries);
    st.site = &ae_emlrtRSI;
    b_st.site = &w_emlrtRSI;
    idx = 0;
    i6 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = bXVaries->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i6, (int32_T)sizeof(int32_T),
                      &h_emlrtRTEI);
    c_st.site = &x_emlrtRSI;
    emxFree_real_T(&b_iFeatureNum);
    if (1 > bXVaries->size[1]) {
      overflow = false;
    } else {
      overflow = (bXVaries->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    i = 1;
    exitg8 = false;
    while ((!exitg8) && (i <= bXVaries->size[1])) {
      guard4 = false;
      if (bXVaries->data[i - 1]) {
        idx++;
        ii->data[idx - 1] = i;
        if (idx >= bXVaries->size[1]) {
          exitg8 = true;
        } else {
          guard4 = true;
        }
      } else {
        guard4 = true;
      }

      if (guard4) {
        i++;
      }
    }

    if (idx <= bXVaries->size[1]) {
    } else {
      y = NULL;
      m3 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m3);
      c_st.site = &fp_emlrtRSI;
      f_error(&c_st, y, &h_emlrtMCI);
    }

    if (bXVaries->size[1] == 1) {
      if (idx == 0) {
        i6 = ii->size[0] * ii->size[1];
        ii->size[0] = 1;
        ii->size[1] = 0;
        emxEnsureCapacity(&b_st, (emxArray__common *)ii, i6, (int32_T)sizeof
                          (int32_T), &k_emlrtRTEI);
      }
    } else {
      if (1 > idx) {
        loop_ub = 0;
      } else {
        loop_ub = idx;
      }

      b_emxInit_int32_T(&b_st, &b_ii, 2, &k_emlrtRTEI, true);
      i6 = b_ii->size[0] * b_ii->size[1];
      b_ii->size[0] = 1;
      b_ii->size[1] = loop_ub;
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i6, (int32_T)sizeof
                        (int32_T), &k_emlrtRTEI);
      for (i6 = 0; i6 < loop_ub; i6++) {
        b_ii->data[b_ii->size[0] * i6] = ii->data[i6];
      }

      i6 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = b_ii->size[1];
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i6, (int32_T)sizeof
                        (int32_T), &k_emlrtRTEI);
      loop_ub = b_ii->size[1];
      for (i6 = 0; i6 < loop_ub; i6++) {
        ii->data[ii->size[0] * i6] = b_ii->data[b_ii->size[0] * i6];
      }

      emxFree_int32_T(&b_ii);
    }

    i6 = iIn->size[0] * iIn->size[1];
    iIn->size[0] = 1;
    iIn->size[1] = ii->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)iIn, i6, (int32_T)sizeof(real_T),
                      &k_emlrtRTEI);
    loop_ub = ii->size[0] * ii->size[1];
    for (i6 = 0; i6 < loop_ub; i6++) {
      iIn->data[i6] = ii->data[i6];
    }

    emxInit_real_T(&st, &b_XTrain, 2, &k_emlrtRTEI, true);

    /*  Check for variation along selected dimensions and resample features that */
    /*  have no variation */
    loop_ub = XTrain->size[0];
    i6 = b_XTrain->size[0] * b_XTrain->size[1];
    b_XTrain->size[0] = loop_ub;
    b_XTrain->size[1] = iIn->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_XTrain, i6, (int32_T)sizeof
                      (real_T), &k_emlrtRTEI);
    apnd = iIn->size[1];
    for (i6 = 0; i6 < apnd; i6++) {
      for (ix = 0; ix < loop_ub; ix++) {
        ixstart = XTrain->size[1];
        ndbl = (int32_T)iIn->data[iIn->size[0] * i6];
        b_XTrain->data[ix + b_XTrain->size[0] * i6] = XTrain->data[ix +
          XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, ixstart,
          &ad_emlrtBCI, sp) - 1)];
      }
    }

    st.site = &yd_emlrtRSI;
    queryIfColumnsVary(&st, b_XTrain, options_XVariationTol, bXVaries);
    emxFree_real_T(&b_XTrain);
    emxInit_boolean_T(sp, &bRemainsSelected, 1, &q_emlrtRTEI, true);
    emxInit_int32_T(sp, &c_ii, 1, &j_emlrtRTEI, true);
    st.site = &xd_emlrtRSI;
    if (!all(&st, bXVaries)) {
      emxInit_real_T(sp, &iInNew, 2, &p_emlrtRTEI, true);
      i6 = iInNew->size[0] * iInNew->size[1];
      iInNew->size[0] = 1;
      iInNew->size[1] = iIn->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)iInNew, i6, (int32_T)sizeof
                        (real_T), &k_emlrtRTEI);
      loop_ub = iIn->size[0] * iIn->size[1];
      for (i6 = 0; i6 < loop_ub; i6++) {
        iInNew->data[i6] = iIn->data[i6];
      }

      emxInit_real_T(sp, &b_iIn, 2, &k_emlrtRTEI, true);
      nSelected = 0.0;
      st.site = &wd_emlrtRSI;
      eml_li_find(&st, bXVaries, ii);
      i = iIn->size[1];
      i6 = b_iIn->size[0] * b_iIn->size[1];
      b_iIn->size[0] = 1;
      b_iIn->size[1] = ii->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)b_iIn, i6, (int32_T)sizeof
                        (real_T), &k_emlrtRTEI);
      loop_ub = ii->size[1];
      for (i6 = 0; i6 < loop_ub; i6++) {
        ix = ii->data[ii->size[0] * i6];
        b_iIn->data[b_iIn->size[0] * i6] = iIn->
          data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i, &bd_emlrtBCI, sp) - 1];
      }

      i6 = iIn->size[0] * iIn->size[1];
      iIn->size[0] = 1;
      iIn->size[1] = b_iIn->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)iIn, i6, (int32_T)sizeof(real_T),
                        &k_emlrtRTEI);
      loop_ub = b_iIn->size[1];
      for (i6 = 0; i6 < loop_ub; i6++) {
        iIn->data[iIn->size[0] * i6] = b_iIn->data[b_iIn->size[0] * i6];
      }

      emxFree_real_T(&b_iIn);
      b_emxInit_int32_T(sp, &r2, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &x, 2, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &b_bXVaries, 2, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &c_bXVaries, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &c_XTrain, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &c_iFeatureNum, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_iCanBeSelected, 1, &k_emlrtRTEI, true);
      b_emxInit_int32_T(sp, &d_ii, 2, &k_emlrtRTEI, true);
      exitg6 = false;
      do {
        exitg11 = 0;
        st.site = &vd_emlrtRSI;
        if ((!exitg6) && ((!all(&st, bXVaries)) && (lambda > 0.0))) {
          i6 = c_bXVaries->size[0] * c_bXVaries->size[1];
          c_bXVaries->size[0] = 1;
          c_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)c_bXVaries, i6, (int32_T)
                            sizeof(boolean_T), &k_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            c_bXVaries->data[i6] = !bXVaries->data[i6];
          }

          st.site = &ud_emlrtRSI;
          eml_li_find(&st, c_bXVaries, ii);
          i6 = r2->size[0] * r2->size[1];
          r2->size[0] = 1;
          r2->size[1] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)r2, i6, (int32_T)sizeof
                            (int32_T), &k_emlrtRTEI);
          loop_ub = ii->size[0] * ii->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            ix = iFeatureNum->size[1];
            ixstart = iInNew->size[1];
            ndbl = ii->data[i6];
            ixstart = (int32_T)iInNew->data[emlrtDynamicBoundsCheckFastR2012b
              (ndbl, 1, ixstart, &dd_emlrtBCI, sp) - 1];
            r2->data[i6] = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
              &cd_emlrtBCI, sp);
          }

          loop_ub = r2->size[0] * r2->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            iFeatureNum->data[r2->data[i6] - 1] = rtNaN;
          }

          i6 = b_bXVaries->size[0] * b_bXVaries->size[1];
          b_bXVaries->size[0] = 1;
          b_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_bXVaries, i6, (int32_T)
                            sizeof(boolean_T), &k_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            b_bXVaries->data[i6] = !bXVaries->data[i6];
          }

          st.site = &td_emlrtRSI;
          eml_li_find(&st, b_bXVaries, ii);
          i6 = c_ii->size[0];
          c_ii->size[0] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)c_ii, i6, (int32_T)sizeof
                            (int32_T), &k_emlrtRTEI);
          loop_ub = ii->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            ix = bInMat->size[1];
            ixstart = iInNew->size[1];
            ndbl = ii->data[ii->size[0] * i6];
            ixstart = (int32_T)iInNew->data[emlrtDynamicBoundsCheckFastR2012b
              (ndbl, 1, ixstart, &fd_emlrtBCI, sp) - 1];
            c_ii->data[i6] = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
              &ed_emlrtBCI, sp);
          }

          loop_ub = bInMat->size[0];
          i = c_ii->size[0];
          for (i6 = 0; i6 < i; i6++) {
            for (ix = 0; ix < loop_ub; ix++) {
              bInMat->data[ix + bInMat->size[0] * (c_ii->data[i6] - 1)] = false;
            }
          }

          st.site = &sd_emlrtRSI;
          c_any(&st, bInMat, bRemainsSelected);
          st.site = &rd_emlrtRSI;
          nSelected += d_sum(&st, bRemainsSelected);
          st.site = &qd_emlrtRSI;
          b_eml_null_assignment(&st, iCanBeSelected, indFeatIn);
          lambda = muDoubleScalarMin(iCanBeSelected->size[1], lambda - nSelected);
          if (lambda < 1.0) {
            exitg6 = true;
          } else {
            st.site = &pd_emlrtRSI;
            randperm(&st, iCanBeSelected->size[1], lambda, indFeatIn);
            loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              ix = iCanBeSelected->size[1];
              bnew = indFeatIn->data[i6];
              ixstart = (int32_T)emlrtIntegerCheckFastR2012b(bnew, &h_emlrtDCI,
                sp);
              emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix, &gd_emlrtBCI, sp);
            }

            i = iFeatureNum->size[1];
            i6 = c_iFeatureNum->size[0] * c_iFeatureNum->size[1];
            c_iFeatureNum->size[0] = 1;
            c_iFeatureNum->size[1] = i;
            emxEnsureCapacity(sp, (emxArray__common *)c_iFeatureNum, i6,
                              (int32_T)sizeof(real_T), &k_emlrtRTEI);
            for (i6 = 0; i6 < i; i6++) {
              c_iFeatureNum->data[c_iFeatureNum->size[0] * i6] =
                iFeatureNum->data[i6];
            }

            i6 = c_iCanBeSelected->size[0];
            c_iCanBeSelected->size[0] = indFeatIn->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)c_iCanBeSelected, i6,
                              (int32_T)sizeof(real_T), &k_emlrtRTEI);
            loop_ub = indFeatIn->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              c_iCanBeSelected->data[i6] = iCanBeSelected->data[(int32_T)
                indFeatIn->data[i6] - 1];
            }

            st.site = &od_emlrtRSI;
            b_bsxfun(&st, c_iFeatureNum, c_iCanBeSelected, bInMat);
            st.site = &nd_emlrtRSI;
            b_any(&st, bInMat, bXVaries);
            st.site = &nd_emlrtRSI;
            b_st.site = &w_emlrtRSI;
            idx = 0;
            i6 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = bXVaries->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)ii, i6, (int32_T)sizeof
                              (int32_T), &h_emlrtRTEI);
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

            i = 1;
            exitg7 = false;
            while ((!exitg7) && (i <= bXVaries->size[1])) {
              guard3 = false;
              if (bXVaries->data[i - 1]) {
                idx++;
                ii->data[idx - 1] = i;
                if (idx >= bXVaries->size[1]) {
                  exitg7 = true;
                } else {
                  guard3 = true;
                }
              } else {
                guard3 = true;
              }

              if (guard3) {
                i++;
              }
            }

            if (idx <= bXVaries->size[1]) {
            } else {
              b_y = NULL;
              m3 = emlrtCreateString("Assertion failed.");
              emlrtAssign(&b_y, m3);
              c_st.site = &fp_emlrtRSI;
              f_error(&c_st, b_y, &h_emlrtMCI);
            }

            if (bXVaries->size[1] == 1) {
              if (idx == 0) {
                i6 = ii->size[0] * ii->size[1];
                ii->size[0] = 1;
                ii->size[1] = 0;
                emxEnsureCapacity(&b_st, (emxArray__common *)ii, i6, (int32_T)
                                  sizeof(int32_T), &k_emlrtRTEI);
              }
            } else {
              if (1 > idx) {
                loop_ub = 0;
              } else {
                loop_ub = idx;
              }

              i6 = d_ii->size[0] * d_ii->size[1];
              d_ii->size[0] = 1;
              d_ii->size[1] = loop_ub;
              emxEnsureCapacity(&b_st, (emxArray__common *)d_ii, i6, (int32_T)
                                sizeof(int32_T), &k_emlrtRTEI);
              for (i6 = 0; i6 < loop_ub; i6++) {
                d_ii->data[d_ii->size[0] * i6] = ii->data[i6];
              }

              i6 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = d_ii->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)ii, i6, (int32_T)
                                sizeof(int32_T), &k_emlrtRTEI);
              loop_ub = d_ii->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                ii->data[ii->size[0] * i6] = d_ii->data[d_ii->size[0] * i6];
              }
            }

            i6 = iInNew->size[0] * iInNew->size[1];
            iInNew->size[0] = 1;
            iInNew->size[1] = ii->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)iInNew, i6, (int32_T)
                              sizeof(real_T), &k_emlrtRTEI);
            loop_ub = ii->size[0] * ii->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              iInNew->data[i6] = ii->data[i6];
            }

            loop_ub = XTrain->size[0];
            i6 = c_XTrain->size[0] * c_XTrain->size[1];
            c_XTrain->size[0] = loop_ub;
            c_XTrain->size[1] = iInNew->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)c_XTrain, i6, (int32_T)
                              sizeof(real_T), &k_emlrtRTEI);
            apnd = iInNew->size[1];
            for (i6 = 0; i6 < apnd; i6++) {
              for (ix = 0; ix < loop_ub; ix++) {
                ixstart = XTrain->size[1];
                ndbl = (int32_T)iInNew->data[iInNew->size[0] * i6];
                c_XTrain->data[ix + c_XTrain->size[0] * i6] = XTrain->data[ix +
                  XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1,
                  ixstart, &hd_emlrtBCI, sp) - 1)];
              }
            }

            st.site = &md_emlrtRSI;
            queryIfColumnsVary(&st, c_XTrain, options_XVariationTol, bXVaries);
            st.site = &ld_emlrtRSI;
            b_st.site = &ld_emlrtRSI;
            eml_li_find(&b_st, bXVaries, ii);
            i6 = x->size[0] * x->size[1];
            x->size[0] = 1;
            x->size[1] = iIn->size[1] + ii->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)x, i6, (int32_T)sizeof
                              (real_T), &k_emlrtRTEI);
            loop_ub = iIn->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              x->data[x->size[0] * i6] = iIn->data[iIn->size[0] * i6];
            }

            loop_ub = ii->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              ix = iInNew->size[1];
              ixstart = ii->data[ii->size[0] * i6];
              x->data[x->size[0] * (i6 + iIn->size[1])] = iInNew->
                data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
                &id_emlrtBCI, &st) - 1];
            }

            b_st.site = &oe_emlrtRSI;
            eml_sort(&b_st, x, iIn);
            emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
          }
        } else {
          exitg11 = 1;
        }
      } while (exitg11 == 0);

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
      b_emxInit_real_T(sp, &iTrainThis, 1, &r_emlrtRTEI, true);
      emxInit_real_T(sp, &XTrainBag, 2, &gb_emlrtRTEI, true);
      if (options_bProjBoot) {
        st.site = &kd_emlrtRSI;
        randi(&st, XTrain->size[0], XTrain->size[0], iTrainThis);
        i6 = XTrainBag->size[0] * XTrainBag->size[1];
        XTrainBag->size[0] = iTrainThis->size[0];
        XTrainBag->size[1] = iIn->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)XTrainBag, i6, (int32_T)sizeof
                          (real_T), &k_emlrtRTEI);
        loop_ub = iIn->size[1];
        for (i6 = 0; i6 < loop_ub; i6++) {
          apnd = iTrainThis->size[0];
          for (ix = 0; ix < apnd; ix++) {
            ixstart = XTrain->size[0];
            bnew = iTrainThis->data[ix];
            ndbl = (int32_T)emlrtIntegerCheckFastR2012b(bnew, &i_emlrtDCI, sp);
            idx = XTrain->size[1];
            i = (int32_T)iIn->data[iIn->size[0] * i6];
            XTrainBag->data[ix + XTrainBag->size[0] * i6] = XTrain->data
              [(emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, ixstart, &kd_emlrtBCI,
                 sp) + XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i, 1,
                  idx, &ld_emlrtBCI, sp) - 1)) - 1];
          }
        }

        loop_ub = YTrain->size[1];
        i6 = bInMat->size[0] * bInMat->size[1];
        bInMat->size[0] = iTrainThis->size[0];
        bInMat->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)bInMat, i6, (int32_T)sizeof
                          (boolean_T), &k_emlrtRTEI);
        for (i6 = 0; i6 < loop_ub; i6++) {
          apnd = iTrainThis->size[0];
          for (ix = 0; ix < apnd; ix++) {
            ixstart = YTrain->size[0];
            ndbl = (int32_T)iTrainThis->data[ix];
            bInMat->data[ix + bInMat->size[0] * i6] = YTrain->data
              [(emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, ixstart, &md_emlrtBCI,
                 sp) + YTrain->size[0] * i6) - 1];
          }
        }
      } else {
        loop_ub = XTrain->size[0];
        i6 = XTrainBag->size[0] * XTrainBag->size[1];
        XTrainBag->size[0] = loop_ub;
        XTrainBag->size[1] = iIn->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)XTrainBag, i6, (int32_T)sizeof
                          (real_T), &k_emlrtRTEI);
        apnd = iIn->size[1];
        for (i6 = 0; i6 < apnd; i6++) {
          for (ix = 0; ix < loop_ub; ix++) {
            ixstart = XTrain->size[1];
            ndbl = (int32_T)iIn->data[iIn->size[0] * i6];
            XTrainBag->data[ix + XTrainBag->size[0] * i6] = XTrain->data[ix +
              XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1,
              ixstart, &jd_emlrtBCI, sp) - 1)];
          }
        }

        i6 = bInMat->size[0] * bInMat->size[1];
        bInMat->size[0] = YTrain->size[0];
        bInMat->size[1] = YTrain->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)bInMat, i6, (int32_T)sizeof
                          (boolean_T), &k_emlrtRTEI);
        loop_ub = YTrain->size[0] * YTrain->size[1];
        for (i6 = 0; i6 < loop_ub; i6++) {
          bInMat->data[i6] = YTrain->data[i6];
        }
      }

      st.site = &jd_emlrtRSI;
      queryIfColumnsVary(&st, XTrainBag, options_XVariationTol, bXVaries);
      emxInit_real_T(sp, &q1, 2, &s_emlrtRTEI, true);
      emxInit_real_T(sp, &b_r1, 2, &t_emlrtRTEI, true);
      emxInit_real_T(sp, &q2, 2, &u_emlrtRTEI, true);
      emxInit_real_T(sp, &UTrain, 2, &v_emlrtRTEI, true);
      b_emxInit_real_T(sp, &splitGains, 1, &w_emlrtRTEI, true);
      b_emxInit_real_T(sp, &iSplits, 1, &x_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &YTrainSort, 2, &ab_emlrtRTEI, true);
      emxInit_real_T(sp, &LeftCumCounts, 2, &bb_emlrtRTEI, true);
      emxInit_real_T(sp, &RightCumCounts, 2, &cb_emlrtRTEI, true);
      emxInit_real_T(sp, &pL, 2, &db_emlrtRTEI, true);
      b_emxInit_real_T(sp, &metricLeft, 1, &eb_emlrtRTEI, true);
      b_emxInit_real_T(sp, &metricRight, 1, &fb_emlrtRTEI, true);
      emxInit_real_T(sp, &b_q1, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &b_projMat, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &YTrainBag, 2, &hb_emlrtRTEI, true);
      emxInit_int32_T(sp, &r3, 1, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &r4, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &a, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &c_y, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_splitGains, 1, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &b_q2, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &c_q1, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &b_UTrain, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_iTrainThis, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &b_UTrainSort, 1, &k_emlrtRTEI, true);
      emxInit_boolean_T(sp, &b_bRemainsSelected, 1, &k_emlrtRTEI, true);
      emxInit_boolean_T(sp, &c_bRemainsSelected, 1, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &b_RightCumCounts, 2, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &b_pL, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &c_RightCumCounts, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_UTrainSort, 1, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &b_LeftCumCounts, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_UTrain, 1, &k_emlrtRTEI, true);
      emxInit_boolean_T(sp, &d_UTrainSort, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_UTrainSort, 1, &k_emlrtRTEI, true);
      emxInit_boolean_T(sp, &f_UTrainSort, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &g_UTrainSort, 1, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &b_indFeatIn, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &d_iCanBeSelected, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &b_XTrainBag, 2, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &b_bInMat, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &c_q2, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &c_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &d_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &f_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &g_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &h_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &i_iIn, 1, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &d_UTrain, 2, &k_emlrtRTEI, true);
      emxInit_real_T(sp, &d_q2, 2, &k_emlrtRTEI, true);
      emxInit_int32_T(sp, &e_ii, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_q2, 1, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &d_bRemainsSelected, 2, &k_emlrtRTEI, true);
      b_emxInit_boolean_T(sp, &e_bRemainsSelected, 2, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &e_iCanBeSelected, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &r5, 1, &k_emlrtRTEI, true);
      emxInit_int32_T(sp, &f_ii, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &j_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &k_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &l_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &m_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &n_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &o_iIn, 1, &k_emlrtRTEI, true);
      b_emxInit_real_T(sp, &p_iIn, 1, &k_emlrtRTEI, true);
      guard1 = false;
      guard2 = false;
      b_guard3 = false;
      b_guard4 = false;
      guard5 = false;
      st.site = &id_emlrtRSI;
      if (!d_any(&st, bXVaries)) {
        b_guard4 = true;
      } else if (bInMat->size[1] > 1) {
        st.site = &id_emlrtRSI;
        b_sum(&st, bInMat, iCanBeSelected);
        b_abs(sp, iCanBeSelected, r1);
        c_tmp_size[0] = 1;
        c_tmp_size[1] = r1->size[1];
        loop_ub = r1->size[0] * r1->size[1];
        for (i6 = 0; i6 < loop_ub; i6++) {
          c_tmp_data[i6] = (r1->data[i6] > 1.0E-12);
        }

        st.site = &id_emlrtRSI;
        if (c_sum(&st, c_tmp_data, c_tmp_size) < 2.0) {
          b_guard4 = true;
        } else {
          guard5 = true;
        }
      } else {
        guard5 = true;
      }

      if (guard5) {
        if (bInMat->size[1] == 1) {
          dv1[0] = 0.0;
          dv1[1] = bInMat->size[0];
          c_bInMat[0] = bInMat->size[0];
          c_YTrain = *bInMat;
          c_YTrain.size = (int32_T *)&c_bInMat;
          c_YTrain.numDimensions = 1;
          st.site = &id_emlrtRSI;
          bsxfun(d_sum(&st, &c_YTrain), dv1, bv0);
          if (any(bv0)) {
            b_guard4 = true;
          } else {
            b_guard3 = true;
          }
        } else {
          b_guard3 = true;
        }
      }

      if (b_guard4) {
        if (!c_options_bContinueProjBootDege) {
          *bLeaf = true;
        } else {
          loop_ub = XTrain->size[0];
          i6 = XTrainBag->size[0] * XTrainBag->size[1];
          XTrainBag->size[0] = loop_ub;
          XTrainBag->size[1] = iIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)XTrainBag, i6, (int32_T)
                            sizeof(real_T), &k_emlrtRTEI);
          apnd = iIn->size[1];
          for (i6 = 0; i6 < apnd; i6++) {
            for (ix = 0; ix < loop_ub; ix++) {
              ixstart = XTrain->size[1];
              ndbl = (int32_T)iIn->data[iIn->size[0] * i6];
              XTrainBag->data[ix + XTrainBag->size[0] * i6] = XTrain->data[ix +
                XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1,
                ixstart, &nd_emlrtBCI, sp) - 1)];
            }
          }

          i6 = bInMat->size[0] * bInMat->size[1];
          bInMat->size[0] = YTrain->size[0];
          bInMat->size[1] = YTrain->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)bInMat, i6, (int32_T)sizeof
                            (boolean_T), &k_emlrtRTEI);
          loop_ub = YTrain->size[0] * YTrain->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            bInMat->data[i6] = YTrain->data[i6];
          }

          b_guard3 = true;
        }
      }

      if (b_guard3) {
        st.site = &hd_emlrtRSI;
        if ((XTrainBag->size[0] == 2) || queryIfOnlyTwoUniqueRows(&st, XTrainBag))
        {
          /*  Check for only having two points */
          /*  If there are only two points setup a maximum marginal split between the points */
          st.site = &gd_emlrtRSI;
          twoPointMaxMarginSplit(&st, XTrainBag, bInMat, options_XVariationTol,
            &bSplit, b_projMat, partitionPoint_data, partitionPoint_size);
          i6 = q2->size[0] * q2->size[1];
          q2->size[0] = b_projMat->size[0];
          q2->size[1] = b_projMat->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)sizeof
                            (real_T), &k_emlrtRTEI);
          loop_ub = b_projMat->size[0] * b_projMat->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            q2->data[i6] = b_projMat->data[i6];
          }

          if (!bSplit) {
            *bLeaf = true;
          } else {
            st.site = &fd_emlrtRSI;
            loop_ub = XTrain->size[0];
            i6 = a->size[0] * a->size[1];
            a->size[0] = loop_ub;
            a->size[1] = iIn->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)a, i6, (int32_T)sizeof
                              (real_T), &k_emlrtRTEI);
            apnd = iIn->size[1];
            for (i6 = 0; i6 < apnd; i6++) {
              for (ix = 0; ix < loop_ub; ix++) {
                ixstart = XTrain->size[1];
                ndbl = (int32_T)iIn->data[iIn->size[0] * i6];
                a->data[ix + a->size[0] * i6] = XTrain->data[ix + XTrain->size[0]
                  * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, ixstart,
                      &je_emlrtBCI, &st) - 1)];
              }
            }

            b_st.site = &ih_emlrtRSI;
            i6 = j_iIn->size[0];
            j_iIn->size[0] = iIn->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)j_iIn, i6, (int32_T)
                              sizeof(real_T), &k_emlrtRTEI);
            loop_ub = iIn->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              j_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
            }

            if (!(j_iIn->size[0] == b_projMat->size[0])) {
              i6 = XTrain->size[0];
              ix = k_iIn->size[0];
              k_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)k_iIn, ix, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = iIn->size[1];
              for (ix = 0; ix < loop_ub; ix++) {
                k_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
              }

              if (((i6 == 1) && (k_iIn->size[0] == 1)) || ((b_projMat->size[0] ==
                    1) && (b_projMat->size[1] == 1))) {
                d_y = NULL;
                m3 = emlrtCreateCharArray(2, iv12);
                for (i = 0; i < 45; i++) {
                  cv12[i] = cv13[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 45, m3, cv12);
                emlrtAssign(&d_y, m3);
                c_st.site = &dp_emlrtRSI;
                e_st.site = &aq_emlrtRSI;
                f_error(&c_st, b_message(&e_st, d_y, &hb_emlrtMCI), &ib_emlrtMCI);
              } else {
                e_y = NULL;
                m3 = emlrtCreateCharArray(2, iv13);
                for (i = 0; i < 21; i++) {
                  cv14[i] = cv15[i];
                }

                emlrtInitCharArrayR2013a(&b_st, 21, m3, cv14);
                emlrtAssign(&e_y, m3);
                c_st.site = &ep_emlrtRSI;
                e_st.site = &bq_emlrtRSI;
                f_error(&c_st, b_message(&e_st, e_y, &jb_emlrtMCI), &kb_emlrtMCI);
              }
            }

            i6 = l_iIn->size[0];
            l_iIn->size[0] = iIn->size[1];
            emxEnsureCapacity(&st, (emxArray__common *)l_iIn, i6, (int32_T)
                              sizeof(real_T), &k_emlrtRTEI);
            loop_ub = iIn->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              l_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
            }

            if ((l_iIn->size[0] == 1) || (b_projMat->size[0] == 1)) {
              i6 = b_q1->size[0] * b_q1->size[1];
              b_q1->size[0] = a->size[0];
              b_q1->size[1] = b_projMat->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)b_q1, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = a->size[0];
              for (i6 = 0; i6 < loop_ub; i6++) {
                apnd = b_projMat->size[1];
                for (ix = 0; ix < apnd; ix++) {
                  b_q1->data[i6 + b_q1->size[0] * ix] = 0.0;
                  idx = a->size[1];
                  for (ixstart = 0; ixstart < idx; ixstart++) {
                    b_q1->data[i6 + b_q1->size[0] * ix] += a->data[i6 + a->size
                      [0] * ixstart] * b_projMat->data[ixstart + b_projMat->
                      size[0] * ix];
                  }
                }
              }
            } else {
              i6 = XTrain->size[0];
              unnamed_idx_1 = (uint32_T)b_projMat->size[1];
              ix = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[0] = i6;
              emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, ix, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              ix = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[1] = (int32_T)unnamed_idx_1;
              emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, ix, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = i6 * (int32_T)unnamed_idx_1;
              for (ix = 0; ix < loop_ub; ix++) {
                YTrainBag->data[ix] = 0.0;
              }

              b_st.site = &hh_emlrtRSI;
              c_st.site = &jh_emlrtRSI;
              ix = b_q1->size[0] * b_q1->size[1];
              b_q1->size[0] = i6;
              emxEnsureCapacity(&c_st, (emxArray__common *)b_q1, ix, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              ix = b_q1->size[0] * b_q1->size[1];
              b_q1->size[1] = (int32_T)unnamed_idx_1;
              emxEnsureCapacity(&c_st, (emxArray__common *)b_q1, ix, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = i6 * (int32_T)unnamed_idx_1;
              for (i6 = 0; i6 < loop_ub; i6++) {
                b_q1->data[i6] = 0.0;
              }

              i6 = XTrain->size[0];
              if ((i6 < 1) || (b_projMat->size[1] < 1)) {
              } else {
                d_st.site = &kh_emlrtRSI;
                lambda = 1.0;
                nSelected = 0.0;
                TRANSB = 'N';
                TRANSA = 'N';
                f_st.site = &kh_emlrtRSI;
                i6 = XTrain->size[0];
                m_t = (ptrdiff_t)(i6);
                f_st.site = &kh_emlrtRSI;
                n_t = (ptrdiff_t)(b_projMat->size[1]);
                f_st.site = &kh_emlrtRSI;
                i6 = m_iIn->size[0];
                m_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&f_st, (emxArray__common *)m_iIn, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  m_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
                }

                k_t = (ptrdiff_t)(m_iIn->size[0]);
                f_st.site = &kh_emlrtRSI;
                i6 = XTrain->size[0];
                lda_t = (ptrdiff_t)(i6);
                f_st.site = &kh_emlrtRSI;
                i6 = n_iIn->size[0];
                n_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&f_st, (emxArray__common *)n_iIn, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  n_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
                }

                ldb_t = (ptrdiff_t)(n_iIn->size[0]);
                f_st.site = &kh_emlrtRSI;
                i6 = XTrain->size[0];
                ldc_t = (ptrdiff_t)(i6);
                alpha1_t = (double *)(&lambda);
                i6 = XTrain->size[0];
                ix = o_iIn->size[0];
                o_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&d_st, (emxArray__common *)o_iIn, ix, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (ix = 0; ix < loop_ub; ix++) {
                  o_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
                }

                i6 *= o_iIn->size[0];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI, &d_st);
                i6 = p_iIn->size[0];
                p_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&d_st, (emxArray__common *)p_iIn, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  p_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
                }

                Aia0_t = (double *)(&a->data[0]);
                i6 = b_projMat->size[0] * b_projMat->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI, &d_st);
                Bib0_t = (double *)(&q2->data[0]);
                beta1_t = (double *)(&nSelected);
                i6 = YTrainBag->size[0] * YTrainBag->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI, &d_st);
                Cic0_t = (double *)(&b_q1->data[0]);
                dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                      &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
              }
            }

            for (i6 = 0; i6 < 2; i6++) {
              b_tmp_size[i6] = b_q1->size[i6];
            }

            for (i6 = 0; i6 < 2; i6++) {
              tmp_size[i6] = partitionPoint_size[i6];
            }

            emlrtSizeEqCheck2DFastR2012b(b_tmp_size, tmp_size, &w_emlrtECI, sp);
            i6 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
            bLessThanTrain->size[0] = b_q1->size[0];
            bLessThanTrain->size[1] = b_q1->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)bLessThanTrain, i6,
                              (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
            loop_ub = b_q1->size[0] * b_q1->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              bLessThanTrain->data[i6] = (b_q1->data[i6] <=
                partitionPoint_data[i6]);
            }
          }

          guard1 = true;
        } else {
          /*  Generate the new features as required */
          st.site = &ed_emlrtRSI;
          b_any(&st, bInMat, bXVaries);
          st.site = &dd_emlrtRSI;
          eml_li_find(&st, bXVaries, ii);
          idx = bInMat->size[0];
          i = bInMat->size[1];
          i6 = b_bInMat->size[0] * b_bInMat->size[1];
          b_bInMat->size[0] = idx;
          b_bInMat->size[1] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_bInMat, i6, (int32_T)
                            sizeof(boolean_T), &k_emlrtRTEI);
          loop_ub = ii->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            for (ix = 0; ix < idx; ix++) {
              ixstart = ii->data[ii->size[0] * i6];
              b_bInMat->data[ix + b_bInMat->size[0] * i6] = bInMat->data[ix +
                bInMat->size[0] * (emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                i, &od_emlrtBCI, sp) - 1)];
            }
          }

          i6 = bInMat->size[0] * bInMat->size[1];
          bInMat->size[0] = b_bInMat->size[0];
          bInMat->size[1] = b_bInMat->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)bInMat, i6, (int32_T)sizeof
                            (boolean_T), &k_emlrtRTEI);
          loop_ub = b_bInMat->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            apnd = b_bInMat->size[0];
            for (ix = 0; ix < apnd; ix++) {
              bInMat->data[ix + bInMat->size[0] * i6] = b_bInMat->data[ix +
                b_bInMat->size[0] * i6];
            }
          }

          st.site = &cd_emlrtRSI;
          e_sum(&st, XTrainBag, iCanBeSelected);
          st.site = &bd_emlrtRSI;
          b_sum(&st, bInMat, indFeatIn);

          /*  Subtraction of the mean is common to the process of calculating the */
          /*  projection matrices for both CCA and PCA but for computational */
          /*  effificently we don't make this translation when actually applying the */
          /*  projections */
          i6 = d_iCanBeSelected->size[0] * d_iCanBeSelected->size[1];
          d_iCanBeSelected->size[0] = 1;
          d_iCanBeSelected->size[1] = iCanBeSelected->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)d_iCanBeSelected, i6,
                            (int32_T)sizeof(real_T), &k_emlrtRTEI);
          i = XTrainBag->size[0];
          loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            d_iCanBeSelected->data[i6] = iCanBeSelected->data[i6] / (real_T)i;
          }

          i6 = b_XTrainBag->size[0] * b_XTrainBag->size[1];
          b_XTrainBag->size[0] = XTrainBag->size[0];
          b_XTrainBag->size[1] = XTrainBag->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_XTrainBag, i6, (int32_T)
                            sizeof(real_T), &k_emlrtRTEI);
          loop_ub = XTrainBag->size[0] * XTrainBag->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            b_XTrainBag->data[i6] = XTrainBag->data[i6];
          }

          st.site = &ad_emlrtRSI;
          d_bsxfun(&st, b_XTrainBag, d_iCanBeSelected, XTrainBag);
          i6 = b_indFeatIn->size[0] * b_indFeatIn->size[1];
          b_indFeatIn->size[0] = 1;
          b_indFeatIn->size[1] = indFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_indFeatIn, i6, (int32_T)
                            sizeof(real_T), &k_emlrtRTEI);
          idx = bInMat->size[0];
          loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            b_indFeatIn->data[i6] = indFeatIn->data[i6] / (real_T)idx;
          }

          st.site = &yc_emlrtRSI;
          e_bsxfun(&st, bInMat, b_indFeatIn, YTrainBag);
          if (YTrainBag->size[0] != XTrainBag->size[0]) {
            st.site = &xc_emlrtRSI;
            error(&st);
          } else {
            if (XTrainBag->size[0] == 1) {
              st.site = &wc_emlrtRSI;
              b_error(&st);
            }
          }

          /*  This code is a reduction of the function canoncorr.  This */
          /*  method is explained in the supplementary material */
          st.site = &vc_emlrtRSI;
          qr(&st, XTrainBag, b_q1, q2, iCanBeSelected);
          i6 = q1->size[0] * q1->size[1];
          q1->size[0] = b_q1->size[0];
          q1->size[1] = b_q1->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)q1, i6, (int32_T)sizeof
                            (real_T), &k_emlrtRTEI);
          loop_ub = b_q1->size[0] * b_q1->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            q1->data[i6] = b_q1->data[i6];
          }

          i6 = b_r1->size[0] * b_r1->size[1];
          b_r1->size[0] = q2->size[0];
          b_r1->size[1] = q2->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)b_r1, i6, (int32_T)sizeof
                            (real_T), &k_emlrtRTEI);
          loop_ub = q2->size[0] * q2->size[1];
          for (i6 = 0; i6 < loop_ub; i6++) {
            b_r1->data[i6] = q2->data[i6];
          }

          /*  Reduce to full rank within some tolerance */
          i6 = q2->size[0] * q2->size[1];
          emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &ic_emlrtBCI, sp);
          lambda = muDoubleScalarAbs(q2->data[0]);
          st.site = &uc_emlrtRSI;
          diag(&st, q2, UTrainSort);
          i6 = g_UTrainSort->size[0];
          g_UTrainSort->size[0] = UTrainSort->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)g_UTrainSort, i6, (int32_T)
                            sizeof(real_T), &k_emlrtRTEI);
          loop_ub = UTrainSort->size[0];
          for (i6 = 0; i6 < loop_ub; i6++) {
            g_UTrainSort->data[i6] = UTrainSort->data[i6];
          }

          d_abs(sp, g_UTrainSort, UTrainSort);
          lambda *= options_epsilonCCA;
          i6 = f_UTrainSort->size[0];
          f_UTrainSort->size[0] = UTrainSort->size[0];
          emxEnsureCapacity(sp, (emxArray__common *)f_UTrainSort, i6, (int32_T)
                            sizeof(boolean_T), &k_emlrtRTEI);
          loop_ub = UTrainSort->size[0];
          for (i6 = 0; i6 < loop_ub; i6++) {
            f_UTrainSort->data[i6] = (UTrainSort->data[i6] >= lambda);
          }

          st.site = &uc_emlrtRSI;
          rankX = d_sum(&st, f_UTrainSort);
          if (rankX == 0.0) {
            /* warning('X doesnt vary so component analysis fails'); */
            i6 = projMat->size[0];
            ix = XTrainBag->size[1] - 1;
            projMat->size[0] = 1 + (int32_T)emlrtNonNegativeCheckFastR2012b(ix,
              &n_emlrtDCI, sp);
            emxEnsureCapacity(sp, (emxArray__common *)projMat, i6, (int32_T)
                              sizeof(real_T), &k_emlrtRTEI);
            projMat->data[0] = 1.0;
            i6 = XTrainBag->size[1] - 1;
            loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(i6, &n_emlrtDCI,
              sp);
            for (i6 = 0; i6 < loop_ub; i6++) {
              projMat->data[i6 + 1] = 0.0;
            }
          } else {
            if (rankX < XTrainBag->size[1]) {
              i6 = b_q1->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &jc_emlrtBCI, sp);
              i6 = b_q1->size[1];
              ix = (int32_T)rankX;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &jc_emlrtBCI, sp);
              loop_ub = b_q1->size[0];
              i6 = q1->size[0] * q1->size[1];
              q1->size[0] = loop_ub;
              q1->size[1] = (int32_T)rankX;
              emxEnsureCapacity(sp, (emxArray__common *)q1, i6, (int32_T)sizeof
                                (real_T), &k_emlrtRTEI);
              apnd = (int32_T)rankX;
              for (i6 = 0; i6 < apnd; i6++) {
                for (ix = 0; ix < loop_ub; ix++) {
                  q1->data[ix + q1->size[0] * i6] = b_q1->data[ix + b_q1->size[0]
                    * i6];
                }
              }

              i6 = q2->size[0];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &kc_emlrtBCI, sp);
              i6 = q2->size[0];
              ix = (int32_T)rankX;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &kc_emlrtBCI, sp);
              i6 = q2->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &lc_emlrtBCI, sp);
              i6 = q2->size[1];
              ix = (int32_T)rankX;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &lc_emlrtBCI, sp);
              i6 = b_r1->size[0] * b_r1->size[1];
              b_r1->size[0] = (int32_T)rankX;
              b_r1->size[1] = (int32_T)rankX;
              emxEnsureCapacity(sp, (emxArray__common *)b_r1, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = (int32_T)rankX;
              for (i6 = 0; i6 < loop_ub; i6++) {
                apnd = (int32_T)rankX;
                for (ix = 0; ix < apnd; ix++) {
                  b_r1->data[ix + b_r1->size[0] * i6] = q2->data[ix + q2->size[0]
                    * i6];
                }
              }
            }

            /*  This code is a reduction of the function canoncorr.  This */
            /*  method is explained in the supplementary material */
            st.site = &tc_emlrtRSI;
            qr(&st, YTrainBag, UTrain, b_q1, indFeatIn);
            i6 = q2->size[0] * q2->size[1];
            q2->size[0] = UTrain->size[0];
            q2->size[1] = UTrain->size[1];
            emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)sizeof
                              (real_T), &k_emlrtRTEI);
            loop_ub = UTrain->size[0] * UTrain->size[1];
            for (i6 = 0; i6 < loop_ub; i6++) {
              q2->data[i6] = UTrain->data[i6];
            }

            /*  Reduce to full rank within some tolerance */
            i6 = b_q1->size[0] * b_q1->size[1];
            emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &mc_emlrtBCI, sp);
            lambda = muDoubleScalarAbs(b_q1->data[0]);
            st.site = &sc_emlrtRSI;
            diag(&st, b_q1, UTrainSort);
            i6 = e_UTrainSort->size[0];
            e_UTrainSort->size[0] = UTrainSort->size[0];
            emxEnsureCapacity(sp, (emxArray__common *)e_UTrainSort, i6, (int32_T)
                              sizeof(real_T), &k_emlrtRTEI);
            loop_ub = UTrainSort->size[0];
            for (i6 = 0; i6 < loop_ub; i6++) {
              e_UTrainSort->data[i6] = UTrainSort->data[i6];
            }

            d_abs(sp, e_UTrainSort, UTrainSort);
            lambda *= options_epsilonCCA;
            i6 = d_UTrainSort->size[0];
            d_UTrainSort->size[0] = UTrainSort->size[0];
            emxEnsureCapacity(sp, (emxArray__common *)d_UTrainSort, i6, (int32_T)
                              sizeof(boolean_T), &k_emlrtRTEI);
            loop_ub = UTrainSort->size[0];
            for (i6 = 0; i6 < loop_ub; i6++) {
              d_UTrainSort->data[i6] = (UTrainSort->data[i6] >= lambda);
            }

            st.site = &sc_emlrtRSI;
            lambda = d_sum(&st, d_UTrainSort);
            if (lambda == 0.0) {
              /* warning('Y doesnt vary so component analysis fails'); */
              i6 = projMat->size[0];
              ix = XTrainBag->size[1] - 1;
              projMat->size[0] = 1 + (int32_T)emlrtNonNegativeCheckFastR2012b(ix,
                &m_emlrtDCI, sp);
              emxEnsureCapacity(sp, (emxArray__common *)projMat, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              projMat->data[0] = 1.0;
              i6 = XTrainBag->size[1] - 1;
              loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(i6, &m_emlrtDCI,
                sp);
              for (i6 = 0; i6 < loop_ub; i6++) {
                projMat->data[i6 + 1] = 0.0;
              }
            } else {
              if (lambda < YTrainBag->size[1]) {
                i6 = UTrain->size[1];
                emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &nc_emlrtBCI, sp);
                i6 = UTrain->size[1];
                ix = (int32_T)lambda;
                emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &nc_emlrtBCI, sp);
                loop_ub = UTrain->size[0];
                i6 = q2->size[0] * q2->size[1];
                q2->size[0] = loop_ub;
                q2->size[1] = (int32_T)lambda;
                emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                apnd = (int32_T)lambda;
                for (i6 = 0; i6 < apnd; i6++) {
                  for (ix = 0; ix < loop_ub; ix++) {
                    q2->data[ix + q2->size[0] * i6] = UTrain->data[ix +
                      UTrain->size[0] * i6];
                  }
                }
              }

              /*  Solve CCA using the decompositions */
              d = muDoubleScalarMin(rankX, lambda);
              st.site = &rc_emlrtRSI;
              i6 = a->size[0] * a->size[1];
              a->size[0] = q1->size[1];
              a->size[1] = q1->size[0];
              emxEnsureCapacity(&st, (emxArray__common *)a, i6, (int32_T)sizeof
                                (real_T), &k_emlrtRTEI);
              loop_ub = q1->size[0];
              for (i6 = 0; i6 < loop_ub; i6++) {
                apnd = q1->size[1];
                for (ix = 0; ix < apnd; ix++) {
                  a->data[ix + a->size[0] * i6] = q1->data[i6 + q1->size[0] * ix];
                }
              }

              b_st.site = &ih_emlrtRSI;
              if (!(a->size[1] == q2->size[0])) {
                if (((a->size[0] == 1) && (a->size[1] == 1)) || ((q2->size[0] ==
                      1) && (q2->size[1] == 1))) {
                  f_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv14);
                  for (i = 0; i < 45; i++) {
                    cv12[i] = cv13[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m3, cv12);
                  emlrtAssign(&f_y, m3);
                  c_st.site = &dp_emlrtRSI;
                  e_st.site = &aq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, f_y, &hb_emlrtMCI),
                          &ib_emlrtMCI);
                } else {
                  g_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv15);
                  for (i = 0; i < 21; i++) {
                    cv14[i] = cv15[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m3, cv14);
                  emlrtAssign(&g_y, m3);
                  c_st.site = &ep_emlrtRSI;
                  e_st.site = &bq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, g_y, &jb_emlrtMCI),
                          &kb_emlrtMCI);
                }
              }

              if ((a->size[1] == 1) || (q2->size[0] == 1)) {
                i6 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = a->size[0];
                UTrain->size[1] = q2->size[1];
                emxEnsureCapacity(&st, (emxArray__common *)UTrain, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = a->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = q2->size[1];
                  for (ix = 0; ix < apnd; ix++) {
                    UTrain->data[i6 + UTrain->size[0] * ix] = 0.0;
                    idx = a->size[1];
                    for (ixstart = 0; ixstart < idx; ixstart++) {
                      UTrain->data[i6 + UTrain->size[0] * ix] += a->data[i6 +
                        a->size[0] * ixstart] * q2->data[ixstart + q2->size[0] *
                        ix];
                    }
                  }
                }
              } else {
                unnamed_idx_0 = (uint32_T)a->size[0];
                unnamed_idx_1 = (uint32_T)q2->size[1];
                i6 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = (int32_T)unnamed_idx_0;
                emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                i6 = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
                for (i6 = 0; i6 < loop_ub; i6++) {
                  YTrainBag->data[i6] = 0.0;
                }

                b_st.site = &hh_emlrtRSI;
                c_st.site = &jh_emlrtRSI;
                i6 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = (int32_T)unnamed_idx_0;
                emxEnsureCapacity(&c_st, (emxArray__common *)UTrain, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                i6 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&c_st, (emxArray__common *)UTrain, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
                for (i6 = 0; i6 < loop_ub; i6++) {
                  UTrain->data[i6] = 0.0;
                }

                if ((a->size[0] < 1) || (q2->size[1] < 1) || (a->size[1] < 1)) {
                } else {
                  d_st.site = &kh_emlrtRSI;
                  lambda = 1.0;
                  nSelected = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  f_st.site = &kh_emlrtRSI;
                  m_t = (ptrdiff_t)(a->size[0]);
                  f_st.site = &kh_emlrtRSI;
                  n_t = (ptrdiff_t)(q2->size[1]);
                  f_st.site = &kh_emlrtRSI;
                  k_t = (ptrdiff_t)(a->size[1]);
                  f_st.site = &kh_emlrtRSI;
                  lda_t = (ptrdiff_t)(a->size[0]);
                  f_st.site = &kh_emlrtRSI;
                  ldb_t = (ptrdiff_t)(a->size[1]);
                  f_st.site = &kh_emlrtRSI;
                  ldc_t = (ptrdiff_t)(a->size[0]);
                  alpha1_t = (double *)(&lambda);
                  i6 = a->size[0] * a->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI,
                    &d_st);
                  Aia0_t = (double *)(&a->data[0]);
                  i6 = q2->size[0] * q2->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI,
                    &d_st);
                  Bib0_t = (double *)(&q2->data[0]);
                  beta1_t = (double *)(&nSelected);
                  i6 = YTrainBag->size[0] * YTrainBag->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI,
                    &d_st);
                  Cic0_t = (double *)(&UTrain->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }

              i6 = b_UTrain->size[0] * b_UTrain->size[1];
              b_UTrain->size[0] = UTrain->size[0];
              b_UTrain->size[1] = UTrain->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)b_UTrain, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = UTrain->size[0] * UTrain->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                b_UTrain->data[i6] = UTrain->data[i6];
              }

              st.site = &rc_emlrtRSI;
              svd(&st, b_UTrain, b_q1, UTrain, q2);
              i6 = b_q1->size[1];
              emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &oc_emlrtBCI, sp);
              i6 = b_q1->size[1];
              ix = (int32_T)d;
              emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &oc_emlrtBCI, sp);
              loop_ub = b_q1->size[0];
              i6 = c_q1->size[0] * c_q1->size[1];
              c_q1->size[0] = loop_ub;
              c_q1->size[1] = (int32_T)d;
              emxEnsureCapacity(sp, (emxArray__common *)c_q1, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              apnd = (int32_T)d;
              for (i6 = 0; i6 < apnd; i6++) {
                for (ix = 0; ix < loop_ub; ix++) {
                  c_q1->data[ix + c_q1->size[0] * i6] = b_q1->data[ix +
                    b_q1->size[0] * i6];
                }
              }

              st.site = &qc_emlrtRSI;
              mldivide(&st, b_r1, c_q1, q2);
              lambda = (real_T)XTrainBag->size[0] - 1.0;
              st.site = &qc_emlrtRSI;
              c_sqrt(&st, &lambda);
              i6 = q2->size[0] * q2->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)sizeof
                                (real_T), &k_emlrtRTEI);
              idx = q2->size[0];
              i = q2->size[1];
              loop_ub = idx * i;
              for (i6 = 0; i6 < loop_ub; i6++) {
                q2->data[i6] *= lambda;
              }

              /*  Put coefficients back to their full size and their correct order */
              bnew = (real_T)XTrainBag->size[1] - rankX;
              emlrtNonNegativeCheckFastR2012b(bnew, &f_emlrtDCI, sp);
              i6 = q2->size[1];
              ix = (int32_T)d;
              emlrtDimSizeEqCheckFastR2012b(i6, ix, &x_emlrtECI, sp);
              i6 = c_ii->size[0];
              c_ii->size[0] = iCanBeSelected->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)c_ii, i6, (int32_T)
                                sizeof(int32_T), &k_emlrtRTEI);
              loop_ub = iCanBeSelected->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                ix = q2->size[0];
                ixstart = (int32_T)iCanBeSelected->data[iCanBeSelected->size[0] *
                  i6];
                c_ii->data[i6] = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1,
                  ix, &pd_emlrtBCI, sp) - 1;
              }

              loop_ub = q2->size[1];
              i6 = r3->size[0];
              r3->size[0] = loop_ub;
              emxEnsureCapacity(sp, (emxArray__common *)r3, i6, (int32_T)sizeof
                                (int32_T), &k_emlrtRTEI);
              for (i6 = 0; i6 < loop_ub; i6++) {
                r3->data[i6] = i6;
              }

              i = (int32_T)((real_T)XTrainBag->size[1] - rankX);
              i6 = YTrainBag->size[0] * YTrainBag->size[1];
              YTrainBag->size[0] = q2->size[0] + i;
              YTrainBag->size[1] = q2->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)YTrainBag, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = q2->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                apnd = q2->size[0];
                for (ix = 0; ix < apnd; ix++) {
                  YTrainBag->data[ix + YTrainBag->size[0] * i6] = q2->data[ix +
                    q2->size[0] * i6];
                }
              }

              loop_ub = (int32_T)d;
              for (i6 = 0; i6 < loop_ub; i6++) {
                for (ix = 0; ix < i; ix++) {
                  YTrainBag->data[(ix + q2->size[0]) + YTrainBag->size[0] * i6] =
                    0.0;
                }
              }

              g_ii[0] = c_ii->size[0];
              g_ii[1] = r3->size[0];
              emlrtSubAssignSizeCheckR2012b(g_ii, 2, *(int32_T (*)[2])
                YTrainBag->size, 2, &y_emlrtECI, sp);
              loop_ub = YTrainBag->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                apnd = YTrainBag->size[0];
                for (ix = 0; ix < apnd; ix++) {
                  q2->data[c_ii->data[ix] + q2->size[0] * r3->data[i6]] =
                    YTrainBag->data[ix + YTrainBag->size[0] * i6];
                }
              }

              /*  Normalize the projection matrices.  This ensures that the later tests for */
              /*  close points are triggered appropriately and is useful for */
              /*  interpretability. */
              power(sp, q2, YTrainBag);
              st.site = &pc_emlrtRSI;
              e_sum(&st, YTrainBag, iCanBeSelected);
              st.site = &pc_emlrtRSI;
              d_sqrt(&st, iCanBeSelected);
              i6 = b_q2->size[0] * b_q2->size[1];
              b_q2->size[0] = q2->size[0];
              b_q2->size[1] = q2->size[1];
              emxEnsureCapacity(sp, (emxArray__common *)b_q2, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = q2->size[0] * q2->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                b_q2->data[i6] = q2->data[i6];
              }

              st.site = &pc_emlrtRSI;
              f_bsxfun(&st, b_q2, iCanBeSelected, q2);

              /*     %% Choose the features to use */
              if (options_includeOriginalAxes) {
                st.site = &oc_emlrtRSI;
                eye(&st, q2->size[0], YTrainBag);
                i6 = q2->size[0];
                ix = YTrainBag->size[0];
                emlrtDimSizeEqCheckFastR2012b(i6, ix, &ab_emlrtECI, sp);
                i6 = c_q2->size[0] * c_q2->size[1];
                c_q2->size[0] = q2->size[0];
                c_q2->size[1] = q2->size[1] + YTrainBag->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)c_q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = q2->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = q2->size[0];
                  for (ix = 0; ix < apnd; ix++) {
                    c_q2->data[ix + c_q2->size[0] * i6] = q2->data[ix + q2->
                      size[0] * i6];
                  }
                }

                loop_ub = YTrainBag->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = YTrainBag->size[0];
                  for (ix = 0; ix < apnd; ix++) {
                    c_q2->data[ix + c_q2->size[0] * (i6 + q2->size[1])] =
                      YTrainBag->data[ix + YTrainBag->size[0] * i6];
                  }
                }

                i6 = q2->size[0] * q2->size[1];
                q2->size[0] = c_q2->size[0];
                q2->size[1] = c_q2->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = c_q2->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = c_q2->size[0];
                  for (ix = 0; ix < apnd; ix++) {
                    q2->data[ix + q2->size[0] * i6] = c_q2->data[ix + c_q2->
                      size[0] * i6];
                  }
                }
              }

              st.site = &nc_emlrtRSI;
              loop_ub = XTrain->size[0];
              i6 = a->size[0] * a->size[1];
              a->size[0] = loop_ub;
              a->size[1] = iIn->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)a, i6, (int32_T)sizeof
                                (real_T), &k_emlrtRTEI);
              apnd = iIn->size[1];
              for (i6 = 0; i6 < apnd; i6++) {
                for (ix = 0; ix < loop_ub; ix++) {
                  ixstart = XTrain->size[1];
                  ndbl = (int32_T)iIn->data[iIn->size[0] * i6];
                  a->data[ix + a->size[0] * i6] = XTrain->data[ix + XTrain->
                    size[0] * (emlrtDynamicBoundsCheckFastR2012b(ndbl, 1,
                    ixstart, &qd_emlrtBCI, &st) - 1)];
                }
              }

              b_st.site = &ih_emlrtRSI;
              i6 = c_iIn->size[0];
              c_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity(&b_st, (emxArray__common *)c_iIn, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = iIn->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                c_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
              }

              if (!(c_iIn->size[0] == q2->size[0])) {
                i6 = XTrain->size[0];
                ix = d_iIn->size[0];
                d_iIn->size[0] = iIn->size[1];
                emxEnsureCapacity(&b_st, (emxArray__common *)d_iIn, ix, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iIn->size[1];
                for (ix = 0; ix < loop_ub; ix++) {
                  d_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
                }

                if (((i6 == 1) && (d_iIn->size[0] == 1)) || ((q2->size[0] == 1) &&
                     (q2->size[1] == 1))) {
                  h_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv16);
                  for (i = 0; i < 45; i++) {
                    cv12[i] = cv13[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 45, m3, cv12);
                  emlrtAssign(&h_y, m3);
                  c_st.site = &dp_emlrtRSI;
                  e_st.site = &aq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, h_y, &hb_emlrtMCI),
                          &ib_emlrtMCI);
                } else {
                  i_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv17);
                  for (i = 0; i < 21; i++) {
                    cv14[i] = cv15[i];
                  }

                  emlrtInitCharArrayR2013a(&b_st, 21, m3, cv14);
                  emlrtAssign(&i_y, m3);
                  c_st.site = &ep_emlrtRSI;
                  e_st.site = &bq_emlrtRSI;
                  f_error(&c_st, b_message(&e_st, i_y, &jb_emlrtMCI),
                          &kb_emlrtMCI);
                }
              }

              i6 = e_iIn->size[0];
              e_iIn->size[0] = iIn->size[1];
              emxEnsureCapacity(&st, (emxArray__common *)e_iIn, i6, (int32_T)
                                sizeof(real_T), &k_emlrtRTEI);
              loop_ub = iIn->size[1];
              for (i6 = 0; i6 < loop_ub; i6++) {
                e_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
              }

              if ((e_iIn->size[0] == 1) || (q2->size[0] == 1)) {
                i6 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = a->size[0];
                UTrain->size[1] = q2->size[1];
                emxEnsureCapacity(&st, (emxArray__common *)UTrain, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = a->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = q2->size[1];
                  for (ix = 0; ix < apnd; ix++) {
                    UTrain->data[i6 + UTrain->size[0] * ix] = 0.0;
                    idx = a->size[1];
                    for (ixstart = 0; ixstart < idx; ixstart++) {
                      UTrain->data[i6 + UTrain->size[0] * ix] += a->data[i6 +
                        a->size[0] * ixstart] * q2->data[ixstart + q2->size[0] *
                        ix];
                    }
                  }
                }
              } else {
                i6 = XTrain->size[0];
                unnamed_idx_1 = (uint32_T)q2->size[1];
                ix = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[0] = i6;
                emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, ix,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                ix = YTrainBag->size[0] * YTrainBag->size[1];
                YTrainBag->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&st, (emxArray__common *)YTrainBag, ix,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = i6 * (int32_T)unnamed_idx_1;
                for (ix = 0; ix < loop_ub; ix++) {
                  YTrainBag->data[ix] = 0.0;
                }

                b_st.site = &hh_emlrtRSI;
                c_st.site = &jh_emlrtRSI;
                ix = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = i6;
                emxEnsureCapacity(&c_st, (emxArray__common *)UTrain, ix,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                ix = UTrain->size[0] * UTrain->size[1];
                UTrain->size[1] = (int32_T)unnamed_idx_1;
                emxEnsureCapacity(&c_st, (emxArray__common *)UTrain, ix,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = i6 * (int32_T)unnamed_idx_1;
                for (i6 = 0; i6 < loop_ub; i6++) {
                  UTrain->data[i6] = 0.0;
                }

                i6 = XTrain->size[0];
                if ((i6 < 1) || (q2->size[1] < 1)) {
                } else {
                  d_st.site = &kh_emlrtRSI;
                  lambda = 1.0;
                  nSelected = 0.0;
                  TRANSB = 'N';
                  TRANSA = 'N';
                  f_st.site = &kh_emlrtRSI;
                  i6 = XTrain->size[0];
                  m_t = (ptrdiff_t)(i6);
                  f_st.site = &kh_emlrtRSI;
                  n_t = (ptrdiff_t)(q2->size[1]);
                  f_st.site = &kh_emlrtRSI;
                  i6 = f_iIn->size[0];
                  f_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&f_st, (emxArray__common *)f_iIn, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    f_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
                  }

                  k_t = (ptrdiff_t)(f_iIn->size[0]);
                  f_st.site = &kh_emlrtRSI;
                  i6 = XTrain->size[0];
                  lda_t = (ptrdiff_t)(i6);
                  f_st.site = &kh_emlrtRSI;
                  i6 = g_iIn->size[0];
                  g_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&f_st, (emxArray__common *)g_iIn, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    g_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
                  }

                  ldb_t = (ptrdiff_t)(g_iIn->size[0]);
                  f_st.site = &kh_emlrtRSI;
                  i6 = XTrain->size[0];
                  ldc_t = (ptrdiff_t)(i6);
                  alpha1_t = (double *)(&lambda);
                  i6 = XTrain->size[0];
                  ix = h_iIn->size[0];
                  h_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&d_st, (emxArray__common *)h_iIn, ix,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (ix = 0; ix < loop_ub; ix++) {
                    h_iIn->data[ix] = iIn->data[iIn->size[0] * ix];
                  }

                  i6 *= h_iIn->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI,
                    &d_st);
                  i6 = i_iIn->size[0];
                  i_iIn->size[0] = iIn->size[1];
                  emxEnsureCapacity(&d_st, (emxArray__common *)i_iIn, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = iIn->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    i_iIn->data[i6] = iIn->data[iIn->size[0] * i6];
                  }

                  Aia0_t = (double *)(&a->data[0]);
                  i6 = q2->size[0] * q2->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI,
                    &d_st);
                  Bib0_t = (double *)(&q2->data[0]);
                  beta1_t = (double *)(&nSelected);
                  i6 = YTrainBag->size[0] * YTrainBag->size[1];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &hc_emlrtBCI,
                    &d_st);
                  Cic0_t = (double *)(&UTrain->data[0]);
                  dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t,
                        &lda_t, Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
                }
              }

              /*  This step catches splits based on no significant variation */
              st.site = &mc_emlrtRSI;
              queryIfColumnsVary(&st, UTrain, options_XVariationTol, bXVaries);
              st.site = &lc_emlrtRSI;
              if (!d_any(&st, bXVaries)) {
                *bLeaf = true;
                nProjDirs = 0;
                i6 = splitGains->size[0];
                splitGains->size[0] = 0;
                emxEnsureCapacity(sp, (emxArray__common *)splitGains, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                i6 = iSplits->size[0];
                iSplits->size[0] = 0;
                emxEnsureCapacity(sp, (emxArray__common *)iSplits, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
              } else {
                st.site = &kc_emlrtRSI;
                eml_li_find(&st, bXVaries, ii);
                idx = UTrain->size[0];
                i = UTrain->size[1];
                i6 = d_UTrain->size[0] * d_UTrain->size[1];
                d_UTrain->size[0] = idx;
                d_UTrain->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)d_UTrain, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = ii->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  for (ix = 0; ix < idx; ix++) {
                    ixstart = ii->data[ii->size[0] * i6];
                    d_UTrain->data[ix + d_UTrain->size[0] * i6] = UTrain->
                      data[ix + UTrain->size[0] *
                      (emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i,
                        &rd_emlrtBCI, sp) - 1)];
                  }
                }

                i6 = UTrain->size[0] * UTrain->size[1];
                UTrain->size[0] = d_UTrain->size[0];
                UTrain->size[1] = d_UTrain->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)UTrain, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = d_UTrain->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = d_UTrain->size[0];
                  for (ix = 0; ix < apnd; ix++) {
                    UTrain->data[ix + UTrain->size[0] * i6] = d_UTrain->data[ix
                      + d_UTrain->size[0] * i6];
                  }
                }

                st.site = &jc_emlrtRSI;
                eml_li_find(&st, bXVaries, ii);
                idx = q2->size[0];
                i = q2->size[1];
                i6 = d_q2->size[0] * d_q2->size[1];
                d_q2->size[0] = idx;
                d_q2->size[1] = ii->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)d_q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = ii->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  for (ix = 0; ix < idx; ix++) {
                    ixstart = ii->data[ii->size[0] * i6];
                    d_q2->data[ix + d_q2->size[0] * i6] = q2->data[ix + q2->
                      size[0] * (emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, i,
                      &sd_emlrtBCI, sp) - 1)];
                  }
                }

                i6 = q2->size[0] * q2->size[1];
                q2->size[0] = d_q2->size[0];
                q2->size[1] = d_q2->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = d_q2->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = d_q2->size[0];
                  for (ix = 0; ix < apnd; ix++) {
                    q2->data[ix + q2->size[0] * i6] = d_q2->data[ix + d_q2->
                      size[0] * i6];
                  }
                }

                nProjDirs = UTrain->size[1];
                i6 = splitGains->size[0];
                splitGains->size[0] = UTrain->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)splitGains, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = UTrain->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  splitGains->data[i6] = rtNaN;
                }

                i6 = iSplits->size[0];
                iSplits->size[0] = UTrain->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)iSplits, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                loop_ub = UTrain->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iSplits->data[i6] = rtNaN;
                }
              }

              /*     %% Search over splits using provided method */
              nVarAtt = 1;
              while (nVarAtt - 1 <= nProjDirs - 1) {
                /*  Calculate the probabilities of being at each class in each of child */
                /*  nodes based on proportion of training data for each of possible */
                /*  splits using current projection */
                st.site = &ic_emlrtRSI;
                i6 = UTrain->size[1];
                ix = (nVarAtt - 1) + 1;
                emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &pc_emlrtBCI, &st);
                loop_ub = UTrain->size[0];
                i6 = c_UTrain->size[0];
                c_UTrain->size[0] = loop_ub;
                emxEnsureCapacity(&st, (emxArray__common *)c_UTrain, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < loop_ub; i6++) {
                  c_UTrain->data[i6] = UTrain->data[i6 + UTrain->size[0] *
                    (nVarAtt - 1)];
                }

                b_st.site = &sn_emlrtRSI;
                c_eml_sort(&b_st, c_UTrain, UTrainSort, c_ii);
                i6 = iTrainThis->size[0];
                iTrainThis->size[0] = c_ii->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = c_ii->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] = c_ii->data[i6];
                }

                loop_ub = YTrain->size[1];
                i6 = YTrainSort->size[0] * YTrainSort->size[1];
                YTrainSort->size[0] = c_ii->size[0];
                YTrainSort->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)YTrainSort, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < loop_ub; i6++) {
                  apnd = c_ii->size[0];
                  for (ix = 0; ix < apnd; ix++) {
                    ixstart = YTrain->size[0];
                    ndbl = c_ii->data[ix];
                    YTrainSort->data[ix + YTrainSort->size[0] * i6] =
                      YTrain->data[(emlrtDynamicBoundsCheckFastR2012b(ndbl, 1,
                      ixstart, &xd_emlrtBCI, sp) + YTrain->size[0] * i6) - 1];
                  }
                }

                if (YTrain->size[1] == 1) {
                  st.site = &hc_emlrtRSI;
                  idx = iTrainThis->size[0];
                  b_st.site = &r_emlrtRSI;
                  c_st.site = &s_emlrtRSI;
                  if (idx < 1) {
                    i = -1;
                    apnd = 0;
                  } else {
                    ndbl = (int32_T)muDoubleScalarFloor(((real_T)idx - 1.0) +
                      0.5);
                    apnd = ndbl + 1;
                    i = (ndbl - idx) + 1;
                    if (muDoubleScalarAbs(i) < 4.4408920985006262E-16 * (real_T)
                        idx) {
                      ndbl++;
                      apnd = idx;
                    } else if (i > 0) {
                      apnd = ndbl;
                    } else {
                      ndbl++;
                    }

                    i = ndbl - 1;
                  }

                  d_st.site = &t_emlrtRSI;
                  i6 = iCanBeSelected->size[0] * iCanBeSelected->size[1];
                  iCanBeSelected->size[0] = 1;
                  iCanBeSelected->size[1] = i + 1;
                  emxEnsureCapacity(&c_st, (emxArray__common *)iCanBeSelected,
                                    i6, (int32_T)sizeof(real_T), &f_emlrtRTEI);
                  if (i + 1 > 0) {
                    iCanBeSelected->data[0] = 1.0;
                    if (i + 1 > 1) {
                      iCanBeSelected->data[i] = apnd;
                      i6 = i + (i < 0);
                      if (i6 >= 0) {
                        idx = (int32_T)((uint32_T)i6 >> 1);
                      } else {
                        idx = ~(int32_T)((uint32_T)~i6 >> 1);
                      }

                      d_st.site = &u_emlrtRSI;
                      for (loop_ub = 1; loop_ub < idx; loop_ub++) {
                        iCanBeSelected->data[loop_ub] = 1.0 + (real_T)loop_ub;
                        iCanBeSelected->data[i - loop_ub] = apnd - loop_ub;
                      }

                      if (idx << 1 == i) {
                        iCanBeSelected->data[idx] = (1.0 + (real_T)apnd) / 2.0;
                      } else {
                        iCanBeSelected->data[idx] = 1.0 + (real_T)idx;
                        iCanBeSelected->data[idx + 1] = apnd - idx;
                      }
                    }
                  }

                  i6 = e_iCanBeSelected->size[0];
                  e_iCanBeSelected->size[0] = iCanBeSelected->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)e_iCanBeSelected, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = iCanBeSelected->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    e_iCanBeSelected->data[i6] = iCanBeSelected->
                      data[iCanBeSelected->size[0] * i6];
                  }

                  i = iCanBeSelected->size[1];
                  i6 = r4->size[0] * r4->size[1];
                  r4->size[0] = i;
                  r4->size[1] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)r4, i6, (int32_T)
                                    sizeof(real_T), &k_emlrtRTEI);
                  for (i6 = 0; i6 < i; i6++) {
                    r4->data[i6] = e_iCanBeSelected->data[i6];
                  }

                  st.site = &hc_emlrtRSI;
                  idx = 1;
                  if (iTrainThis->size[0] != 1) {
                    idx = 0;
                  }

                  b_st.site = &tn_emlrtRSI;
                  i6 = c_y->size[0] * c_y->size[1];
                  c_y->size[0] = YTrainSort->size[0];
                  c_y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)c_y, i6, (int32_T)
                                    sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    c_y->data[i6] = YTrainSort->data[i6];
                  }

                  vlen = c_y->size[idx];
                  if ((!((c_y->size[0] == 0) || (c_y->size[1] == 0))) &&
                      (c_y->size[idx] > 1)) {
                    c_st.site = &wn_emlrtRSI;
                    d_st.site = &ve_emlrtRSI;
                    ndbl = 1;
                    f_st.site = &we_emlrtRSI;
                    loop_ub = 1;
                    while (loop_ub <= idx) {
                      ndbl *= c_y->size[0];
                      loop_ub = 2;
                    }

                    apnd = 1;
                    loop_ub = idx + 2;
                    while (loop_ub < 3) {
                      apnd *= c_y->size[1];
                      loop_ub = 3;
                    }

                    ix = 0;
                    c_st.site = &vn_emlrtRSI;
                    if (1 > apnd) {
                      b0 = false;
                    } else {
                      b0 = (apnd > 2147483646);
                    }

                    if (b0) {
                      d_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&d_st);
                    }

                    for (i = 1; i <= apnd; i++) {
                      ixstart = ix;
                      c_st.site = &un_emlrtRSI;
                      if (1 > ndbl) {
                        b1 = false;
                      } else {
                        b1 = (ndbl > 2147483646);
                      }

                      if (b1) {
                        d_st.site = &v_emlrtRSI;
                        check_forloop_overflow_error(&d_st);
                      }

                      for (idx = 1; idx <= ndbl; idx++) {
                        ixstart++;
                        ix = ixstart;
                        lambda = c_y->data[ixstart - 1];
                        for (loop_ub = 0; loop_ub <= vlen - 2; loop_ub++) {
                          ix += ndbl;
                          lambda += c_y->data[ix - 1];
                          c_y->data[ix - 1] = lambda;
                        }
                      }
                    }
                  }

                  for (i6 = 0; i6 < 2; i6++) {
                    b_tmp_size[i6] = r4->size[i6];
                  }

                  for (i6 = 0; i6 < 2; i6++) {
                    tmp_size[i6] = c_y->size[i6];
                  }

                  emlrtSizeEqCheck2DFastR2012b(b_tmp_size, tmp_size,
                    &bb_emlrtECI, sp);
                  loop_ub = r4->size[0];
                  apnd = r4->size[0];
                  i6 = r5->size[0];
                  r5->size[0] = loop_ub;
                  emxEnsureCapacity(sp, (emxArray__common *)r5, i6, (int32_T)
                                    sizeof(real_T), &k_emlrtRTEI);
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    r5->data[i6] = r4->data[i6] - c_y->data[i6];
                  }

                  i6 = r4->size[0] * r4->size[1];
                  r4->size[0] = apnd;
                  r4->size[1] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)r4, i6, (int32_T)
                                    sizeof(real_T), &k_emlrtRTEI);
                  for (i6 = 0; i6 < apnd; i6++) {
                    r4->data[i6] = r5->data[i6];
                  }

                  st.site = &hc_emlrtRSI;
                  idx = 1;
                  if (iTrainThis->size[0] != 1) {
                    idx = 0;
                  }

                  b_st.site = &tn_emlrtRSI;
                  i6 = c_y->size[0] * c_y->size[1];
                  c_y->size[0] = YTrainSort->size[0];
                  c_y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)c_y, i6, (int32_T)
                                    sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    c_y->data[i6] = YTrainSort->data[i6];
                  }

                  vlen = c_y->size[idx];
                  if ((!((c_y->size[0] == 0) || (c_y->size[1] == 0))) &&
                      (c_y->size[idx] > 1)) {
                    c_st.site = &wn_emlrtRSI;
                    d_st.site = &ve_emlrtRSI;
                    ndbl = 1;
                    f_st.site = &we_emlrtRSI;
                    loop_ub = 1;
                    while (loop_ub <= idx) {
                      ndbl *= c_y->size[0];
                      loop_ub = 2;
                    }

                    apnd = 1;
                    loop_ub = idx + 2;
                    while (loop_ub < 3) {
                      apnd *= c_y->size[1];
                      loop_ub = 3;
                    }

                    ix = 0;
                    c_st.site = &vn_emlrtRSI;
                    if (1 > apnd) {
                      b2 = false;
                    } else {
                      b2 = (apnd > 2147483646);
                    }

                    if (b2) {
                      d_st.site = &v_emlrtRSI;
                      check_forloop_overflow_error(&d_st);
                    }

                    for (i = 1; i <= apnd; i++) {
                      ixstart = ix;
                      c_st.site = &un_emlrtRSI;
                      if (1 > ndbl) {
                        b3 = false;
                      } else {
                        b3 = (ndbl > 2147483646);
                      }

                      if (b3) {
                        d_st.site = &v_emlrtRSI;
                        check_forloop_overflow_error(&d_st);
                      }

                      for (idx = 1; idx <= ndbl; idx++) {
                        ixstart++;
                        ix = ixstart;
                        lambda = c_y->data[ixstart - 1];
                        for (loop_ub = 0; loop_ub <= vlen - 2; loop_ub++) {
                          ix += ndbl;
                          lambda += c_y->data[ix - 1];
                          c_y->data[ix - 1] = lambda;
                        }
                      }
                    }
                  }

                  i6 = r4->size[0];
                  ix = c_y->size[0];
                  emlrtDimSizeEqCheckFastR2012b(i6, ix, &cb_emlrtECI, sp);
                  i6 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                  LeftCumCounts->size[0] = r4->size[0];
                  LeftCumCounts->size[1] = 1 + c_y->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)LeftCumCounts, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = r4->size[0];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    LeftCumCounts->data[i6] = r4->data[i6];
                  }

                  loop_ub = c_y->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    apnd = c_y->size[0];
                    for (ix = 0; ix < apnd; ix++) {
                      LeftCumCounts->data[ix + LeftCumCounts->size[0] * (i6 + 1)]
                        = c_y->data[ix + c_y->size[0] * i6];
                    }
                  }
                } else {
                  st.site = &gc_emlrtRSI;
                  b_st.site = &tn_emlrtRSI;
                  i6 = c_y->size[0] * c_y->size[1];
                  c_y->size[0] = YTrainSort->size[0];
                  c_y->size[1] = YTrainSort->size[1];
                  emxEnsureCapacity(&b_st, (emxArray__common *)c_y, i6, (int32_T)
                                    sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = YTrainSort->size[0] * YTrainSort->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    c_y->data[i6] = YTrainSort->data[i6];
                  }

                  vlen = c_y->size[0];
                  if ((!((c_y->size[0] == 0) || (c_y->size[1] == 0))) &&
                      (c_y->size[0] > 1)) {
                    i6 = b_q1->size[0] * b_q1->size[1];
                    b_q1->size[0] = c_y->size[0];
                    b_q1->size[1] = c_y->size[1];
                    emxEnsureCapacity(&b_st, (emxArray__common *)b_q1, i6,
                                      (int32_T)sizeof(real_T), &k_emlrtRTEI);
                    loop_ub = c_y->size[0] * c_y->size[1];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      b_q1->data[i6] = c_y->data[i6];
                    }

                    ix = -1;
                    c_st.site = &vn_emlrtRSI;
                    for (i = 1; i <= b_q1->size[1]; i++) {
                      ixstart = ix + 1;
                      ix++;
                      lambda = c_y->data[ixstart];
                      for (loop_ub = 0; loop_ub <= vlen - 2; loop_ub++) {
                        ix++;
                        lambda += c_y->data[ix];
                        c_y->data[ix] = lambda;
                      }
                    }
                  }

                  i6 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                  LeftCumCounts->size[0] = c_y->size[0];
                  LeftCumCounts->size[1] = c_y->size[1];
                  emxEnsureCapacity(sp, (emxArray__common *)LeftCumCounts, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = c_y->size[0] * c_y->size[1];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    LeftCumCounts->data[i6] = c_y->data[i6];
                  }
                }

                loop_ub = LeftCumCounts->size[1];
                i6 = LeftCumCounts->size[0];
                ix = LeftCumCounts->size[0];
                idx = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &qc_emlrtBCI,
                  sp);
                i6 = b_LeftCumCounts->size[0] * b_LeftCumCounts->size[1];
                b_LeftCumCounts->size[0] = 1;
                b_LeftCumCounts->size[1] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)b_LeftCumCounts, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < loop_ub; i6++) {
                  b_LeftCumCounts->data[b_LeftCumCounts->size[0] * i6] =
                    LeftCumCounts->data[(idx + LeftCumCounts->size[0] * i6) - 1];
                }

                st.site = &fc_emlrtRSI;
                g_bsxfun(&st, b_LeftCumCounts, LeftCumCounts, RightCumCounts);
                i6 = c_UTrainSort->size[0];
                c_UTrainSort->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)c_UTrainSort, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  c_UTrainSort->data[i6] = UTrainSort->data[i6];
                }

                st.site = &ec_emlrtRSI;
                b_diff(&st, c_UTrainSort, UTrainSort);
                i6 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = UTrainSort->size[0] + 1;
                emxEnsureCapacity(sp, (emxArray__common *)bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  bRemainsSelected->data[i6] = (UTrainSort->data[i6] >
                    options_XVariationTol);
                }

                bRemainsSelected->data[UTrainSort->size[0]] = false;
                st.site = &dc_emlrtRSI;
                f_sum(&st, LeftCumCounts, UTrainSort);
                st.site = &dc_emlrtRSI;
                h_bsxfun(&st, LeftCumCounts, UTrainSort, pL);
                st.site = &cc_emlrtRSI;
                f_sum(&st, RightCumCounts, UTrainSort);
                i6 = c_RightCumCounts->size[0] * c_RightCumCounts->size[1];
                c_RightCumCounts->size[0] = RightCumCounts->size[0];
                c_RightCumCounts->size[1] = RightCumCounts->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)c_RightCumCounts, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  c_RightCumCounts->data[i6] = RightCumCounts->data[i6];
                }

                st.site = &cc_emlrtRSI;
                h_bsxfun(&st, c_RightCumCounts, UTrainSort, RightCumCounts);

                /*  Calculate the metric values of the current node and two child nodes */
                st.site = &bc_emlrtRSI;
                if (b_strcmpi(&st, options_splitCriterion_data,
                              options_splitCriterion_size)) {
                  power(sp, pL, YTrainBag);
                  st.site = &ac_emlrtRSI;
                  f_sum(&st, YTrainBag, metricLeft);
                  i6 = metricLeft->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)metricLeft, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = metricLeft->size[0];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    metricLeft->data[i6] = 1.0 - metricLeft->data[i6];
                  }

                  power(sp, RightCumCounts, YTrainBag);
                  st.site = &yb_emlrtRSI;
                  f_sum(&st, YTrainBag, metricRight);
                  i6 = metricRight->size[0];
                  emxEnsureCapacity(sp, (emxArray__common *)metricRight, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  loop_ub = metricRight->size[0];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    metricRight->data[i6] = 1.0 - metricRight->data[i6];
                  }
                } else {
                  st.site = &xb_emlrtRSI;
                  if (c_strcmpi(&st, options_splitCriterion_data,
                                options_splitCriterion_size)) {
                    st.site = &wb_emlrtRSI;
                    b_log2(&st, pL, LeftCumCounts);
                    for (i6 = 0; i6 < 2; i6++) {
                      b_tmp_size[i6] = pL->size[i6];
                    }

                    for (i6 = 0; i6 < 2; i6++) {
                      c_tmp_size[i6] = LeftCumCounts->size[i6];
                    }

                    emlrtSizeEqCheck2DFastR2012b(b_tmp_size, c_tmp_size,
                      &db_emlrtECI, sp);
                    i6 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                    LeftCumCounts->size[0] = pL->size[0];
                    LeftCumCounts->size[1] = pL->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)LeftCumCounts, i6,
                                      (int32_T)sizeof(real_T), &k_emlrtRTEI);
                    loop_ub = pL->size[0] * pL->size[1];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      LeftCumCounts->data[i6] *= pL->data[i6];
                    }

                    i6 = b_pL->size[0] * b_pL->size[1];
                    b_pL->size[0] = pL->size[0];
                    b_pL->size[1] = pL->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)b_pL, i6, (int32_T)
                                      sizeof(boolean_T), &k_emlrtRTEI);
                    loop_ub = pL->size[0] * pL->size[1];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      b_pL->data[i6] = (pL->data[i6] == 0.0);
                    }

                    st.site = &vb_emlrtRSI;
                    c_eml_li_find(&st, b_pL, c_ii);
                    idx = LeftCumCounts->size[0];
                    i = LeftCumCounts->size[1];
                    loop_ub = c_ii->size[0];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      ix = idx * i;
                      ixstart = c_ii->data[i6];
                      LeftCumCounts->data[emlrtDynamicBoundsCheckFastR2012b
                        (ixstart, 1, ix, &yd_emlrtBCI, sp) - 1] = 0.0;
                    }

                    st.site = &ub_emlrtRSI;
                    f_sum(&st, LeftCumCounts, metricLeft);
                    i6 = metricLeft->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)metricLeft, i6,
                                      (int32_T)sizeof(real_T), &k_emlrtRTEI);
                    loop_ub = metricLeft->size[0];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      metricLeft->data[i6] = -metricLeft->data[i6];
                    }

                    st.site = &tb_emlrtRSI;
                    b_log2(&st, RightCumCounts, LeftCumCounts);
                    for (i6 = 0; i6 < 2; i6++) {
                      tmp_size[i6] = RightCumCounts->size[i6];
                    }

                    for (i6 = 0; i6 < 2; i6++) {
                      c_tmp_size[i6] = LeftCumCounts->size[i6];
                    }

                    emlrtSizeEqCheck2DFastR2012b(tmp_size, c_tmp_size,
                      &eb_emlrtECI, sp);
                    i6 = LeftCumCounts->size[0] * LeftCumCounts->size[1];
                    LeftCumCounts->size[0] = RightCumCounts->size[0];
                    LeftCumCounts->size[1] = RightCumCounts->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)LeftCumCounts, i6,
                                      (int32_T)sizeof(real_T), &k_emlrtRTEI);
                    loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      LeftCumCounts->data[i6] *= RightCumCounts->data[i6];
                    }

                    i6 = b_RightCumCounts->size[0] * b_RightCumCounts->size[1];
                    b_RightCumCounts->size[0] = RightCumCounts->size[0];
                    b_RightCumCounts->size[1] = RightCumCounts->size[1];
                    emxEnsureCapacity(sp, (emxArray__common *)b_RightCumCounts,
                                      i6, (int32_T)sizeof(boolean_T),
                                      &k_emlrtRTEI);
                    loop_ub = RightCumCounts->size[0] * RightCumCounts->size[1];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      b_RightCumCounts->data[i6] = (RightCumCounts->data[i6] ==
                        0.0);
                    }

                    st.site = &sb_emlrtRSI;
                    c_eml_li_find(&st, b_RightCumCounts, c_ii);
                    idx = LeftCumCounts->size[0];
                    i = LeftCumCounts->size[1];
                    loop_ub = c_ii->size[0];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      ix = idx * i;
                      ixstart = c_ii->data[i6];
                      LeftCumCounts->data[emlrtDynamicBoundsCheckFastR2012b
                        (ixstart, 1, ix, &ae_emlrtBCI, sp) - 1] = 0.0;
                    }

                    st.site = &rb_emlrtRSI;
                    f_sum(&st, LeftCumCounts, metricRight);
                    i6 = metricRight->size[0];
                    emxEnsureCapacity(sp, (emxArray__common *)metricRight, i6,
                                      (int32_T)sizeof(real_T), &k_emlrtRTEI);
                    loop_ub = metricRight->size[0];
                    for (i6 = 0; i6 < loop_ub; i6++) {
                      metricRight->data[i6] = -metricRight->data[i6];
                    }
                  } else {
                    st.site = &qb_emlrtRSI;
                    c_error(&st);
                  }
                }

                i6 = metricLeft->size[0];
                ix = metricLeft->size[0];
                lambda = metricLeft->data[emlrtDynamicBoundsCheckFastR2012b(ix,
                  1, i6, &be_emlrtBCI, sp) - 1];
                i6 = c_bRemainsSelected->size[0];
                c_bRemainsSelected->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)c_bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                loop_ub = bRemainsSelected->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  c_bRemainsSelected->data[i6] = !bRemainsSelected->data[i6];
                }

                st.site = &pb_emlrtRSI;
                b_eml_li_find(&st, c_bRemainsSelected, c_ii);
                idx = metricLeft->size[0];
                loop_ub = c_ii->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  ix = c_ii->data[i6];
                  metricLeft->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, idx,
                    &ce_emlrtBCI, sp) - 1] = rtInf;
                }

                i6 = b_bRemainsSelected->size[0];
                b_bRemainsSelected->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)b_bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                loop_ub = bRemainsSelected->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  b_bRemainsSelected->data[i6] = !bRemainsSelected->data[i6];
                }

                st.site = &nb_emlrtRSI;
                b_eml_li_find(&st, b_bRemainsSelected, c_ii);
                idx = metricRight->size[0];
                loop_ub = c_ii->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  ix = c_ii->data[i6];
                  metricRight->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, idx,
                    &de_emlrtBCI, sp) - 1] = rtInf;
                }

                /*  Calculate gain in metric for each of possible splits based on current */
                /*  metric value minus metric value of child weighted by number of terms */
                /*  in each child */
                st.site = &ob_emlrtRSI;
                b_st.site = &r_emlrtRSI;
                c_st.site = &s_emlrtRSI;
                if (XTrain->size[0] < 1) {
                  i = -1;
                  apnd = 0;
                } else {
                  ndbl = (int32_T)muDoubleScalarFloor(((real_T)XTrain->size[0] -
                    1.0) + 0.5);
                  apnd = ndbl + 1;
                  i = (ndbl - XTrain->size[0]) + 1;
                  idx = XTrain->size[0];
                  if (muDoubleScalarAbs(i) < 4.4408920985006262E-16 * (real_T)
                      idx) {
                    ndbl++;
                    apnd = XTrain->size[0];
                  } else if (i > 0) {
                    apnd = ndbl;
                  } else {
                    ndbl++;
                  }

                  i = ndbl - 1;
                }

                d_st.site = &t_emlrtRSI;
                i6 = iCanBeSelected->size[0] * iCanBeSelected->size[1];
                iCanBeSelected->size[0] = 1;
                iCanBeSelected->size[1] = i + 1;
                emxEnsureCapacity(&c_st, (emxArray__common *)iCanBeSelected, i6,
                                  (int32_T)sizeof(real_T), &f_emlrtRTEI);
                if (i + 1 > 0) {
                  iCanBeSelected->data[0] = 1.0;
                  if (i + 1 > 1) {
                    iCanBeSelected->data[i] = apnd;
                    i6 = i + (i < 0);
                    if (i6 >= 0) {
                      idx = (int32_T)((uint32_T)i6 >> 1);
                    } else {
                      idx = ~(int32_T)((uint32_T)~i6 >> 1);
                    }

                    d_st.site = &u_emlrtRSI;
                    for (loop_ub = 1; loop_ub < idx; loop_ub++) {
                      iCanBeSelected->data[loop_ub] = 1.0 + (real_T)loop_ub;
                      iCanBeSelected->data[i - loop_ub] = apnd - loop_ub;
                    }

                    if (idx << 1 == i) {
                      iCanBeSelected->data[idx] = (1.0 + (real_T)apnd) / 2.0;
                    } else {
                      iCanBeSelected->data[idx] = 1.0 + (real_T)idx;
                      iCanBeSelected->data[idx + 1] = apnd - idx;
                    }
                  }
                }

                i6 = UTrainSort->size[0];
                UTrainSort->size[0] = iCanBeSelected->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)UTrainSort, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iCanBeSelected->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  UTrainSort->data[i6] = iCanBeSelected->data
                    [iCanBeSelected->size[0] * i6];
                }

                i6 = UTrainSort->size[0];
                ix = metricLeft->size[0];
                emlrtSizeEqCheck1DFastR2012b(i6, ix, &fb_emlrtECI, sp);
                st.site = &ob_emlrtRSI;
                b_st.site = &s_emlrtRSI;
                if (XTrain->size[0] - 1 < 0) {
                  i = -1;
                  nSelected = -1.0;
                  bnew = 0.0;
                } else {
                  nSelected = (real_T)XTrain->size[0] - 1.0;
                  ndbl = (int32_T)muDoubleScalarFloor(-(0.0 - ((real_T)
                    XTrain->size[0] - 1.0)) + 0.5);
                  apnd = (XTrain->size[0] - ndbl) - 1;
                  i = (int32_T)muDoubleScalarAbs((real_T)XTrain->size[0] - 1.0);
                  if (muDoubleScalarAbs(0.0 - (real_T)apnd) <
                      4.4408920985006262E-16 * (real_T)muIntScalarMax_sint32(i,
                       0)) {
                    ndbl++;
                    bnew = 0.0;
                  } else if (-apnd > 0) {
                    bnew = ((real_T)XTrain->size[0] - 1.0) + -((real_T)ndbl -
                      1.0);
                  } else {
                    ndbl++;
                    bnew = apnd;
                  }

                  i = ndbl - 1;
                }

                c_st.site = &t_emlrtRSI;
                i6 = iCanBeSelected->size[0] * iCanBeSelected->size[1];
                iCanBeSelected->size[0] = 1;
                iCanBeSelected->size[1] = i + 1;
                emxEnsureCapacity(&b_st, (emxArray__common *)iCanBeSelected, i6,
                                  (int32_T)sizeof(real_T), &f_emlrtRTEI);
                if (i + 1 > 0) {
                  iCanBeSelected->data[0] = nSelected;
                  if (i + 1 > 1) {
                    iCanBeSelected->data[i] = bnew;
                    i6 = i + (i < 0);
                    if (i6 >= 0) {
                      idx = (int32_T)((uint32_T)i6 >> 1);
                    } else {
                      idx = ~(int32_T)((uint32_T)~i6 >> 1);
                    }

                    c_st.site = &u_emlrtRSI;
                    for (loop_ub = 1; loop_ub < idx; loop_ub++) {
                      iCanBeSelected->data[loop_ub] = nSelected + -(real_T)
                        loop_ub;
                      iCanBeSelected->data[i - loop_ub] = bnew - (-(real_T)
                        loop_ub);
                    }

                    if (idx << 1 == i) {
                      iCanBeSelected->data[idx] = (nSelected + bnew) / 2.0;
                    } else {
                      iCanBeSelected->data[idx] = nSelected + -(real_T)idx;
                      iCanBeSelected->data[idx + 1] = bnew - (-(real_T)idx);
                    }
                  }
                }

                i6 = iTrainThis->size[0];
                iTrainThis->size[0] = iCanBeSelected->size[1];
                emxEnsureCapacity(sp, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iCanBeSelected->size[1];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] = iCanBeSelected->data
                    [iCanBeSelected->size[0] * i6];
                }

                i6 = iTrainThis->size[0];
                ix = metricRight->size[0];
                emlrtSizeEqCheck1DFastR2012b(i6, ix, &gb_emlrtECI, sp);
                i6 = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)UTrainSort, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  UTrainSort->data[i6] *= metricLeft->data[i6];
                }

                i6 = iTrainThis->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iTrainThis->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] *= metricRight->data[i6];
                }

                i6 = UTrainSort->size[0];
                ix = iTrainThis->size[0];
                emlrtSizeEqCheck1DFastR2012b(i6, ix, &fb_emlrtECI, sp);
                i6 = b_UTrainSort->size[0];
                b_UTrainSort->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)b_UTrainSort, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  b_UTrainSort->data[i6] = UTrainSort->data[i6] +
                    iTrainThis->data[i6];
                }

                rdivide(sp, b_UTrainSort, XTrain->size[0], iTrainThis);
                i6 = iTrainThis->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = iTrainThis->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] = lambda - iTrainThis->data[i6];
                }

                /*  Randomly sample from equally best splits */
                if (1 > iTrainThis->size[0] - 1) {
                  i6 = 0;
                } else {
                  i6 = iTrainThis->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &rc_emlrtBCI, sp);
                  i6 = iTrainThis->size[0];
                  ix = iTrainThis->size[0] - 1;
                  i6 = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6, &rc_emlrtBCI,
                    sp);
                }

                emlrtVectorVectorIndexCheckR2012b(iTrainThis->size[0], 1, 1, i6,
                  &hb_emlrtECI, sp);
                st.site = &mb_emlrtRSI;
                b_st.site = &ho_emlrtRSI;
                c_st.site = &io_emlrtRSI;
                if ((i6 == 1) || (i6 != 1)) {
                  overflow = true;
                } else {
                  overflow = false;
                }

                if (overflow) {
                } else {
                  j_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv18);
                  for (i = 0; i < 36; i++) {
                    cv16[i] = cv17[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 36, m3, cv16);
                  emlrtAssign(&j_y, m3);
                  d_st.site = &mp_emlrtRSI;
                  g_st.site = &gq_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, j_y, &xb_emlrtMCI),
                          &yb_emlrtMCI);
                }

                if (i6 > 0) {
                } else {
                  k_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv19);
                  for (i = 0; i < 39; i++) {
                    cv18[i] = cv19[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 39, m3, cv18);
                  emlrtAssign(&k_y, m3);
                  d_st.site = &hp_emlrtRSI;
                  g_st.site = &cq_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, k_y, &y_emlrtMCI),
                          &ab_emlrtMCI);
                }

                d_st.site = &jo_emlrtRSI;
                ixstart = 1;
                lambda = iTrainThis->data[0];
                idx = 1;
                if (i6 > 1) {
                  if (muDoubleScalarIsNaN(lambda)) {
                    f_st.site = &gg_emlrtRSI;
                    ix = 2;
                    exitg5 = false;
                    while ((!exitg5) && (ix <= i6)) {
                      ixstart = ix;
                      if (!muDoubleScalarIsNaN(iTrainThis->data[ix - 1])) {
                        lambda = iTrainThis->data[ix - 1];
                        idx = ix;
                        exitg5 = true;
                      } else {
                        ix++;
                      }
                    }
                  }

                  if (ixstart < i6) {
                    f_st.site = &fg_emlrtRSI;
                    while (ixstart + 1 <= i6) {
                      if (iTrainThis->data[ixstart] > lambda) {
                        lambda = iTrainThis->data[ixstart];
                        idx = ixstart + 1;
                      }

                      ixstart++;
                    }
                  }
                }

                i6 = splitGains->size[0];
                splitGains->data[emlrtDynamicBoundsCheckFastR2012b(nVarAtt, 1,
                  i6, &ee_emlrtBCI, sp) - 1] = lambda;
                i6 = iSplits->size[0];
                iSplits->data[emlrtDynamicBoundsCheckFastR2012b(nVarAtt, 1, i6,
                  &fe_emlrtBCI, sp) - 1] = idx;
                if (1 > iTrainThis->size[0] - 1) {
                  loop_ub = 0;
                } else {
                  i6 = iTrainThis->size[0];
                  emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &sc_emlrtBCI, sp);
                  i6 = iTrainThis->size[0];
                  ix = iTrainThis->size[0] - 1;
                  loop_ub = emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6,
                    &sc_emlrtBCI, sp);
                }

                emlrtVectorVectorIndexCheckR2012b(iTrainThis->size[0], 1, 1,
                  loop_ub, &ib_emlrtECI, sp);
                st.site = &lb_emlrtRSI;
                i6 = splitGains->size[0];
                lambda = splitGains->data[emlrtDynamicBoundsCheckFastR2012b
                  (nVarAtt, 1, i6, &ge_emlrtBCI, &st) - 1];
                i6 = b_iTrainThis->size[0];
                b_iTrainThis->size[0] = loop_ub;
                emxEnsureCapacity(&st, (emxArray__common *)b_iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < loop_ub; i6++) {
                  b_iTrainThis->data[i6] = iTrainThis->data[i6] - lambda;
                }

                d_abs(&st, b_iTrainThis, UTrainSort);
                i6 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  bRemainsSelected->data[i6] = (UTrainSort->data[i6] <
                    2.2204460492503131E-15);
                }

                b_st.site = &w_emlrtRSI;
                idx = 0;
                i6 = c_ii->size[0];
                c_ii->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i6, (int32_T)
                                  sizeof(int32_T), &g_emlrtRTEI);
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

                i = 1;
                exitg4 = false;
                while ((!exitg4) && (i <= bRemainsSelected->size[0])) {
                  b_guard2 = false;
                  if (bRemainsSelected->data[i - 1]) {
                    idx++;
                    c_ii->data[idx - 1] = i;
                    if (idx >= bRemainsSelected->size[0]) {
                      exitg4 = true;
                    } else {
                      b_guard2 = true;
                    }
                  } else {
                    b_guard2 = true;
                  }

                  if (b_guard2) {
                    i++;
                  }
                }

                if (idx <= bRemainsSelected->size[0]) {
                } else {
                  l_y = NULL;
                  m3 = emlrtCreateString("Assertion failed.");
                  emlrtAssign(&l_y, m3);
                  c_st.site = &fp_emlrtRSI;
                  f_error(&c_st, l_y, &h_emlrtMCI);
                }

                if (bRemainsSelected->size[0] == 1) {
                  if (idx == 0) {
                    i6 = c_ii->size[0];
                    c_ii->size[0] = 0;
                    emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i6,
                                      (int32_T)sizeof(int32_T), &k_emlrtRTEI);
                  }
                } else {
                  if (1 > idx) {
                    loop_ub = 0;
                  } else {
                    loop_ub = idx;
                  }

                  i6 = f_ii->size[0];
                  f_ii->size[0] = loop_ub;
                  emxEnsureCapacity(&b_st, (emxArray__common *)f_ii, i6,
                                    (int32_T)sizeof(int32_T), &k_emlrtRTEI);
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    f_ii->data[i6] = c_ii->data[i6];
                  }

                  i6 = c_ii->size[0];
                  c_ii->size[0] = f_ii->size[0];
                  emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i6,
                                    (int32_T)sizeof(int32_T), &k_emlrtRTEI);
                  loop_ub = f_ii->size[0];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    c_ii->data[i6] = f_ii->data[i6];
                  }
                }

                i6 = iTrainThis->size[0];
                iTrainThis->size[0] = c_ii->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = c_ii->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] = c_ii->data[i6];
                }

                if (iTrainThis->size[0] == 0) {
                  i6 = iTrainThis->size[0];
                  iTrainThis->size[0] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)iTrainThis, i6,
                                    (int32_T)sizeof(real_T), &k_emlrtRTEI);
                  iTrainThis->data[0] = 1.0;
                }

                i6 = iSplits->size[0];
                ix = iTrainThis->size[0];
                st.site = &kb_emlrtRSI;
                bnew = b_randi(iTrainThis->size[0]);
                ixstart = (int32_T)emlrtIntegerCheckFastR2012b(bnew, &l_emlrtDCI,
                  sp);
                iSplits->data[emlrtDynamicBoundsCheckFastR2012b(nVarAtt, 1, i6,
                  &he_emlrtBCI, sp) - 1] = iTrainThis->
                  data[emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ix,
                  &ie_emlrtBCI, sp) - 1];
                nVarAtt++;
                emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
              }

              /*  If no split gives a positive gain then stop */
              st.site = &jb_emlrtRSI;
              b_st.site = &bg_emlrtRSI;
              c_st.site = &cg_emlrtRSI;
              if ((splitGains->size[0] == 1) || (splitGains->size[0] != 1)) {
                overflow = true;
              } else {
                overflow = false;
              }

              if (overflow) {
              } else {
                m_y = NULL;
                m3 = emlrtCreateCharArray(2, iv20);
                for (i = 0; i < 36; i++) {
                  cv16[i] = cv17[i];
                }

                emlrtInitCharArrayR2013a(&c_st, 36, m3, cv16);
                emlrtAssign(&m_y, m3);
                d_st.site = &mp_emlrtRSI;
                g_st.site = &gq_emlrtRSI;
                f_error(&d_st, b_message(&g_st, m_y, &xb_emlrtMCI), &yb_emlrtMCI);
              }

              if (splitGains->size[0] > 0) {
              } else {
                n_y = NULL;
                m3 = emlrtCreateCharArray(2, iv21);
                for (i = 0; i < 39; i++) {
                  cv18[i] = cv19[i];
                }

                emlrtInitCharArrayR2013a(&c_st, 39, m3, cv18);
                emlrtAssign(&n_y, m3);
                d_st.site = &hp_emlrtRSI;
                g_st.site = &cq_emlrtRSI;
                f_error(&d_st, b_message(&g_st, n_y, &y_emlrtMCI), &ab_emlrtMCI);
              }

              d_st.site = &jo_emlrtRSI;
              ixstart = 1;
              lambda = splitGains->data[0];
              if (splitGains->size[0] > 1) {
                if (muDoubleScalarIsNaN(splitGains->data[0])) {
                  f_st.site = &gg_emlrtRSI;
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
                      lambda = splitGains->data[ix - 1];
                      exitg3 = true;
                    } else {
                      ix++;
                    }
                  }
                }

                if (ixstart < splitGains->size[0]) {
                  f_st.site = &fg_emlrtRSI;
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
                    if (splitGains->data[ixstart] > lambda) {
                      lambda = splitGains->data[ixstart];
                    }

                    ixstart++;
                  }
                }
              }

              if (lambda < 0.0) {
                *bLeaf = true;
                i = XTrain->size[1];
                i6 = q2->size[0] * q2->size[1];
                q2->size[0] = i;
                emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                i6 = q2->size[0] * q2->size[1];
                q2->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                i = XTrain->size[1];
                for (i6 = 0; i6 < i; i6++) {
                  q2->data[i6] = 0.0;
                }

                guard1 = true;
              } else {
                /*  Establish between projection direction */
                st.site = &ib_emlrtRSI;
                b_st.site = &bg_emlrtRSI;
                c_st.site = &cg_emlrtRSI;
                if ((splitGains->size[0] == 1) || (splitGains->size[0] != 1)) {
                  overflow = true;
                } else {
                  overflow = false;
                }

                if (overflow) {
                } else {
                  o_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv22);
                  for (i = 0; i < 36; i++) {
                    cv16[i] = cv17[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 36, m3, cv16);
                  emlrtAssign(&o_y, m3);
                  d_st.site = &mp_emlrtRSI;
                  g_st.site = &gq_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, o_y, &xb_emlrtMCI),
                          &yb_emlrtMCI);
                }

                if (splitGains->size[0] > 0) {
                } else {
                  p_y = NULL;
                  m3 = emlrtCreateCharArray(2, iv23);
                  for (i = 0; i < 39; i++) {
                    cv18[i] = cv19[i];
                  }

                  emlrtInitCharArrayR2013a(&c_st, 39, m3, cv18);
                  emlrtAssign(&p_y, m3);
                  d_st.site = &hp_emlrtRSI;
                  g_st.site = &cq_emlrtRSI;
                  f_error(&d_st, b_message(&g_st, p_y, &y_emlrtMCI),
                          &ab_emlrtMCI);
                }

                d_st.site = &jo_emlrtRSI;
                ixstart = 1;
                lambda = splitGains->data[0];
                if (splitGains->size[0] > 1) {
                  if (muDoubleScalarIsNaN(splitGains->data[0])) {
                    f_st.site = &gg_emlrtRSI;
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
                        lambda = splitGains->data[ix - 1];
                        exitg2 = true;
                      } else {
                        ix++;
                      }
                    }
                  }

                  if (ixstart < splitGains->size[0]) {
                    f_st.site = &fg_emlrtRSI;
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
                      if (splitGains->data[ixstart] > lambda) {
                        lambda = splitGains->data[ixstart];
                      }

                      ixstart++;
                    }
                  }
                }

                st.site = &hb_emlrtRSI;
                i6 = b_splitGains->size[0];
                b_splitGains->size[0] = splitGains->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)b_splitGains, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = splitGains->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  b_splitGains->data[i6] = splitGains->data[i6] - lambda;
                }

                d_abs(&st, b_splitGains, UTrainSort);
                i6 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = UTrainSort->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  bRemainsSelected->data[i6] = (UTrainSort->data[i6] <
                    2.2204460492503131E-15);
                }

                b_st.site = &w_emlrtRSI;
                idx = 0;
                i6 = c_ii->size[0];
                c_ii->size[0] = bRemainsSelected->size[0];
                emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i6, (int32_T)
                                  sizeof(int32_T), &g_emlrtRTEI);
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

                i = 1;
                exitg1 = false;
                while ((!exitg1) && (i <= bRemainsSelected->size[0])) {
                  b_guard1 = false;
                  if (bRemainsSelected->data[i - 1]) {
                    idx++;
                    c_ii->data[idx - 1] = i;
                    if (idx >= bRemainsSelected->size[0]) {
                      exitg1 = true;
                    } else {
                      b_guard1 = true;
                    }
                  } else {
                    b_guard1 = true;
                  }

                  if (b_guard1) {
                    i++;
                  }
                }

                if (idx <= bRemainsSelected->size[0]) {
                } else {
                  q_y = NULL;
                  m3 = emlrtCreateString("Assertion failed.");
                  emlrtAssign(&q_y, m3);
                  c_st.site = &fp_emlrtRSI;
                  f_error(&c_st, q_y, &h_emlrtMCI);
                }

                if (bRemainsSelected->size[0] == 1) {
                  if (idx == 0) {
                    i6 = c_ii->size[0];
                    c_ii->size[0] = 0;
                    emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i6,
                                      (int32_T)sizeof(int32_T), &k_emlrtRTEI);
                  }
                } else {
                  if (1 > idx) {
                    loop_ub = 0;
                  } else {
                    loop_ub = idx;
                  }

                  i6 = e_ii->size[0];
                  e_ii->size[0] = loop_ub;
                  emxEnsureCapacity(&b_st, (emxArray__common *)e_ii, i6,
                                    (int32_T)sizeof(int32_T), &k_emlrtRTEI);
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    e_ii->data[i6] = c_ii->data[i6];
                  }

                  i6 = c_ii->size[0];
                  c_ii->size[0] = e_ii->size[0];
                  emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i6,
                                    (int32_T)sizeof(int32_T), &k_emlrtRTEI);
                  loop_ub = e_ii->size[0];
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    c_ii->data[i6] = e_ii->data[i6];
                  }
                }

                i6 = iTrainThis->size[0];
                iTrainThis->size[0] = c_ii->size[0];
                emxEnsureCapacity(&st, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = c_ii->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] = c_ii->data[i6];
                }

                /*  Use given method to break ties */
                st.site = &gb_emlrtRSI;
                if (d_strcmpi(&st, options_dirIfEqual_data,
                              options_dirIfEqual_size)) {
                  i6 = iTrainThis->size[0];
                  st.site = &fb_emlrtRSI;
                  bnew = b_randi(iTrainThis->size[0]);
                  ix = (int32_T)emlrtIntegerCheckFastR2012b(bnew, &j_emlrtDCI,
                    sp);
                  iDir = (int32_T)iTrainThis->
                    data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i6,
                    &td_emlrtBCI, sp) - 1];
                } else {
                  st.site = &eb_emlrtRSI;
                  if (e_strcmpi(&st, options_dirIfEqual_data,
                                options_dirIfEqual_size)) {
                    i6 = iTrainThis->size[0];
                    emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &tc_emlrtBCI, sp);
                    iDir = (int32_T)iTrainThis->data[0];
                  } else {
                    st.site = &db_emlrtRSI;
                    d_error(&st);
                  }
                }

                i6 = iSplits->size[0];
                emlrtDynamicBoundsCheckFastR2012b(iDir, 1, i6, &uc_emlrtBCI, sp);

                /*         %% Establish partition point and assign to child */
                i6 = q2->size[1];
                emlrtDynamicBoundsCheckFastR2012b(iDir, 1, i6, &vc_emlrtBCI, sp);
                loop_ub = q2->size[0];
                idx = q2->size[0];
                i6 = e_q2->size[0];
                e_q2->size[0] = idx;
                emxEnsureCapacity(sp, (emxArray__common *)e_q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < idx; i6++) {
                  e_q2->data[i6] = q2->data[i6 + q2->size[0] * (iDir - 1)];
                }

                i6 = q2->size[0] * q2->size[1];
                q2->size[0] = loop_ub;
                q2->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)q2, i6, (int32_T)
                                  sizeof(real_T), &k_emlrtRTEI);
                i6 = 0;
                while (i6 <= 0) {
                  for (i6 = 0; i6 < loop_ub; i6++) {
                    q2->data[i6] = e_q2->data[i6];
                  }

                  i6 = 1;
                }

                loop_ub = UTrain->size[0];
                i6 = UTrain->size[1];
                i = emlrtDynamicBoundsCheckFastR2012b(iDir, 1, i6, &wc_emlrtBCI,
                  sp);
                i6 = iTrainThis->size[0];
                iTrainThis->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)iTrainThis, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < loop_ub; i6++) {
                  iTrainThis->data[i6] = UTrain->data[i6 + UTrain->size[0] * (i
                    - 1)];
                }

                st.site = &cb_emlrtRSI;
                b_st.site = &oe_emlrtRSI;
                b_eml_sort(&b_st, iTrainThis, UTrainSort);

                /*  The convoluted nature of the below is to avoid numerical errors */
                i6 = UTrainSort->size[0];
                bnew = iSplits->data[iDir - 1];
                ix = (int32_T)emlrtIntegerCheckFastR2012b(bnew, &k_emlrtDCI, sp);
                nSelected = UTrainSort->data[emlrtDynamicBoundsCheckFastR2012b
                  (ix, 1, i6, &ud_emlrtBCI, sp) - 1];
                lambda = UTrainSort->data[(int32_T)iSplits->data[iDir - 1] - 1];
                i6 = UTrainSort->size[0];
                emxEnsureCapacity(sp, (emxArray__common *)UTrainSort, i6,
                                  (int32_T)sizeof(real_T), &k_emlrtRTEI);
                loop_ub = UTrainSort->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  UTrainSort->data[i6] -= lambda;
                }

                i6 = UTrainSort->size[0];
                ix = (int32_T)iSplits->data[iDir - 1];
                ixstart = UTrainSort->size[0];
                ndbl = (int32_T)(iSplits->data[iDir - 1] + 1.0);
                lambda = UTrainSort->data[emlrtDynamicBoundsCheckFastR2012b(ix,
                  1, i6, &vd_emlrtBCI, sp) - 1] * 0.5 + UTrainSort->
                  data[emlrtDynamicBoundsCheckFastR2012b(ndbl, 1, ixstart,
                  &wd_emlrtBCI, sp) - 1] * 0.5;
                partitionPoint_size[0] = 1;
                partitionPoint_size[1] = 1;
                partitionPoint_data[0] = lambda + nSelected;
                i6 = UTrain->size[0];
                b_partitionPoint_data[0] = lambda + nSelected;
                st.site = &bb_emlrtRSI;
                repmat(&st, b_partitionPoint_data, i6, r4);
                i6 = UTrain->size[0];
                iv24[0] = i6;
                iv24[1] = 1;
                for (i6 = 0; i6 < 2; i6++) {
                  b_tmp_size[i6] = r4->size[i6];
                }

                emlrtSizeEqCheck2DFastR2012b(iv24, b_tmp_size, &jb_emlrtECI, sp);
                loop_ub = UTrain->size[0];
                i6 = bRemainsSelected->size[0];
                bRemainsSelected->size[0] = loop_ub;
                emxEnsureCapacity(sp, (emxArray__common *)bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                for (i6 = 0; i6 < loop_ub; i6++) {
                  bRemainsSelected->data[i6] = (iTrainThis->data[i6] <= r4->
                    data[i6]);
                }

                i = bRemainsSelected->size[0];
                i6 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
                bLessThanTrain->size[0] = i;
                emxEnsureCapacity(sp, (emxArray__common *)bLessThanTrain, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                i6 = bLessThanTrain->size[0] * bLessThanTrain->size[1];
                bLessThanTrain->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)bLessThanTrain, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                loop_ub = bRemainsSelected->size[0];
                for (i6 = 0; i6 < loop_ub; i6++) {
                  bLessThanTrain->data[i6] = bRemainsSelected->data[i6];
                }

                i = bRemainsSelected->size[0];
                idx = bRemainsSelected->size[0];
                i6 = d_bRemainsSelected->size[0] * d_bRemainsSelected->size[1];
                d_bRemainsSelected->size[0] = i;
                d_bRemainsSelected->size[1] = 1;
                emxEnsureCapacity(sp, (emxArray__common *)d_bRemainsSelected, i6,
                                  (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                i6 = 0;
                while (i6 <= 0) {
                  for (i6 = 0; i6 < i; i6++) {
                    d_bRemainsSelected->data[i6] = bRemainsSelected->data[i6];
                  }

                  i6 = 1;
                }

                f_bRemainsSelected[0] = idx;
                c_YTrain = *d_bRemainsSelected;
                c_YTrain.size = (int32_T *)&f_bRemainsSelected;
                c_YTrain.numDimensions = 1;
                st.site = &ab_emlrtRSI;
                if (!e_any(&st, &c_YTrain)) {
                  guard2 = true;
                } else {
                  i = bRemainsSelected->size[0];
                  idx = bRemainsSelected->size[0];
                  i6 = e_bRemainsSelected->size[0] * e_bRemainsSelected->size[1];
                  e_bRemainsSelected->size[0] = i;
                  e_bRemainsSelected->size[1] = 1;
                  emxEnsureCapacity(sp, (emxArray__common *)e_bRemainsSelected,
                                    i6, (int32_T)sizeof(boolean_T), &k_emlrtRTEI);
                  i6 = 0;
                  while (i6 <= 0) {
                    for (i6 = 0; i6 < i; i6++) {
                      e_bRemainsSelected->data[i6] = bRemainsSelected->data[i6];
                    }

                    i6 = 1;
                  }

                  g_bRemainsSelected[0] = idx;
                  c_YTrain = *e_bRemainsSelected;
                  c_YTrain.size = (int32_T *)&g_bRemainsSelected;
                  c_YTrain.numDimensions = 1;
                  st.site = &ab_emlrtRSI;
                  if (c_all(&st, &c_YTrain)) {
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
        i6 = q2->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i6, &xc_emlrtBCI, sp);
        loop_ub = q2->size[0];
        i6 = projMat->size[0];
        projMat->size[0] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)projMat, i6, (int32_T)sizeof
                          (real_T), &k_emlrtRTEI);
        for (i6 = 0; i6 < loop_ub; i6++) {
          projMat->data[i6] = q2->data[i6];
        }
      }

      emxFree_real_T(&p_iIn);
      emxFree_real_T(&o_iIn);
      emxFree_real_T(&n_iIn);
      emxFree_real_T(&m_iIn);
      emxFree_real_T(&l_iIn);
      emxFree_real_T(&k_iIn);
      emxFree_real_T(&j_iIn);
      emxFree_int32_T(&f_ii);
      emxFree_real_T(&r5);
      emxFree_real_T(&e_iCanBeSelected);
      emxFree_boolean_T(&e_bRemainsSelected);
      emxFree_boolean_T(&d_bRemainsSelected);
      emxFree_real_T(&e_q2);
      emxFree_int32_T(&e_ii);
      emxFree_real_T(&d_q2);
      emxFree_real_T(&d_UTrain);
      emxFree_real_T(&i_iIn);
      emxFree_real_T(&h_iIn);
      emxFree_real_T(&g_iIn);
      emxFree_real_T(&f_iIn);
      emxFree_real_T(&e_iIn);
      emxFree_real_T(&d_iIn);
      emxFree_real_T(&c_iIn);
      emxFree_real_T(&c_q2);
      emxFree_boolean_T(&b_bInMat);
      emxFree_real_T(&b_XTrainBag);
      emxFree_real_T(&d_iCanBeSelected);
      emxFree_real_T(&b_indFeatIn);
      emxFree_real_T(&g_UTrainSort);
      emxFree_boolean_T(&f_UTrainSort);
      emxFree_real_T(&e_UTrainSort);
      emxFree_boolean_T(&d_UTrainSort);
      emxFree_real_T(&c_UTrain);
      emxFree_real_T(&b_LeftCumCounts);
      emxFree_real_T(&c_UTrainSort);
      emxFree_real_T(&c_RightCumCounts);
      emxFree_boolean_T(&b_pL);
      emxFree_boolean_T(&b_RightCumCounts);
      emxFree_boolean_T(&c_bRemainsSelected);
      emxFree_boolean_T(&b_bRemainsSelected);
      emxFree_real_T(&b_UTrainSort);
      emxFree_real_T(&b_iTrainThis);
      emxFree_real_T(&b_UTrain);
      emxFree_real_T(&c_q1);
      emxFree_real_T(&b_q2);
      emxFree_real_T(&b_splitGains);
      emxFree_real_T(&c_y);
      emxFree_real_T(&a);
      emxFree_real_T(&r4);
      emxFree_int32_T(&r3);
      emxFree_real_T(&YTrainBag);
      emxFree_real_T(&XTrainBag);
      emxFree_real_T(&b_projMat);
      emxFree_real_T(&b_q1);
      emxFree_real_T(&metricRight);
      emxFree_real_T(&metricLeft);
      emxFree_real_T(&pL);
      emxFree_real_T(&RightCumCounts);
      emxFree_real_T(&LeftCumCounts);
      emxFree_boolean_T(&YTrainSort);
      emxFree_real_T(&iSplits);
      emxFree_real_T(&splitGains);
      emxFree_real_T(&UTrain);
      emxFree_real_T(&q2);
      emxFree_real_T(&b_r1);
      emxFree_real_T(&q1);
      emxFree_real_T(&iTrainThis);
    }

    emxFree_int32_T(&c_ii);
    emxFree_int32_T(&ii);
    emxFree_real_T(&UTrainSort);
    emxFree_boolean_T(&bRemainsSelected);
    emxFree_boolean_T(&bXVaries);
    emxFree_boolean_T(&bInMat);
    emxFree_real_T(&indFeatIn);
  }

  emxFree_real_T(&r1);
  emxFree_real_T(&iCanBeSelected);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (expandNode.c) */
