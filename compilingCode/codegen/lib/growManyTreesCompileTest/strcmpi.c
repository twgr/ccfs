/*
 * File: strcmpi.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "strcmpi.h"

/* Function Definitions */

/*
 * Arguments    : const char s1_data[]
 *                const int s1_size[2]
 * Return Type  : boolean_T
 */
boolean_T b_strcmpi(const char s1_data[], const int s1_size[2])
{
  boolean_T tf;
  int n;
  int k;
  int32_T exitg1;
  static const char cv0[4] = { 'g', 'i', 'n', 'i' };

  static const char cv1[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  tf = false;
  if (s1_size[1] <= 4) {
    n = s1_size[1];
  } else {
    n = 4;
  }

  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        if (cv1[s1_data[k] & 127] != cv1[(int)cv0[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

/*
 * Arguments    : const char s1_data[]
 *                const int s1_size[2]
 * Return Type  : boolean_T
 */
boolean_T c_strcmpi(const char s1_data[], const int s1_size[2])
{
  boolean_T tf;
  int n;
  int k;
  int32_T exitg1;
  static const char cv2[4] = { 'i', 'n', 'f', 'o' };

  static const char cv3[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  tf = false;
  if (s1_size[1] <= 4) {
    n = s1_size[1];
  } else {
    n = 4;
  }

  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        if (cv3[s1_data[k] & 127] != cv3[(int)cv2[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

/*
 * Arguments    : const char s1_data[]
 *                const int s1_size[2]
 * Return Type  : boolean_T
 */
boolean_T d_strcmpi(const char s1_data[], const int s1_size[2])
{
  boolean_T tf;
  int n;
  int k;
  int32_T exitg1;
  static const char cv4[4] = { 'r', 'a', 'n', 'd' };

  static const char cv5[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  tf = false;
  if (s1_size[1] <= 4) {
    n = s1_size[1];
  } else {
    n = 4;
  }

  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        if (cv5[s1_data[k] & 127] != cv5[(int)cv4[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

/*
 * Arguments    : const char s1_data[]
 *                const int s1_size[2]
 * Return Type  : boolean_T
 */
boolean_T e_strcmpi(const char s1_data[], const int s1_size[2])
{
  boolean_T tf;
  int n;
  int k;
  int32_T exitg1;
  static const char cv6[5] = { 'f', 'i', 'r', 's', 't' };

  static const char cv7[128] = { '\x00', '\x01', '\x02', '\x03', '\x04', '\x05',
    '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e', '\x0f',
    '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17', '\x18',
    '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!', '\"', '#',
    '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0', '1', '2',
    '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?', '@', 'a',
    'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']', '^', '_',
    '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{', '|', '}',
    '~', '\x7f' };

  tf = false;
  if (s1_size[1] <= 5) {
    n = s1_size[1];
  } else {
    n = 5;
  }

  if (s1_size[1] == 5) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        if (cv7[s1_data[k] & 127] != cv7[(int)cv6[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

/*
 * File trailer for strcmpi.c
 *
 * [EOF]
 */
