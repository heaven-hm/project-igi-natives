#include "SoundSys_DefineSound.h"

void* SoundSys_DefineSound(void* pThis)

{
    void* result = pThis;

    if (!*(result + 0xdd))
        result = SoundSys_PlaySoundSample_8(result);

    return result;
}
