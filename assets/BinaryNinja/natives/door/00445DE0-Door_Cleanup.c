// Original IGI.EXE function: Door_Cleanup (VA 0x00445DE0; static CFG gate FAIL, CFG score 0.778).
#include "Door_Cleanup.h"
int32_t Door_Cleanup(float context, int32_t* param_2)

{
    float* data_val = param_2[1];
    double item_48 = data_val[2] * *(context + 0x2f8) + data_val[1] * *(context + 0x2f0) + *data_val * *(context + 0x2e8);
    int32_t item_40 = data_val[5] * *(context + 0x2f8) + data_val[4] * *(context + 0x2f0) + data_val[3] * *(context + 0x2e8);
    double item_38 = data_val[8] * *(context + 0x2f8) + data_val[7] * *(context + 0x2f0) + data_val[6] * *(context + 0x2e8);
    memcpy(context + 0xf0, &item_48, 0x18);
    *(context + 0xf0) = **param_2 + *(context + 0xf0);
    *(context + 0xf8) = *(*param_2 + 8) + *(context + 0xf8);
    *(context + 0x100) = *(*param_2 + 0x10) + *(context + 0x100);
    float* data_3 = param_2[1];
    float item_30 =
        data_3[2] * *(context + 0x318) + data_3[1] * *(context + 0x30c) + *(context + 0x300) * *data_3;
    float item_2c =
        data_3[2] * *(context + 0x31c) + data_3[1] * *(context + 0x310) + *(context + 0x304) * *data_3;
    float item_28 =
        data_3[2] * *(context + 0x320) + data_3[1] * *(context + 0x314) + *(context + 0x308) * *data_3;
    float item_24 =
        data_3[4] * *(context + 0x30c) + *(context + 0x318) * data_3[5] + *(context + 0x300) * data_3[3];
    float item_20 =
        data_3[4] * *(context + 0x310) + *(context + 0x31c) * data_3[5] + *(context + 0x304) * data_3[3];
    float item_1c =
        data_3[4] * *(context + 0x314) + *(context + 0x320) * data_3[5] + *(context + 0x308) * data_3[3];
    float item_18 =
        data_3[7] * *(context + 0x30c) + *(context + 0x318) * data_3[8] + *(context + 0x300) * data_3[6];
    float item_14 =
        data_3[7] * *(context + 0x310) + *(context + 0x31c) * data_3[8] + *(context + 0x304) * data_3[6];
    int32_t item_c = data_3[9] + *(context + 0x324) + 1;
    float item_10 =
        data_3[7] * *(context + 0x314) + *(context + 0x320) * data_3[8] + *(context + 0x308) * data_3[6];
    memcpy(context + 0x110, &item_30, 0x28);
    Env_ActivateEntity_7(context);
    item_30 = *(context + 0x110);
    long double fpu_val_7_54 = item_30;
    float item_2c_1 = *(context + 0x114);
    long double f1 = 0.0f;
    fpu_val_7_54 - f1;
    float item_28_1 = *(context + 0x118);

    if (!(*(&((fpu_val_7_54 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_54, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_54 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_44604f:
        long double fpu_val_7_57 = item_28_1;
        long double fpu_val_6_48 = item_2c_1;
        long double fpu_val_5_1 = item_30;
        long double fpu_val_7_59 =
            1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_48 * fpu_val_6_48 + fpu_val_7_57 * fpu_val_7_57);
        item_30 = item_30 * fpu_val_7_59;
        item_2c_1 = item_2c_1 * fpu_val_7_59;
        item_28_1 = item_28_1 * fpu_val_7_59;
    }
    else
    {
        long double fpu_val_7_55 = item_2c_1;
        long double f2_1 = 0.0f;
        fpu_val_7_55 - f2_1;

        if (!(*(&((fpu_val_7_55 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_55, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_55 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_44604f;

        long double fpu_val_7_56 = item_28_1;
        long double f4_1 = 0.0f;
        fpu_val_7_56 - f4_1;

        if (!(*(&((fpu_val_7_56 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_56, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_56 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_44604f;
    }

    float item_54 = *(context + 0x118) * *(context + 0x12c) - *(context + 0x114) * *(context + 0x130);
    float item_24_1 = item_54;
    float item_50 = -((*(context + 0x118) * *(context + 0x128) - *(context + 0x110) * *(context + 0x130)));
    float item_4c = *(context + 0x114) * *(context + 0x128) - *(context + 0x110) * *(context + 0x12c);
    item_48 = item_4c * item_2c_1 - item_50 * item_28_1;
    int32_t item_18_1 = item_48;
    *(&item_48 + 4) = -((item_4c * item_30 - item_54 * item_28_1));
    item_40 = item_50 * item_30 - item_54 * item_2c_1;
    long double fpu_val_7_81 = item_54;
    long double f3 = 0.0f;
    fpu_val_7_81 - f3;

    if (!(*(&((fpu_val_7_81 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_81, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_81 == f3 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_446194:
        long double fpu_val_7_84 = item_54;
        long double fpu_val_6_68 = item_50;
        long double fpu_val_5_3 = item_4c;
        long double fpu_val_7_90 =
            1.0 / sqrtl(fpu_val_7_84 * fpu_val_7_84 + fpu_val_5_3 * fpu_val_5_3 + fpu_val_6_68 * fpu_val_6_68);
        float item_24_2 = item_54 * fpu_val_7_90;
        float item_20_2 = item_50 * fpu_val_7_90;
        float item_1c_2 = item_4c * fpu_val_7_90;
    }
    else
    {
        long double fpu_val_7_82 = item_50;
        long double f5_1 = 0.0f;
        fpu_val_7_82 - f5_1;

        if (!(*(&((fpu_val_7_82 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_82, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_82 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446194;

        long double fpu_val_7_83 = item_4c;
        long double f7_1 = 0.0f;
        fpu_val_7_83 - f7_1;

        if (!(*(&((fpu_val_7_83 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_83, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_7_83 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446194;
    }

    long double fpu_val_7_92 = item_48;
    long double f6 = 0.0f;
    fpu_val_7_92 - f6;

    if (!(*(&((fpu_val_7_92 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_92, f6) ? 1 : 0) << 0xa
        | (fpu_val_7_92 == f6 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_446213:
        long double fpu_val_7_95 = item_40;
        long double fpu_val_6_76 = *(&item_48 + 4);
        long double fpu_val_5_8 = item_48;
        long double fpu_val_7_97 =
            1.0 / sqrtl(fpu_val_5_8 * fpu_val_5_8 + fpu_val_6_76 * fpu_val_6_76 + fpu_val_7_95 * fpu_val_7_95);
        float item_18_2 = item_48 * fpu_val_7_97;
        float item_14_2 = *(&item_48 + 4) * fpu_val_7_97;
        float item_10_2 = item_40 * fpu_val_7_97;
    }
    else
    {
        long double fpu_val_7_93 = *(&item_48 + 4);
        long double f8_1 = 0.0f;
        fpu_val_7_93 - f8_1;

        if (!(*(&((fpu_val_7_93 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_93, f8_1) ? 1 : 0) << 0xa
                | (fpu_val_7_93 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446213;

        long double fpu_val_7_94 = item_40;
        long double f9_1 = 0.0f;
        fpu_val_7_94 - f9_1;

        if (!(*(&((fpu_val_7_94 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_94, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_7_94 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446213;
    }

    memcpy(context + 0x110, &item_30, 0x28);
    *(context + 0x134) = 0;
    memcpy(context + 0x70, context + 0x110, 0x28);
    return Env_InitLadder_8(context);
}
