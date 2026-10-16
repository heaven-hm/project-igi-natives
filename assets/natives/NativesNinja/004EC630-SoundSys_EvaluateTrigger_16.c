#include "004EC630-SoundSys_EvaluateTrigger_16.h"
/* 0x004ec630 SoundSys_EvaluateTrigger_16 full linked: callers=1 callees=2 */
void* sub_4ec630(void* a1)

{
    void* result = *(a1 + 0x54);

    if (result)
    {
        sub_4b0d10(result);
        result = nullptr;
        *(a1 + 0x54) = 0;
        __builtin_memset(a1, 0, 0x64);
    }

    return result;
}
