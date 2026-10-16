#include "gi_platform.h"
#include "004ABC46-Camera_UpdateViewCone_22.h"
int32_t* Camera_UpdateViewCone_22(int32_t a1)

{
    int32_t tmpD = 0;
    g_936068 = a1;
    int32_t* i;

    for (i = &g_5466d8; i < 0x546840; )
    {
        if (a1 == *i)
        {
            int32_t valA = *((tmpD << 3) + &g_5466dc);
            g_936064 = valA;
            return valA;
        }

        i = &i[2];
        tmpD += 1;
    }

    if (a1 >= 0x13 && a1 <= 0x24)
    {
        g_936064 = 0xd;
        return i;
    }

    if (a1 < 0xbc)
        g_936064 = 0x16;
    else
    {
        g_936064 = 8;

        if (a1 > 0xca)
            g_936064 = 0x16;
    }

    return i;
}
