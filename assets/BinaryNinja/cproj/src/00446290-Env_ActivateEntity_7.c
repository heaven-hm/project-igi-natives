#include "gi_platform.h"
#include "00446290-Env_ActivateEntity_7.h"
int32_t Env_ActivateEntity_7(float a1)

{
    long double x87_r7_2 = (*(int32_t*)(uintptr_t)(a1 + 0x108)) * (*(int32_t*)(uintptr_t)(a1 + 0x138)) * 4096.0f;
    long double x87_r6_2 = (*(int32_t*)(uintptr_t)(a1 + 0x10c)) * (*(int32_t*)(uintptr_t)(a1 + 0x138)) * 4096.0f;
    double v_28 = (*(int32_t*)(uintptr_t)(a1 + 0x120)) * x87_r6_2 + (*(int32_t*)(uintptr_t)(a1 + 0x11c)) * x87_r7_2;
    long double x87_r5_8 = (*(int32_t*)(uintptr_t)(a1 + 0x12c)) * x87_r6_2 + (*(int32_t*)(uintptr_t)(a1 + 0x128)) * x87_r7_2;
    double v_18 = (*(int32_t*)(uintptr_t)(a1 + 0x114)) * x87_r6_2 + (*(int32_t*)(uintptr_t)(a1 + 0x110)) * x87_r7_2 + (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    double v_10 = v_28 + (*(int32_t*)(uintptr_t)(a1 + 0xf8));
    double v_8 = x87_r5_8 + (*(int32_t*)(uintptr_t)(a1 + 0x100));
    long double x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_8 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_8 - x87_r7_5;
    long double x87_r7_6;

    if (!(*(&((x87_r6_8 < x87_r7_5 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_8, x87_r7_5) ? 1 : 0) << 0xa
            | (x87_r6_8 == x87_r7_5 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_9 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_9 - x87_r7_6;
    long double x87_r7_8;

    if (*(&((x87_r6_9 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_9, x87_r7_6) ? 1 : 0) << 0xa
        | (x87_r6_9 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_9 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_10 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_10 - x87_r7_9;

        if (!(*(&((x87_r6_10 < x87_r7_9 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_10, x87_r7_9) ? 1 : 0) << 0xa
                | (x87_r6_10 == x87_r7_9 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_8 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_38_1 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_8;
    return WorldObject_CommitTransform(Level_StartMission_4(), a1, &v_18, v_38_1);
}
