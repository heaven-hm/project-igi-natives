#include "00429920-Missile_Action.h"
/* 0x00429920 Missile_Action full linked: callers=0 callees=6 */
int32_t* Missile_Action(int32_t* a1 @ 0x8)

{
    void* eax_1 = *(a1[1] + 0x6e4);

    if (eax_1)
    {
        sub_4b0d10(eax_1);
        *(a1[1] + 0x6e4) = 0;
    }

    int32_t var_10 = g_53bcd8[0];
    int32_t* eax_3 = sub_4fe730(*a1, "Missile - Model");

    if (!eax_3)
        eax_3 = sub_4fe6b0(*a1, "Missile - Model", &var_10);

    void* edi = &eax_3[0x49];
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_3 = ~i;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_10, edi - ecx_3, ecx_3 & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx_3 & 3);
    *(a1[1] + 0x6e4) = Mem_Alloc(0x10, 4);
    int32_t* result = *(a1[1] + 0x6e4);
    *result = var_10;
    result[1] = g_53bcd8[4][0];
    result[2] = g_53bcd8[8][0];
    int32_t var_4;
    result[3] = var_4;
    return result;
}
