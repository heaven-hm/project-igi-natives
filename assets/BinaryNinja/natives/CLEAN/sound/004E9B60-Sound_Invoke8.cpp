// IGI native provenance: Sound_Invoke8 - 0x004E9B60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E9B60-Sound_Invoke8.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke8.h"

void* Sound_Invoke8(void* arg1)

{
    void* result = arg1;

    if (!*(result + 0xe2))
        result = SoundSys_PlaySoundSample_8(result);

    return result;
}
