// IGI native provenance: Smoke_Process - 0x00438000 - CFG score 96.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00438000-Smoke_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Smoke_Process.h"
void* Smoke_Process(void* context)

{
    memcpy(context + 0x40, context + 0x28, 0x18);
    int32_t* entity_val = *(context + 0xf4);

    if (entity_val)
    {
        long double fpu_val_7_1 = *(context + 0x124);
        long double f0_1 = *(context + 0x128);
        fpu_val_7_1 - f0_1;

        if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            QTask_FindType(entity_val);
            *(context + 0xf4) = 0;
        }
    }

    int32_t data_2 = *(context + 0x124);
    *(context + 0x171) = 0;
    *(context + 0x128) = data_2;

    if (!*(context + 0xf4))
    {
        float entity_1 = *(context + 0x80);
        float item_78 = 1.0f;
        int32_t item_74_1 = 0;
        int32_t item_70_1 = 0;
        int32_t item_6c_1 = 0;
        int32_t item_68_1 = 0x3f800000;
        int32_t item_64_1 = 0;
        int32_t item_60_1 = 0;
        int32_t item_5c_1 = 0;
        int32_t item_58_1 = 0x3f800000;
        int32_t item_54_1 = 0;
        float item_28[0xa];
        Sys_OpenFileStream_12(&item_28, &item_78, entity_1);
        void item_50;
        Sys_AllocateMemory_12(&item_50, &item_28, *(context + 0x7c));
        int32_t item_30;
        *(context + 0x78) = item_30;
        int32_t data_5 = *(context + 0x110);
        int32_t item_48;
        *(context + 0x70) = item_48;
        int32_t item_3c;
        *(context + 0x74) = item_3c;
        float item_98;
        float entity_4;

        if (!data_5)
            entity_4 = 2.4979255e-38.0f;
        else if (data_5 == 1)
            entity_4 = 2.35099094e-38.0f;
        else if (data_5 != 2)
            entity_4 = item_98;
        else
            entity_4 = 2.35099319e-38.0f;

        int32_t data_9 = *(context + 0x118);
        uint32_t data_13;

        if (!data_9)
            data_13 = g_57bdc8 + 0x18;
        else if (data_9 == 1)
            data_13 = g_57be44 + 0x18;
        else if (data_9 == 2)
            data_13 = g_57be48 + 0x18;
        else
            data_13 = g_57be4c + 0x18;

        long double fpu_val_7_3 = *(context + 0x84) * 4096.0f;
        int32_t temp_4 = *(context + 0xf8);
        float item_b4_2 = entity_4;
        item_98 = fpu_val_7_3;
        float item_94_1 = fpu_val_7_3;
        long double fpu_val_7_5 = *(context + 0x104) * 63.0f;
        int32_t item_90 = 0;
        int32_t item_8c_1 = 0;
        int32_t item_88_1 = 0;
        float item_84 = fpu_val_7_5;
        float item_80_1 = *(context + 0x108) * 63.0f;
        float item_7c_1 = *(context + 0x10c) * 63.0f;
        float item_b4_3 = *(context + 0x114) * 0.0333333351f;
        void* data_15 = Level_StartMission_4();
        struct status_msg* data_17 = Script_FormatString_30(Script_FormatString(), data_15, data_13, &item_90, &item_84,
            &item_98, 0x48c80000, entity_4, 0, item_b4_3, 0, temp_4, 0);
        *(context + 0xf4) = data_17;
        Script_ParseEnumReal32_31(data_17, 0);
    }

    Script_Isexists(context + 0xa4, context);
    return Vehicle_DeployGear_6(context);
}
