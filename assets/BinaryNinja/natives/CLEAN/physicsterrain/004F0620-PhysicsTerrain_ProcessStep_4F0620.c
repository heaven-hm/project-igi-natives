// IGI native provenance: PhysicsTerrain_ProcessStep_4F0620 - 0x004F0620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F0620-PhysicsTerrain_ProcessStep_4F0620.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_ProcessStep_4F0620.h"

int32_t PhysicsTerrain_ProcessStep_4F0620(int32_t arg1)

{
    int32_t a758b0_1 = g_a758b0;

    if (!a758b0_1)
    {
        a758b0_1 = arg1;
        g_a758b0 = a758b0_1;
    }

    return a758b0_1;
}
