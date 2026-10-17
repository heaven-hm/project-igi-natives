// Original IGI.EXE function: AI_CheckHearing_18 (VA 0x00460C80; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_18.h"
int32_t AI_CheckHearing_18(int32_t context, char* param_2)

{
    int32_t result = AI_CheckHearing_19(context);

    if (result)
    {
        if (DEBUG_KEYSENABLEINVALID(0x44))
        {
            uint32_t data_1 = Frames_GetTaskCounter();

            if (g_5bdafc != data_1)
            {
                g_5bdc1c ^= 1;
                g_5bdafc = Frames_GetTaskCounter();
            }
        }

        result = g_5bdc1c;
        void arg_c;

        if (result)
            return SoundSys_SetMasterVolume_11(param_2, &arg_c);
    }

    return result;
}
