// Original IGI.EXE function: SoundSys_LoadSoundDef_5 (VA 0x004E6650; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_LoadSoundDef_5.h"
int32_t SoundSys_LoadSoundDef_5()

{
    char result = g_548815;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548815 = result;
    }

    return result;
}
