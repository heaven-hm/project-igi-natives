#include "gi_platform.h"
#include "0048F4F0-FX_UnableToRemoveWinpro.h"
int32_t* FX_UnableToRemoveWinpro(int32_t a1)

{
    int32_t* i_1 = g_5c8df0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == a1)
        {
            int32_t* result = Camera_ApplyHandiCam_33(i_1);
            i_1[2] = 0;
            return result;
        }

        i_1 = i;
    }

    Error_Show("Unable to remove WinProc callback");

    while (true)
        /* nop */
}
