#include "0045D5B0-Soldier_DeathFallSolver.h"
/* 0x0045d5b0 Soldier_DeathFallSolver full linked: callers=8 callees=17 */
double* sub_45d5b0(double* a1, void* a2, int32_t* a3, int32_t* a4)

{
    int32_t var_68c = 0;
    int32_t* var_690 = a4;
    int32_t i_1 = 0xffffffff;
    float var_624;
    sub_4d6fc0(&var_624, nullptr, a2 + 0x68, var_690, var_68c);
    float var_61c = 0f;
    float var_66c;
    sub_4d6fc0(&var_66c, nullptr, a2 + 0x68, a4, sub_4d7020(a3, a4) - 1);
    long double x87_r7_1 = var_66c - var_624;
    float var_668;
    float var_620;
    float var_668_1 = var_668 - var_620;
    long double x87_r6_3 = -(var_61c);
    long double x87_r5 = var_668_1;
    long double x87_r2_4 = sqrtl(x87_r6_3 * x87_r6_3 + x87_r7_1 * x87_r7_1 + x87_r5 * x87_r5);
    long double temp0 = 0f;
    x87_r2_4 - temp0;

    if (!(*(&((x87_r2_4 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_4, temp0) ? 1 : 0) << 0xa
        | (x87_r2_4 == temp0 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x41))
    {
        long double x87_r4_3 = x87_r2_4 + 4096f;
        float eax_5 = *(a2 + 0x50c);
        float var_5d8;
        var_690 = &var_5d8;
        long double x87_r5_3 = x87_r4_3 / x87_r4_3;
        var_66c = x87_r5_3 * x87_r7_1;
        float var_668_2 = x87_r5_3 * var_668_1;
        long double x87_r5_4 = x87_r5_3 * x87_r6_3;
        float var_664_1 = x87_r5_4;
        long double x87_r6_6 = var_668_2;
        long double x87_r5_5 = var_66c;
        float var_644_1 = sqrtl(x87_r5_4 * x87_r5_4 + x87_r5_5 * x87_r5_5 + x87_r6_6 * x87_r6_6);
        double var_65c = var_66c;
        double var_654_1 = var_668_2;
        double var_64c_1 = x87_r5_4;
        sub_4b3be0(var_690, eax_5);
        float var_670_1 = -3276.80005f;
        int32_t eax_6 = 0;
        float var_5d4;
        float var_5d0;
        double var_640 = var_5d0 * var_64c_1 + var_5d4 * var_654_1 + var_5d8 * var_65c;
        float var_5cc;
        float var_5c8;
        float var_5c4;
        double var_638_1 = var_5c4 * var_64c_1 + var_5c8 * var_654_1 + var_5cc * var_65c;
        float var_5c0;
        float var_5bc;
        float var_5b8;
        double var_630_1 = var_5b8 * var_64c_1 + var_5bc * var_654_1 + var_5c0 * var_65c;
        int32_t ecx_1 = memcpy(&var_65c, &var_640, 0x18);
        int32_t var_678_1 = 3;
        double var_608_1;
        void var_5b0;

        while (true)
        {
            int32_t ebx_1 = eax_6;
            int32_t var_660_1 = 0xffffffff;
            bool cond:0_1;

            do
            {
                int32_t var_68c_2 = ecx_1;
                float var_68c_3 = var_660_1 * 22f * 0.0174532924f;
                float var_600;
                var_690 = &var_600;
                sub_4b3be0(var_690, var_68c_3);
                double* eax_8 = &var_690 + ebx_1 + 0xe8;
                long double x87_r6_25 = var_600 * var_640;
                memcpy(&var_690 + ebx_1 + 0x1c0, a2 + 0x20, 0x18);
                ebx_1 += 0x18;
                float var_5f4;
                float var_5f0;
                float var_5ec;
                double var_610_1 = var_5ec * var_630_1 + var_5f0 * var_638_1 + var_5f4 * var_640;
                ecx_1 = memcpy(eax_8, a2 + 0x20, 0x18);
                float var_5e8;
                float var_5e4;
                float var_5e0;
                var_608_1 = var_5e0 * var_630_1 + var_5e4 * var_638_1 + var_5e8 * var_640;
                void var_4d8;
                *(&var_4d8 + ebx_1) = var_670_1 + *(&var_4d8 + ebx_1);
                float var_5fc;
                float var_5f8;
                *eax_8 = var_5f8 * var_630_1 + var_5fc * var_638_1 + x87_r6_25 + *eax_8;
                cond:0_1 = var_660_1 + 1 < 2;
                var_660_1 += 1;
                *(&var_5b8 + ebx_1) = var_610_1 + *(&var_5b8 + ebx_1);
                *(&var_5b0 + ebx_1) = var_670_1 + *(&var_5b0 + ebx_1) + var_608_1;
            } while (cond:0_1);
            int32_t temp1_1 = var_678_1;
            var_678_1 -= 1;
            var_670_1 = var_670_1 + 1638.40002f;

            if (temp1_1 == 1)
                break;

            eax_6 += 0x48;
        }

        int32_t var_68c_4 = 0xffffffff;
        var_690 = &var_5b0;
        void* var_5ac_1 = a2;
        char eax_12 = Level_LoadObjects_4();
        double var_5a8[0x1a];
        double var_4d0;
        void var_3f8;
        sub_4cc2a0(Level_StartMission_4(), &var_3f8, &var_4d0, &var_5a8, 9, eax_12, var_690,
            var_68c_4);
        int32_t i = 0;
        var_398;
        double* edx_2 = &var_398;

        do
        {
            if (edx_2[-1])
            {
                int32_t i_2 = i_1;
                long double x87_r7_31;
                long double temp2_1;

                if (i_2 != 0xffffffff)
                {
                    x87_r7_31 = *edx_2;
                    temp2_1 = *(&var_398 + i_2 * 0x70);
                    x87_r7_31 - temp2_1;
                }

                if (i_2 == 0xffffffff || *(&((x87_r7_31 < temp2_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_31, temp2_1) ? 1 : 0) << 0xa
                        | (x87_r7_31 == temp2_1 ? 1 : 0) << 0xe) + 1) & 1)
                    i_1 = i;
            }

            i += 1;
            edx_2 = &edx_2[0xe];
        } while (i < 9);

        int32_t i_3 = i_1;

        if (i_3 >= 0)
        {
            var_608_1 = 0;
            *(&var_608_1 + 4) = 0;
            int64_t var_3f0[0x7d];
            double var_618 = (&var_4d0)[i_3 * 3] - var_3f0[i_3 * 0xe];
            int64_t var_4c8[0x1a];
            var_3e8;
            long double x87_r7_35 = var_4c8[i_3 * 3] - *(&var_3e8 + i_3 * 0x70);
            var_690 = a3;
            double var_610_2 = x87_r7_35;
            float var_678_2 = sub_4d74d0(var_690, a4) * 30f;

            if (sub_4b3320(&var_618))
            {
                long double x87_r7_39 = 1.0 / var_678_2;
                memcpy(a1, &var_640, 0x18);
                *a1 = -((x87_r7_39 * *a1));
                a1[1] = -((x87_r7_39 * a1[1]));
                a1[2] = -((x87_r7_39 * a1[2]));
                return a1;
            }

            long double st0_2 = sub_4b3130(&var_618);
            long double x87_r6_42 = var_644_1;
            st0_2 - x87_r6_42;

            if (*(&((st0_2 < x87_r6_42 ? 1 : 0) << 8 | (FCMP_UO(st0_2, x87_r6_42) ? 1 : 0) << 0xa
                | (st0_2 == x87_r6_42 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double x87_r7_45 = 1.0 - st0_2 / var_644_1;
                var_65c = x87_r7_45 * var_640;
                double var_654_2 = x87_r7_45 * var_654_1;
                double var_64c_2 = x87_r7_45 * var_64c_1;
                long double x87_r7_48 = 1.0 / var_678_2;
                memcpy(a1, &var_65c, 0x18);
                *a1 = -((x87_r7_48 * *a1));
                a1[1] = -((x87_r7_48 * a1[1]));
                a1[2] = -((x87_r7_48 * a1[2]));
                return a1;
            }
        }
    }

    __builtin_memset(a1, 0, 0x18);
    return a1;
}
