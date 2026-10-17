// Original IGI.EXE function: Camera_ApplyWideScreen_6 (VA 0x004A5AF7; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen_6.h"
int32_t Camera_ApplyWideScreen_6(uint32_t a1, int32_t a2, int32_t a3)

{
    if (g_9360ac == 1)
    {
        TerminateProcess(GetCurrentProcess(), a1);
        /* no return */
    }

    g_9360a8 = 1;
    g_9360a4 = a3;

    if (!a2)
    {
        int32_t valA2 = g_c32550;

        if (valA2)
        {
            int32_t* i = g_c3254c - 4;

            if (i >= valA2)
            {
                do
                {
                    int32_t valA3 = *i;

                    if (valA3)
                        valA3();

                    i -= 4;
                } while (i >= g_c32550);
            }
        }

        Camera_ApplyPostProcess_6(0x536018, 0x536020);
    }

    int32_t result = Camera_ApplyPostProcess_6(0x536024, 0x536028);

    if (a3)
        return result;

    g_9360ac = 1;
    ExitProcess(a1);
    /* no return */
}
