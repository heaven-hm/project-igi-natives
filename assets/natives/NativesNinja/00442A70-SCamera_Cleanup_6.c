#include "00442A70-SCamera_Cleanup_6.h"
/* 0x00442a70 SCamera_Cleanup_6 full linked: callers=0 callees=5 */
int32_t sub_442a70(float a1)

{
    float esi = a1;
    void* edi = *(esi + 0x25d0);

    if (*(edi + 0x168))
    {
        double var_18;
        WeaponType_UpdateAnim(&var_18, esi, 0);
        var_18 = var_18 + *(esi + 0x20);
        double var_10;
        double var_10_1 = var_10 + *(esi + 0x28);
        double var_8;
        double var_8_1 = var_8 + *(esi + 0x30);
        float var_38;
        sub_497f20(&var_38, &a1, &var_18);
        long double x87_r7_7 = a1;
        long double temp0_1 = 0f;
        x87_r7_7 - temp0_1;
        int16_t eax_2 = (x87_r7_7 < temp0_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_7, temp0_1) ? 1 : 0) << 0xa | (x87_r7_7 == temp0_1 ? 1 : 0) << 0xe;

        if (!(*(&eax_2 + 1) & 0x41))
        {
            eax_2 = *(edi + 0x169);
            float var_50_1;
            float var_4c_1;
            float var_40;
            float var_3c_1;

            if (eax_2 || *(edi + 0x16c))
            {
                var_4c_1 = 128f;
                var_50_1 = 0f;

                if (!*(esi + 0x25d8))
                {
                    var_40 = 512f;
                    var_3c_1 = 512f;
                }
                else
                {
                    var_40 = 1433.59998f;
                    var_3c_1 = 1433.59998f;
                }
            }
            else
            {
                var_4c_1 = 0f;
                var_50_1 = 128f;

                if (!*(esi + 0x25d8))
                {
                    var_40 = 307.200012f;
                    var_3c_1 = 307.200012f;
                    var_4c_1 = 0f;
                    var_50_1 = 64f;
                }
                else
                {
                    var_40 = 819.200012f;
                    var_3c_1 = 819.200012f;
                }
            }

            sub_498040(&var_40, &var_40, a1);
            long double x87_r7_9 = var_38 - var_40;
            float var_34;
            long double x87_r6_2 = var_34 - var_3c_1;
            long double x87_r5_2 = var_38 + var_40;
            long double x87_r7_11 = var_34 + var_3c_1;
            Qsprite_Register4Az(g_57c17c + 0x18, x87_r7_9, x87_r6_2, x87_r5_2, x87_r6_2,
                x87_r7_9, x87_r7_11, x87_r5_2, x87_r7_11, var_4c_1, var_50_1, 0f, a1, 0x3f000000,
                0, 0x1040008, 0);
        }
    }

    return (*((sub_4c48c0() << 2) + &g_a982e0))(esi, 0);
}
