// IGI native provenance: Display_CloseDevice_18 - 0x0049A010 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0049A010-Display_CloseDevice_18.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
