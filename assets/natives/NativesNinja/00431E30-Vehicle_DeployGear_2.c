#include "00431E30-Vehicle_DeployGear_2.h"
/* 0x00431e30 Vehicle_DeployGear_2 full linked: callers=1 callees=12 */
int32_t Vehicle_DeployGear_2(float a1)

{
    long double x87_r7 = *(a1 + 0x720);
    long double temp1 = 0.80000000000000004;
    x87_r7 - temp1;
    void* edx = *(a1 + 0x1b4);
    void* ecx = *(edx + 0x2d4);
    float eax_1;

    if (!(*(&((x87_r7 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp1) ? 1 : 0) << 0xa
            | (x87_r7 == temp1 ? 1 : 0) << 0xe) + 1) & 1))
        eax_1 = *(ecx + 0x20);
    else
        eax_1 = *(ecx + 0x24);

    long double x87_r7_1 = *(a1 + 0x720);
    long double temp2 = *(a1 + 0x730);
    x87_r7_1 - temp2;

    if (!(*(&((x87_r7_1 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp3_1 = *(a1 + 0x730);
        x87_r7_1 - temp3_1;

        if (!(*(&((x87_r7_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            x87_r7_1 = x87_r7_1 - eax_1;
            long double temp6_1 = *(a1 + 0x730);
            x87_r7_1 - temp6_1;

            if (*(&((x87_r7_1 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp6_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_1 = *(a1 + 0x730);
        }
    }
    else
    {
        x87_r7_1 = x87_r7_1 + eax_1;
        long double temp4_1 = *(a1 + 0x730);
        x87_r7_1 - temp4_1;

        if (!(*(&((x87_r7_1 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_1 = *(a1 + 0x730);
    }

    long double temp5 = 0.00100000005f;
    x87_r7_1 - temp5;

    if (*(&((x87_r7_1 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp5) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
    {
        long double x87_r6_1 = *(a1 + 0x730);
        long double temp8_1 = 0f;
        x87_r6_1 - temp8_1;

        if (*(&((x87_r6_1 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp8_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            x87_r7_1 = 0f;
    }

    long double x87_r6_2 = *(ecx + 8);
    float ecx_1 = *(ecx + 0x18);
    float var_78 = *(ecx + 0x10);
    float var_74 = ecx_1;
    *(a1 + 0x720) = x87_r7_1;
    float var_80_1 = (1f - x87_r6_2) * *(a1 + 0x734) + x87_r6_2 * *(a1 + 0x724);
    long double x87_r6_6 = 1f - var_78;
    *(a1 + 0x724) = var_80_1;
    float var_7c = x87_r6_6 * *(a1 + 0x738) + var_78 * *(a1 + 0x728);
    long double x87_r6_10 = 1f - var_74;
    *(a1 + 0x728) = var_7c;
    var_78 = x87_r6_10 * *(a1 + 0x73c) + var_74 * *(a1 + 0x72c);
    long double x87_r6_13 = var_80_1;
    long double temp7 = 0f;
    x87_r6_13 - temp7;
    *(a1 + 0x72c) = var_78;
    float var_50;
    float var_28;
    float var_24;
    float var_20;
    float var_1c;
    float var_18;
    float var_14;

    if (!(*(&((x87_r6_13 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, temp7) ? 1 : 0) << 0xa
        | (x87_r6_13 == temp7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_431fb7:
        long double x87_r6_16;
        long double temp10_1;

        if (*(a1 + 0x1b8))
        {
            x87_r6_16 = *(a1 + 0xf8);
            temp10_1 = 2f;
            x87_r6_16 - temp10_1;
        }

        if (!*(a1 + 0x1b8) || !(*(&((x87_r6_16 < temp10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_16, temp10_1) ? 1 : 0) << 0xa
            | (x87_r6_16 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            void* eax_9 = *(edx + 0x2d4);
            var_74 = var_80_1 * *(eax_9 + 4);
            float var_7c_1 = var_7c * *(eax_9 + 0xc);
            long double x87_r6_22 = var_78 * *(eax_9 + 0x14);
            int32_t var_44_1 = 0;
            int32_t var_40_1 = 0;
            int32_t var_3c_1 = 0x444ccccd;
            var_50 = 0f;
            int32_t var_48_1 = 0;
            int32_t var_68_1 = 0;
            int32_t var_64_1 = 0;
            int32_t var_60_1 = 0x43cccccd;
            int32_t var_70_1 = 0;
            int32_t var_6c_1 = 0;
            var_1c = 0f;
            var_18 = 12288f;
            var_14 = 0f;
            var_24 = 0f;
            float var_4c_1 = var_74 * *(edx + 8) * -0.800000012f;
            var_20 = 0f;
            var_74 = var_7c_1 * *(edx + 8);
            var_28 = x87_r7_1 * x87_r6_22 * *(edx + 8) * 0.0799999982f;
            sub_4ecf50(a1 + 0xf0, &var_50);
            sub_4ecf50(a1 + 0xf0, &var_74);
            sub_4ecf50(a1 + 0xf0, &var_28);
        }
    }
    else
    {
        long double x87_r6_14 = var_7c;
        long double temp9_1 = 0f;
        x87_r6_14 - temp9_1;

        if (!(*(&((x87_r6_14 < temp9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, temp9_1) ? 1 : 0) << 0xa
                | (x87_r6_14 == temp9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_431fb7;

        long double x87_r6_15 = var_78;
        long double temp11_1 = 0f;
        x87_r6_15 - temp11_1;

        if (!(*(&((x87_r6_15 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_15, temp11_1) ? 1 : 0) << 0xa
                | (x87_r6_15 == temp11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_431fb7;
    }

    if (!*(a1 + 0x1b8))
    {
        long double x87_r7_8 = *(a1 + 0xf8);
        long double temp12_1 = 2f;
        x87_r7_8 - temp12_1;

        if (!(*(&((x87_r7_8 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp12_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_9 = *(a1 + 0x78);
            long double x87_r6_28 = *(a1 + 0x84);
            long double x87_r5_10 = *(a1 + 0x90);
            long double x87_r4_1 = *(a1 + 0x70);
            long double temp13_1 = 0f;
            x87_r4_1 - temp13_1;
            float ecx_3 = *(a1 + 0x7c);
            long double x87_r3_1;
            long double temp16_1;

            if (*(&((x87_r4_1 < temp13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_1, temp13_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == temp13_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
            {
                x87_r3_1 = ecx_3;
                temp16_1 = 0f;
                x87_r3_1 - temp16_1;
            }

            long double x87_r7_10;

            if (*(&((x87_r4_1 < temp13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_1, temp13_1) ? 1 : 0) << 0xa
                    | (x87_r4_1 == temp13_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40 && *(&(
                    (x87_r3_1 < temp16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_1, temp16_1) ? 1 : 0) << 0xa
                    | (x87_r3_1 == temp16_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
                x87_r7_10 = var_74;
            else
            {
                long double x87_r3_2 = ecx_3;
                long double x87_r3_4 = 1.0 / sqrtl(x87_r4_1 * x87_r4_1 + x87_r3_2 * x87_r3_2);
                var_74 = x87_r4_1 * x87_r3_4;
                long double temp14_1 = 0f;
                x87_r5_10 - temp14_1;
                bool c1_1 = /* bool c1_1 = unknown  {fmul st0, st3} */;
                long double x87_r4_6 =
                    0f * x87_r5_10 + ecx_3 * x87_r3_4 * x87_r6_28 + var_74 * x87_r7_9;

                x87_r7_10 = *(&((x87_r5_10 < temp14_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (FCMP_UO(x87_r5_10, temp14_1) ? 1 : 0) << 0xa
                    | (x87_r5_10 == temp14_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41
                    ? x87_r4_6 * 0.699999988f : x87_r4_6 * -0.699999988f;
            }

            float var_94_2 = ecx_3;
            sub_4b3b60(&var_28,
                x87_r7_10 * *(*(*(a1 + 0x1b4) + 0x2d4) + 0x14) * 0.00029088820866572169);
            float var_10;
            var_50 = var_28 * *(a1 + 0x70) + var_10 * *(a1 + 0x78) + var_1c * *(a1 + 0x74);
            float var_c;
            float var_4c_2 =
                var_24 * *(a1 + 0x70) + var_c * *(a1 + 0x78) + var_18 * *(a1 + 0x74);
            float var_8;
            float var_48_2 =
                var_20 * *(a1 + 0x70) + var_8 * *(a1 + 0x78) + var_14 * *(a1 + 0x74);
            float var_44_2 =
                var_28 * *(a1 + 0x7c) + var_10 * *(a1 + 0x84) + var_1c * *(a1 + 0x80);
            float var_40_2 =
                var_24 * *(a1 + 0x7c) + var_c * *(a1 + 0x84) + var_18 * *(a1 + 0x80);
            float var_3c_2 =
                var_20 * *(a1 + 0x7c) + var_8 * *(a1 + 0x84) + var_14 * *(a1 + 0x80);
            float var_38_1 =
                var_10 * *(a1 + 0x90) + var_28 * *(a1 + 0x88) + var_1c * *(a1 + 0x8c);
            int32_t var_4;
            int32_t var_2c_1 = *(a1 + 0x94) + var_4 + 1;
            float var_34_1 =
                var_c * *(a1 + 0x90) + var_24 * *(a1 + 0x88) + var_18 * *(a1 + 0x8c);
            float var_30_1 =
                var_8 * *(a1 + 0x90) + var_20 * *(a1 + 0x88) + var_14 * *(a1 + 0x8c);
            memcpy(a1 + 0x70, &var_50, 0x28);
        }
    }

    if (!sub_4fc7b0(a1))
    {
        float var_70_3 = a1;
        Vehicle_UpdateCockpit_2(a1);
        void* eax_15 = *(a1 + 0x1b4);

        if (*(*(eax_15 + 0x2d4) + 0x28))
        {
            float var_5c = *(a1 + 0x108);
            float edx_5 = *(a1 + 0x10c);
            var_5c = -(var_5c);
            float var_58_2 = -(edx_5);
            float var_54_2 = -(*(a1 + 0x110));
            void* eax_16 = *(eax_15 + 0x2d4);
            sub_4ec2c0(eax_16 + 0x2c, *(eax_16 + 0x28), 0.000326999987f, a1 + 0xf0, a1 + 0x70,
                &var_5c);
        }

        sub_4fc0e0(a1, 44.6008873f, 1f, 0.920000017f, Level_StartMission_4(), 0xc, &var_74);
    }

    void* eax_19 = *(a1 + 0xe8);

    if (eax_19)
    {
        var_74 = a1 + 0x20;
        int32_t var_70_4 = a1 + 0x70;
        float var_6c_2 = a1;
        int32_t* i_2 = *(eax_19 + 8);

        if (*i_2)
        {
            int32_t eax_31;

            for (int32_t* i = i_2; i; i = *((eax_31 << 2) + &g_afa6e0))
            {
                int32_t* ecx_10 = *i;
                void* eax_23;

                if (!ecx_10)
                    eax_23 = nullptr;
                else
                {
                    int32_t eax_20 = *ecx_10;
                    int32_t eax_21 = -(eax_20);
                    eax_23 = (eax_21 - eax_21) & ecx_10;
                }

                int32_t ecx_11 = g_afa7e0;
                *((ecx_11 << 2) + &g_afa6e0) = eax_23;
                g_afa7e0 = ecx_11 + 1;
                uint32_t eax_25 = MagicObj_GetEventId();
                int32_t ecx_13 = 0;
                ecx_13 = i[7];
                int32_t eax_29 = *(((eax_25 * 0x180 + ecx_13) << 2) + &g_a96ae0);

                if (eax_29)
                    eax_29(i, &var_74);

                eax_31 = g_afa7e0 - 1;
                g_afa7e0 = eax_31;
            }
        }
    }

    void* eax_32 = *(a1 + 0x748);

    if (eax_32)
    {
        int32_t ecx_14 = *(a1 + 0x720);
        var_74 = 1.40129846e-45f;
        *(eax_32 + 4) = ecx_14;
        long double x87_r7_56 = *(a1 + 0x720);
        long double temp17_1 = 0.00999999978f;
        x87_r7_56 - temp17_1;

        if (*(&((x87_r7_56 < temp17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, temp17_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == temp17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            var_74 = 0f;

        *(*(a1 + 0x748) + 8) = var_74;
    }

    int32_t* i_1 = *(a1 + 8);
    var_74 = a1 + 0x20;
    int32_t var_70_5 = a1 + 0x70;
    int32_t result = *i_1;

    if (result && i_1)
    {
        int32_t edx_9 = g_afa7e0;

        do
        {
            int32_t* ecx_16 = *i_1;
            void* eax_38;

            if (!ecx_16)
                eax_38 = nullptr;
            else
            {
                int32_t eax_35 = *ecx_16;
                int32_t eax_36 = -(eax_35);
                eax_38 = (eax_36 - eax_36) & ecx_16;
            }

            *((edx_9 << 2) + &g_afa6e0) = eax_38;
            g_afa7e0 = edx_9 + 1;
            uint32_t eax_40 = sub_4c5800();
            int32_t eax_41 = 0;
            eax_41 = i_1[7];
            result = *(((eax_40 * 0x180 + eax_41) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, &var_74);

            edx_9 = g_afa7e0 - 1;
            g_afa7e0 = edx_9;
            i_1 = *((edx_9 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
