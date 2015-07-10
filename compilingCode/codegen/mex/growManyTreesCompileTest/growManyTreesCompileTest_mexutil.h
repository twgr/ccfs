/*
 * growManyTreesCompileTest_mexutil.h
 *
 * Code generation for function 'growManyTreesCompileTest_mexutil'
 *
 */

#ifndef __GROWMANYTREESCOMPILETEST_MEXUTIL_H__
#define __GROWMANYTREESCOMPILETEST_MEXUTIL_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern void b_emlrt_update_log_10(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_11(const struct_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_12(const b_struct_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_13(const c_struct_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_14(const d_struct_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_15(const real_T in[2000],
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_16(const boolean_T in[2000],
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_17(const real_T in[4000],
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_18(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_19(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_2(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_20(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_21(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_22(const emxArray_struct3_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_23(const emxArray_struct4_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_24(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_25(const emxArray_struct5_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_28(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_3(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_30(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_32(const real_T in_data[], const int32_T in_size
  [1], emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_34(const real_T in_data[], const int32_T in_size
  [2], emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_35(const real_T in_data[],
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_37(const emxArray_boolean_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_38(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_4(const struct0_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_5(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_7(const real_T in[2],
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_8(const boolean_T in[2],
  emlrtLocationLoggingDataType table[613]);
extern void b_emlrt_update_log_9(const real_T in[4],
  emlrtLocationLoggingDataType table[613]);
extern const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
extern const mxArray *c_message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
extern real_T emlrt_update_log_1(real_T in, emlrtLocationLoggingDataType table
  [613]);

#ifdef __WATCOMC__

#pragma aux emlrt_update_log_1 value [8087];

#endif

extern void emlrt_update_log_10(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern struct_T emlrt_update_log_11(int64_T in_inds,
  emlrtLocationLoggingDataType table[613]);
extern b_struct_T emlrt_update_log_12(real_T in_inds,
  emlrtLocationLoggingDataType table[613]);
extern c_struct_T emlrt_update_log_13(real_T in_phi,
  emlrtLocationLoggingDataType table[613]);
extern void emlrt_update_log_14(const emlrtStack *sp, real_T in_nextChild, const
  boolean_T in_bExpanded[2], const real_T in_nodeId[2], const boolean_T
  in_bLeaf[2], const real_T in_childIds[4], const real_T in_parentId[2], const
  real_T in_depth[2], int64_T in_iPresent_inds, real_T in_iFeatNum_inds, const
  emxArray_real_T *in_trainingCounts, const real_T in_labelClassId[2], const
  real_T in_partitionPoint[2], real_T in_iIn_inds, real_T
  in_decisionProjection_phi, emlrtLocationLoggingDataType table[613], d_struct_T
  *out);
extern void emlrt_update_log_15(const real_T in[2000],
  emlrtLocationLoggingDataType table[613], real_T out[2000]);
extern void emlrt_update_log_16(const boolean_T in[2000],
  emlrtLocationLoggingDataType table[613], boolean_T out[2000]);
extern void emlrt_update_log_17(const real_T in[4000],
  emlrtLocationLoggingDataType table[613], real_T out[4000]);
extern void emlrt_update_log_18(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern void emlrt_update_log_19(const emlrtStack *sp, const emxArray_boolean_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out);
extern void emlrt_update_log_2(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern void emlrt_update_log_20(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern void emlrt_update_log_21(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern void emlrt_update_log_22(const emlrtStack *sp, const emxArray_struct3_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_struct3_T *out);
extern void emlrt_update_log_23(const emlrtStack *sp, const emxArray_struct4_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_struct4_T *out);
extern void emlrt_update_log_24(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern void emlrt_update_log_25(const emlrtStack *sp, const emxArray_struct5_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_struct5_T *out);
extern void emlrt_update_log_28(const emlrtStack *sp, const emxArray_boolean_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out);
extern void emlrt_update_log_3(const emlrtStack *sp, const emxArray_boolean_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out);
extern void emlrt_update_log_30(const emlrtStack *sp, const emxArray_boolean_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out);
extern boolean_T emlrt_update_log_31(boolean_T in, emlrtLocationLoggingDataType
  table[613]);
extern void emlrt_update_log_32(const real_T in_data[], const int32_T in_size[1],
  emlrtLocationLoggingDataType table[613], real_T out_data[], int32_T out_size[1]);
extern void emlrt_update_log_34(const real_T in_data[], const int32_T in_size[2],
  emlrtLocationLoggingDataType table[613], real_T out_data[], int32_T out_size[2]);
extern void emlrt_update_log_35(const real_T in_data[],
  emlrtLocationLoggingDataType table[613], real_T out_data[], int32_T out_size[2]);
extern void emlrt_update_log_37(const emlrtStack *sp, const emxArray_boolean_T
  *in, emlrtLocationLoggingDataType table[613], emxArray_boolean_T *out);
extern void emlrt_update_log_38(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern void emlrt_update_log_4(const emlrtStack *sp, const struct0_T *in,
  emlrtLocationLoggingDataType table[613], struct0_T *out);
extern void emlrt_update_log_5(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
extern int64_T emlrt_update_log_6(int64_T in, emlrtLocationLoggingDataType
  table[613]);
extern void emlrt_update_log_7(const real_T in[2], emlrtLocationLoggingDataType
  table[613], real_T out[2]);
extern void emlrt_update_log_8(const boolean_T in[2],
  emlrtLocationLoggingDataType table[613], boolean_T out[2]);
extern void emlrt_update_log_9(const real_T in[4], emlrtLocationLoggingDataType
  table[613], real_T out[4]);
extern void f_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
extern const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);

#endif

/* End of code generation (growManyTreesCompileTest_mexutil.h) */
