// Original IGI.EXE function: FallLanding (VA 0x00408460; static CFG gate PASS, CFG score 1.000).
#include "FallLanding.h"
int32_t FallLanding(float a1)

{
    float srcS = a1;
    float v_54 = 0f;
    long double x87_r7_1 = *(srcS + 0x66c) - 84.7416916f;
    *(srcS + 0x66c) = x87_r7_1;
    long double fpu6 = 0f;
    long double fpu5 = *(srcS + 0x1b8);
    long double f1 = 0f;
    fpu5 - f1;

    if (!(*(&((fpu5 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu5, f1) ? 1 : 0) << 0xa
            | (fpu5 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        v_54 = -(g_56e1f4);

    long double x87_r5_3 = *(srcS + 0x1bc);
    long double f2 = 0f;
    x87_r5_3 - f2;

    if (!(*(&((x87_r5_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_3, f2) ? 1 : 0) << 0xa
            | (x87_r5_3 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        v_54 = g_56e1f4 + v_54;

    long double x87_r5_6 = *(srcS + 0x1c0);
    long double f3 = 0f;
    x87_r5_6 - f3;

    if (!(*(&((x87_r5_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_6, f3) ? 1 : 0) << 0xa
            | (x87_r5_6 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        fpu6 = g_56e1f4;

    long double x87_r5_7 = *(srcS + 0x1c4);
    long double f4 = 0f;
    x87_r5_7 - f4;
    int16_t result = (x87_r5_7 < f4 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_7, f4) ? 1 : 0) << 0xa
        | (x87_r5_7 == f4 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x40))
        fpu6 = fpu6 - g_56e1f4;

    bool cond_0 = !(*(srcS + 0x2f4) & 4);
    float v_44 = fpu6 * *(srcS + 0x88) + v_54 * *(srcS + 0x84);
    long double x87_r6_3 = fpu6 * *(srcS + 0x94) + v_54 * *(srcS + 0x90);
    *(srcS + 0x664) = fpu6 * *(srcS + 0x7c) + v_54 * *(srcS + 0x78) + *(srcS + 0x664);
    *(srcS + 0x668) = v_44 + *(srcS + 0x668);
    long double x87_r7_3 = x87_r7_1 + x87_r6_3;
    *(srcS + 0x66c) = x87_r7_3;

    if (cond_0)
        return result;

    long double f5 = 0f;
    x87_r7_3 - f5;

    if (*(&((x87_r7_3 < f5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f5) ? 1 : 0) << 0xa
            | (x87_r7_3 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        x87_r7_3 = -(x87_r7_3);

    long double x87_r7_5 = x87_r7_3 * 0.000244140625f * 30f;
    long double x87_r7_6 = x87_r7_5 * 0.125f;
    long double f6 = 0f;
    x87_r7_6 - f6;

    if (!(*(&((x87_r7_6 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f6) ? 1 : 0) << 0xa
        | (x87_r7_6 == f6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f7_1 = 1f;
        x87_r7_6 - f7_1;

        if (!(*(&((x87_r7_6 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            x87_r7_6 = 1f;
    }
    else
        x87_r7_6 = 0f;

    int32_t objC;
    int32_t v_60 = objC;
    AI_UpdatePatrol_24(*(srcS + 0x4ec), x87_r7_6 * -1024.0);
    int32_t v_30 = 0x46a00000;
    a1 = x87_r7_5 - 14f;
    long double x87_r7_12 = a1;
    long double f8 = 0f;
    x87_r7_12 - f8;

    if (!(*(&((x87_r7_12 < f8 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, f8) ? 1 : 0) << 0xa
        | (x87_r7_12 == f8 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        *(srcS + 0x2e8) = 0xd;
        FX_FragmentSimulate_14(srcS + 0x254, 0xd);
        a1 = a1 * 0.0769230798f * *(srcS + 0x258);

        if (!Human_HitDamage())
        {
            *(srcS + 0x2c8) = a1 + *(srcS + 0x2c8);
            *(srcS + 0x254) = a1 + *(srcS + 0x254);
        }

        long double x87_r7_20 = a1;
        long double f9_1 = 0f;
        x87_r7_20 - f9_1;

        if (!(*(&((x87_r7_20 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_20, f9_1) ? 1 : 0) << 0xa
            | (x87_r7_20 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double x87_r7_22 = *(srcS + 0x258) * 0.100000001f;
            long double f10_1 = a1;
            x87_r7_22 - f10_1;
            char* v_64_2;
            char* v_60_2;
            char v_20[0x20];

            if (*(&((x87_r7_22 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_22, f10_1) ? 1 : 0) << 0xa
                | (x87_r7_22 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                long double x87_r7_24 = *(srcS + 0x258) * 0.200000003f;
                long double f11_1 = a1;
                x87_r7_24 - f11_1;

                if (*(&((x87_r7_24 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_24, f11_1) ? 1 : 0) << 0xa
                    | (x87_r7_24 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    v_60_2 = "player_fall_3";
                    v_64_2 = &v_20;
                }
                else
                {
                    v_60_2 = "player_fall_2";
                    v_64_2 = &v_20;
                }
            }
            else
            {
                v_60_2 = "player_fall_1";
                v_64_2 = &v_20;
            }

            Game_DataSymbolLoad(v_64_2, v_60_2);
            SoundSys_SetMasterVolume_7(*(srcS + 0x4ec), &v_20);
            int32_t v_30_1 = 0x47200000;
        }
    }

    int32_t valA6 = *(srcS + 0xfc);
    int32_t v_3c = 0xb;
    int32_t v_38 = valA6;
    int32_t v_34 = 0x46;
    int32_t v_2c = DynObj_UpdateDynTree_4(srcS);
    float v_28 = srcS;
    float v_24 = srcS;
    return AI_EventBroadcast(&v_3c);
}
