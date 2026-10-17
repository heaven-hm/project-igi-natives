// Original IGI.EXE function: SoundSys_InitSoundSys_10 (VA 0x004E7660; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_10.h"
int32_t SoundSys_InitSoundSys_10(int32_t* a1)

{
    void* valA = *a1;

    if (valA)
    {
        Sys_PushStack_20(valA);
        *a1 = 0;
    }

    return Sys_ExecuteBytecode_2(a1);
}
