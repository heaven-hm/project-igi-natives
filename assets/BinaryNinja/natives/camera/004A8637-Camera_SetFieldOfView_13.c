// IGI native provenance: Camera_SetFieldOfView_13 - 0x004A8637 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A8637-Camera_SetFieldOfView_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Camera_SetFieldOfView_13.h"
int32_t Camera_SetFieldOfView_13(int32_t context)

{
    int32_t entity_val = 0;

    for (int32_t* i = &g_544290; i < &g_544368; )
    {
        if (*i == context)
            return *((entity_val << 3) + &g_544294);

        i = &i[2];
        entity_val += 1;
    }

    return 0;
}
