// IGI native provenance: Sound_Invoke8_4EA8A0 - 0x004EA8A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004EA8A0-Sound_Invoke8_4EA8A0.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sound_Invoke8_4EA8A0.h"

void* Sound_Invoke8_4EA8A0(void* arg1)

{
    void* result = arg1;

    if (!*(result + 0xd4))
        result = SoundSys_PlaySoundSample_8(result);

    return result;
}
