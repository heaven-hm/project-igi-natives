// Original IGI.EXE function: Music_SetVolume (VA 0x00495E70; static CFG gate PASS, CFG score 1.000).
#include "Music_SetVolume.h"
int32_t Music_SetVolume(float a1, float a2)

// Sig: void Music_SetVolume(float volume1,float volume2)
// Note: Sets BOTH music engine volumes (likely front/master pair) after scaling
// by the global music factor. Params: volume1, volume2 = floats 0.0-1.0 scaled
// against settings. Use for live music fades.
{
    g_543904 = a1;
    int32_t result = g_5ca150;
    g_543908 = a2;
    int32_t dstD = 0;

    if (result > 0)
    {
        int32_t* srcS1 = &g_6771b8;

        do
        {
            HMIXEROBJ objC1 = srcS1[-0xd8];

            if (objC1 && srcS1[-0xcb] && srcS1[-0x77])
            {
                int32_t v_14_1 = 0;
                long double x87_r7_2 = a1 * a2;
                int32_t v_c_1 = 0;
                Display_ClearSurfaces_9(objC1, &srcS1[-0x77], &srcS1[-0x28], srcS1[-1] * x87_r7_2,
                    *srcS1 * x87_r7_2);
            }

            result = g_5ca150;
            dstD += 1;
            srcS1 = &srcS1[0xd9];
        } while (dstD < result);
    }

    return result;
}
