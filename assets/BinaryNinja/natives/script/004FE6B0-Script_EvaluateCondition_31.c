// Original IGI.EXE function: Script_EvaluateCondition_31 (VA 0x004FE6B0; static CFG gate FAIL, CFG score 0.778).
#include "Script_EvaluateCondition_31.h"
struct status_msg* Script_EvaluateCondition_31(void* a1, int32_t a2, int32_t a3)

{
    int32_t kind;
    kind = g_a7a4fe;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    int32_t dstD = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC1 = ~i;
    int32_t v_20 = a2;
    int32_t srcS1;
    int32_t dstD3;
    dstD3 = memcpy(&result->head[8], dstD - objC1, objC1 & 0xfffffffc);
    struct status_msg* result_1 = result;
    memcpy(dstD3, srcS1, objC1 & 3);
    int32_t dstD4 = a3;
    int32_t i_1 = 0xffffffff;

    while (i_1)
    {
        bool cond_1_1 = 0 != *dstD4;
        dstD4 += 1;
        i_1 -= 1;

        if (!cond_1_1)
            break;
    }

    int32_t objC5 = ~i_1;
    int32_t srcS3;
    int32_t dstD7;
    dstD7 = memcpy(&result->sprite[0x70], dstD4 - objC5, objC5 & 0xfffffffc);
    memcpy(dstD7, srcS3, objC5 & 3);
    return result;
}
