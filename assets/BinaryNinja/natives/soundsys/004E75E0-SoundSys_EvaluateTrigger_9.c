#include "SoundSys_EvaluateTrigger_9.h"
void* SoundSys_EvaluateTrigger_9(int32_t* a1)

{
    void* result = *a1;

    if (!result)
        return result;

    Sys_ExecuteBytecode_21(result);
    return SoundSys_LoadSoundDef_9(a1, 0, 0);
}
