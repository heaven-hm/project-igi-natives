#include "gi_platform.h"
#include "004E7660-SoundSys_InitSoundSys_10.h"
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
