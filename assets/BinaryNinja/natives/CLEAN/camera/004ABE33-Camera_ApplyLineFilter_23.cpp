// IGI native provenance: Camera_ApplyLineFilter_23 - 0x004ABE33 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004ABE33-Camera_ApplyLineFilter_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_ApplyLineFilter_23.h"
int32_t Camera_ApplyLineFilter_23(int32_t context)

{
    if (context < g_c32540)
    {
        int32_t data_val = context & 0x1f;
        int32_t entity_3 = (&g_c32440)[context >> 5];

        if (*(entity_3 + (data_val << 3) + 4) & 1)
            return *(entity_3 + (data_val << 3));
    }

    g_936068 = 0;
    g_936064 = 9;
    return 0xffffffff;
}
