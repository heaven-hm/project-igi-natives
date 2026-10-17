// Original IGI.EXE function: FX_SmokeEmit_19 (VA 0x0048D7D0; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_19.h"
int32_t FX_SmokeEmit_19(void* a1)

{
    int32_t* valA = *(a1 + 0x3aa8);

    if (valA)
    {
        AI_AlertAllies_2(valA, a1, *(a1 + 0x3aba));
        Combat_SetAimMode(*(a1 + 0x3aa8), a1, 0xffffffff);
        *(a1 + 0x3aa8) = 0;
    }

    char result = Locomotion_GetState(a1, 4);

    if (!result)
        return result;

    return AI_WriteChannel(a1, 4, 1f);
}
