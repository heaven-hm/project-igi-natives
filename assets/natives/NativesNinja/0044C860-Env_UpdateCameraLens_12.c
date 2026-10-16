#include "0044C860-Env_UpdateCameraLens_12.h"
/* 0x0044c860 Env_UpdateCameraLens_12 full linked: callers=1 callees=5 */
int32_t sub_44c860(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5)

{
    memcpy(a1 + 0x20, a2, 0x18);
    memcpy(a1 + 0x38, a4, 0x18);
    memcpy(a1 + 0x50, a3, 0x28);
    int32_t edi_3 = a5;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_3;
        edi_3 += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result = ~i;
    int32_t esi_4;
    int32_t edi_6;
    edi_6 = memcpy(a1 + 0x94, edi_3 - result, result & 0xfffffffc);
    memcpy(edi_6, esi_4, result & 3);
    return result;
}
