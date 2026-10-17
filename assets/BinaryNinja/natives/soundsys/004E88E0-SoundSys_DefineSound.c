// IGI native provenance: SoundSys_DefineSound - 0x004E88E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E88E0-SoundSys_DefineSound.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SoundSys_DefineSound.h"

void* SoundSys_DefineSound(void* pThis)

{
    void* result = pThis;

    if (!*(result + 0xdd))
        result = SoundSys_PlaySoundSample_8(result);

    return result;
}
