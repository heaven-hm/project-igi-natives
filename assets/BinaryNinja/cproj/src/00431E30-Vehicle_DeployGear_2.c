#include "gi_platform.h"
#include "00431E30-Vehicle_DeployGear_2.h"
int32_t Vehicle_DeployGear_2(float a1)

{
    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x720));
    long double f1 = 0.80000000000000004;
    fpu7 - f1;
    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));
    void* objC = *(tmpD + 0x2d4);
    float valA1;

    if (!(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
            | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 1))
        valA1 = *(objC + 0x20);
    else
        valA1 = *(objC + 0x24);

    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x720));
    long double f2 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
    x87_r7_1 - f2;

    if (!(*(&((x87_r7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2) ? 1 : 0) << 0xa
        | (x87_r7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f3_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        x87_r7_1 - f3_1;

        if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            x87_r7_1 = x87_r7_1 - valA1;
            long double f6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
            x87_r7_1 - f6_1;

            if (*(&((x87_r7_1 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        }
    }
    else
    {
        x87_r7_1 = x87_r7_1 + valA1;
        long double f4_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        x87_r7_1 - f4_1;

        if (!(*(&((x87_r7_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
    }

    long double f5 = 0.00100000005.0f;
    x87_r7_1 - f5;

    if (*(&((x87_r7_1 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f5) ? 1 : 0) << 0xa
        | (x87_r7_1 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
    {
        long double x87_r6_1 = (*(int32_t*)(uintptr_t)(a1 + 0x730));
        long double f8_1 = 0.0f;
        x87_r6_1 - f8_1;

        if (*(&((x87_r6_1 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_1 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
            x87_r7_1 = 0.0f;
    }

    long double x87_r6_2 = *(objC + 8);
    float objC1 = *(objC + 0x18);
    float v_78 = *(objC + 0x10);
    float v_74 = objC1;
    (*(int32_t*)(uintptr_t)(a1 + 0x720)) = x87_r7_1;
    float v_80_1 = (1.0f - x87_r6_2) * (*(int32_t*)(uintptr_t)(a1 + 0x734)) + x87_r6_2 * (*(int32_t*)(uintptr_t)(a1 + 0x724));
    long double x87_r6_6 = 1.0f - v_78;
    (*(int32_t*)(uintptr_t)(a1 + 0x724)) = v_80_1;
    float v_7c = x87_r6_6 * (*(int32_t*)(uintptr_t)(a1 + 0x738)) + v_78 * (*(int32_t*)(uintptr_t)(a1 + 0x728));
    long double x87_r6_10 = 1.0f - v_74;
    (*(int32_t*)(uintptr_t)(a1 + 0x728)) = v_7c;
    v_78 = x87_r6_10 * (*(int32_t*)(uintptr_t)(a1 + 0x73c)) + v_74 * (*(int32_t*)(uintptr_t)(a1 + 0x72c));
    long double x87_r6_13 = v_80_1;
    long double f7 = 0.0f;
    x87_r6_13 - f7;
    (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = v_78;
    float v_50;
    float v_28;
    float v_24;
    float v_20;
    float v_1c;
    float v_18;
    float v_14;

    if (!(*(&((x87_r6_13 < f7 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, f7) ? 1 : 0) << 0xa
        | (x87_r6_13 == f7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_431fb7: ;
        long double x87_r6_16;
        long double f10_1;

        if ((*(int32_t*)(uintptr_t)(a1 + 0x1b8)))
        {
            x87_r6_16 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
            f10_1 = 2.0f;
            x87_r6_16 - f10_1;
        }

        if (!(*(int32_t*)(uintptr_t)(a1 + 0x1b8)) || !(*(&((x87_r6_16 < f10_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_16, f10_1) ? 1 : 0) << 0xa
            | (x87_r6_16 == f10_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            void* valA9 = *(tmpD + 0x2d4);
            v_74 = v_80_1 * *(valA9 + 4);
            float v_7c_1 = v_7c * *(valA9 + 0xc);
            long double x87_r6_22 = v_78 * *(valA9 + 0x14);
            int32_t v_44_1 = 0;
            int32_t v_40_1 = 0;
            int32_t v_3c_1 = 0x444ccccd;
            v_50 = 0.0f;
            int32_t v_48_1 = 0;
            int32_t v_68_1 = 0;
            int32_t v_64_1 = 0;
            int32_t v_60_1 = 0x43cccccd;
            int32_t v_70_1 = 0;
            int32_t v_6c_1 = 0;
            v_1c = 0.0f;
            v_18 = 12288.0f;
            v_14 = 0.0f;
            v_24 = 0.0f;
            float v_4c_1 = v_74 * *(tmpD + 8) * -0.800000012.0f;
            v_20 = 0.0f;
            v_74 = v_7c_1 * *(tmpD + 8);
            v_28 = x87_r7_1 * x87_r6_22 * *(tmpD + 8) * 0.0799999982.0f;
            ForceAccumulator_Add(a1 + 0xf0, &v_50);
            ForceAccumulator_Add(a1 + 0xf0, &v_74);
            ForceAccumulator_Add(a1 + 0xf0, &v_28);
        }
    }
    else
    {
        long double x87_r6_14 = v_7c;
        long double f9_1 = 0.0f;
        x87_r6_14 - f9_1;

        if (!(*(&((x87_r6_14 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_14, f9_1) ? 1 : 0) << 0xa
                | (x87_r6_14 == f9_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_431fb7;

        long double x87_r6_15 = v_78;
        long double f11_1 = 0.0f;
        x87_r6_15 - f11_1;

        if (!(*(&((x87_r6_15 < f11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_15, f11_1) ? 1 : 0) << 0xa
                | (x87_r6_15 == f11_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_431fb7;
    }

    if (!(*(int32_t*)(uintptr_t)(a1 + 0x1b8)))
    {
        long double x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
        long double f12_1 = 2.0f;
        x87_r7_8 - f12_1;

        if (!(*(&((x87_r7_8 < f12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f12_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f12_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a1 + 0x78));
            long double x87_r6_28 = (*(int32_t*)(uintptr_t)(a1 + 0x84));
            long double x87_r5_10 = (*(int32_t*)(uintptr_t)(a1 + 0x90));
            long double x87_r4_1 = (*(int32_t*)(uintptr_t)(a1 + 0x70));
            long double f13_1 = 0.0f;
            x87_r4_1 - f13_1;
            float objC3 = (*(int32_t*)(uintptr_t)(a1 + 0x7c));
            long double x87_r3_1;
            long double f16_1;

            if (*(&((x87_r4_1 < f13_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r4_1, f13_1) ? 1 : 0) << 0xa
                | (x87_r4_1 == f13_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
            {
                x87_r3_1 = objC3;
                f16_1 = 0.0f;
                x87_r3_1 - f16_1;
            }

            long double x87_r7_10;

            if (*(&((x87_r4_1 < f13_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r4_1, f13_1) ? 1 : 0) << 0xa
                    | (x87_r4_1 == f13_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40 && *(&(
                    (x87_r3_1 < f16_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_1, f16_1) ? 1 : 0) << 0xa
                    | (x87_r3_1 == f16_1 ? 1 : 0) << 0xe | 0x2000) + 1) & 0x40)
                x87_r7_10 = v_74;
            else
            {
                long double x87_r3_2 = objC3;
                long double x87_r3_4 = 1.0 / sqrtl(x87_r4_1 * x87_r4_1 + x87_r3_2 * x87_r3_2);
                v_74 = x87_r4_1 * x87_r3_4;
                long double f14_1 = 0.0f;
                x87_r5_10 - f14_1;
                bool c1_1 = /* bool c1_1 = unknown  {fmul fp0, fp3} */;
                long double x87_r4_6 =
                    0.0f * x87_r5_10 + objC3 * x87_r3_4 * x87_r6_28 + v_74 * x87_r7_9;

                x87_r7_10 = *(&((x87_r5_10 < f14_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (FCMP_UO(x87_r5_10, f14_1) ? 1 : 0) << 0xa
                    | (x87_r5_10 == f14_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 0x41
                    ? x87_r4_6 * 0.699999988.0f : x87_r4_6 * -0.699999988.0f;
            }

            float v_94_2 = objC3;
            Sys_CloseFileStream_12(&v_28,
                x87_r7_10 * (*(int32_t*)(uintptr_t)(*(*(a1 + 0x1b4) + 0x2d4) + 0x14)) * 0.00029088820866572169);
            float v_10;
            v_50 = v_28 * (*(int32_t*)(uintptr_t)(a1 + 0x70)) + v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + v_1c * (*(int32_t*)(uintptr_t)(a1 + 0x74));
            float v_c;
            float v_4c_2 =
                v_24 * (*(int32_t*)(uintptr_t)(a1 + 0x70)) + v_c * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + v_18 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
            float v_8;
            float v_48_2 =
                v_20 * (*(int32_t*)(uintptr_t)(a1 + 0x70)) + v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x78)) + v_14 * (*(int32_t*)(uintptr_t)(a1 + 0x74));
            float v_44_2 =
                v_28 * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + v_1c * (*(int32_t*)(uintptr_t)(a1 + 0x80));
            float v_40_2 =
                v_24 * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + v_c * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + v_18 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
            float v_3c_2 =
                v_20 * (*(int32_t*)(uintptr_t)(a1 + 0x7c)) + v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x84)) + v_14 * (*(int32_t*)(uintptr_t)(a1 + 0x80));
            float v_38_1 =
                v_10 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_28 * (*(int32_t*)(uintptr_t)(a1 + 0x88)) + v_1c * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
            int32_t v_4;
            int32_t v_2c_1 = (*(int32_t*)(uintptr_t)(a1 + 0x94)) + v_4 + 1;
            float v_34_1 =
                v_c * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_24 * (*(int32_t*)(uintptr_t)(a1 + 0x88)) + v_18 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
            float v_30_1 =
                v_8 * (*(int32_t*)(uintptr_t)(a1 + 0x90)) + v_20 * (*(int32_t*)(uintptr_t)(a1 + 0x88)) + v_14 * (*(int32_t*)(uintptr_t)(a1 + 0x8c));
            memcpy(a1 + 0x70, &v_50, 0x28);
        }
    }

    if (!Script_ParseEnumReal32_29(a1))
    {
        float v_70_3 = a1;
        Vehicle_UpdateCockpit_2(a1);
        void* valA15 = (*(int32_t*)(uintptr_t)(a1 + 0x1b4));

        if (*(*(valA15 + 0x2d4) + 0x28))
        {
            float v_5c = (*(int32_t*)(uintptr_t)(a1 + 0x108));
            float tmpD5 = (*(int32_t*)(uintptr_t)(a1 + 0x10c));
            v_5c = -(v_5c);
            float v_58_2 = -(tmpD5);
            float v_54_2 = -((*(int32_t*)(uintptr_t)(a1 + 0x110)));
            void* valA16 = *(valA15 + 0x2d4);
            SoundSys_SetMasterVolume_16(valA16 + 0x2c, *(valA16 + 0x28), 0.000326999987.0f, a1 + 0xf0, a1 + 0x70,
                &v_5c);
        }

        Script_FormatString_28(a1, 44.6008873.0f, 1.0f, 0.920000017.0f, Level_StartMission_4(), 0xc, &v_74);
    }

    void* valA19 = (*(int32_t*)(uintptr_t)(a1 + 0xe8));

    if (valA19)
    {
        v_74 = a1 + 0x20;
        int32_t v_70_4 = a1 + 0x70;
        float v_6c_2 = a1;
        int32_t* i_2 = *(valA19 + 8);

        if (*i_2)
        {
            int32_t valA31;

            for (int32_t* i = i_2; i; i = *((valA31 << 2) + &g_afa6e0))
            {
                int32_t* objC10 = *i;
                void* valA23;

                if (!objC10)
                    valA23 = nullptr;
                else
                {
                    int32_t valA20 = *objC10;
                    int32_t valA21 = -(valA20);
                    valA23 = (valA21 - valA21) & objC10;
                }

                int32_t objC11 = g_afa7e0;
                *((objC11 << 2) + &g_afa6e0) = valA23;
                g_afa7e0 = objC11 + 1;
                uint32_t valA25 = MagicObj_GetEventId();
                int32_t objC13 = 0;
                objC13 = i[7];
                int32_t valA29 = *(((valA25 * 0x180 + objC13) << 2) + &g_a96ae0);

                if (valA29)
                    valA29(i, &v_74);

                valA31 = g_afa7e0 - 1;
                g_afa7e0 = valA31;
            }
        }
    }

    void* valA32 = (*(int32_t*)(uintptr_t)(a1 + 0x748));

    if (valA32)
    {
        int32_t objC14 = (*(int32_t*)(uintptr_t)(a1 + 0x720));
        v_74 = 1.40129846e-45.0f;
        *(valA32 + 4) = objC14;
        long double x87_r7_56 = (*(int32_t*)(uintptr_t)(a1 + 0x720));
        long double f17_1 = 0.00999999978.0f;
        x87_r7_56 - f17_1;

        if (*(&((x87_r7_56 < f17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, f17_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == f17_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            v_74 = 0.0f;

        (*(int32_t*)(uintptr_t)(*(a1 + 0x748) + 8)) = v_74;
    }

    int32_t* i_1 = (*(int32_t*)(uintptr_t)(a1 + 8));
    v_74 = a1 + 0x20;
    int32_t v_70_5 = a1 + 0x70;
    int32_t result = *i_1;

    if (result && i_1)
    {
        int32_t tmpD9 = g_afa7e0;

        do
        {
            int32_t* objC16 = *i_1;
            void* valA38;

            if (!objC16)
                valA38 = nullptr;
            else
            {
                int32_t valA35 = *objC16;
                int32_t valA36 = -(valA35);
                valA38 = (valA36 - valA36) & objC16;
            }

            *((tmpD9 << 2) + &g_afa6e0) = valA38;
            g_afa7e0 = tmpD9 + 1;
            uint32_t valA40 = DynObj_CreateMagicObject_6();
            int32_t valA41 = 0;
            valA41 = i_1[7];
            result = *(((valA40 * 0x180 + valA41) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, &v_74);

            tmpD9 = g_afa7e0 - 1;
            g_afa7e0 = tmpD9;
            i_1 = *((tmpD9 << 2) + &g_afa6e0);
        } while (i_1);
    }

    return result;
}
