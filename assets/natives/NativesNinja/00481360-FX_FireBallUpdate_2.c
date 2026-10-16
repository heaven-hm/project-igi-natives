#include "00481360-FX_FireBallUpdate_2.h"
/* 0x00481360 FX_FireBallUpdate_2 full linked: callers=5 callees=2 */
int32_t sub_481360(void* a1, float a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, int32_t a7, int32_t a8, int32_t a9)

{
    *(a1 + 0x1f8) = a3;
    *(a1 + 0x1f0) = a2;
    *(a1 + 0x1fc) = a4;
    *(a1 + 0x204) = a5;
    *(a1 + 0x200) = a5;
    *(a1 + 0x208) = a6;
    *(a1 + 0x20c) = a7;
    int32_t edi = a9;
    *(a1 + 0x210) = a8;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t result = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(a1 + 0x214, edi - result, result & 0xfffffffc);
    memcpy(edi_3, esi_1, result & 3);
    return result;
}
