#include "gi_platform.h"
#include "004D2B80-Render_NoMoreQcubeCallbacks.h"
int32_t* Render_NoMoreQcubeCallbacks(int32_t a1)

{
    int32_t objC = 0;

    for (int32_t* i = &g_a4eeac; i < 0xa4eefc; )
    {
        if (!*i)
        {
            int32_t tmpD = g_a538e4;
            g_a538e4 = (objC << 3) + &g_a4eea8;
            *((objC << 3) + &g_a4eea8) = tmpD;
            *((objC << 3) + &g_a4eeac) = a1;
            return (objC << 3) + &g_a4eea8;
        }

        i = &i[2];
        objC += 1;
    }

    Error_Show("No more QCube callbacks available.");

    while (true)
        /* nop */
}
