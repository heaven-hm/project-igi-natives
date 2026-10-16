#include "0048F4F0-FX_UnableToRemoveWinpro.h"
/* 0x0048f4f0 FX_UnableToRemoveWinpro full linked: callers=5 callees=2 */
int32_t* sub_48f4f0(int32_t a1)

{
    int32_t* i_1 = g_5c8df0;

    for (int32_t* i = *i_1; i; i = *i)
    {
        if (i_1[2] == a1)
        {
            int32_t* result = sub_4af960(i_1);
            i_1[2] = 0;
            return result;
        }

        i_1 = i;
    }

    Error_Show("Unable to remove WinProc callback");

    while (true)
        /* nop */
}
