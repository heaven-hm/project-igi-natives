#include "gi_platform.h"
#include "00428D00-Menu_UpdateLanguage_20.h"
void* Menu_UpdateLanguage_20(float a1)

{
    float ctxB = a1;
    long double fpu7 = (*(int32_t*)(uintptr_t)(ctxB + 0x720));
    long double f0 = 0.699999988.0f;
    fpu7 - f0;
    void* flagP = (*(int32_t*)(uintptr_t)(*(ctxB + 0x1b4) + 0x2d4));
    float v_68;

    if (!(*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1))
        v_68 = *(flagP + 0x20);
    else
        v_68 = *(flagP + 0x24);

    float valA2 = (*(int32_t*)(uintptr_t)(ctxB + 0x730));
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(ctxB + 0x720));
    long double f1 = valA2;
    x87_r7_1 - f1;

    if (!(*(&((x87_r7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f1) ? 1 : 0) << 0xa
        | (x87_r7_1 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f2_1 = valA2;
        x87_r7_1 - f2_1;

        if (!(*(&((x87_r7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        {
            x87_r7_1 = x87_r7_1 - v_68;
            long double f5_1 = valA2;
            x87_r7_1 - f5_1;

            if (*(&((x87_r7_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_1 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                x87_r7_1 = valA2;
        }
    }
    else
    {
        x87_r7_1 = x87_r7_1 + v_68;
        long double f3_1 = valA2;
        x87_r7_1 - f3_1;

        if (!(*(&((x87_r7_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_1 = valA2;
    }

    long double f4 = 0.00100000005.0f;
    x87_r7_1 - f4;

    if (*(&((x87_r7_1 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f4) ? 1 : 0) << 0xa
            | (x87_r7_1 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_1 = 0.0f;

    float objC2 = *(flagP + 8);
    float tmpD2 = *(flagP + 0x10);
    float valA4 = *(flagP + 0x18);
    (*(int32_t*)(uintptr_t)(ctxB + 0x720)) = x87_r7_1;
    long double x87_r7_7 = (1.0f - objC2) * (*(int32_t*)(uintptr_t)(ctxB + 0x734)) + objC2 * (*(int32_t*)(uintptr_t)(ctxB + 0x724));
    (*(int32_t*)(uintptr_t)(ctxB + 0x724)) = x87_r7_7;
    long double x87_r6_5 = (1.0f - tmpD2) * (*(int32_t*)(uintptr_t)(ctxB + 0x738)) + tmpD2 * (*(int32_t*)(uintptr_t)(ctxB + 0x728));
    (*(int32_t*)(uintptr_t)(ctxB + 0x728)) = x87_r6_5;
    long double x87_r5_5 = (1.0f - valA4) * (*(int32_t*)(uintptr_t)(ctxB + 0x73c)) + valA4 * (*(int32_t*)(uintptr_t)(ctxB + 0x72c));
    a1 = x87_r5_5;
    (*(int32_t*)(uintptr_t)(ctxB + 0x72c)) = x87_r5_5;
    long double f6 = 0.0f;
    x87_r7_7 - f6;
    float v_50;
    float v_4c;
    float v_48;
    float v_44;
    float v_40;
    float v_3c;
    float v_38;
    float v_34;
    float v_30;
    int32_t v_2c;
    float v_28;

    if (!(*(&((x87_r7_7 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f6) ? 1 : 0) << 0xa
        | (x87_r7_7 == f6 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_428e60: ;
        float v_7c_1 = objC2;
        a1 = a1 * *(flagP + 0x14) * 0.0174532924.0f;
        Sys_CloseFileStream_12(&v_50, x87_r7_7 * *(flagP + 4) * 0.0174532924.0f);
        v_28 = v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
        float v_24_1 = v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
        float v_20_1 = v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
        float v_1c_1 = v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_18_1 = v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_14_1 = v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_10_1 = v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
        int32_t v_4_1 = v_2c + (*(int32_t*)(uintptr_t)(ctxB + 0x94)) + 1;
        float v_c_1 = v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
        float v_8_1 = v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
        memcpy(ctxB + 0x70, &v_28, 0x28);
        Sys_DispatchOpcode_12(&v_50, a1);
        v_28 = v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
        float v_24_2 = v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
        float v_20_2 = v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x70)) + v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x74));
        float v_1c_2 = v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        int32_t v_4_2 = v_2c + (*(int32_t*)(uintptr_t)(ctxB + 0x94)) + 1;
        float v_18_2 = v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_14_2 = v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_10_2 = v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
        float v_c_2 = v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
        float v_8_2 = v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x88)) + v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x8c));
        memcpy(ctxB + 0x70, &v_28, 0x28);
    }
    else
    {
        long double f7_1 = 0.0f;
        x87_r6_5 - f7_1;

        if (!(*(&((x87_r6_5 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_5, f7_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_428e60;

        long double x87_r6_6 = a1;
        long double f8_1 = 0.0f;
        x87_r6_6 - f8_1;

        if (!(*(&((x87_r6_6 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_6, f8_1) ? 1 : 0) << 0xa
                | (x87_r6_6 == f8_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_428e60;
    }

    long double x87_r7_83 = (*(int32_t*)(uintptr_t)(ctxB + 0x864));
    long double f9 = 0.0f;
    x87_r7_83 - f9;

    if (*(&((x87_r7_83 < f9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_83, f9) ? 1 : 0) << 0xa
        | (x87_r7_83 == f9 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        Sys_ReadFileBlock_12(&v_50, (0.5.0f - Sys_AllocateMemory_14(0x57bc88)) * 0.100000001.0f,
            (0.699999988.0f - Sys_AllocateMemory_14(0x57bc88)) * 0.100000001.0f,
            (0.300000012.0f - Sys_AllocateMemory_14(0x57bc88)) * 0.100000001.0f);
        v_28 = v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x74)) + v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x70));
        float v_24_3 = v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x74)) + v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x70));
        float v_20_3 = v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x74)) + v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x78)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x70));
        float v_1c_3 = v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_18_3 = v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        int32_t v_4_3 = (*(int32_t*)(uintptr_t)(ctxB + 0x94)) + v_2c + 1;
        float v_14_3 = v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x80)) + v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x84)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x7c));
        float v_10_3 = v_44 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c)) + v_38 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_50 * (*(int32_t*)(uintptr_t)(ctxB + 0x88));
        float v_c_3 = v_40 * (*(int32_t*)(uintptr_t)(ctxB + 0x8c)) + v_34 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_4c * (*(int32_t*)(uintptr_t)(ctxB + 0x88));
        float v_8_3 = v_3c * (*(int32_t*)(uintptr_t)(ctxB + 0x8c)) + v_30 * (*(int32_t*)(uintptr_t)(ctxB + 0x90)) + v_48 * (*(int32_t*)(uintptr_t)(ctxB + 0x88));
        memcpy(ctxB + 0x70, &v_28, 0x28);
    }

    long double x87_r7_129 = (*(int32_t*)(uintptr_t)(ctxB + 0x720));
    long double f10 = 0.0f;
    x87_r7_129 - f10;

    if (!(*(&((x87_r7_129 < f10 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_129, f10) ? 1 : 0) << 0xa
        | (x87_r7_129 == f10 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        long double x87_r7_130 = (*(int32_t*)(uintptr_t)(ctxB + 0x864));
        long double f11_1 = 0.0f;
        x87_r7_130 - f11_1;

        if (!(*(&((x87_r7_130 < f11_1 ? 1 : 0) << 8
            | (FCMP_UO(x87_r7_130, f11_1) ? 1 : 0) << 0xa
            | (x87_r7_130 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_133 = *(flagP + 0x1c) * (*(int32_t*)(uintptr_t)(ctxB + 0x720)) * 44.6008873.0f;
            v_50 = 0.0f;
            int32_t v_48_1 = 0;
            int32_t v_44_1 = 0;
            int32_t v_40_1 = 0;
            int32_t v_3c_1 = 0;
            float v_4c_1 = x87_r7_133;
            ForceAccumulator_Add(ctxB + 0xf0, &v_50);
        }
    }

    long double x87_r7_135 = (*(int32_t*)(uintptr_t)(ctxB + 0x864)) - *(flagP + 0x124);
    (*(int32_t*)(uintptr_t)(ctxB + 0x864)) = x87_r7_135;
    long double x87_r6_119 = 0.0f;
    x87_r6_119 - x87_r7_135;

    if (!(*(&((x87_r6_119 < x87_r7_135 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_119, x87_r7_135) ? 1 : 0) << 0xa
            | (x87_r6_119 == x87_r7_135 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        x87_r7_135 = 0.0f;

    (*(int32_t*)(uintptr_t)(ctxB + 0x864)) = x87_r7_135;

    if (!Script_ParseEnumReal32_29(ctxB))
    {
        int32_t* valA12 = (*(int32_t*)(uintptr_t)(ctxB + 0x858));
        float v_4c_2 = ctxB;

        if (!valA12)
            int32_t v_48_3 = 0;
        else
            int32_t v_48_2 = *valA12;

        int32_t* valA14 = (*(int32_t*)(uintptr_t)(ctxB + 0x85c));

        if (!valA14)
            int32_t v_44_3 = 0;
        else
            int32_t v_44_2 = *valA14;

        int32_t v_40_2 = 0x3f800000;

        if (*(flagP + 0x28))
        {
            float v_5c = (*(int32_t*)(uintptr_t)(ctxB + 0x108));
            float objC9 = (*(int32_t*)(uintptr_t)(ctxB + 0x10c));
            v_5c = -(v_5c);
            float v_58_2 = -(objC9);
            float v_54_2 = -((*(int32_t*)(uintptr_t)(ctxB + 0x110)));
            SoundSys_SetMasterVolume_16(ctxB + 0x748, *(flagP + 0x28), 0.000326999987.0f, ctxB + 0xf0, ctxB + 0x70,
                &v_5c);
        }

        int32_t valA18 = Level_StartMission_2();
        Script_FormatString_28(ctxB, 44.6008873.0f, 0.949999988.0f, 0.920000017.0f, Level_StartMission_4(), valA18,
            &v_50);
    }

    void* result = (*(int32_t*)(uintptr_t)(ctxB + 0xe8));

    if (result)
    {
        v_50 = ctxB + 0x20;
        int32_t v_4c_3 = ctxB + 0x70;
        float v_48_4 = ctxB;
        int32_t* i = *(result + 8);

        if (*i && i)
        {
            int32_t objC12 = g_afa7e0;

            do
            {
                int32_t* tmpD12 = *i;
                void* valA23;

                if (!tmpD12)
                    valA23 = nullptr;
                else
                {
                    int32_t valA20 = *tmpD12;
                    int32_t valA21 = -(valA20);
                    valA23 = (valA21 - valA21) & tmpD12;
                }

                *((objC12 << 2) + &g_afa6e0) = valA23;
                g_afa7e0 = objC12 + 1;
                uint32_t valA25 = MagicObj_GetEventId();
                int32_t objC14 = 0;
                objC14 = i[7];
                result = *(((valA25 * 0x180 + objC14) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &v_50);

                objC12 = g_afa7e0 - 1;
                g_afa7e0 = objC12;
                i = *((objC12 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
