#include "004D2B80-Render_NoMoreQcubeCallbacks.h"
/* 0x004d2b80 Render_NoMoreQcubeCallbacks full linked: callers=2 callees=1 */
int32_t* sub_4d2b80(int32_t a1)

{
    int32_t ecx = 0;

    for (int32_t* i = &g_a4eeac; i < 0xa4eefc; )
    {
        if (!*i)
        {
            int32_t edx = g_a538e4;
            g_a538e4 = (ecx << 3) + &g_a4eea8;
            *((ecx << 3) + &g_a4eea8) = edx;
            *((ecx << 3) + &g_a4eeac) = a1;
            return (ecx << 3) + &g_a4eea8;
        }

        i = &i[2];
        ecx += 1;
    }

    Error_Show("No more QCube callbacks available.");

    while (true)
        /* nop */
}
