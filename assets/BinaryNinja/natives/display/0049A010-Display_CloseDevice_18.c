// Original IGI.EXE function: Display_CloseDevice_18 (VA 0x0049A010; static CFG gate PASS, CFG score 1.000).
#include "Display_CloseDevice_18.h"
int32_t* Display_CloseDevice_18(int32_t context)

{
    int32_t entity_val = 0;
    int32_t* i;

    for (i = &g_720558; i < 0x72055c; )
    {
        if (context == *i)
        {
            (&g_720558)[entity_val] = 0;
            *((entity_val << 2) + &g_720560) = 0;
            return i;
        }

        i = &i[1];
        entity_val += 1;
    }

    return i;
}
