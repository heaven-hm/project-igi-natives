#include "00462E50-Muzzle_Eye.h"
/* 0x00462e50 Muzzle_Eye full linked: callers=5 callees=6 */
void* sub_462e50(void* a1 @ ebp, int32_t a2 @ esi, int32_t a3 @ edi, void* a4)

{
    void* edi = *(a4 + 0x4ec);
    *(a4 + 0x4d3) = 0;
    void* a = Table_GetAt(a4 + 0x4c4, 0);

    if (a)
    {
        struct collision_set* eax_1 = HumanPlayer_LoadParameters_13(a, a3, a2, a1);
        double var_40;
        sub_465800(&var_40, *(a4 + 0x4ec));
        void var_28;
        sub_465880(&var_28, *(a4 + 0x4ec));
        float var_48_1 = 0f;
        float var_44_1 = 0f;
        float eax_3 = *(a4 + 0x688);
        var_40 = 0f + var_40;
        int32_t ecx_2 = *(a4 + 0x68c);
        float var_88 = eax_3;
        int32_t var_84_1 = ecx_2;
        double var_38;
        double var_38_1 = var_48_1 + var_38;
        int32_t var_80_1 = *(a4 + 0x690);
        double var_30;
        double var_30_1 = var_44_1 + var_30;

        if (*(eax_1 + 0x610) == 4)
        {
            long double x87_r7_7 = *(a4 + 0x4e0);
            long double x87_r6_1 = 3.0;
            x87_r6_1 - x87_r7_7;

            if (*(&((x87_r6_1 < x87_r7_7 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_1, x87_r7_7) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r6_2 = 60.0;
                x87_r6_2 - x87_r7_7;

                if (*(&((x87_r6_2 < x87_r7_7 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
                        | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    x87_r7_7 = 60.0;
            }
            else
                x87_r7_7 = 3.0;

            long double x87_r7_13 = (sub_4a5760(0.69999999999999996, x87_r7_7 * 50.0)
                + x87_r7_7 * 0.100000001f) * *(eax_1 + 0x660);
            float var_24;
            var_88 = x87_r7_13 * var_24;
            float var_18;
            float var_84_2 = x87_r7_13 * var_18;
            float var_c;
            float var_80_2 = x87_r7_13 * var_c;
        }

        double* var_78_1 = &var_40;
        int32_t eax_6 = *(a4 + 0x4d0);
        char var_7c = *(a4 + 0x4d1);
        void* var_74_1 = &var_28;
        int32_t var_68_1 = eax_6;
        float* var_70_1 = &var_88;
        char var_7b_1 = 0;
        int32_t var_6c_1 = 0;
        int32_t var_64_1 = *(a4 + 0x4d2);
        int32_t var_60_1 = *(edi + 0x1ec);
        float var_5c_1 = 0f;
        float var_58_1 = 0f;
        void* var_50_1 = a4;
        int32_t var_54_1 = *(a4 + 0x4d4);
        uint32_t eax_9 = sub_460bf0();
        int32_t edx_5 = 0;
        edx_5 = *(a + 0x1c);
        a = (*(((eax_9 * 0x180 + edx_5) << 2) + &g_a96ae0))(a, &var_7c);
        *(a4 + 0x4d1) = 0;
        *(a4 + 0x4d2) = 0;
        *(a4 + 0x4d3) = var_7b_1;
        *(edi + 0x128) = (var_5c_1 + *(edi + 0x128)) * 0.899999976f;
        *(edi + 0x134) = (var_58_1 + *(edi + 0x134)) * 0.899999976f;
    }

    return a;
}
