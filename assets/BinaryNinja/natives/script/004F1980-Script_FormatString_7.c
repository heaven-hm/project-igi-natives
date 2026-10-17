// Original IGI.EXE function: Script_FormatString_7 (VA 0x004F1980; static CFG gate FAIL, CFG score 0.778).
#include "Script_FormatString_7.h"
int32_t* Script_FormatString_7(int32_t* a1, int32_t a2)

{
    int32_t* result = Script_EvaluateCondition_7(*a1 + a2);
    int32_t objC1 = *a1 << 4;
    int32_t srcS1;
    int32_t dstD1;
    dstD1 = memcpy(result[2], a1[2], objC1 & 0xfffffffc);
    memcpy(dstD1, srcS1, objC1 & 3);
    *result = *a1;
    return result;
}
