// Original IGI.EXE function: HumanPlayer_CheckGround_7 (VA 0x0040E740; static CFG gate PASS, CFG score 0.917).
#include "HumanPlayer_CheckGround_7.h"
int16_t HumanPlayer_CheckGround_7(void* a1, float a2)

{
    float ctxB = a2;
    float v_28;
    AI_TakeCover_23(&v_28, *(ctxB + 0x4ec));
    long double fpu7 = 0f;
    int16_t valA1 = *(a1 + 8);
    float v_48 = 0f;
    float v_44 = 0f;
    float v_24;
    float v_18;
    float v_c;

    if (valA1 & 0x80)
    {
        fpu7 = v_24;
        v_48 = v_18;
        v_44 = v_c;
    }

    float v_38;

    if (*(&valA1 + 1) & 1)
    {
        v_38 = -(v_c);
        fpu7 = fpu7 + -(v_24);
        v_48 = -(v_18) + v_48;
        v_44 = v_38 + v_44;
    }

    float v_1c;
    float v_10;

    if (valA1 & 0x40)
    {
        fpu7 = fpu7 + v_28;
        v_48 = v_1c + v_48;
        v_44 = v_10 + v_44;
    }

    if (valA1 & 0x20)
    {
        v_38 = -(v_10);
        fpu7 = fpu7 + -(v_28);
        v_48 = -(v_1c) + v_48;
        v_44 = v_38 + v_44;
    }

    long double x87_r6_17;

    x87_r6_17 = !(*(&valA1 + 1) & 0x70) ? 1f : 10f;

    long double f1 = 0f;
    fpu7 - f1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        long double x87_r5_10 = v_48;
        long double f3_1 = 0f;
        x87_r5_10 - f3_1;

        if (*(&((x87_r5_10 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_10, f3_1) ? 1 : 0) << 0xa
            | (x87_r5_10 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double x87_r5_11 = v_44;
            long double f4_1 = 0f;
            x87_r5_11 - f4_1;
            int16_t result = (x87_r5_11 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r5_11, f4_1) ? 1 : 0) << 0xa
                | (x87_r5_11 == f4_1 ? 1 : 0) << 0xe | 0x3000;

            if (*(&result + 1) & 0x40)
                return result;
        }
    }

    long double f2 = 0f;
    fpu7 - f2;
    double v_40;
    memcpy(&v_40, ctxB + 0x20, 0x18);

    if (!(*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
        | (fpu7 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_40e8af:
        long double x87_r5_15 = v_44;
        long double x87_r4_1 = v_48;
        long double x87_r5_17 =
            1.0 / sqrtl(fpu7 * fpu7 + x87_r4_1 * x87_r4_1 + x87_r5_15 * x87_r5_15);
        fpu7 = fpu7 * x87_r5_17;
        v_48 = v_48 * x87_r5_17;
        v_44 = v_44 * x87_r5_17;
    }
    else
    {
        long double x87_r5_13 = v_48;
        long double f5_1 = 0f;
        x87_r5_13 - f5_1;

        if (!(*(&((x87_r5_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_13, f5_1) ? 1 : 0) << 0xa
                | (x87_r5_13 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_40e8af;

        long double x87_r5_14 = v_44;
        long double f6_1 = 0f;
        x87_r5_14 - f6_1;

        if (!(*(&((x87_r5_14 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r5_14, f6_1) ? 1 : 0) << 0xa
                | (x87_r5_14 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_40e8af;
    }

    long double x87_r6_18 = x87_r6_17 * 1638.4000000000001;
    float valA2 = *(ctxB + 0xa0);
    a2 = x87_r6_18;
    v_40 = fpu7 * x87_r6_18 + v_40;
    v_38 = a2 * v_48 + v_38;
    double v_30;
    double v_30_1 = a2 * v_44 + v_30;
    return WorldObject_CommitTransform(Level_StartMission_4(), ctxB, &v_40, valA2);
}
