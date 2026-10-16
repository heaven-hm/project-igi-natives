#include "00433B50-FUN_00433B50.h"
/* 0x00433b50 FUN_00433B50 full linked: callers=1 callees=12 */
void* FUN_00433B50(double* a1)

{
    void* ebp = *(a1 + 0x1b4);
    void* edi = *(ebp + 0x2d4);
    long double x87_r7_2 = a1[0x1f] / (*(edi + 0x1c) * 37.9259262f);
    long double temp0 = 0f;
    x87_r7_2 - temp0;

    if (!(*(&((x87_r7_2 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp0) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double temp1_1 = 1f;
        x87_r7_2 - temp1_1;

        if (!(*(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_2 = 1f;
    }
    else
        x87_r7_2 = 0f;

    int32_t i = 0;

    if (*(ebp + 0x148) > 0)
    {
        char* ecx_1 = a1 + 0x1d4;

        do
        {
            *ecx_1 = !*(a1 + 0x82d);
            i += 1;
            ecx_1 = &ecx_1[0x38];
        } while (i < *(ebp + 0x148));
    }

    long double x87_r6 = a1[0xe4];
    long double temp2 = 0.800000012f;
    x87_r6 - temp2;
    float var_70;

    if (!(*(&((x87_r6 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r6, temp2) ? 1 : 0) << 0xa
            | (x87_r6 == temp2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        var_70 = *(edi + 0x20);
    else
        var_70 = *(edi + 0x24);

    long double x87_r6_1 = a1[0xe4];
    long double x87_r5_1;
    long double temp3_1;

    if (a1[0x37])
    {
        x87_r5_1 = a1[0xe6];
        temp3_1 = 1f;
        x87_r5_1 - temp3_1;
    }

    float var_74;

    if (!a1[0x37] || !(*(&((x87_r5_1 < temp3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_1, temp3_1) ? 1 : 0) << 0xa | (x87_r5_1 == temp3_1 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1))
        var_74 = a1[0xe6];
    else
        var_74 = a1[0xe6] - 0.600000024f;

    long double temp4 = var_74;
    x87_r6_1 - temp4;

    if (!(*(&((x87_r6_1 < temp4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp4) ? 1 : 0) << 0xa
        | (x87_r6_1 == temp4 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
    {
        long double temp5_1 = var_74;
        x87_r6_1 - temp5_1;

        if (!(*(&((x87_r6_1 < temp5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp5_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
        {
            x87_r6_1 = x87_r6_1 - var_70;
            long double temp8_1 = var_74;
            x87_r6_1 - temp8_1;

            if (*(&((x87_r6_1 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == temp8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_1 = var_74;
        }
    }
    else
    {
        x87_r6_1 = x87_r6_1 + var_70;
        long double temp6_1 = var_74;
        x87_r6_1 - temp6_1;

        if (!(*(&((x87_r6_1 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp6_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == temp6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            x87_r6_1 = var_74;
    }

    long double temp7 = 0.00100000005f;
    x87_r6_1 - temp7;

    if (*(&((x87_r6_1 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, temp7) ? 1 : 0) << 0xa
            | (x87_r6_1 == temp7 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_1 = 0f;

    float eax_5 = *(edi + 8);
    float ecx_3 = *(edi + 0x10);
    float edx_3 = *(edi + 0x18);
    a1[0xe4] = x87_r6_1;
    long double x87_r7_6 = 0.995000005f - x87_r7_2 * 0.000829999975f;
    float var_70_2 = ((1f - eax_5) * *(a1 + 0x734) + eax_5 * *(a1 + 0x724)) * x87_r7_6;
    *(a1 + 0x724) = var_70_2;
    float var_74_2 = ((1f - ecx_3) * a1[0xe7] + ecx_3 * a1[0xe5]) * x87_r7_6;
    float ecx_4 = var_74_2;
    a1[0xe5] = ecx_4;
    long double x87_r7_7 = x87_r7_6 * ((1f - edx_3) * *(a1 + 0x73c) + edx_3 * *(a1 + 0x72c));
    *(a1 + 0x72c) = x87_r7_7;
    long double x87_r6_18 = var_70_2;
    long double temp9 = 0f;
    x87_r6_18 - temp9;
    float var_68;
    float var_50;
    float var_28;
    float var_24;
    float var_20;
    float var_1c;
    float var_18;
    float var_14;
    float var_10;
    float var_c;
    float var_8;

    if (!(*(&((x87_r6_18 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_18, temp9) ? 1 : 0) << 0xa
        | (x87_r6_18 == temp9 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_433d6a:
        long double x87_r7_9;
        long double temp12_1;

        if (a1[0x37])
        {
            x87_r7_9 = a1[0x1f];
            temp12_1 = 10f;
            x87_r7_9 - temp12_1;
        }

        if (!a1[0x37] || !(*(&((x87_r7_9 < temp12_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_9, temp12_1) ? 1 : 0) << 0xa | (x87_r7_9 == temp12_1 ? 1 : 0) << 0xe)
            + 1) & 1))
        {
            var_68 = var_70_2 * *(edi + 4) * 0.00872664619f;
            long double x87_r7_15 = var_74_2 * *(edi + 0xc) * 0.00872664619f;
            long double x87_r7_17 = -((x87_r7_15 + var_68));
            long double x87_r6_20 = *(edi + 4);
            x87_r7_17 - x87_r6_20;

            if (!(*(&((x87_r7_17 < x87_r6_20 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, x87_r6_20) ? 1 : 0) << 0xa
                    | (x87_r7_17 == x87_r6_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                x87_r7_17 = *(edi + 4);

            sub_4b3b60(&var_50, x87_r7_17);
            long double x87_r7_20 = x87_r7_15 - var_68;
            long double x87_r6_21 = *(edi + 4);
            x87_r7_20 - x87_r6_21;

            if (!(*(&((x87_r7_20 < x87_r6_21 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_20, x87_r6_21) ? 1 : 0) << 0xa
                    | (x87_r7_20 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                x87_r7_20 = *(edi + 4);

            var_68 = x87_r7_20;
            sub_4b3b60(&var_28, var_68);
            float var_4c;
            float var_48;
            var_68 = var_50 * *(edi + 0x84) + var_48 * *(edi + 0x8c) + var_4c * *(edi + 0x88);
            float var_44;
            float var_40;
            float var_3c;
            float var_64_1 =
                var_3c * *(edi + 0x8c) + var_40 * *(edi + 0x88) + var_44 * *(edi + 0x84);
            float var_34;
            float var_30;
            long double x87_r7_32 = var_30 * *(edi + 0x8c) + var_34 * *(edi + 0x88);
            float var_38;
            long double x87_r6_33 = var_38 * *(edi + 0x84);
            a1[0xf4] = var_68;
            *(a1 + 0x7a4) = var_64_1;
            long double x87_r7_34 = var_28;
            a1[0xf5] = x87_r7_32 + x87_r6_33;
            var_68 = x87_r7_34 * *(edi + 0xa0) + var_20 * *(edi + 0xa8) + var_24 * *(edi + 0xa4);
            ecx_4 = var_1c * *(edi + 0xa0) + var_14 * *(edi + 0xa8) + var_18 * *(edi + 0xa4);
            long double x87_r7_44 = var_10 * *(edi + 0xa0) + var_8 * *(edi + 0xa8);
            long double x87_r6_45 = var_c * *(edi + 0xa4);
            *(a1 + 0x7bc) = var_68;
            a1[0xf8] = ecx_4;
            *(a1 + 0x7c4) = x87_r7_44 + x87_r6_45;
        }
    }
    else
    {
        long double x87_r6_19 = var_74_2;
        long double temp10_1 = 0f;
        x87_r6_19 - temp10_1;

        if (!(*(&((x87_r6_19 < temp10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_19, temp10_1) ? 1 : 0) << 0xa
                | (x87_r6_19 == temp10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_433d6a;

        long double temp11_1 = 0f;
        x87_r7_7 - temp11_1;

        if (!(*(&((x87_r7_7 < temp11_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == temp11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_433d6a;
    }

    int16_t eax_16;
    eax_16 = *(a1 + 0x744);

    if (!eax_16)
    {
        *(a1 + 0x764) = *(edi + 0x48);
        *(a1 + 0x79c) = *(edi + 0x80);
        a1[0xf7] = *(edi + 0x9c);
        ecx_4 = *(edi + 0x64);
        a1[0xf0] = ecx_4;
    }
    else
    {
        *(a1 + 0x764) = *(edi + 0x48) * 3f;
        *(a1 + 0x79c) = *(edi + 0x64) * 0.375f;
        a1[0xf7] = *(edi + 0x64) * 0.375f;
        a1[0xf0] = *(edi + 0x64) * 0.75f;
    }

    eax_16 = *(a1 + 0x82e);

    if (eax_16)
    {
        int32_t var_44_1 = 0;
        int32_t var_40_1 = 0;
        int32_t var_3c_1 = 0;
        float var_4c_1 = *(ebp + 8) * 6489.4292f;
        var_50 = 0f;
        int32_t var_48_1 = 0;
        ecx_4 = sub_4ecf50(&a1[0x1e], &var_50);
    }

    long double x87_r7_56 = a1[0xe4];
    long double temp13 = 0f;
    x87_r7_56 - temp13;

    if (!(*(&((x87_r7_56 < temp13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, temp13) ? 1 : 0) << 0xa
        | (x87_r7_56 == temp13 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_58 = *(ebp + 8) * a1[0xe4];
        int32_t eax_18 = a1[0x37];
        var_50 = 0f;
        float var_48_2 = 0f;
        float var_4c_2 = x87_r7_58 * 44.6008873f;

        if (!eax_18)
        {
            float var_88_4 = ecx_4;
            sub_4b3be0(&var_28, *(edi + 0x14) * *(a1 + 0x72c) * 0.0087266462599716512);
            var_68 = var_20 * var_48_2 + var_24 * var_4c_2 + var_28 * var_50;
            float var_4c_3 = var_14 * var_48_2 + var_18 * var_4c_2 + var_1c * var_50;
            long double x87_r6_57 = var_10 * var_50;
            var_50 = var_68;
            float var_48_3 = var_8 * var_48_2 + var_c * var_4c_2 + x87_r6_57;
        }

        int32_t var_44_2 = 0;
        int32_t var_40_2 = 0x47200000;
        int32_t var_3c_2 = 0;
        sub_4ecf50(&a1[0x1e], &var_50);
    }

    Vehicle_CheckFlightDynamics_3(a1);

    if (!sub_4fc7b0(a1))
    {
        double* var_64_4 = a1;

        if (*(edi + 0x28))
        {
            long double x87_r7_75;
            long double temp15_1;

            if (a1[0x37])
            {
                x87_r7_75 = a1[0x1f];
                temp15_1 = 1137.77783f;
                x87_r7_75 - temp15_1;
            }

            if (!a1[0x37] || !(*(&((x87_r7_75 < temp15_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_75, temp15_1) ? 1 : 0) << 0xa
                | (x87_r7_75 == temp15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                float var_5c = a1[0x21];
                float ecx_10 = *(a1 + 0x10c);
                var_5c = -(var_5c);
                float var_58_2 = -(ecx_10);
                float var_54_2 = -(a1[0x22]);
                sub_4ec2c0(&a1[0xe9], *(edi + 0x28), 0.000326999987f, &a1[0x1e], &a1[0xe],
                    &var_5c);
            }
        }

        sub_4fc0e0(a1, 44.6008873f, 1f, 0.920000017f, Level_StartMission_4(), 0xc, &var_68);
    }

    void* eax_27 = a1[0x1d];

    if (eax_27)
    {
        var_68 = &a1[4];
        void* var_64_5 = &a1[0xe];
        double* var_60_4 = a1;
        int32_t* i_3 = *(eax_27 + 8);

        if (*i_3)
        {
            int32_t eax_37;

            for (int32_t* i_1 = i_3; i_1; i_1 = *((eax_37 << 2) + &g_afa6e0))
            {
                int32_t* ecx_13 = *i_1;
                void* eax_31;

                if (!ecx_13)
                    eax_31 = nullptr;
                else
                {
                    int32_t eax_28 = *ecx_13;
                    int32_t eax_29 = -(eax_28);
                    eax_31 = (eax_29 - eax_29) & ecx_13;
                }

                int32_t ecx_14 = g_afa7e0;
                *((ecx_14 << 2) + &g_afa6e0) = eax_31;
                g_afa7e0 = ecx_14 + 1;
                uint32_t eax_33 = MagicObj_GetEventId();
                int32_t eax_34 = 0;
                eax_34 = i_1[7];
                int32_t eax_35 = *(((eax_33 * 0x180 + eax_34) << 2) + &g_a96ae0);

                if (eax_35)
                    eax_35(i_1, &var_68);

                eax_37 = g_afa7e0 - 1;
                g_afa7e0 = eax_37;
            }
        }
    }

    void* result = a1[0x105];

    if (result)
    {
        int32_t edx_16 = a1[0xe4];
        var_68 = 1.40129846e-45f;
        *(result + 4) = edx_16;
        long double x87_r7_82 = a1[0xe4];
        long double temp14_1 = 0.00999999978f;
        x87_r7_82 - temp14_1;

        if (*(&((x87_r7_82 < temp14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_82, temp14_1) ? 1 : 0) << 0xa
                | (x87_r7_82 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            var_68 = 0f;

        result = a1[0x105];
        *(result + 8) = var_68;
    }

    int32_t* i_2 = a1[1];
    var_68 = &a1[4];
    void* var_64_6 = &a1[0xe];

    if (*i_2 && i_2)
    {
        int32_t edx_18 = g_afa7e0;

        do
        {
            int32_t* ecx_17 = *i_2;
            void* eax_42;

            if (!ecx_17)
                eax_42 = nullptr;
            else
            {
                int32_t eax_39 = *ecx_17;
                int32_t eax_40 = -(eax_39);
                eax_42 = (eax_40 - eax_40) & ecx_17;
            }

            *((edx_18 << 2) + &g_afa6e0) = eax_42;
            g_afa7e0 = edx_18 + 1;
            uint32_t eax_44 = sub_4c5800();
            int32_t ecx_18 = 0;
            ecx_18 = i_2[7];
            result = *(((eax_44 * 0x180 + ecx_18) << 2) + &g_a96ae0);

            if (result)
                result = result(i_2, &var_68);

            edx_18 = g_afa7e0 - 1;
            g_afa7e0 = edx_18;
            i_2 = *((edx_18 << 2) + &g_afa6e0);
        } while (i_2);
    }

    return result;
}
