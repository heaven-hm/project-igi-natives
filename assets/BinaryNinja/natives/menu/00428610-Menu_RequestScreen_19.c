// Original IGI.EXE function: Menu_RequestScreen_19 (VA 0x00428610; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_19.h"
void* Menu_RequestScreen_19(void* context)

{
    void* result = *(context + 0x890);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, context + 0x20);
}
