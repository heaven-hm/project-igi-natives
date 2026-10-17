// IGI native provenance: SoundSys_InitSoundSys_10 - 0x004E7660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7660-SoundSys_InitSoundSys_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
