// Original IGI.EXE function: Menu_DrawWidget_20 (VA 0x00429D80; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_20.h"
struct status_msg* Menu_DrawWidget_20(void* context)

{
    struct status_msg* result = SoundSys_SetMasterVolume_7(context, *(*(context + 0x1b4) + 0x2d4) + 0x23c);
    *(context + 0x890) = result;

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, context + 0x20);
}
