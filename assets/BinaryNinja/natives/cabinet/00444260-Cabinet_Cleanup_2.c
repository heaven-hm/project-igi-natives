// Original IGI.EXE function: Cabinet_Cleanup_2 (VA 0x00444260; static CFG gate PASS, CFG score 1.000).
#include "Cabinet_Cleanup_2.h"
int32_t Cabinet_Cleanup_2(float a1)

{
    void* objC = *(a1 + 0x130);

    if (*(objC + 0x11c))
    {
        long double x87_r7_2 = *(a1 + 0x154) + 153.600006f;
        *(a1 + 0x154) = x87_r7_2;
        long double f0_1 = 1843.19995f;
        x87_r7_2 - f0_1;

        if (!(*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            *(a1 + 0x154) = 0x44e66666;
            *(objC + 0x130) = 0;
        }
    }

    if (*(objC + 0x11d))
    {
        long double x87_r7_4 = *(a1 + 0x154) - 102.400002f;
        *(a1 + 0x154) = x87_r7_4;
        long double f1_1 = 0f;
        x87_r7_4 - f1_1;

        if (*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            *(a1 + 0x154) = 0;
            *(objC + 0x130) = 0;
        }
    }

    if (*(objC + 0x11e))
    {
        *(a1 + 0x154) = 0;
        *(objC + 0x11e) = 0;
        *(objC + 0x130) = 0;
    }

    long double x87_r7_8 = *(a1 + 0x78) * *(a1 + 0x158) + *(a1 + 0x74) * *(a1 + 0x154)
        + *(a1 + 0x70) * *(a1 + 0x150);
    long double x87_r6_7 = *(a1 + 0x84) * *(a1 + 0x158) + *(a1 + 0x80) * *(a1 + 0x154)
        + *(a1 + 0x7c) * *(a1 + 0x150);
    long double x87_r6_11 = *(a1 + 0x90) * *(a1 + 0x158) + *(a1 + 0x8c) * *(a1 + 0x154)
        + *(a1 + 0x88) * *(a1 + 0x150);
    double v_18 = x87_r7_8 + *(a1 + 0x138);
    double v_10 = x87_r6_7 + *(a1 + 0x140);
    double v_8 = x87_r6_11 + *(a1 + 0x148);
    long double x87_r7_14 = *(a1 + 0x9c);
    long double x87_r6_12 = *(a1 + 0xa0);
    x87_r6_12 - x87_r7_14;
    long double x87_r7_15;

    if (!(*(&((x87_r6_12 < x87_r7_14 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_14) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_15 = *(a1 + 0xa0);
    else
        x87_r7_15 = *(a1 + 0x9c);

    long double x87_r6_13 = *(a1 + 0x98);
    x87_r6_13 - x87_r7_15;
    long double x87_r7_17;

    if (*(&((x87_r6_13 < x87_r7_15 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_15) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_15 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_18 = *(a1 + 0x9c);
        long double x87_r6_14 = *(a1 + 0xa0);
        x87_r6_14 - x87_r7_18;

        if (!(*(&((x87_r6_14 < x87_r7_18 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_18) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_17 = *(a1 + 0xa0);
        else
            x87_r7_17 = *(a1 + 0x9c);
    }
    else
        x87_r7_17 = *(a1 + 0x98);

    float v_2c_1 = Render_ComputeNormals(*(a1 + 0x6c)) * x87_r7_17;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_2c_1);
}
