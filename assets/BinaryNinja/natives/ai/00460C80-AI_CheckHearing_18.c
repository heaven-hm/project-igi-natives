// Original IGI.EXE function: AI_CheckHearing_18 (VA 0x00460C80; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_18.h"
int32_t AI_CheckHearing_18(int32_t a1, char* a2)

{
    int32_t result = AI_CheckHearing_19(a1);

    if (result)
    {
        if (DEBUG_KEYSENABLEINVALID(0x44))
        {
            uint32_t valA1 = Frames_GetTaskCounter();

            if (g_5bdafc != valA1)
            {
                g_5bdc1c ^= 1;
                g_5bdafc = Frames_GetTaskCounter();
            }
        }

        result = g_5bdc1c;
        void arg_c;

        if (result)
            return SoundSys_SetMasterVolume_11(a2, &arg_c);
    }

    return result;
}
