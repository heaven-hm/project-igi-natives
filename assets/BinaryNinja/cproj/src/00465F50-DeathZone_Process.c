#include "gi_platform.h"
#include "00465F50-DeathZone_Process.h"
int32_t DeathZone_Process(float a1, double** a2)

{
    int16_t valA = Script_ExecuteLevelScript_16();
    int32_t objC;
    objC = (*(int32_t*)(uintptr_t)(*(a1 + 0x130) + 0x1c));
    int32_t result = TaskType_IsDerivedFrom(objC, valA);

    if (result)
    {
        float* valA2 = a2[1];
        long double x87_r7_1 = valA2[2];
        double v_58;
        memcpy(&v_58, a1 + 0xf0, 0x18);
        double v_50;
        double v_48;
        double v_28 = x87_r7_1 * v_48 + valA2[1] * v_50 + *valA2 * v_58;
        double v_20_1 = valA2[5] * v_48 + valA2[4] * v_50 + valA2[3] * v_58;
        double* valA3 = *a2;
        double v_18_1 = valA2[8] * v_48 + valA2[7] * v_50 + valA2[6] * v_58;
        long double x87_r7_13 = v_28;
        double v_40;
        memcpy(&v_40, &v_28, 0x18);
        v_40 = x87_r7_13 + *valA3;
        double v_38;
        double v_38_1 = v_38 + valA3[1];
        double v_30;
        double v_30_1 = v_30 + valA3[2];
        long double x87_r7_19 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        long double x87_r6_13 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        x87_r6_13 - x87_r7_19;
        long double x87_r7_20;

        if (!(*(&((x87_r6_13 < x87_r7_19 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_13, x87_r7_19) ? 1 : 0) << 0xa
                | (x87_r6_13 == x87_r7_19 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
        else
            x87_r7_20 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));

        long double x87_r6_14 = (*(int32_t*)(uintptr_t)(a1 + 0x98));
        x87_r6_14 - x87_r7_20;
        long double x87_r7_22;

        if (*(&((x87_r6_14 < x87_r7_20 ? 1 : 0) << 8
            | (FCMP_UO(x87_r6_14, x87_r7_20) ? 1 : 0) << 0xa
            | (x87_r6_14 == x87_r7_20 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
        {
            long double x87_r7_23 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
            long double x87_r6_15 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            x87_r6_15 - x87_r7_23;

            if (!(*(&((x87_r6_15 < x87_r7_23 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_15, x87_r7_23) ? 1 : 0) << 0xa
                    | (x87_r6_15 == x87_r7_23 ? 1 : 0) << 0xe) + 1) & 1))
                x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0xa0));
            else
                x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x9c));
        }
        else
            x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0x98));

        float v_6c_2 = Render_ComputeNormals((*(int32_t*)(uintptr_t)(a1 + 0x6c))) * x87_r7_22;
        double* v_70 = &v_40;
        WorldObject_CommitTransform(Level_StartMission_4(), a1, v_70, v_6c_2);
        float* valA6 = a2[1];
        v_28 = *valA6 * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + (*(int32_t*)(uintptr_t)(a1 + 0x114)) * valA6[1] + valA6[2] * (*(int32_t*)(uintptr_t)(a1 + 0x120));
        *(&v_28 + 4) =
            *valA6 * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + (*(int32_t*)(uintptr_t)(a1 + 0x118)) * valA6[1] + valA6[2] * (*(int32_t*)(uintptr_t)(a1 + 0x124));
        v_20_1 =
            *valA6 * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + (*(int32_t*)(uintptr_t)(a1 + 0x11c)) * valA6[1] + valA6[2] * (*(int32_t*)(uintptr_t)(a1 + 0x128));
        *(&v_20_1 + 4) =
            valA6[5] * (*(int32_t*)(uintptr_t)(a1 + 0x120)) + valA6[3] * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + valA6[4] * (*(int32_t*)(uintptr_t)(a1 + 0x114));
        v_18_1 =
            valA6[5] * (*(int32_t*)(uintptr_t)(a1 + 0x124)) + valA6[3] * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + valA6[4] * (*(int32_t*)(uintptr_t)(a1 + 0x118));
        *(&v_18_1 + 4) =
            valA6[5] * (*(int32_t*)(uintptr_t)(a1 + 0x128)) + valA6[3] * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + valA6[4] * (*(int32_t*)(uintptr_t)(a1 + 0x11c));
        float v_10_1 =
            valA6[8] * (*(int32_t*)(uintptr_t)(a1 + 0x120)) + valA6[6] * (*(int32_t*)(uintptr_t)(a1 + 0x108)) + valA6[7] * (*(int32_t*)(uintptr_t)(a1 + 0x114));
        float v_c_1 =
            valA6[8] * (*(int32_t*)(uintptr_t)(a1 + 0x124)) + valA6[6] * (*(int32_t*)(uintptr_t)(a1 + 0x10c)) + valA6[7] * (*(int32_t*)(uintptr_t)(a1 + 0x118));
        result = valA6[9] + (*(int32_t*)(uintptr_t)(a1 + 0x12c)) + 1;
        int32_t result_1 = result;
        float v_8_1 =
            valA6[8] * (*(int32_t*)(uintptr_t)(a1 + 0x128)) + valA6[6] * (*(int32_t*)(uintptr_t)(a1 + 0x110)) + valA6[7] * (*(int32_t*)(uintptr_t)(a1 + 0x11c));
        memcpy(a1 + 0x70, &v_28, 0x28);
    }

    return result;
}
