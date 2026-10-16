#include "00495B50-Display_SwapBuffers_9.h"
/* 0x00495b50 Display_SwapBuffers_9 full linked: callers=1 callees=3 */
int32_t sub_495b50()

{
    int32_t result = g_5ca150;
    int32_t edi = 0;

    if (result > 0)
    {
        int32_t* esi_1 = &g_6771b0;

        do
        {
            HMIXEROBJ edx_1 = esi_1[-0xd6];

            if (edx_1)
            {
                if (esi_1[-0xc9])
                {
                    if (esi_1[-0x9f] && esi_1[-0x4b])
                        sub_495c10(edx_1, &esi_1[-0x9f], &esi_1[-0x4b], esi_1[-1], *esi_1);

                    if (esi_1[-0x75])
                        sub_495c10(esi_1[-0xd6], &esi_1[-0x75], &esi_1[-0x26], esi_1[1], esi_1[2]);
                }

                mixerClose(esi_1[-0xd6]);
            }

            result = g_5ca150;
            edi += 1;
            esi_1 = &esi_1[0xd9];
        } while (edi < result);
    }

    return result;
}
