// IGI native provenance: SoundSys_LoadSoundDef_4 - 0x004E6290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6290-SoundSys_LoadSoundDef_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_LoadSoundDef_4.h"
int32_t* SoundSys_LoadSoundDef_4(int32_t* context, int32_t* param_2)

{
    int32_t temp_val = *param_2;
    *context = 0;
    context[1] = temp_val;
    int32_t** temp_1 = *param_2;

    if (temp_1)
        *temp_1 = context;

    *param_2 = context;
    return context;
}
