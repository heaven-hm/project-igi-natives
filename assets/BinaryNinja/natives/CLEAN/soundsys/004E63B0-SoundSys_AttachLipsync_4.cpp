// IGI native provenance: SoundSys_AttachLipsync_4 - 0x004E63B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E63B0-SoundSys_AttachLipsync_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_AttachLipsync_4.h"
int32_t* SoundSys_AttachLipsync_4(int32_t* context, void** param_2)

{
    int32_t* result = context;
    int32_t* entity_val = result[1];

    if (entity_val)
        *entity_val = *result;

    void* entity_1 = *result;

    if (entity_1)
        *(entity_1 + 4) = result[1];

    if (*param_2 == result)
    {
        result = result[1];
        *param_2 = result;
    }

    return result;
}
