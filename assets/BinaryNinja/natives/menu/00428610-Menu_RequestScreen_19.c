// Original IGI.EXE function: Menu_RequestScreen_19 (VA 0x00428610; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_19.h"
void* Menu_RequestScreen_19(void* a1)

{
    void* result = *(a1 + 0x890);

    if (!result)
        return result;

    return SoundSys_StopSoundSample_7(result, a1 + 0x20);
}
