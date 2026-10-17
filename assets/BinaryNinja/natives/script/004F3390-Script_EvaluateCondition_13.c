// Original IGI.EXE function: Script_EvaluateCondition_13 (VA 0x004F3390; static CFG gate FAIL, CFG score 0.778).
#include "Script_EvaluateCondition_13.h"
struct status_msg* Script_EvaluateCondition_13(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5, int32_t* a6)

{
    int32_t kind;
    kind = g_54e1ac;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    memcpy(&result->sprite[0x3c], a3, 0x18);
    int32_t v_1c = 0;
    memcpy(&result->sprite[0x54], a4, 0x28);
    int32_t dstD2 = a2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD2;
        dstD2 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC1 = ~i;
    int32_t srcS3;
    int32_t dstD5;
    dstD5 = memcpy(&result->sprite[0x7c], dstD2 - objC1, objC1 & 0xfffffffc);
    memcpy(dstD5, srcS3, objC1 & 3);
    int32_t valA1 = *a5;
    result->sprite[0x8c] = valA1;
    result->sprite[0x8d] = *(&valA1 + 1);
    result->sprite[0x8e] = *(&valA1 + 2);
    result->sprite[0x8f] = *(&valA1 + 3);
    int32_t valA2 = a5[1];
    result->sprite[0x90] = valA2;
    result->sprite[0x91] = *(&valA2 + 1);
    result->sprite[0x92] = *(&valA2 + 2);
    result->sprite[0x93] = *(&valA2 + 3);
    int32_t tmpD2 = a5[2];
    result->sprite[0x94] = tmpD2;
    result->sprite[0x95] = *(&tmpD2 + 1);
    result->sprite[0x96] = *(&tmpD2 + 2);
    result->sprite[0x97] = *(&tmpD2 + 3);
    int32_t tmpD3 = *a6;
    result->sprite[0x98] = tmpD3;
    result->sprite[0x99] = *(&tmpD3 + 1);
    result->sprite[0x9a] = *(&tmpD3 + 2);
    result->sprite[0x9b] = *(&tmpD3 + 3);
    int32_t tmpD4 = a6[1];
    result->sprite[0x9c] = tmpD4;
    result->sprite[0x9d] = *(&tmpD4 + 1);
    result->sprite[0x9e] = *(&tmpD4 + 2);
    result->sprite[0x9f] = *(&tmpD4 + 3);
    int32_t objC7 = a6[2];
    result->sprite[0xa0] = objC7;
    result->sprite[0xa1] = *(&objC7 + 1);
    result->sprite[0xa2] = *(&objC7 + 2);
    result->sprite[0xa3] = *(&objC7 + 3);
    EditRigidObj_Update(result);
    return result;
}
