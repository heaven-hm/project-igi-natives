// IGI native provenance: SoundSys_AttachLipsync_7 - 0x004E6CE0 - CFG score 66.7% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004E6CE0-SoundSys_AttachLipsync_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_7.h"
int32_t SoundSys_AttachLipsync_7(void* context, char param_2)

{
    int32_t temp_val = 0;
    param_2 = param_2;
    int32_t data_val = 0;
    data_val = g_54881b;
    temp_val = *(context + 0x1c);
    return (*(((data_val * 0x180 + temp_val) << 2) + &g_a96ae0))(context, &param_2);
}
