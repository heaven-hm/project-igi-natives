// IGI native provenance: Camera_UpdateViewCone_22 - 0x004ABC46 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ABC46-Camera_UpdateViewCone_22.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
