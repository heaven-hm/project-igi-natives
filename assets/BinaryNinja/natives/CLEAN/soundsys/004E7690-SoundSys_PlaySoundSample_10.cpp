// IGI native provenance: SoundSys_PlaySoundSample_10 - 0x004E7690 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7690-SoundSys_PlaySoundSample_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_PlaySoundSample_10.h"
int32_t* SoundSys_PlaySoundSample_10(int32_t* context)

{
    if (context[1])
    {
        float entity_1 = *context;

        if (entity_1)
        {
            float item_20_1 = entity_1;
            float item_24_1 = entity_1;
            return Sys_OpenFileStream_21(entity_1, context[2], context[3], 128.0f, 128.0f, 128.0f, 0x3f800000, 0x3f800000, 0,
                context[8]);
        }
    }

    return context;
}
