// Original IGI.EXE function: SoundDefSound_OnEvent (VA 0x004E8BD0; static CFG gate PASS, CFG score 1.000).
#include "SoundDefSound_OnEvent.h"
float SoundDefSound_OnEvent(int32_t context, int32_t* param_2) {
    float result = Display_OpenDevice_12(*(context + 0x128), *(context + 0x12c));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *param_2)
        *param_2 = result;

    return result;
}
