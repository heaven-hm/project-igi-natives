// Original IGI.EXE function: SoundSys_StopSoundSample_7 (VA 0x004E6C30; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_StopSoundSample_7.h"
int32_t SoundSys_StopSoundSample_7(void* context, int32_t param_2)

{
    int32_t data_val = 0;
    int32_t temp_val = 0;
    data_val = g_548816;
    temp_val = *(context + 0x1c);
    return (*(((data_val * 0x180 + temp_val) << 2) + &g_a96ae0))(context, param_2);
}
