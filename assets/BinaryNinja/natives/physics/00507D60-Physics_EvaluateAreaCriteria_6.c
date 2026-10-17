// Original IGI.EXE function: Physics_EvaluateAreaCriteria_6 (VA 0x00507D60; static CFG gate PASS, CFG score 0.889).
#include "Physics_EvaluateAreaCriteria_6.h"
struct status_msg* Physics_EvaluateAreaCriteria_6(void* a1, void* a2, int32_t a3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a7b248;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a7b248;
        result = QTask_HandleInput(a1, kind, 0);
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x2c] = 1;
    int32_t objC2 = *(a2 + 0xb8);
    result->sprite[4] = objC2;
    result->sprite[5] = *(&objC2 + 1);
    result->sprite[6] = *(&objC2 + 2);
    result->sprite[7] = *(&objC2 + 3);
    int32_t tmpD = *(a2 + 0xe4);
    result->sprite[0x30] = tmpD;
    result->sprite[0x31] = *(&tmpD + 1);
    result->sprite[0x32] = *(&tmpD + 2);
    result->sprite[0x33] = *(&tmpD + 3);
    int32_t objC3 = *(a2 + 0xc8);
    result->sprite[0x14] = objC3;
    result->sprite[0x15] = *(&objC3 + 1);
    result->sprite[0x16] = *(&objC3 + 2);
    result->sprite[0x17] = *(&objC3 + 3);
    int32_t tmpD1 = *(a2 + 0xcc);
    result->sprite[0x18] = tmpD1;
    result->sprite[0x19] = *(&tmpD1 + 1);
    result->sprite[0x1a] = *(&tmpD1 + 2);
    result->sprite[0x1b] = *(&tmpD1 + 3);
    int32_t objC4 = *(a2 + 0xc4);
    result->sprite[0x10] = objC4;
    result->sprite[0x11] = *(&objC4 + 1);
    result->sprite[0x12] = *(&objC4 + 2);
    result->sprite[0x13] = *(&objC4 + 3);
    int32_t tmpD2 = *(a2 + 0xf8);
    result->sprite[0x44] = tmpD2;
    result->sprite[0x45] = *(&tmpD2 + 1);
    result->sprite[0x46] = *(&tmpD2 + 2);
    result->sprite[0x47] = *(&tmpD2 + 3);
    int32_t objC5 = *(a2 + 0xbc);
    result->sprite[8] = objC5;
    result->sprite[9] = *(&objC5 + 1);
    result->sprite[0xa] = *(&objC5 + 2);
    result->sprite[0xb] = *(&objC5 + 3);
    memcpy(&result->head[0x28], a2 + 0xa0, 0x18);
    memcpy(&result->head[0x22], a2 + 0x88, 0x18);
    memcpy(&result->head[0x1c], a3, 0x18);
    uint32_t valA5 = Script_ParseEnumReal32_8();
    int32_t valA6 = 0;
    valA6 = result->head[7];
    int32_t valA7 = *(((valA5 * 0x180 + valA6) << 2) + &g_a96ae0);

    if (valA7)
        valA7(result, 0);

    return result;
}
