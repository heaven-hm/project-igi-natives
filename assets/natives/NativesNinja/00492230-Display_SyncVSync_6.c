#include "00492230-Display_SyncVSync_6.h"
/* 0x00492230 Display_SyncVSync_6 full linked: callers=0 callees=1 */
int32_t __stdcall sub_492230(void* a1 @ 0xc, void* a2)

{
    int32_t i = 4;
    int32_t* edi = &g_534a00;
    int32_t* esi = a1 + 0xc4;
    bool cond:1 = false;

    while (i)
    {
        int32_t temp1_1 = *esi;
        int32_t temp2_1 = *edi;
        cond:1 = temp1_1 != temp2_1;
        esi = &esi[1];
        edi = &edi[1];
        i -= 1;

        if (temp1_1 != temp2_1)
            break;
    }

    if (!cond:1)
        g_bcacf4 = 1;

    int32_t* esi_1 = a1 + 0xc4;
    int32_t i_1 = 4;
    int32_t* edi_1 = &g_5349e0;
    bool cond:3 = false;

    while (i_1)
    {
        int32_t temp3_1 = *esi_1;
        int32_t temp4_1 = *edi_1;
        cond:3 = temp3_1 != temp4_1;
        esi_1 = &esi_1[1];
        edi_1 = &edi_1[1];
        i_1 -= 1;

        if (temp3_1 != temp4_1)
            break;
    }

    if (!cond:3)
    {
        g_bcad74 = 1;
        g_bcacf4 = 1;
    label_49228e:
        memcpy(a2, a1, 0xec);
        g_5ca108 = *(a2 + 0x44) >> 8 & 1;

        if (g_bcad74)
            return 0;
    }
    else if (g_bcacf4)
        goto label_49228e;

    return 1;
}
