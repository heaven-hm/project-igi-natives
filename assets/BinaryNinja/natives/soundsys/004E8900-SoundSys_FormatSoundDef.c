// Original IGI.EXE function: SoundSys_FormatSoundDef (VA 0x004E8900; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_FormatSoundDef.h"

void* SoundSys_FormatSoundDef(void* pThis)

{
    *(pThis + 0xde) = 1;
    return pThis;
}
