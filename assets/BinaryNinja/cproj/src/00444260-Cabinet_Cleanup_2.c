#include "gi_platform.h"
#include "00444260-Cabinet_Cleanup_2.h"
int32_t Cabinet_Cleanup_2(float a1)

{
    void* objC = (*(int32_t*)(uintptr_t)(a1 + 0x130));

    if (*(objC + 0x11c))
    {
        long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x154)) + 153.600006.0f;
        (*(int32_t*)(uintptr_t)(a1 + 0x154)) = x87_r7_2;
        long double f0_1 = 1843.19995.0f;
        x87_r7_2 - f0_1;

        if (!(*(&((x87_r7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0x44e66666;
            *(objC + 0x130) = 0;
        }
    }

    if (*(objC + 0x11d))
    {
        long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x154)) - 102.400002.0f;
        (*(int32_t*)(uintptr_t)(a1 + 0x154)) = x87_r7_4;
        long double f1_1 = 0.0f;
        x87_r7_4 - f1_1;

        if (*(&((x87_r7_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0;
            *(objC + 0x130) = 0;
        }
    }

    if (*(objC + 0x11e))
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x154)) = 0;
        *(objC + 0x11e) = 0;
        *(objC + 0x130) = 0;
    }

    long double x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0x78)) * (*(int32_t*)(uintptr_t)(a1 + 0x158)) + (*(int32_t*)(uintptr_t)(a1 + 0x74)) * (*(int32_t*)(uintptr_t)(a1 + 0x154))
        + (*(int32_t*)(uintptr_t)(a1 + 0x70)) * (*(int32_t*)(uintptr_t)(a1 + 0x150));
    long double x87_r6_7 = (*(int32_t*)(uintptr_t)(a1 + 0x84)) * (*(int32_t*)(uintptr_t)(a1 + 0x158)) + (*(int32_t*)(uintptr_t)(a1 + 0x80)) * (*(int32_t*)(uintptr_t)(a1 + 0x154))
        + (*(int32_t*)(uintptr_t)(a1 + 0x7c)) * (*(int32_t*)(uintptr_t)(a1 + 0x150));
    long double x87_r6_11 = (*(int32_t*)(uintptr_t)(a1 + 0x90)) * (*(int32_t*)(uintptr_t)(a1 + 0x158)) + (*(int32_t*)(uintptr_t)(a1 + 0x8c)) * (*(int32_t*)(uintptr_t)(a1 + 0x154))
        + (*(int32_t*)(uintptr_t)(a1 + 0x88)) * (*(int32_t*)(uintptr_t)(a1 + 0x150));
    double v_18 = x87_r7_8 + (*(int32_t*)(uintptr_t)(a1 + 0x138));
    double v_10 = x87_r6_7 + (*(int32_t*)(uintptr_t)(a1 + 0x140));
    double v_8 = x87_r6_11 + (*(int32_t*)(uintptr_t)(a1 + 0x148));
    long double x87_r7_14 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_12 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_12 - x87_r7_14;
    long double x87_r7_15;

    if (!(*(&((x87_r6_12 < x87_r7_14 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_14) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_14 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_15 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_15 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_13 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_13 - x87_r7_15;
    long double x87_r7_17;

    if (*(&((x87_r6_13 < x87_r7_15 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_15) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_15 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_18 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_14 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_14 - x87_r7_18;

        if (!(*(&((x87_r6_14 < x87_r7_18 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_18) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_17 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_2c_1 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_17;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_2c_1);
}
