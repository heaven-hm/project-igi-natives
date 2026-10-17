// Original IGI.EXE function: SoundSysMicrophone_OnTick (VA 0x004EBDF0; static CFG gate PASS, CFG score 1.000).
#include "SoundSysMicrophone_OnTick.h"
int32_t SoundSysMicrophone_OnTick(int32_t* a1)

{
    int32_t result;
    result = a1[2];

    if (!result)
    {
        char* srcS1 = &g_547f48;

        if (!FX_FireBallUpdate_27())
            srcS1 = &g_547f44;

        int32_t tmpD1 = *a1;
        int32_t i = 0xffffffff;
        int32_t dstD1 = tmpD1;
        result = 0;

        while (i)
        {
            bool cond_1_1 = 0 != *dstD1;
            dstD1 += 1;
            i -= 1;

            if (!cond_1_1)
                break;
        }

        char* dstD2 = srcS1;
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_2_1 = 0 != *dstD2;
            dstD2 = &dstD2[1];
            i_1 -= 1;

            if (!cond_2_1)
                break;
        }

        if (~i - 1 > ~i_1 - 1)
        {
            char* dstD3 = srcS1;
            int32_t i_2 = 0xffffffff;

            while (i_2)
            {
                bool cond_4_1 = 0 != *dstD3;
                dstD3 = &dstD3[1];
                i_2 -= 1;

                if (!cond_4_1)
                    break;
            }

            int32_t dstD4 = tmpD1;
            int32_t i_3 = 0xffffffff;

            while (i_3)
            {
                bool cond_5_1 = 0 != *dstD4;
                dstD4 += 1;
                i_3 -= 1;

                if (!cond_5_1)
                    break;
            }

            result = Camera_UpdateTransform_6(0, tmpD1, ~i_3 - 1, tmpD1 - (~i_2 - 1) + ~i_3 - 1, srcS1);

            if (!result)
                return AnimTrigger_ParseConfigFile(*a1);
        }
    }

    return result;
}
