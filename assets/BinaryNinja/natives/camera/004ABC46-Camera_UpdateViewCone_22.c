// Original IGI.EXE function: Camera_UpdateViewCone_22 (VA 0x004ABC46; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateViewCone_22.h"
int32_t* Camera_UpdateViewCone_22(int32_t context)

{
    int32_t temp_val = 0;
    g_936068 = context;
    int32_t* i;

    for (i = &g_5466d8; i < 0x546840; )
    {
        if (context == *i)
        {
            int32_t data_val = *((temp_val << 3) + &g_5466dc);
            g_936064 = data_val;
            return data_val;
        }

        i = &i[2];
        temp_val += 1;
    }

    if (context >= 0x13 && context <= 0x24)
    {
        g_936064 = 0xd;
        return i;
    }

    if (context < 0xbc)
        g_936064 = 0x16;
    else
    {
        g_936064 = 8;

        if (context > 0xca)
            g_936064 = 0x16;
    }

    return i;
}
