// Original IGI.EXE function: SoundSys_AttachLipsync_4 (VA 0x004E63B0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_AttachLipsync_4.h"
int32_t* SoundSys_AttachLipsync_4(int32_t* a1, void** a2)

{
    int32_t* result = a1;
    int32_t* objC = result[1];

    if (objC)
        *objC = *result;

    void* objC1 = *result;

    if (objC1)
        *(objC1 + 4) = result[1];

    if (*a2 == result)
    {
        result = result[1];
        *a2 = result;
    }

    return result;
}
