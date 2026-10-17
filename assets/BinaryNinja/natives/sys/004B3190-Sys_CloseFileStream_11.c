// Original IGI.EXE function: Sys_CloseFileStream_11 (VA 0x004B3190; static CFG gate FAIL, CFG score 0.667).
#include "Sys_CloseFileStream_11.h"
double* Sys_CloseFileStream_11(int32_t context, double* param_2, double* param_3)

{
    double item_18 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
    double item_10 = -((param_3[2] * *param_2 - param_2[2] * *param_3));
    double item_8 = *param_2 * param_3[1] - *param_3 * param_2[1];
    memcpy(context, &item_18, 0x18);
    return param_2;
}
