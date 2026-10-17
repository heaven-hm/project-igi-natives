// IGI native provenance: Door_Process - 0x00447830 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00447830-Door_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Door_Process.h"
int32_t* Door_Process(uint32_t context, char* param_2)

{
    char* dest_val = context + 0x148;
    void* data_val = DynObj_Missing(dest_val);

    if (!data_val && dest_val && *(context + 0x149) != 0x2a)
    {
        char* item_114_1 = dest_val;
        void item_80;
        Game_DataSymbolLoad(&item_80, "Model "%s" not available");
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_val;
            dest_val = &dest_val[1];
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t entity_1 = ~i;
        void item_100;
        int32_t source_2;
        int32_t dest_2;
        dest_2 = memcpy(&item_100, dest_val - entity_1, entity_1 & 0xfffffffc);
        memcpy(dest_2, source_2, entity_1 & 3);
        void* item_120_1 = &item_100;
        Game_DataSymbolLoad(context + 0x148, "** %s **");
    }

    DynObj_CreateMagicObject_5(context, data_val);
    Env_ActivateEntity_7(context);
    memcpy(context + 0x70, context + 0x110, 0x28);
    char* dest_6 = param_2;

    if (dest_6 && *dest_6)
    {
        memcpy(context + 0x2c8, context + 0x20, 0x18);
        memcpy(context + 0x29c, context + 0x110, 0x28);
        dest_6 = param_2;
    }

    Script_Isexists(context + 0x1a0, context);
    Script_Isexists(context + 0x1f0, context);
    Script_Isexists(context + 0x240, context);
    long double fpu7 = *(context + 0x10c);
    long double fpu6 = *(context + 0x108);
    *(context + 0x19a) = 1;
    *(context + 0x19c) = 1;
    *(context + 0x199) = 0;
    *(context + 0x290) = 0;
    *(context + 0x19b) = 0;
    long double fpu_val_7_1 = sqrtl(fpu6 * fpu6 + fpu7 * fpu7);
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    if (*(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        fpu_val_7_1 = -(fpu_val_7_1);

    *(context + 0x194) = fpu_val_7_1;
    Env_UpdateCameraLens_8(context);
    void* data_7 = *(context + 0x2e0);

    if (data_7)
    {
        SoundSys_SetFrequency_7(data_7);
        *(context + 0x2e0) = 0;
    }

    int32_t* data_8 = *(context + 0xe8);

    if (data_8)
        QTask_FindType(data_8);

    struct status_msg* data_9 = CarGun_Create(nullptr, context);
    *(context + 0xe8) = data_9;
    int32_t* result = Car_GunCreate(data_9, context, context);
    int32_t* i_1 = *(context + 8);

    if (*i_1 && i_1)
    {
        int32_t entity_6 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i_1;
            void* data_13;

            if (!temp_1)
                data_13 = nullptr;
            else
            {
                int32_t data_10 = *temp_1;
                int32_t data_11 = -(data_10);
                data_13 = (data_11 - data_11) & temp_1;
            }

            *((entity_6 << 2) + &g_afa6e0) = data_13;
            g_afa7e0 = entity_6 + 1;
            uint32_t data_15 = Script_ParseEnumReal32_8();
            int32_t data_16 = 0;
            data_16 = i_1[7];
            result = *(((data_15 * 0x180 + data_16) << 2) + &g_a96ae0);

            if (result)
                result = result(i_1, dest_6);

            entity_6 = g_afa7e0 - 1;
            g_afa7e0 = entity_6;
            i_1 = *((entity_6 << 2) + &g_afa6e0);
        } while (i_1);
    }

    memcpy(context + 0x2c8, context + 0x20, 0x18);
    memcpy(context + 0x29c, context + 0x70, 0x28);
    return result;
}
