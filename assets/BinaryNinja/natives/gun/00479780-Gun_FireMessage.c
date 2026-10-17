// IGI native provenance: Gun_FireMessage - 0x00479780 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00479780-Gun_FireMessage.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_FireMessage.h"
int32_t Gun_FireMessage(float context, void* param_2)

{
    void* context_val = *(context + 0x128);
    uint32_t data_1 = Script_ExecuteLevelScript_11();
    int32_t entity_val = 0;
    entity_val = *(context + 0x1c);
    int16_t result = (*(((data_1 * 0x180 + entity_val) << 2) + &g_a96ae0))(context, param_2);
    result = *(param_2 + 1);

    if (result)
    {
        int32_t temp_1 = *(context_val + 0x6d0);
        void* item_c_1 = context + 0x150;
        void* data_7 = *(param_2 + 0x2c);
        int32_t item_1c = 0x10;
        int32_t item_14_1 = 0x46;
        int32_t item_10_1 = temp_1;
        float item_8_1 = context;

        if (!data_7)
        {
            int32_t item_18_2 = 1;
            int32_t item_4_2 = 0;
        }
        else
        {
            int32_t item_18_1 = AI_CombatTarget_19(data_7);
            int32_t item_4_1 = *(param_2 + 0x2c);
        }

        AI_EventBroadcast(&item_1c);
        long double fpu_val_7_7;

        do
        {
            long double fpu_val_7_3 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            context = fpu_val_7_3 + fpu_val_7_3;
            long double fpu_val_7_6 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5f;
            fpu_val_7_7 = fpu_val_7_6 + fpu_val_7_6;
            long double fpu_val_6_4 = sqrtl(fpu_val_7_7 * fpu_val_7_7 + context * context);
            long double f0_1 = 1.0f;
            fpu_val_6_4 - f0_1;
            result = (fpu_val_6_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_6_4 == f0_1 ? 1 : 0) << 0xe | 0x3800;
        } while (!(*(&result + 1) & 0x41));

        long double fpu_val_7_9 =
            fpu_val_7_7 * *(context_val + 0x678) * 0.0174532924f + *(context_val + 0x670) * 0.0174532924f;
        *(param_2 + 0x20) = *(context_val + 0x674) * 0.0174532924f * context + *(context_val + 0x66c) * 0.0174532924f;
        *(param_2 + 0x24) = fpu_val_7_9;
    }

    return result;
}
