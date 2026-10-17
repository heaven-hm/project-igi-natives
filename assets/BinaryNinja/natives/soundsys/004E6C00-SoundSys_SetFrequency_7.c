// Original IGI.EXE function: SoundSys_SetFrequency_7 (VA 0x004E6C00; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_SetFrequency_7.h"
int32_t SoundSys_SetFrequency_7(void* context)

{
    int32_t data_3 = SoundSys_SetFrequency_6();
    int32_t temp_val = 0;
    temp_val = *(context + 0x1c);
    int32_t result = *(((data_3 * 0x180 + temp_val) << 2) + &g_a96ae0);

    if (result)
        result = result(context);

    return result;
}
