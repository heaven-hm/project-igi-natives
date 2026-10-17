// IGI native provenance: SoundSys_Update3DPosition_8 - 0x004E6D60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E6D60-SoundSys_Update3DPosition_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_Update3DPosition_8.h"
int32_t SoundSys_Update3DPosition_8(int32_t* context)

{
    char result = g_a5e60a;

    if (result)
        return result;

    if (!context[2])
    {
        context[2] = g_a5e5f8;
        g_a5e5f8 += 1;
    }

    return SoundSys_SetMasterVolume_8(context[2], *context, context[1], context[3], &context[4]);
}
