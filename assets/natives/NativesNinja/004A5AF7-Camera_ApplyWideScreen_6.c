#include "004A5AF7-Camera_ApplyWideScreen_6.h"
/* 0x004a5af7 Camera_ApplyWideScreen_6 full linked: callers=2 callees=5 */
int32_t sub_4a5af7(uint32_t a1, int32_t a2, int32_t a3)

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
        int32_t eax_2 = g_c32550;

        if (eax_2)
        {
            int32_t* i = g_c3254c - 4;

            if (i >= eax_2)
            {
                do
                {
                    int32_t eax_3 = *i;

                    if (eax_3)
                        eax_3();

                    i -= 4;
                } while (i >= g_c32550);
            }
        }

        sub_4a5b90(0x536018, 0x536020);
    }

    int32_t result = sub_4a5b90(0x536024, 0x536028);

    if (a3)
        return result;

    g_9360ac = 1;
    ExitProcess(a1);
    /* no return */
}
