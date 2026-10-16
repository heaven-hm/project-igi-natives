#include "gi_platform.h"
#include "004EC630-SoundSys_EvaluateTrigger_16.h"
void* SoundSys_EvaluateTrigger_16(void* a1)

{
    void* result = (*(int32_t*)(uintptr_t)(a1 + 0x54));

    if (result)
    {
        Sys_ExecuteBytecode_2(result);
        result = nullptr;
        (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
        __builtin_memset(a1, 0, 0x64);
    }

    return result;
}
