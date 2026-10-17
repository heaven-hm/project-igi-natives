// Original IGI.EXE function: SoundSys_SetFrequency_7 (VA 0x004E6C00; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetFrequency_7.h"
int32_t SoundSys_SetFrequency_7(void* a1)

{
    int32_t valA3 = SoundSys_SetFrequency_6();
    int32_t tmpD = 0;
    tmpD = *(a1 + 0x1c);
    int32_t result = *(((valA3 * 0x180 + tmpD) << 2) + &g_a96ae0);

    if (result)
        result = result(a1);

    return result;
}
