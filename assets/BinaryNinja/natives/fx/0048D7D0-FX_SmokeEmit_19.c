// Original IGI.EXE function: FX_SmokeEmit_19 (VA 0x0048D7D0; static CFG gate PASS, CFG score 1.000).
#include "FX_SmokeEmit_19.h"
int32_t FX_SmokeEmit_19(void* context)

{
    int32_t* data_val = *(context + 0x3aa8);

    if (data_val)
    {
        AI_AlertAllies_2(data_val, context, *(context + 0x3aba));
        Combat_SetAimMode(*(context + 0x3aa8), context, 0xffffffff);
        *(context + 0x3aa8) = 0;
    }

    char result = Locomotion_GetState(context, 4);

    if (!result)
        return result;

    return AI_WriteChannel(context, 4, 1.0f);
}
