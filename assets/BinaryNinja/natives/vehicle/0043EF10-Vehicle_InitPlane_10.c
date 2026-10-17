// Original IGI.EXE function: Vehicle_InitPlane_10 (VA 0x0043EF10; static CFG gate PASS, CFG score 0.867).
#include "Vehicle_InitPlane_10.h"
struct status_msg* Vehicle_InitPlane_10(void* a1, int32_t a2, int32_t a3, int32_t a4, int32_t* a5)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_53c4a8;
        result = QTask_HandleInput(a1, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_53c4a8;
        result = QTask_HandleInput(a1, kind, 0);
        Sys_DispatchOpcode_2();
    }

    memcpy(&result->sprite[0xb4], a2, 0x18);
    memcpy(&result->sprite[0xd8], a3, 0x28);
    int32_t valA3 = *a5;
    int32_t dstD2 = a4;
    result->sprite[0xcc] = valA3;
    result->sprite[0xcd] = *(&valA3 + 1);
    result->sprite[0xce] = *(&valA3 + 2);
    result->sprite[0xcf] = *(&valA3 + 3);
    int32_t valA4 = a5[1];
    result->sprite[0xd0] = valA4;
    result->sprite[0xd1] = *(&valA4 + 1);
    result->sprite[0xd2] = *(&valA4 + 2);
    result->sprite[0xd3] = *(&valA4 + 3);
    int32_t tmpD1 = a5[2];
    result->sprite[0xd4] = tmpD1;
    result->sprite[0xd5] = *(&tmpD1 + 1);
    result->sprite[0xd6] = *(&tmpD1 + 2);
    result->sprite[0xd7] = *(&tmpD1 + 3);
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD2;
        dstD2 += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC3 = ~i;
    int32_t srcS3;
    int32_t dstD5;
    dstD5 = memcpy(&result->sprite[0xa0], dstD2 - objC3, objC3 & 0xfffffffc);
    memcpy(dstD5, srcS3, objC3 & 3);
    uint32_t valA7 = Script_ParseEnumReal32_8();
    int32_t tmpD3 = 0;
    tmpD3 = result->head[7];
    int32_t valA8 = *(((valA7 * 0x180 + tmpD3) << 2) + &g_a96ae0);

    if (valA8)
        valA8(result, 0);

    return result;
}
