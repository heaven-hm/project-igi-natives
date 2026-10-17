// Original IGI.EXE function: SoundSys_InitSoundSys_10 (VA 0x004E7660; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_10.h"
int32_t SoundSys_InitSoundSys_10(int32_t* context)

{
    void* data_val = *context;

    if (data_val)
    {
        Sys_PushStack_20(data_val);
        *context = 0;
    }

    return Sys_ExecuteBytecode_2(context);
}
