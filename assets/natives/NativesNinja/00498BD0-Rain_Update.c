#include "00498BD0-Rain_Update.h"
/* 0x00498bd0 Rain_Update full linked: callers=1 callees=9 */
int32_t sub_498bd0(void* a1)

{
    double* ebx = a1 + 0xe40;
    int32_t var_a0 = sub_4a55fe((g_bcab08 - 59924.48193359375) * 9.1782186888072072e-05 + 0.5);
    double var_d0_1 = (g_bcab10 - 59924.48193359375) * 9.1782186888072072e-05 + 0.5;
    int32_t var_a0_1 = sub_4a55fe(var_d0_1);
    int32_t ecx_3 = var_a0 % 0xc;
    int32_t eax_5 = 0;
    int32_t esi_1 = var_a0_1 % 0xc;
    eax_5 = ecx_3 >= 0;
    int32_t edx_10 = 0;
    int32_t ecx_4 = ecx_3 + ((eax_5 - 1) & 0xc);
    void* eax_8 = a1;
    edx_10 = esi_1 >= 0;
    *(eax_8 + 0x5640) = ecx_4;
    int32_t esi_2 = esi_1 + ((edx_10 - 1) & 0xc);
    bool cond:0 = *(eax_8 + 0x56ad);
    double var_90 = (var_a0 - ecx_4) * 10895.3603515625;
    *(eax_8 + 0x5644) = esi_2;
    double var_a0_2 = (var_a0_1 - esi_2) * 10895.3603515625;
    double var_b0;
    int32_t var_a4;

    if (cond:0)
    {
        float var_b8_2 = fabsl(g_bcab10 - *(eax_8 + 0x56b8));
        int32_t var_b0_1 =
            sub_4a5c30(fabsl(g_bcab08 - *(eax_8 + 0x56b0)) * 9.1782189e-05f * 12f);
        var_d0_1 = var_b8_2 * 9.1782189e-05f * 12f;
        var_b0 = sub_4a5c30(var_d0_1);
        eax_8 = a1;
        var_a4 = var_b0_1 + var_b0;
    }
    else
        var_a4 = 0x2710;

    int32_t i = 0;
    memcpy(eax_8 + 0x56b0, &g_bcab08, 0x18);
    void* ecx_8 = a1;
    int32_t i_1 = 0;
    *(ecx_8 + 0x56ad) = 1;

    do
    {
        int32_t var_98;
        int32_t var_94;

        if (i >= ecx_4)
        {
            var_98 = var_90;
            var_94 = *(&var_90 + 4);
        }
        else
            var_98 = var_90 + 130744.32421875;

        *(&var_b0 + 4) = *(&var_a0_2 + 4);
        int32_t j = 0;
        var_b0 = var_a0_2;
        int32_t j_1 = 0;

        do
        {
            long double x87_r7_26 = var_b0;

            if (j < esi_2)
                x87_r7_26 = x87_r7_26 + 130744.32421875;

            long double x87_r6_4 = *ebx;
            long double temp0_1 = var_98;
            x87_r6_4 - temp0_1;
            long double temp1_1;

            if (*(&((x87_r6_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp0_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            {
                temp1_1 = ebx[1];
                x87_r7_26 - temp1_1;
            }

            int32_t eax_14;

            eax_14 = !(*(&((x87_r6_4 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_4, temp0_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) || !(*(&(
                (x87_r7_26 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_26, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_26 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40) ? 0 : 0x20;

            int32_t esi_6 = *(ebx + 0x1c) & eax_14;
            *(ebx + 0x1c) = esi_6;

            if (!esi_6)
            {
                bool cond:1_1 = var_a4 <= 0;
                var_a4 -= 1;

                if (!cond:1_1)
                {
                    double var_80 = -(*(ecx_8 + 0x5698));
                    *ebx = var_98;
                    *(ebx + 4) = var_94;
                    ebx[1] = x87_r7_26;
                    *(&var_d0_1 + 4) = 0xc8000000;
                    var_d0_1 = 0;
                    ebx[2] = g_bcab18 + *(ecx_8 + 0x56a0);
                    void var_78;
                    sub_4cb9f0(*(ecx_8 + 0x68), &var_78, ebx, 1, &var_80, 0xff,
                        -0xc800000000000000);
                    int32_t var_60;
                    ebx[2] = var_60;
                    int32_t var_5c;
                    *(ebx + 0x14) = var_5c;
                    j = j_1;
                    memcpy(&ebx[0x30], ebx, 0x18);
                    memcpy(&ebx[0x480], ebx, 0x18);
                    *(ebx + 0x1c) = 0x20;
                    memcpy(&ebx[0x4b0], ebx, 0x18);
                    ecx_8 = a1;
                }
            }

            int32_t eax_19 = *(ebx + 0x1c);
            j += 1;
            *(ebx + 0x19c) = eax_19;
            *(ebx + 0x241c) = eax_19;
            *(ebx + 0x259c) = eax_19;
            ebx = &ebx[4];
            j_1 = j;
            var_b0 = var_b0 + 10895.3603515625;
        } while (j <= 0xb);

        ebx = &ebx[0x30];
        i = i_1 + 1;
        i_1 = i;
        var_90 = var_90 + 10895.3603515625;
    } while (i <= 0xb);

    *(ecx_8 + 0x5648) = 0;
    return i;
}
