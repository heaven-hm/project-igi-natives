// IGI native provenance: Sys_CloseFileStream_11 - 0x004B3190 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004B3190-Sys_CloseFileStream_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_CloseFileStream_11.h"
double* Sys_CloseFileStream_11(int32_t context, double* param_2, double* param_3)

{
    double item_18 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
    double item_10 = -((param_3[2] * *param_2 - param_2[2] * *param_3));
    double item_8 = *param_2 * param_3[1] - *param_3 * param_2[1];
    memcpy(context, &item_18, 0x18);
    return param_2;
}
