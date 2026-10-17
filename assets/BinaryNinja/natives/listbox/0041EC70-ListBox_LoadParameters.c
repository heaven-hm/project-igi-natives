// IGI native provenance: ListBox_LoadParameters - 0x0041EC70 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041EC70-ListBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ListBox_LoadParameters.h"
int32_t ListBox_LoadParameters(void* context)

{
    int32_t data_val = 0;
    void* dest_val = *(context + 0xd4);
    int32_t flagP = *(context + 0xbe8);
    void* context_val = *(context + 0xd8);
    data_val = *(dest_val + 0x1c);
    (*((data_val << 2) + &g_a970e0))(dest_val);
    int32_t entity_val = 0;
    entity_val = *(context_val + 0x1c);
    (*((entity_val << 2) + &g_a970e0))(context_val);
    int32_t entity_1 = *(context + 0xbe0);

    if (entity_1)
    {
        int32_t data_3;

        if (!*(dest_val + 0x4b))
            data_3 = *(context + 0x50);

        if (*(dest_val + 0x4b) || data_3 == 0xffffffff)
        {
            int32_t temp_5 = *(context + 0xbe4) - 1;
            *(context + 0xbe4) = temp_5;

            if (temp_5 == 0xffffffff)
                *(context + 0xbe4) = entity_1 - 1;
        }
        else if (*(context_val + 0x4b) || data_3 == 0xfffffffe)
            *(context + 0xbe4) = (*(context + 0xbe4) + 1) % entity_1;

        *(context + 0xbe8) = *(context + *(context + 0xbe4) * 0x2c + 0xe0);
    }

    int32_t data_11 = *(context + 0xbe8);
    *(context + 0x50) = 0;

    if (flagP != data_11)
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        Script_SpawnNewTask_7(context + 0xce8, context);
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
