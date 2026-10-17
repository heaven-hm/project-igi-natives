// Original IGI.EXE function: SoundSys_EvaluateTrigger_9 (VA 0x004E75E0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_EvaluateTrigger_9.h"
void* SoundSys_EvaluateTrigger_9(int32_t* context)

{
    void* result = *context;

    if (!result)
        return result;

    Sys_ExecuteBytecode_21(result);
    return SoundSys_LoadSoundDef_9(context, 0, 0);
}
