// IGI native provenance: GunShotEffect_LoadParameters - 0x00438440 - CFG score 98.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00438440-GunShotEffect_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GunShotEffect_LoadParameters.h"
int32_t GunShotEffect_LoadParameters(int32_t* context )

{
    int32_t* source_val = *context;
    char* context_val = context[1];
    int32_t result;
    int32_t flagP;

    if (!*source_val)
        flagP = 0;
    else
    {
        int16_t data_val = Render_DrawRigidMesh_12();
        int32_t entity_val;
        entity_val = *(*source_val + 0x1c);
        result = TaskType_IsDerivedFrom(entity_val, data_val);
        flagP = result;
    }

    result = context_val[1];

    if (result && !flagP)
    {
        uint32_t data_3 = Sys_FreeMemory_14(Level_SetMission_5(), 3);
        result = FX_DebrisSpawn(*context + 8, 1, flagP, flagP, 0x45000000, flagP, flagP, data_3 + 2, flagP, flagP,
            &context_val[0x32], &g_567c74, 0xffffffff, 2, 0x46a00000, &context[2], 0x3f060a92, 0x43aa0000,
            0x442a0000, flagP);
    }

    if (*source_val)
    {
        result = context[5];
        int32_t dest_1;

        if (result)
            dest_1 = *(context_val + 0x58);

        if (result && dest_1)
        {
        label_4384f6:
            uint32_t data_6 = Weapon_CheckAmmo_8();
            int32_t temp_4 = 0;
            temp_4 = *(*source_val + 0x1c);
            result = data_6 * 0x180 + temp_4;

            if (*((result << 2) + &g_a96ae0))
            {
                int32_t data_9 = *(context_val + 0x54);
                int32_t item_38_1 = dest_1 + 0x18;
                int32_t dest_3 = *source_val;
                int32_t* item_40 = source_val;
                int32_t item_3c_1 = 0;
                int32_t item_34_1 = data_9;
                uint32_t data_11 = Weapon_CheckAmmo_8();
                int32_t temp_5 = 0;
                temp_5 = *(dest_3 + 0x1c);
                result = (*(((data_11 * 0x180 + temp_5) << 2) + &g_a96ae0))(dest_3, &item_40);
            }
        }
        else
        {
            dest_1 = *(context_val + 0x5c);

            if (dest_1)
                goto label_4384f6;
        }
    }

    if (*context_val && !flagP)
    {
        result = Sys_CheckHeap_13(Level_SetMission_5());

        if (result & 1)
        {
            uint32_t temp_7 = g_57be7c + 0x18;
            int32_t item_4c = flagP;
            int32_t item_48 = flagP;
            int32_t item_44_1 = flagP;
            int32_t item_58 = 0x42fe0000;
            int32_t item_54_1 = 0x42fe0000;
            int32_t item_50_1 = 0x42fe0000;
            float item_6c = 163.839996f;
            int32_t item_68_1 = 0x4323d70a;
            void* data_14 = Level_StartMission_4();
            struct status_msg* data_16 = Script_FormatString_30(Script_FormatString(), data_14, temp_7, &item_4c, &item_58,
                &item_6c, 0x48c80000, 0x1080000, flagP, 0x3db60b61, flagP, 2, flagP);
            double item_30 = source_val[0xe];
            double item_28_1 = source_val[0xf];
            double item_20_1 = source_val[0x10];
            Sys_FreeMemory_11(&item_30);
            long double fpu_val_7_5 = item_6c * 3.0;
            item_30 = fpu_val_7_5 * item_30;
            double item_28_2 = fpu_val_7_5 * item_28_1;
            double item_20_2 = fpu_val_7_5 * item_20_1;
            item_30 = item_30 + *(source_val + 8);
            double item_28_3 = item_28_2 + *(source_val + 0x10);
            long double fpu_val_7_12 = item_20_2 + *(source_val + 0x18);
            int32_t item_64 = flagP;
            int32_t item_60_1 = flagP;
            int32_t item_5c_1 = flagP;
            double item_20_3 = fpu_val_7_12;
            long double fpu_val_6_6 = item_6c * 0.25;
            void item_18;
            memcpy(&item_18, &item_30, 0x18);
            double item_8_1 = fpu_val_6_6 + fpu_val_7_12;
            float item_5c_2 = (Sys_AllocateMemory_14(Level_SetMission_5()) * 0.75 + 0.14999999999999999)
                * 4096000.0f * 9.25925906e-06.0f;
            float item_70_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.25 + 0.75;
            long double fpu_val_7_23 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            Script_SpawnNewTask_31(data_16, &item_30, &item_64, item_70_1,
                (fpu_val_7_23 + fpu_val_7_23) * 0.052359879f + 0.0127990814f, flagP, 0x3f800000, 0xf, 0x1e);
            float item_5c_3 = item_5c_2 * 1.25f;
            long double fpu_val_7_30 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            return Script_SpawnNewTask_31(data_16, &item_18, &item_64, item_70_1,
                (fpu_val_7_30 + fpu_val_7_30) * 0.052359879f + 0.0127990814f, flagP, 0x3f800000, 0xf, 0x1e);
        }
    }

    return result;
}
