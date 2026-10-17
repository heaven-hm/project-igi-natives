// IGI native provenance: FX_StandRollLeft - 0x0048D830 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048D830-FX_StandRollLeft.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_StandRollLeft.h"
bool FX_StandRollLeft(void* context)

{
    char* item_8 = "Stand - Roll left";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    *(context + 0x3c7c) = 0x3f800000;
    *(context + 0x3df4) = 1;
    return Locomotion_GetState(context, 1);
}
