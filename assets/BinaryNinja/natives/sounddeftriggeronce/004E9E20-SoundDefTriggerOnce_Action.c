// Original IGI.EXE function: SoundDefTriggerOnce_Action (VA 0x004E9E20; static CFG gate PASS, CFG score 1.000).
#include "SoundDefTriggerOnce_Action.h"
float SoundDefTriggerOnce_Action(int32_t context, int32_t* param_2) {
    float result = Display_OpenDevice_12(*(context + 0x130), *(context + 0x134));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *param_2)
        *param_2 = result;

    return result;
}
