// Original IGI.EXE function: SoundDefGraph_OnEvent (VA 0x004EAC90; static CFG gate PASS, CFG score 1.000).
#include "SoundDefGraph_OnEvent.h"
float SoundDefGraph_OnEvent(int32_t a1, int32_t* a2) __location("valA")

{
    float result = Display_OpenDevice_12(*(a1 + 0x180), *(a1 + 0x184));
    result = SoundSys_SetFrequency_4() * result;

    if (result > *a2)
        *a2 = result;

    return result;
}
