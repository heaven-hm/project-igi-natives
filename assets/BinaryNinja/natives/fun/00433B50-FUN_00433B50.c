// Original IGI.EXE function: FUN_00433B50 (VA 0x00433B50; static CFG gate PASS, CFG score 1.000).
#include "FUN_00433B50.h"
void* FUN_00433B50(double* a1)

{
    void* flagP = *(a1 + 0x1b4);
    void* dstD = *(flagP + 0x2d4);
    long double x87_r7_2 = a1[0x1f] / (*(dstD + 0x1c) * 37.9259262f);
    long double f0 = 0f;
    x87_r7_2 - f0;

    if (!(*(&((x87_r7_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0) ? 1 : 0) << 0xa
        | (x87_r7_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f1_1 = 1f;
        x87_r7_2 - f1_1;

        if (!(*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_2 = 1f;
    }
    else
        x87_r7_2 = 0f;

    int32_t i = 0;

    if (*(flagP + 0x148) > 0)
    {
        char* objC1 = a1 + 0x1d4;

        do
        {
            *objC1 = !*(a1 + 0x82d);
            i += 1;
            objC1 = &objC1[0x38];
        } while (i < *(flagP + 0x148));
    }

    long double fpu6 = a1[0xe4];
    long double f2 = 0.800000012f;
    fpu6 - f2;
    float v_70;

    if (!(*(&((fpu6 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f2) ? 1 : 0) << 0xa
            | (fpu6 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        v_70 = *(dstD + 0x20);
    else
        v_70 = *(dstD + 0x24);

    long double x87_r6_1 = a1[0xe4];
    long double x87_r5_1;
    long double f3_1;

    if (a1[0x37])
    {
        x87_r5_1 = a1[0xe6];
        f3_1 = 1f;
        x87_r5_1 - f3_1;
    }

    float v_74;

    if (!a1[0x37] || !(*(&((x87_r5_1 < f3_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r5_1, f3_1) ? 1 : 0) << 0xa | (x87_r5_1 == f3_1 ? 1 : 0) << 0xe
            | 0x3000) + 1) & 1))
        v_74 = a1[0xe6];
    else
        v_74 = a1[0xe6] - 0.600000024f;

    long double f4 = v_74;
    x87_r6_1 - f4;

    if (!(*(&((x87_r6_1 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f4) ? 1 : 0) << 0xa
        | (x87_r6_1 == f4 ? 1 : 0) << 0xe | 0x3000) + 1) & 1))
    {
        long double f5_1 = v_74;
        x87_r6_1 - f5_1;

        if (!(*(&((x87_r6_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f5_1) ? 1 : 0) << 0xa
            | (x87_r6_1 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
        {
            x87_r6_1 = x87_r6_1 - v_70;
            long double f8_1 = v_74;
            x87_r6_1 - f8_1;

            if (*(&((x87_r6_1 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f8_1) ? 1 : 0) << 0xa
                    | (x87_r6_1 == f8_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                x87_r6_1 = v_74;
        }
    }
    else
    {
        x87_r6_1 = x87_r6_1 + v_70;
        long double f6_1 = v_74;
        x87_r6_1 - f6_1;

        if (!(*(&((x87_r6_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f6_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41))
            x87_r6_1 = v_74;
    }

    long double f7 = 0.00100000005f;
    x87_r6_1 - f7;

    if (*(&((x87_r6_1 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f7) ? 1 : 0) << 0xa
            | (x87_r6_1 == f7 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
        x87_r6_1 = 0f;

    float valA5 = *(dstD + 8);
    float objC3 = *(dstD + 0x10);
    float tmpD3 = *(dstD + 0x18);
    a1[0xe4] = x87_r6_1;
    long double x87_r7_6 = 0.995000005f - x87_r7_2 * 0.000829999975f;
    float v_70_2 = ((1f - valA5) * *(a1 + 0x734) + valA5 * *(a1 + 0x724)) * x87_r7_6;
    *(a1 + 0x724) = v_70_2;
    float v_74_2 = ((1f - objC3) * a1[0xe7] + objC3 * a1[0xe5]) * x87_r7_6;
    float objC4 = v_74_2;
    a1[0xe5] = objC4;
    long double x87_r7_7 = x87_r7_6 * ((1f - tmpD3) * *(a1 + 0x73c) + tmpD3 * *(a1 + 0x72c));
    *(a1 + 0x72c) = x87_r7_7;
    long double x87_r6_18 = v_70_2;
    long double f9 = 0f;
    x87_r6_18 - f9;
    float v_68;
    float v_50;
    float v_28;
    float v_24;
    float v_20;
    float v_1c;
    float v_18;
    float v_14;
    float v_10;
    float v_c;
    float v_8;

    if (!(*(&((x87_r6_18 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_18, f9) ? 1 : 0) << 0xa
        | (x87_r6_18 == f9 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_433d6a:
        long double x87_r7_9;
        long double f12_1;

        if (a1[0x37])
        {
            x87_r7_9 = a1[0x1f];
            f12_1 = 10f;
            x87_r7_9 - f12_1;
        }

        if (!a1[0x37] || !(*(&((x87_r7_9 < f12_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_9, f12_1) ? 1 : 0) << 0xa | (x87_r7_9 == f12_1 ? 1 : 0) << 0xe)
            + 1) & 1))
        {
            v_68 = v_70_2 * *(dstD + 4) * 0.00872664619f;
            long double x87_r7_15 = v_74_2 * *(dstD + 0xc) * 0.00872664619f;
            long double x87_r7_17 = -((x87_r7_15 + v_68));
            long double x87_r6_20 = *(dstD + 4);
            x87_r7_17 - x87_r6_20;

            if (!(*(&((x87_r7_17 < x87_r6_20 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_17, x87_r6_20) ? 1 : 0) << 0xa
                    | (x87_r7_17 == x87_r6_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                x87_r7_17 = *(dstD + 4);

            Sys_CloseFileStream_12(&v_50, x87_r7_17);
            long double x87_r7_20 = x87_r7_15 - v_68;
            long double x87_r6_21 = *(dstD + 4);
            x87_r7_20 - x87_r6_21;

            if (!(*(&((x87_r7_20 < x87_r6_21 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_20, x87_r6_21) ? 1 : 0) << 0xa
                    | (x87_r7_20 == x87_r6_21 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                x87_r7_20 = *(dstD + 4);

            v_68 = x87_r7_20;
            Sys_CloseFileStream_12(&v_28, v_68);
            float v_4c;
            float v_48;
            v_68 = v_50 * *(dstD + 0x84) + v_48 * *(dstD + 0x8c) + v_4c * *(dstD + 0x88);
            float v_44;
            float v_40;
            float v_3c;
            float v_64_1 =
                v_3c * *(dstD + 0x8c) + v_40 * *(dstD + 0x88) + v_44 * *(dstD + 0x84);
            float v_34;
            float v_30;
            long double x87_r7_32 = v_30 * *(dstD + 0x8c) + v_34 * *(dstD + 0x88);
            float v_38;
            long double x87_r6_33 = v_38 * *(dstD + 0x84);
            a1[0xf4] = v_68;
            *(a1 + 0x7a4) = v_64_1;
            long double x87_r7_34 = v_28;
            a1[0xf5] = x87_r7_32 + x87_r6_33;
            v_68 = x87_r7_34 * *(dstD + 0xa0) + v_20 * *(dstD + 0xa8) + v_24 * *(dstD + 0xa4);
            objC4 = v_1c * *(dstD + 0xa0) + v_14 * *(dstD + 0xa8) + v_18 * *(dstD + 0xa4);
            long double x87_r7_44 = v_10 * *(dstD + 0xa0) + v_8 * *(dstD + 0xa8);
            long double x87_r6_45 = v_c * *(dstD + 0xa4);
            *(a1 + 0x7bc) = v_68;
            a1[0xf8] = objC4;
            *(a1 + 0x7c4) = x87_r7_44 + x87_r6_45;
        }
    }
    else
    {
        long double x87_r6_19 = v_74_2;
        long double f10_1 = 0f;
        x87_r6_19 - f10_1;

        if (!(*(&((x87_r6_19 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_19, f10_1) ? 1 : 0) << 0xa
                | (x87_r6_19 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_433d6a;

        long double f11_1 = 0f;
        x87_r7_7 - f11_1;

        if (!(*(&((x87_r7_7 < f11_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f11_1) ? 1 : 0) << 0xa
                | (x87_r7_7 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_433d6a;
    }

    int16_t valA16;
    valA16 = *(a1 + 0x744);

    if (!valA16)
    {
        *(a1 + 0x764) = *(dstD + 0x48);
        *(a1 + 0x79c) = *(dstD + 0x80);
        a1[0xf7] = *(dstD + 0x9c);
        objC4 = *(dstD + 0x64);
        a1[0xf0] = objC4;
    }
    else
    {
        *(a1 + 0x764) = *(dstD + 0x48) * 3f;
        *(a1 + 0x79c) = *(dstD + 0x64) * 0.375f;
        a1[0xf7] = *(dstD + 0x64) * 0.375f;
        a1[0xf0] = *(dstD + 0x64) * 0.75f;
    }

    valA16 = *(a1 + 0x82e);

    if (valA16)
    {
        int32_t v_44_1 = 0;
        int32_t v_40_1 = 0;
        int32_t v_3c_1 = 0;
        float v_4c_1 = *(flagP + 8) * 6489.4292f;
        v_50 = 0f;
        int32_t v_48_1 = 0;
        objC4 = ForceAccumulator_Add(&a1[0x1e], &v_50);
    }

    long double x87_r7_56 = a1[0xe4];
    long double f13 = 0f;
    x87_r7_56 - f13;

    if (!(*(&((x87_r7_56 < f13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, f13) ? 1 : 0) << 0xa
        | (x87_r7_56 == f13 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_58 = *(flagP + 8) * a1[0xe4];
        int32_t valA18 = a1[0x37];
        v_50 = 0f;
        float v_48_2 = 0f;
        float v_4c_2 = x87_r7_58 * 44.6008873f;

        if (!valA18)
        {
            float v_88_4 = objC4;
            Sys_DispatchOpcode_12(&v_28, *(dstD + 0x14) * *(a1 + 0x72c) * 0.0087266462599716512);
            v_68 = v_20 * v_48_2 + v_24 * v_4c_2 + v_28 * v_50;
            float v_4c_3 = v_14 * v_48_2 + v_18 * v_4c_2 + v_1c * v_50;
            long double x87_r6_57 = v_10 * v_50;
            v_50 = v_68;
            float v_48_3 = v_8 * v_48_2 + v_c * v_4c_2 + x87_r6_57;
        }

        int32_t v_44_2 = 0;
        int32_t v_40_2 = 0x47200000;
        int32_t v_3c_2 = 0;
        ForceAccumulator_Add(&a1[0x1e], &v_50);
    }

    Vehicle_CheckFlightDynamics_3(a1);

    if (!Script_ParseEnumReal32_29(a1))
    {
        double* v_64_4 = a1;

        if (*(dstD + 0x28))
        {
            long double x87_r7_75;
            long double f15_1;

            if (a1[0x37])
            {
                x87_r7_75 = a1[0x1f];
                f15_1 = 1137.77783f;
                x87_r7_75 - f15_1;
            }

            if (!a1[0x37] || !(*(&((x87_r7_75 < f15_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_75, f15_1) ? 1 : 0) << 0xa
                | (x87_r7_75 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                float v_5c = a1[0x21];
                float objC10 = *(a1 + 0x10c);
                v_5c = -(v_5c);
                float v_58_2 = -(objC10);
                float v_54_2 = -(a1[0x22]);
                SoundSys_SetMasterVolume_16(&a1[0xe9], *(dstD + 0x28), 0.000326999987f, &a1[0x1e], &a1[0xe],
                    &v_5c);
            }
        }

        Script_FormatString_28(a1, 44.6008873f, 1f, 0.920000017f, Level_StartMission_4(), 0xc, &v_68);
    }

    void* valA27 = a1[0x1d];

    if (valA27)
    {
        v_68 = &a1[4];
        void* v_64_5 = &a1[0xe];
        double* v_60_4 = a1;
        int32_t* i_3 = *(valA27 + 8);

        if (*i_3)
        {
            int32_t valA37;

            for (int32_t* i_1 = i_3; i_1; i_1 = *((valA37 << 2) + &g_afa6e0))
            {
                int32_t* objC13 = *i_1;
                void* valA31;

                if (!objC13)
                    valA31 = nullptr;
                else
                {
                    int32_t valA28 = *objC13;
                    int32_t valA29 = -(valA28);
                    valA31 = (valA29 - valA29) & objC13;
                }

                int32_t objC14 = g_afa7e0;
                *((objC14 << 2) + &g_afa6e0) = valA31;
                g_afa7e0 = objC14 + 1;
                uint32_t valA33 = MagicObj_GetEventId();
                int32_t valA34 = 0;
                valA34 = i_1[7];
                int32_t valA35 = *(((valA33 * 0x180 + valA34) << 2) + &g_a96ae0);

                if (valA35)
                    valA35(i_1, &v_68);

                valA37 = g_afa7e0 - 1;
                g_afa7e0 = valA37;
            }
        }
    }

    void* result = a1[0x105];

    if (result)
    {
        int32_t tmpD16 = a1[0xe4];
        v_68 = 1.40129846e-45f;
        *(result + 4) = tmpD16;
        long double x87_r7_82 = a1[0xe4];
        long double f14_1 = 0.00999999978f;
        x87_r7_82 - f14_1;

        if (*(&((x87_r7_82 < f14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_82, f14_1) ? 1 : 0) << 0xa
                | (x87_r7_82 == f14_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            v_68 = 0f;

        result = a1[0x105];
        *(result + 8) = v_68;
    }

    int32_t* i_2 = a1[1];
    v_68 = &a1[4];
    void* v_64_6 = &a1[0xe];

    if (*i_2 && i_2)
    {
        int32_t tmpD18 = g_afa7e0;

        do
        {
            int32_t* objC17 = *i_2;
            void* valA42;

            if (!objC17)
                valA42 = nullptr;
            else
            {
                int32_t valA39 = *objC17;
                int32_t valA40 = -(valA39);
                valA42 = (valA40 - valA40) & objC17;
            }

            *((tmpD18 << 2) + &g_afa6e0) = valA42;
            g_afa7e0 = tmpD18 + 1;
            uint32_t valA44 = DynObj_CreateMagicObject_6();
            int32_t objC18 = 0;
            objC18 = i_2[7];
            result = *(((valA44 * 0x180 + objC18) << 2) + &g_a96ae0);

            if (result)
                result = result(i_2, &v_68);

            tmpD18 = g_afa7e0 - 1;
            g_afa7e0 = tmpD18;
            i_2 = *((tmpD18 << 2) + &g_afa6e0);
        } while (i_2);
    }

    return result;
}
