#include "0045FA80-Human_Cleanup_2.h"
/* 0x0045fa80 Human_Cleanup_2 full linked: callers=0 callees=9 */
void* sub_45fa80(void* a1, int32_t* a2)

{
    void* result = sub_4c3440(a1);
    void* result_2 = result;
    void* edx = *a2;
    result = *(a1 + 0xcf6);
    double var_a0;
    memcpy(&var_a0, result_2, 0x18);
    double var_b8;
    memcpy(&var_b8, edx + 0x20, 0x18);
    double var_88 = var_b8 - var_a0;
    double var_b0;
    double var_98;
    double var_80 = var_b0 - var_98;
    double var_a8;
    double var_90;
    double var_78 = var_a8 - var_90;

    if (result)
    {
        long double x87_r7_6 = *(edx + 0x9c);
        long double x87_r6_1 = *(edx + 0xa0);
        x87_r6_1 - x87_r7_6;
        long double x87_r7_7;

        if (!(*(&((x87_r6_1 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_6) ? 1 : 0) << 0xa
                | (x87_r6_1 == x87_r7_6 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_7 = *(edx + 0xa0);
        else
            x87_r7_7 = *(edx + 0x9c);

        long double x87_r6_2 = *(edx + 0x98);
        x87_r6_2 - x87_r7_7;
        long double x87_r7_9;

        if (*(&((x87_r6_2 < x87_r7_7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_7) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_10 = *(edx + 0x9c);
            long double x87_r6_3 = *(edx + 0xa0);
            x87_r6_3 - x87_r7_10;

            if (!(*(&((x87_r6_3 < x87_r7_10 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_3, x87_r7_10) ? 1 : 0) << 0xa
                    | (x87_r6_3 == x87_r7_10 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_9 = *(edx + 0xa0);
            else
                x87_r7_9 = *(edx + 0x9c);
        }
        else
            x87_r7_9 = *(edx + 0x98);

        float var_e4_1 = x87_r7_9;
        var_e4_1 = sub_4d0950(*(edx + 0x6c)) * var_e4_1;
        long double st0_2;
        st0_2 = sub_4b3130(&var_88);
        long double temp0_1 = var_e4_1;
        st0_2 - temp0_1;
        result = (st0_2 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_2, temp0_1) ? 1 : 0) << 0xa
            | (st0_2 == temp0_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 0x41)
        {
            double* var_dc = &var_a0;
            double* var_d8_1 = &var_b8;
            char var_d0 = 0xff;
            int32_t var_cc_1 = 0;
            void var_70;
            void* var_bc_1 = &var_70;
            int32_t var_d4_1 = 1;
            int32_t var_c8_1 = 0;
            int32_t var_c4_1 = 0;
            int32_t var_c0;
            __builtin_strncpy(&var_c0, "DCBA", 4);
            void* result_1 = nullptr;
            int32_t var_24_1 = 0;
            int32_t var_20_1 = 0;
            int16_t eax_2 = sub_4c48c0();
            (*((eax_2 << 2) + &g_a9a0e0))(*a2, &var_dc);
            result = result_1;

            if (!result || var_20_1)
            {
                float* eax_5 = a2[1];
                float var_e4_2 = 0f;
                long double x87_r7_14 = eax_5[2];
                long double x87_r6_4 = eax_5[1];
                long double x87_r5_1 = *eax_5;
                long double x87_r4_5 =
                    sqrtl(x87_r6_4 * x87_r6_4 + x87_r7_14 * x87_r7_14 + x87_r5_1 * x87_r5_1);
                long double temp1_1 = 50f;
                x87_r4_5 - temp1_1;

                if (!(*(&((x87_r4_5 < temp1_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r4_5, temp1_1) ? 1 : 0) << 0xa
                        | (x87_r4_5 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
                    var_e4_2 = 10000f;

                *(a1 + 0x2e8) = 0xd;
                char eax_7 = sub_463150(a1);

                if (eax_7)
                    result = Human_HitDamage();

                if (!eax_7 || !result)
                {
                    result = *(a1 + 0x800);

                    if (!result || !*(result + 0x3abc))
                    {
                        *(a1 + 0x2c8) = var_e4_2 + *(a1 + 0x2c8);
                        long double x87_r7_19 = var_e4_2 + *(a1 + 0x254);
                        *(a1 + 0x254) = x87_r7_19;
                        long double temp2_1 = *(a1 + 0x258);
                        x87_r7_19 - temp2_1;
                        result = (x87_r7_19 < temp2_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_19, temp2_1) ? 1 : 0) << 0xa
                            | (x87_r7_19 == temp2_1 ? 1 : 0) << 0xe;

                        if (!(*(&result + 1) & 1))
                        {
                            int32_t eax_8 = *(a1 + 0x2f4);
                            *(a1 + 0xcf5) = 1;
                            result = eax_8 | 0x20000;
                            *(a1 + 0x2f4) = result;
                        }
                    }
                }
            }
        }
    }

    return result;
}
