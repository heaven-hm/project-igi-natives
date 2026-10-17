// IGI native provenance: Weapon_UpdateMuzzleFlash_9 - 0x0047ED50 - CFG score 98.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047ED50-Weapon_UpdateMuzzleFlash_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateMuzzleFlash_9.h"
int32_t Weapon_UpdateMuzzleFlash_9(void* context)

{
    long double fpu_val_7_1 = *(context + 0x110) * 27.0f;
    int32_t item_44 = 0;
    int32_t item_40 = 0;
    int32_t item_3c = 0;
    float item_6c = fpu_val_7_1;
    float item_70 = *(context + 0x100) * 0.5f;
    int16_t item_50 = item_6c * 0.100000001f;
    long double fpu_val_7_7 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.200000003f;
    int32_t data_1 = *(context + 0x104);
    int32_t item_50_1 = (fpu_val_7_7 + 0.800000012f) * item_6c;

    if (data_1 == 2)
    {
        long double fpu_val_7_10 = *(context + 0xfc);
        long double f1_1 = item_70;
        fpu_val_7_10 - f1_1;
        data_1 = (fpu_val_7_10 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&data_1 + 1) & 0x41))
        {
            float item_6c_2 =
                Sys_AllocateMemory_14(Level_SetMission_5()) * (fpu_val_7_10 - item_70) * 0.200000003f / item_70;
            float item_90_2 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548f;
            float item_94_2 = (0.5f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.00628318591f;
            data_1 = Script_SpawnNewTask_31(*(context + 0x108), context + 0x20, &item_44, item_6c_2, item_94_2, item_90_2,
                0x3f800000, item_50, item_50_1);
        }

        long double fpu_val_7_22 = *(context + 0xfc);
        long double fpu_val_6_2 = item_70 * 1.5f;
        fpu_val_7_22 - fpu_val_6_2;
        data_1 = (fpu_val_7_22 < fpu_val_6_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_22, fpu_val_6_2) ? 1 : 0) << 0xa
            | (fpu_val_7_22 == fpu_val_6_2 ? 1 : 0) << 0xe | 0x3000;

        if (*(&data_1 + 1) & 1)
        {
            float item_6c_4 = Sys_AllocateMemory_14(Level_SetMission_5()) * fpu_val_7_22 / fpu_val_6_2 * 0.200000003f;
            float item_90_4 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548f;
            float item_94_4 = (0.5f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.00628318591f;
            return Script_SpawnNewTask_31(*(context + 0x10c), context + 0x20, &item_44, item_6c_4, item_94_4, item_90_4,
                0x3f800000, item_50, item_50_1);
        }
    }
    else if (data_1 == 1)
    {
        long double fpu_val_7_32 = *(context + 0xfc);
        long double f2_1 = item_70;
        fpu_val_7_32 - f2_1;
        data_1 = (fpu_val_7_32 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_32, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_32 == f2_1 ? 1 : 0) << 0xe;

        if (!(*(&data_1 + 1) & 0x41))
        {
            long double fpu_val_7_34 = *(context + 0x110) * 4096.0f;
            long double fpu_val_6_6 = *(context + 0xf8);
            long double fpu_val_5_2 = *(context + 0xf4);
            long double fpu_val_4_1 = *(context + 0xf0);
            int32_t item_58_1 = 0;
            int32_t item_54_1 = 0;
            double item_60_1 =
                sqrtl(fpu_val_4_1 * fpu_val_4_1 + fpu_val_5_2 * fpu_val_5_2 + fpu_val_6_6 * fpu_val_6_6);
            long double fpu_val_6_8 = item_60_1;
            fpu_val_6_8 - fpu_val_7_34;
            data_1 = (fpu_val_6_8 < fpu_val_7_34 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_8, fpu_val_7_34) ? 1 : 0) << 0xa
                | (fpu_val_6_8 == fpu_val_7_34 ? 1 : 0) << 0xe | 0x3800;
            long double fpu_val_7_35;

            fpu_val_7_35 = *(&data_1 + 1) & 0x41 ? item_60_1 : item_60_1 / fpu_val_7_34;

            long double fpu_val_6_9 = *(context + 0xf0);
            double item_30_1 = *(context + 0xf4);
            double item_28_1 = *(context + 0xf8);
            double item_20;
            memcpy(&item_20, context + 0x20, 0x18);
            double item_38 = fpu_val_6_9 * fpu_val_7_35;
            double item_30_2 = item_30_1 * fpu_val_7_35;
            double item_28_2 = item_28_1 * fpu_val_7_35;
            long double fpu_val_7_38 = 0.0;
            long double f3_1 = item_60_1;
            fpu_val_7_38 - f3_1;
            data_1 = (fpu_val_7_38 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_38, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_38 == f3_1 ? 1 : 0) << 0xe;

            if (*(&data_1 + 1) & 1)
            {
                int16_t data_16;

                do
                {
                    float item_6c_6 = Sys_AllocateMemory_14(Level_SetMission_5()) * (*(context + 0xfc) - item_70)
                        * 0.200000003f / item_70;
                    float item_90_6 = Sys_AllocateMemory_14(Level_SetMission_5()) * 6.28318548f;
                    float item_94_6 = (0.5f - Sys_AllocateMemory_14(Level_SetMission_5())) * 0.00628318591f;
                    Script_SpawnNewTask_31(*(context + 0x10c), &item_20, &item_44, item_6c_6, item_94_6, item_90_6,
                        0x3f800000, item_50, item_50_1);
                    item_20 = item_20 + item_38;
                    double item_18 = item_18 + item_30_2;
                    double item_10 = item_10 + item_28_2;
                    long double fpu_val_7_57 = fpu_val_7_35 + 0.0;
                    item_58_1 = fpu_val_7_57;
                    long double f4_1 = item_60_1;
                    fpu_val_7_57 - f4_1;
                    data_16 = (fpu_val_7_57 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_57, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_57 == f4_1 ? 1 : 0) << 0xe;
                } while (*(&data_16 + 1) & 1);

                return data_16;
            }
        }
    }

    return data_1;
}
