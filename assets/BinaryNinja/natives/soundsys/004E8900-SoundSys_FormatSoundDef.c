#include "SoundSys_FormatSoundDef.h"

void* SoundSys_FormatSoundDef(void* pThis)

{
    *(pThis + 0xde) = 1;
    return pThis;
}
