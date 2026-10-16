#include "SoundSys_EvaluateTrigger_16.h"
void* SoundSys_EvaluateTrigger_16(void* a1)

{
    void* result = *(a1 + 0x54);

    if (result)
    {
        Sys_ExecuteBytecode_2(result);
        result = nullptr;
        *(a1 + 0x54) = 0;
        __builtin_memset(a1, 0, 0x64);
    }

    return result;
}
