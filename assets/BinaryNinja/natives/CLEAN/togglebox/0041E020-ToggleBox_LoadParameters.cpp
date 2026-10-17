// IGI native provenance: ToggleBox_LoadParameters - 0x0041E020 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041E020-ToggleBox_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ToggleBox_LoadParameters.h"
int32_t ToggleBox_LoadParameters(void* context)

{
    void* source_val = *(context + 0x94);
    void* entity_val = *(context + 0x24);
    int32_t temp_val = *(context + 0x20);
    int32_t data_val = *(context + 0x28);
    int32_t flagP = *(context + 0x2c);
    void* dest_val = *(context + 0x98);
    *(source_val + 0x24) = entity_val;
    int32_t entity_2 = data_val >> 1;
    *(source_val + 0x20) = temp_val;
    *(source_val + 0x28) = entity_2;
    *(source_val + 0x2c) = flagP;
    *(dest_val + 0x20) = temp_val + entity_2;
    *(dest_val + 0x24) = entity_val;
    *(dest_val + 0x28) = data_val - entity_2;
    *(dest_val + 0x2c) = flagP;
    Menu_UpdateLanguage_14(source_val, *(source_val + 0x20), *(source_val + 0x24), *(source_val + 0x28), *(source_val + 0x2c),
        nullptr, nullptr);
    Menu_UpdateLanguage_14(dest_val, *(dest_val + 0x20), *(dest_val + 0x24), *(dest_val + 0x28), *(dest_val + 0x2c),
        nullptr, nullptr);

    if ((*(source_val + 0x4b) || *(context + 0x50) == 0xffffffff) && !*(context + 0xa4))
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        *(context + 0xa4) = 1;
    }
    else if ((*(dest_val + 0x4b) || *(context + 0x50) == 0xfffffffe) && *(context + 0xa4))
    {
        SoundSys_AttachLipsync_8("menu_high", 0, 0);
        *(context + 0xa4) = 0;
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(context);
}
