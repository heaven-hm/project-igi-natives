// Original IGI.EXE function: Door_Cleanup (VA 0x00445DE0; static CFG gate FAIL, CFG score 0.778).
#include "Door_Cleanup.h"
int32_t Door_Cleanup(float a1, int32_t* a2)

{
    float* valA = a2[1];
    double v_48 = valA[2] * *(a1 + 0x2f8) + valA[1] * *(a1 + 0x2f0) + *valA * *(a1 + 0x2e8);
    int32_t v_40 = valA[5] * *(a1 + 0x2f8) + valA[4] * *(a1 + 0x2f0) + valA[3] * *(a1 + 0x2e8);
    double v_38 = valA[8] * *(a1 + 0x2f8) + valA[7] * *(a1 + 0x2f0) + valA[6] * *(a1 + 0x2e8);
    memcpy(a1 + 0xf0, &v_48, 0x18);
    *(a1 + 0xf0) = **a2 + *(a1 + 0xf0);
    *(a1 + 0xf8) = *(*a2 + 8) + *(a1 + 0xf8);
    *(a1 + 0x100) = *(*a2 + 0x10) + *(a1 + 0x100);
    float* valA3 = a2[1];
    float v_30 =
        valA3[2] * *(a1 + 0x318) + valA3[1] * *(a1 + 0x30c) + *(a1 + 0x300) * *valA3;
    float v_2c =
        valA3[2] * *(a1 + 0x31c) + valA3[1] * *(a1 + 0x310) + *(a1 + 0x304) * *valA3;
    float v_28 =
        valA3[2] * *(a1 + 0x320) + valA3[1] * *(a1 + 0x314) + *(a1 + 0x308) * *valA3;
    float v_24 =
        valA3[4] * *(a1 + 0x30c) + *(a1 + 0x318) * valA3[5] + *(a1 + 0x300) * valA3[3];
    float v_20 =
        valA3[4] * *(a1 + 0x310) + *(a1 + 0x31c) * valA3[5] + *(a1 + 0x304) * valA3[3];
    float v_1c =
        valA3[4] * *(a1 + 0x314) + *(a1 + 0x320) * valA3[5] + *(a1 + 0x308) * valA3[3];
    float v_18 =
        valA3[7] * *(a1 + 0x30c) + *(a1 + 0x318) * valA3[8] + *(a1 + 0x300) * valA3[6];
    float v_14 =
        valA3[7] * *(a1 + 0x310) + *(a1 + 0x31c) * valA3[8] + *(a1 + 0x304) * valA3[6];
    int32_t v_c = valA3[9] + *(a1 + 0x324) + 1;
    float v_10 =
        valA3[7] * *(a1 + 0x314) + *(a1 + 0x320) * valA3[8] + *(a1 + 0x308) * valA3[6];
    memcpy(a1 + 0x110, &v_30, 0x28);
    Env_ActivateEntity_7(a1);
    v_30 = *(a1 + 0x110);
    long double x87_r7_54 = v_30;
    float v_2c_1 = *(a1 + 0x114);
    long double f1 = 0f;
    x87_r7_54 - f1;
    float v_28_1 = *(a1 + 0x118);

    if (!(*(&((x87_r7_54 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_54, f1) ? 1 : 0) << 0xa
        | (x87_r7_54 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_44604f:
        long double x87_r7_57 = v_28_1;
        long double x87_r6_48 = v_2c_1;
        long double x87_r5_1 = v_30;
        long double x87_r7_59 =
            1.0 / sqrtl(x87_r5_1 * x87_r5_1 + x87_r6_48 * x87_r6_48 + x87_r7_57 * x87_r7_57);
        v_30 = v_30 * x87_r7_59;
        v_2c_1 = v_2c_1 * x87_r7_59;
        v_28_1 = v_28_1 * x87_r7_59;
    }
    else
    {
        long double x87_r7_55 = v_2c_1;
        long double f2_1 = 0f;
        x87_r7_55 - f2_1;

        if (!(*(&((x87_r7_55 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_55, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_55 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_44604f;

        long double x87_r7_56 = v_28_1;
        long double f4_1 = 0f;
        x87_r7_56 - f4_1;

        if (!(*(&((x87_r7_56 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_56, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_56 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_44604f;
    }

    float v_54 = *(a1 + 0x118) * *(a1 + 0x12c) - *(a1 + 0x114) * *(a1 + 0x130);
    float v_24_1 = v_54;
    float v_50 = -((*(a1 + 0x118) * *(a1 + 0x128) - *(a1 + 0x110) * *(a1 + 0x130)));
    float v_4c = *(a1 + 0x114) * *(a1 + 0x128) - *(a1 + 0x110) * *(a1 + 0x12c);
    v_48 = v_4c * v_2c_1 - v_50 * v_28_1;
    int32_t v_18_1 = v_48;
    *(&v_48 + 4) = -((v_4c * v_30 - v_54 * v_28_1));
    v_40 = v_50 * v_30 - v_54 * v_2c_1;
    long double x87_r7_81 = v_54;
    long double f3 = 0f;
    x87_r7_81 - f3;

    if (!(*(&((x87_r7_81 < f3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_81, f3) ? 1 : 0) << 0xa
        | (x87_r7_81 == f3 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_446194:
        long double x87_r7_84 = v_54;
        long double x87_r6_68 = v_50;
        long double x87_r5_3 = v_4c;
        long double x87_r7_90 =
            1.0 / sqrtl(x87_r7_84 * x87_r7_84 + x87_r5_3 * x87_r5_3 + x87_r6_68 * x87_r6_68);
        float v_24_2 = v_54 * x87_r7_90;
        float v_20_2 = v_50 * x87_r7_90;
        float v_1c_2 = v_4c * x87_r7_90;
    }
    else
    {
        long double x87_r7_82 = v_50;
        long double f5_1 = 0f;
        x87_r7_82 - f5_1;

        if (!(*(&((x87_r7_82 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_82, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_82 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446194;

        long double x87_r7_83 = v_4c;
        long double f7_1 = 0f;
        x87_r7_83 - f7_1;

        if (!(*(&((x87_r7_83 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_83, f7_1) ? 1 : 0) << 0xa
                | (x87_r7_83 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446194;
    }

    long double x87_r7_92 = v_48;
    long double f6 = 0f;
    x87_r7_92 - f6;

    if (!(*(&((x87_r7_92 < f6 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_92, f6) ? 1 : 0) << 0xa
        | (x87_r7_92 == f6 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
    label_446213:
        long double x87_r7_95 = v_40;
        long double x87_r6_76 = *(&v_48 + 4);
        long double x87_r5_8 = v_48;
        long double x87_r7_97 =
            1.0 / sqrtl(x87_r5_8 * x87_r5_8 + x87_r6_76 * x87_r6_76 + x87_r7_95 * x87_r7_95);
        float v_18_2 = v_48 * x87_r7_97;
        float v_14_2 = *(&v_48 + 4) * x87_r7_97;
        float v_10_2 = v_40 * x87_r7_97;
    }
    else
    {
        long double x87_r7_93 = *(&v_48 + 4);
        long double f8_1 = 0f;
        x87_r7_93 - f8_1;

        if (!(*(&((x87_r7_93 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_93, f8_1) ? 1 : 0) << 0xa
                | (x87_r7_93 == f8_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446213;

        long double x87_r7_94 = v_40;
        long double f9_1 = 0f;
        x87_r7_94 - f9_1;

        if (!(*(&((x87_r7_94 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_94, f9_1) ? 1 : 0) << 0xa
                | (x87_r7_94 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            goto label_446213;
    }

    memcpy(a1 + 0x110, &v_30, 0x28);
    *(a1 + 0x134) = 0;
    memcpy(a1 + 0x70, a1 + 0x110, 0x28);
    return Env_InitLadder_8(a1);
}
