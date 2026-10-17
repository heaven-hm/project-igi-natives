// Original IGI.EXE function: SoundSys_PlaySoundSample_16 (VA 0x004EC190; static CFG gate FAIL, CFG score 0.667).
#include "SoundSys_PlaySoundSample_16.h"
int32_t SoundSys_PlaySoundSample_16(int32_t* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6)

{
    *context = param_2;
    context[1] = param_3;
    context[2] = 0;
    context[3] = 0xffffffff;
    context[4] = param_4;
    context[5] = *(param_3 + (param_4 << 2));
    context[6] = param_5;
    context[8] = param_6;
    context[7] = 0xffffffff;
    memset(&context[9], 0, 0x28);
    return 0;
}
