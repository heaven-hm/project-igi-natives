#include "Script_CallNativeHandler_21.h"
struct status_msg* Script_CallNativeHandler_21(void* a1, void* a2, int32_t a3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a76cdc;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a76cdc;
        result = QTask_HandleInput(a1, kind, 0);
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x16] = 1;
    int32_t objC2 = *(a2 + 0xb8);
    result->sprite[4] = objC2;
    result->sprite[5] = *(&objC2 + 1);
    result->sprite[6] = *(&objC2 + 2);
    result->sprite[7] = *(&objC2 + 3);
    int32_t tmpD = *(a2 + 0xd8);
    result->sprite[0x24] = tmpD;
    result->sprite[0x25] = *(&tmpD + 1);
    result->sprite[0x26] = *(&tmpD + 2);
    result->sprite[0x27] = *(&tmpD + 3);
    int32_t objC3 = *(a2 + 0xd4);
    result->sprite[0x20] = objC3;
    result->sprite[0x21] = *(&objC3 + 1);
    result->sprite[0x22] = *(&objC3 + 2);
    result->sprite[0x23] = *(&objC3 + 3);
    int32_t tmpD1 = *(a2 + 0xbc);
    result->sprite[8] = tmpD1;
    result->sprite[9] = *(&tmpD1 + 1);
    result->sprite[0xa] = *(&tmpD1 + 2);
    result->sprite[0xb] = *(&tmpD1 + 3);
    int32_t valA4 = *(a2 + 0x108);
    result->sprite[0x54] = valA4;
    result->sprite[0x55] = *(&valA4 + 1);
    result->sprite[0x56] = *(&valA4 + 2);
    result->sprite[0x57] = *(&valA4 + 3);
    memcpy(&result->head[0x1c], a3, 0x18);
    uint32_t valA6 = Script_ParseEnumReal32_8();
    int32_t tmpD2 = 0;
    tmpD2 = result->head[7];
    int32_t valA7 = *(((valA6 * 0x180 + tmpD2) << 2) + &g_a96ae0);

    if (valA7)
        valA7(result, 0);

    return result;
}
