#include "gi_platform.h"
#include "00435A80-Gear_LoadParameters.h"
int32_t Gear_LoadParameters(void* a1, float a2)

{
    int32_t* flagP = a2;
    float* valA = flagP[1];
    double v_18 = valA[2] * (*(int32_t*)(uintptr_t)(a1 + 0x100)) + valA[1] * (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + *valA * (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    double v_10 = valA[5] * (*(int32_t*)(uintptr_t)(a1 + 0x100)) + valA[4] * (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + valA[3] * (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    double* valA1 = *flagP;
    double v_8 = valA[8] * (*(int32_t*)(uintptr_t)(a1 + 0x100)) + valA[7] * (*(int32_t*)(uintptr_t)(a1 + 0xf8)) + valA[6] * (*(int32_t*)(uintptr_t)(a1 + 0xf0));
    long double x87_r7_12 = v_18;
    double v_30;
    memcpy(&v_30, &v_18, 0x18);
    v_30 = x87_r7_12 + *valA1;
    double v_28;
    double v_28_1 = v_28 + valA1[1];
    double v_20;
    double v_20_1 = v_20 + valA1[2];
    long double x87_r7_18 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    long double x87_r6_12 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    x87_r6_12 - x87_r7_18;
    long double x87_r7_19;

    if (!(*(&((x87_r6_12 < x87_r7_18 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_12, x87_r7_18) ? 1 : 0) << 0xa
            | (x87_r6_12 == x87_r7_18 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
    else
        x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

    long double x87_r6_13 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
    x87_r6_13 - x87_r7_19;
    long double x87_r7_21;

    if (*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
        | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_14 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_14 - x87_r7_22;

        if (!(*(&((x87_r6_14 < x87_r7_22 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_14, x87_r7_22) ? 1 : 0) << 0xa
                | (x87_r6_14 == x87_r7_22 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
    }
    else
        x87_r7_21 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

    float v_44_1 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_21;
    double* v_48 = &v_30;
    WorldObject_CommitTransform(Level_StartMission_4(), a1, v_48, v_44_1);
    return Vehicle_InitHeli_5(a1, flagP[1]);
}
