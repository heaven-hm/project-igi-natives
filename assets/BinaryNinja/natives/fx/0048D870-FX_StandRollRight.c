// IGI native provenance: FX_StandRollRight - 0x0048D870 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048D870-FX_StandRollRight.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_StandRollRight.h"
bool FX_StandRollRight(void* context)

{
    char* item_8 = "Stand - Roll right";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    *(context + 0x3c80) = 0x3f800000;
    *(context + 0x3df4) = 0xffffffff;
    return Locomotion_GetState(context, 1);
}
