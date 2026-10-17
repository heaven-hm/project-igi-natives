// IGI native provenance: SoundSys_AttachLipsync_8 - 0x004E7180 - CFG score 93.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7180-SoundSys_AttachLipsync_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_8.h"
int32_t SoundSys_AttachLipsync_8(char* context, int32_t param_2, int32_t param_3)

{
    char result = g_a5e60a;

    if (result)
        return result;

    uint32_t data_val = Display_CheckCapabilities_12(context);
    int32_t data_1 = Display_RestoreDevice_12(context);
    void item_58;

    if (!param_3)
        Display_SetGammaRamp_12(&item_58);
    else
        memcpy(&item_58, param_3, 0x20);

    int32_t data_2 = g_a5e5f8;
    g_a5e5f8 = data_2 + 1;
    int32_t data_4 = param_2;
    data_4 |= 1;
    float* saved_edi_3 = &item_58;
    int32_t item_78 = data_2;
    return SoundSys_SetMasterVolume_8(item_78, data_val, data_1, data_4, saved_edi_3);
}
