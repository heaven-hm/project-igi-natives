// Original IGI.EXE function: Menu_DrawWidget_15 (VA 0x004252E0; static CFG gate PASS, CFG score 1.000).
#include "Menu_DrawWidget_15.h"
int32_t* Menu_DrawWidget_15(void* context)

{
    int32_t* result;

    if (!*(context + 0xa8))
    {
        result = *(context + 0x120);

        if (result)
        {
            if (*result)
            {
                *(context + 0xb2) = 1;
                return result;
            }

            *(context + 0xb2) = 0;
        }
    }
    else
    {
        result = SoundSys_SetFrequency_8(context + 0xb8);
        *(context + 0xb2) = result;

        if (result)
            return SoundSys_Update3DPosition_8(context + 0xb8);
    }

    return result;
}
