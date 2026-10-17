// Original IGI.EXE function: Display_CloseDevice_18 (VA 0x0049A010; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_18.h"
int32_t* Display_CloseDevice_18(int32_t a1)

{
    int32_t objC = 0;
    int32_t* i;

    for (i = &g_720558; i < 0x72055c; )
    {
        if (a1 == *i)
        {
            (&g_720558)[objC] = 0;
            *((objC << 2) + &g_720560) = 0;
            return i;
        }

        i = &i[1];
        objC += 1;
    }

    return i;
}
