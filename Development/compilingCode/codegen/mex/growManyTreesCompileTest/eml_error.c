/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRTEInfo yd_emlrtRTEI = { 20, 5, "eml_error",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &yd_emlrtRTEI,
    "Coder:MATLAB:svd_matrixWithNaNInf", 0);
}

void c_eml_error(const emlrtStack *sp)
{
  emlrtErrorWithMessageIdR2012b(sp, &yd_emlrtRTEI,
    "Coder:MATLAB:svd_NoConvergence", 0);
}

void d_eml_error(const emlrtStack *sp)
{
  static char_T cv118[4][1] = { { 'l' }, { 'o' }, { 'g' }, { '2' } };

  emlrtErrorWithMessageIdR2012b(sp, &yd_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv118);
}

void eml_error(const emlrtStack *sp)
{
  static char_T cv78[4][1] = { { 's' }, { 'q' }, { 'r' }, { 't' } };

  emlrtErrorWithMessageIdR2012b(sp, &yd_emlrtRTEI,
    "Coder:toolbox:ElFunDomainError", 3, 4, 4, cv78);
}

/* End of code generation (eml_error.c) */
