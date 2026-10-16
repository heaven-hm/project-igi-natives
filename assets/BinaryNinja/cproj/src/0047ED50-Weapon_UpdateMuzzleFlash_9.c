#include "gi_platform.h"
#include "0047ED50-Weapon_UpdateMuzzleFlash_9.h"
int32_t Weapon_UpdateMuzzleFlash_9(void* a1)

{
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) * 27.0f;
    int32_t v_44 = 0;
    int32_t v_40 = 0;
    int32_t v_3c = 0;
    float v_6c = x87_r7_1;
    float v_70 = (*(int32_t*)(uintptr_t)(a1 + 0x100)) * 0.5.0f;
    int16_t v_50 = v_6c * 0.100000001.0f;
    long double x87_r7_7 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.200000003.0f;
    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x104));
    int32_t v_50_1 = (x87_r7_7 + 0.800000012.0f) * v_6c;

    if (valA1 == 2)
    {
        long double x87_r7_10 = (*(int32_t*)(uintptr_t)(a1 + 0xfc));
        long double f1_1 = v_70;
        x87_r7_10 - f1_1;
        valA1 = (x87_r7_10 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&valA1 + 1) & 0x41))
        {
            float v_6c_2 =
                Sys_AllocateMemory_14(Level_SetMission_5()) * (x87_r7_10 - v_70) * 0.200000003.0f / v_70;
            float v_90_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548.0f;
            float v_94_2 = (0.5.0f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.00628318591.0f;
            valA1 = Script_SpawnNewTask_31((*(int32_t*)(uintptr_t)(a1 + 0x108)), a1 + 0x20, &v_44, v_6c_2, v_94_2, v_90_2,
                0x3f800000, v_50, v_50_1);
        }

        long double x87_r7_22 = (*(int32_t*)(uintptr_t)(a1 + 0xfc));
        long double x87_r6_2 = v_70 * 1.5.0f;
        x87_r7_22 - x87_r6_2;
        valA1 = (x87_r7_22 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_22, x87_r6_2) ? 1 : 0) << 0xa
            | (x87_r7_22 == x87_r6_2 ? 1 : 0) << 0xe | 0x3000;

        if (*(&valA1 + 1) & 1)
        {
            float v_6c_4 = Sys_AllocateMemory_14(Level_SetMission_5()) * x87_r7_22 / x87_r6_2 * 0.200000003.0f;
            float v_90_4 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548.0f;
            float v_94_4 = (0.5.0f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.00628318591.0f;
            return Script_SpawnNewTask_31((*(int32_t*)(uintptr_t)(a1 + 0x10c)), a1 + 0x20, &v_44, v_6c_4, v_94_4, v_90_4,
                0x3f800000, v_50, v_50_1);
        }
    }
    else if (valA1 == 1)
    {
        long double x87_r7_32 = (*(int32_t*)(uintptr_t)(a1 + 0xfc));
        long double f2_1 = v_70;
        x87_r7_32 - f2_1;
        valA1 = (x87_r7_32 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_32, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_32 == f2_1 ? 1 : 0) << 0xe;

        if (!(*(&valA1 + 1) & 0x41))
        {
            long double x87_r7_34 = (*(int32_t*)(uintptr_t)(a1 + 0x110)) * 4096.0f;
            long double x87_r6_6 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
            long double x87_r5_2 = (*(int32_t*)(uintptr_t)(a1 + 0xf4));
            long double x87_r4_1 = (*(int32_t*)(uintptr_t)(a1 + 0xf0));
            int32_t v_58_1 = 0;
            int32_t v_54_1 = 0;
            double v_60_1 =
                sqrtl(x87_r4_1 * x87_r4_1 + x87_r5_2 * x87_r5_2 + x87_r6_6 * x87_r6_6);
            long double x87_r6_8 = v_60_1;
            x87_r6_8 - x87_r7_34;
            valA1 = (x87_r6_8 < x87_r7_34 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_8, x87_r7_34) ? 1 : 0) << 0xa
                | (x87_r6_8 == x87_r7_34 ? 1 : 0) << 0xe | 0x3800;
            long double x87_r7_35;

            x87_r7_35 = *(&valA1 + 1) & 0x41 ? v_60_1 : v_60_1 / x87_r7_34;

            long double x87_r6_9 = (*(int32_t*)(uintptr_t)(a1 + 0xf0));
            double v_30_1 = (*(int32_t*)(uintptr_t)(a1 + 0xf4));
            double v_28_1 = (*(int32_t*)(uintptr_t)(a1 + 0xf8));
            double v_20;
            memcpy(&v_20, a1 + 0x20, 0x18);
            double v_38 = x87_r6_9 * x87_r7_35;
            double v_30_2 = v_30_1 * x87_r7_35;
            double v_28_2 = v_28_1 * x87_r7_35;
            long double x87_r7_38 = 0.0;
            long double f3_1 = v_60_1;
            x87_r7_38 - f3_1;
            valA1 = (x87_r7_38 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_38, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_38 == f3_1 ? 1 : 0) << 0xe;

            if (*(&valA1 + 1) & 1)
            {
                int16_t valA16;

                do
                {
                    float v_6c_6 = Sys_AllocateMemory_14(Level_SetMission_5()) * ((*(int32_t*)(uintptr_t)(a1 + 0xfc)) - v_70)
                        * 0.200000003.0f / v_70;
                    float v_90_6 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548.0f;
                    float v_94_6 = (0.5.0f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.00628318591.0f;
                    Script_SpawnNewTask_31((*(int32_t*)(uintptr_t)(a1 + 0x10c)), &v_20, &v_44, v_6c_6, v_94_6, v_90_6,
                        0x3f800000, v_50, v_50_1);
                    v_20 = v_20 + v_38;
                    double v_18 = v_18 + v_30_2;
                    double v_10 = v_10 + v_28_2;
                    long double x87_r7_57 = x87_r7_35 + 0.0;
                    v_58_1 = x87_r7_57;
                    long double f4_1 = v_60_1;
                    x87_r7_57 - f4_1;
                    valA16 = (x87_r7_57 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_57, f4_1) ? 1 : 0) << 0xa
                        | (x87_r7_57 == f4_1 ? 1 : 0) << 0xe;
                } while (*(&valA16 + 1) & 1);

                return valA16;
            }
        }
    }

    return valA1;
}
