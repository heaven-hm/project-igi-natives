// Original IGI.EXE function: FallLanding (VA 0x00408460; static CFG gate PASS, CFG score 1.000).
#include "FallLanding.h"
int32_t FallLanding(float context)

{
    float source_val = context;
    float item_54 = 0.0f;
    long double fpu_val_7_1 = *(source_val + 0x66c) - 84.7416916f;
    *(source_val + 0x66c) = fpu_val_7_1;
    long double fpu6 = 0.0f;
    long double fpu5 = *(source_val + 0x1b8);
    long double f1 = 0.0f;
    fpu5 - f1;

    if (!(*(&((fpu5 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu5, f1) ? 1 : 0) << 0xa
            | (fpu5 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        item_54 = -(g_56e1f4);

    long double fpu_val_5_3 = *(source_val + 0x1bc);
    long double f2 = 0.0f;
    fpu_val_5_3 - f2;

    if (!(*(&((fpu_val_5_3 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_3, f2) ? 1 : 0) << 0xa
            | (fpu_val_5_3 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        item_54 = g_56e1f4 + item_54;

    long double fpu_val_5_6 = *(source_val + 0x1c0);
    long double f3 = 0.0f;
    fpu_val_5_6 - f3;

    if (!(*(&((fpu_val_5_6 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_6, f3) ? 1 : 0) << 0xa
            | (fpu_val_5_6 == f3 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
        fpu6 = g_56e1f4;

    long double fpu_val_5_7 = *(source_val + 0x1c4);
    long double f4 = 0.0f;
    fpu_val_5_7 - f4;
    int16_t result = (fpu_val_5_7 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_7, f4) ? 1 : 0) << 0xa
        | (fpu_val_5_7 == f4 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x40))
        fpu6 = fpu6 - g_56e1f4;

    bool flag_0 = !(*(source_val + 0x2f4) & 4);
    float item_44 = fpu6 * *(source_val + 0x88) + item_54 * *(source_val + 0x84);
    long double fpu_val_6_3 = fpu6 * *(source_val + 0x94) + item_54 * *(source_val + 0x90);
    *(source_val + 0x664) = fpu6 * *(source_val + 0x7c) + item_54 * *(source_val + 0x78) + *(source_val + 0x664);
    *(source_val + 0x668) = item_44 + *(source_val + 0x668);
    long double fpu_val_7_3 = fpu_val_7_1 + fpu_val_6_3;
    *(source_val + 0x66c) = fpu_val_7_3;

    if (flag_0)
        return result;

    long double f5 = 0.0f;
    fpu_val_7_3 - f5;

    if (*(&((fpu_val_7_3 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f5) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_3 = -(fpu_val_7_3);

    long double fpu_val_7_5 = fpu_val_7_3 * 0.000244140625f * 30.0f;
    long double fpu_val_7_6 = fpu_val_7_5 * 0.125f;
    long double f6 = 0.0f;
    fpu_val_7_6 - f6;

    if (!(*(&((fpu_val_7_6 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f6) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double f7_1 = 1.0f;
        fpu_val_7_6 - f7_1;

        if (!(*(&((fpu_val_7_6 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            fpu_val_7_6 = 1.0f;
    }
    else
        fpu_val_7_6 = 0.0f;

    int32_t entity_val;
    int32_t item_60 = entity_val;
    AI_UpdatePatrol_24(*(source_val + 0x4ec), fpu_val_7_6 * -1024.0);
    int32_t item_30 = 0x46a00000;
    context = fpu_val_7_5 - 14.0f;
    long double fpu_val_7_12 = context;
    long double f8 = 0.0f;
    fpu_val_7_12 - f8;

    if (!(*(&((fpu_val_7_12 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f8) ? 1 : 0) << 0xa
        | (fpu_val_7_12 == f8 ? 1 : 0) << 0xe) + 1) & 0x41))
    {
        *(source_val + 0x2e8) = 0xd;
        FX_FragmentSimulate_14(source_val + 0x254, 0xd);
        context = context * 0.0769230798f * *(source_val + 0x258);

        if (!Human_HitDamage())
        {
            *(source_val + 0x2c8) = context + *(source_val + 0x2c8);
            *(source_val + 0x254) = context + *(source_val + 0x254);
        }

        long double fpu_val_7_20 = context;
        long double f9_1 = 0.0f;
        fpu_val_7_20 - f9_1;

        if (!(*(&((fpu_val_7_20 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_20, f9_1) ? 1 : 0) << 0xa
            | (fpu_val_7_20 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
            long double fpu_val_7_22 = *(source_val + 0x258) * 0.100000001f;
            long double f10_1 = context;
            fpu_val_7_22 - f10_1;
            char* item_64_2;
            char* item_60_2;
            char item_20[0x20];

            if (*(&((fpu_val_7_22 < f10_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_22, f10_1) ? 1 : 0) << 0xa
                | (fpu_val_7_22 == f10_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            {
                long double fpu_val_7_24 = *(source_val + 0x258) * 0.200000003f;
                long double f11_1 = context;
                fpu_val_7_24 - f11_1;

                if (*(&((fpu_val_7_24 < f11_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_24, f11_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_24 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                {
                    item_60_2 = "player_fall_3";
                    item_64_2 = &item_20;
                }
                else
                {
                    item_60_2 = "player_fall_2";
                    item_64_2 = &item_20;
                }
            }
            else
            {
                item_60_2 = "player_fall_1";
                item_64_2 = &item_20;
            }

            Game_DataSymbolLoad(item_64_2, item_60_2);
            SoundSys_SetMasterVolume_7(*(source_val + 0x4ec), &item_20);
            int32_t item_30_1 = 0x47200000;
        }
    }

    int32_t data_6 = *(source_val + 0xfc);
    int32_t item_3c = 0xb;
    int32_t item_38 = data_6;
    int32_t item_34 = 0x46;
    int32_t item_2c = DynObj_UpdateDynTree_4(source_val);
    float item_28 = source_val;
    float item_24 = source_val;
    return AI_EventBroadcast(&item_3c);
}
