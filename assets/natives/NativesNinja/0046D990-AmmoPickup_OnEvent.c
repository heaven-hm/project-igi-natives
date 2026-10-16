#include "0046D990-AmmoPickup_OnEvent.h"
/* 0x0046d990 AmmoPickup_OnEvent full linked: callers=0 callees=5 */
int32_t sub_46d990(void* a1, int32_t* a2)

{
    long double x87_r7 = *(a1 + 0x9c);
    long double x87_r6 = *(a1 + 0xa0);
    x87_r6 - x87_r7;
    long double x87_r7_1;

    if (!(*(&((x87_r6 < x87_r7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, x87_r7) ? 1 : 0) << 0xa
            | (x87_r6 == x87_r7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = *(a1 + 0xa0);
    else
        x87_r7_1 = *(a1 + 0x9c);

    long double x87_r6_1 = *(a1 + 0x98);
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = *(a1 + 0x9c);
        long double x87_r6_2 = *(a1 + 0xa0);
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = *(a1 + 0xa0);
        else
            x87_r7_3 = *(a1 + 0x9c);
    }
    else
        x87_r7_3 = *(a1 + 0x98);

    int32_t* eax_1 = *(a1 + 0x6c);
    float var_30 = x87_r7_3;
    long double x87_r7_6 = sub_4d0950(eax_1) * var_30;
    var_30 = x87_r7_6;
    long double temp0 = 2867.1999999999998;
    x87_r7_6 - temp0;

    if (*(&((x87_r7_6 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp0) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        __builtin_strncpy(&var_30, "ffff", 4);
        int32_t var_2c_1 = 0x40a66666;
    }

    double var_20 = *(a1 + 0x20) - *(a2 + 8);
    double var_18 = *(a1 + 0x28) - *(a2 + 0x10);
    long double x87_r7_12 = *(a1 + 0x30) - *(a2 + 0x18);
    long double temp1 = 0.0;
    x87_r7_12 - temp1;

    if (*(&((x87_r7_12 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp1) ? 1 : 0) << 0xa
            | (x87_r7_12 == temp1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_12 = -(x87_r7_12);

    double var_28 = x87_r7_12;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    long double st0_1 = sub_4b3130(&var_20);
    long double temp2 = var_30;
    st0_1 - temp2;
    int16_t result = (st0_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp2) ? 1 : 0) << 0xa
        | (st0_1 == temp2 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        long double x87_r7_14 = var_28;
        long double temp3_1 = 4096.0;
        x87_r7_14 - temp3_1;
        result = (x87_r7_14 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == temp3_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            int32_t edx_1 = *(a1 + 0x10c);
            void* ecx_1 = *a2;
            *(&var_28 + 4) = *(a1 + 0x130);
            uint32_t eax_6 = *g_53fe28;
            var_28 = edx_1;
            int32_t edx_2 = 0;
            edx_2 = *(ecx_1 + 0x1c);
            int32_t eax_9 = *(((edx_2 + eax_6 * 0x180) << 2) + &g_a96ae0);

            if (eax_9)
                eax_9(ecx_1, &var_28);

            *(a1 + 0x109) = 1;
            return StatusMessage_ShowFull(sub_4f0ee0(), "PICKEDUPAMMO", "STATUSSCREEN:ammo.spr",
                &g_567c74);
        }
    }

    return result;
}
