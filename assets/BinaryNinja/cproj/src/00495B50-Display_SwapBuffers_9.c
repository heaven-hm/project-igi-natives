#include "gi_platform.h"
#include "00495B50-Display_SwapBuffers_9.h"
int32_t Display_SwapBuffers_9()

{
    int32_t result = g_5ca150;
    int32_t dstD = 0;

    if (result > 0)
    {
        int32_t* srcS1 = &g_6771b0;

        do
        {
            HMIXEROBJ tmpD1 = srcS1[-0xd6];

            if (tmpD1)
            {
                if (srcS1[-0xc9])
                {
                    if (srcS1[-0x9f] && srcS1[-0x4b])
                        Display_ClearSurfaces_9(tmpD1, &srcS1[-0x9f], &srcS1[-0x4b], srcS1[-1], *srcS1);

                    if (srcS1[-0x75])
                        Display_ClearSurfaces_9(srcS1[-0xd6], &srcS1[-0x75], &srcS1[-0x26], srcS1[1], srcS1[2]);
                }

                mixerClose(srcS1[-0xd6]);
            }

            result = g_5ca150;
            dstD += 1;
            srcS1 = &srcS1[0xd9];
        } while (dstD < result);
    }

    return result;
}
