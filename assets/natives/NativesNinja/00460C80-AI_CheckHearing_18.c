#include "00460C80-AI_CheckHearing_18.h"
/* 0x00460c80 AI_CheckHearing_18 full linked: callers=86 callees=5 */
int32_t sub_460c80(int32_t a1, char* a2)

{
    int32_t result = sub_463150(a1);

    if (result)
    {
        if (DEBUG_KEYSENABLEINVALID(0x44))
        {
            uint32_t eax_1 = Frames_GetTaskCounter();

            if (g_5bdafc != eax_1)
            {
                g_5bdc1c ^= 1;
                g_5bdafc = Frames_GetTaskCounter();
            }
        }

        result = g_5bdc1c;
        void arg_c;

        if (result)
            return sub_4e7c00(a2, &arg_c);
    }

    return result;
}
