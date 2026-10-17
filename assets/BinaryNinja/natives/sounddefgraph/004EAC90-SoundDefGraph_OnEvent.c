// Original IGI.EXE function: SoundDefGraph_OnEvent (VA 0x004EAC90; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGraph_OnEvent.h"
float SoundDefGraph_OnEvent(int32_t context, int32_t* param_2) {
    float result = Display_OpenDevice_12(*(context + 0x180), *(context + 0x184));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *param_2)
        *param_2 = result;

    return result;
}
