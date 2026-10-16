#include "gi_platform.h"
#include "00506CD0-Physics_SolveConstraints_5.h"
struct status_msg* Physics_SolveConstraints_5(void* a1, void* a2, int32_t a3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a7a8f0;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a7a8f0;
        result = QTask_HandleInput(a1, kind, 0);
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x20] = 1;
    int32_t objC2 = (*(int32_t*)(uintptr_t)(a2 + 0xb8));
    result->sprite[4] = objC2;
    result->sprite[5] = *(&objC2 + 1);
    result->sprite[6] = *(&objC2 + 2);
    result->sprite[7] = *(&objC2 + 3);
    int32_t tmpD = (*(int32_t*)(uintptr_t)(a2 + 0xd8));
    result->sprite[0x24] = tmpD;
    result->sprite[0x25] = *(&tmpD + 1);
    result->sprite[0x26] = *(&tmpD + 2);
    result->sprite[0x27] = *(&tmpD + 3);
    int32_t objC3 = (*(int32_t*)(uintptr_t)(a2 + 0xc8));
    result->sprite[0x14] = objC3;
    result->sprite[0x15] = *(&objC3 + 1);
    result->sprite[0x16] = *(&objC3 + 2);
    result->sprite[0x17] = *(&objC3 + 3);
    int32_t tmpD1 = (*(int32_t*)(uintptr_t)(a2 + 0xcc));
    result->sprite[0x18] = tmpD1;
    result->sprite[0x19] = *(&tmpD1 + 1);
    result->sprite[0x1a] = *(&tmpD1 + 2);
    result->sprite[0x1b] = *(&tmpD1 + 3);
    int32_t objC4 = (*(int32_t*)(uintptr_t)(a2 + 0xc4));
    result->sprite[0x10] = objC4;
    result->sprite[0x11] = *(&objC4 + 1);
    result->sprite[0x12] = *(&objC4 + 2);
    result->sprite[0x13] = *(&objC4 + 3);
    int32_t tmpD2 = (*(int32_t*)(uintptr_t)(a2 + 0xe4));
    result->sprite[0x30] = tmpD2;
    result->sprite[0x31] = *(&tmpD2 + 1);
    result->sprite[0x32] = *(&tmpD2 + 2);
    result->sprite[0x33] = *(&tmpD2 + 3);
    int32_t objC5 = (*(int32_t*)(uintptr_t)(a2 + 0xbc));
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
