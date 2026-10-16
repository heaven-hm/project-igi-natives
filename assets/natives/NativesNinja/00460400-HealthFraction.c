#include "00460400-HealthFraction.h"
/* 0x00460400 HealthFraction full linked: callers=0 callees=19 */
int32_t sub_460400(int32_t a1, int32_t* a2)

{
    int32_t* ebx = a2;
    void* ebp = *ebx;
    void* esi = *(Level_LoadLevel_6() + 0x5c);
    int32_t eax_1 = g_c28b44;
    int32_t ecx = g_c28b48;
    int32_t result = *(esi + 0xe8);

    if (result == 1)
    {
        void* esi_1 = Table_GetAt(a1 + 0x4c4, 0);

        if (esi_1)
        {
            uint32_t eax_4 = sub_487190();
            int32_t ecx_1 = 0;
            ecx_1 = *(esi_1 + 0x1c);
            void* eax_2 = *(((eax_4 * 0x180 + ecx_1) << 2) + &g_a96ae0);

            if (eax_2)
                eax_2(esi_1, ebx);
        }

        if (*(a1 + 0x7b8))
            sub_4872b0(*ebx);
        else if (!sub_463740(a1))
            sub_4872b0(*ebx);
        else
        {
            a2 = *ebx;
            int32_t ecx_2 = 0;
            ecx_2 = *(sub_463740(a1) + 0x1c);
            int32_t esi_4 = *(((ecx_2 + Level_SetMission_2() * 0x180) << 2) + &g_a96ae0);

            if (esi_4)
                esi_4(sub_463740(a1), &a2);
        }

        long double x87_r7_3 = 1f - *(a1 + 0x254) / *(a1 + 0x258);
        float var_14_1 = x87_r7_3;
        long double temp0_1 = 0f;
        x87_r7_3 - temp0_1;

        if (*(&((x87_r7_3 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp0_1) ? 1 : 0) << 0xa
                | (x87_r7_3 == temp0_1 ? 1 : 0) << 0xe) + 1) & 1)
            var_14_1 = 0f;

        float var_10_1 = eax_1 * 0.0625f;
        a2 = sub_4b6ce0(ebp + 0x8c);
        a2 = var_10_1 - a2 * 0.5f;
        float var_c_1 = ecx * 0.895833313f;
        int32_t eax_16 = sub_4b6d00(ebp + 0x8c);
        result = sub_4b4e00(ebp + 0x8c, a2, var_c_1 - eax_16 * 0.5f, 128f, 128f, 128f, 0, 0, 0);
        long double x87_r7_14 = var_14_1;
        long double temp1_1 = 0f;
        x87_r7_14 - temp1_1;
        result = (x87_r7_14 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == temp1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
        {
            a2 = var_10_1 - 2f;
            a1 = var_c_1 - 2f;
            long double x87_r7_20 = sub_4b6ce0(ebp + 0xa4) * 0.5f;
            float var_4_1 = a2 - x87_r7_20;
            float var_10_2 = a1 - sub_4b6d00(ebp + 0xa4) * 0.5f;
            float var_c_2 = sub_4b6ce0(ebp + 0xa4) * 0.5f + a2;
            a2 = sub_4b6d00(ebp + 0xa4);
            float var_8_4 = a2 * 0.5f + a1;
            a2 = 1f - var_14_1;
            int32_t eax_22 = sub_4b6d00(ebp + 0xa4);
            int32_t* eax_23 = a2;
            float var_10_3 = eax_22 * a2 + var_10_2;
            return sub_4b5560(ebp + 0xa4, var_4_1, var_10_3, var_c_2, var_10_3, var_4_1, var_8_4,
                var_c_2, var_8_4, 0, eax_23, 0x3f800000, eax_23, 0, 0x3f800000, 0x3f800000,
                0x3f800000, 128f, 128f, 128f, 0, 0x3f800000, 0, 0x80000, 0);
        }
    }

    return result;
}
