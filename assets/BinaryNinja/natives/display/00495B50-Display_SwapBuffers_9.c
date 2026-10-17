// Original IGI.EXE function: Display_SwapBuffers_9 (VA 0x00495B50; static CFG gate PASS, CFG score 0.889).
#include "Display_SwapBuffers_9.h"
int32_t Display_SwapBuffers_9()

{
    int32_t result = g_5ca150;
    int32_t dest_val = 0;

    if (result > 0)
    {
        int32_t* source_1 = &g_6771b0;

        do
        {
            HMIXEROBJ temp_1 = source_1[-0xd6];

            if (temp_1)
            {
                if (source_1[-0xc9])
                {
                    if (source_1[-0x9f] && source_1[-0x4b])
                        Display_ClearSurfaces_9(temp_1, &source_1[-0x9f], &source_1[-0x4b], source_1[-1], *source_1);

                    if (source_1[-0x75])
                        Display_ClearSurfaces_9(source_1[-0xd6], &source_1[-0x75], &source_1[-0x26], source_1[1], source_1[2]);
                }

                mixerClose(source_1[-0xd6]);
            }

            result = g_5ca150;
            dest_val += 1;
            source_1 = &source_1[0xd9];
        } while (dest_val < result);
    }

    return result;
}
