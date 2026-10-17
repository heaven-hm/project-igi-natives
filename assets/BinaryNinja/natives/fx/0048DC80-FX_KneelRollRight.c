// IGI native provenance: FX_KneelRollRight - 0x0048DC80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DC80-FX_KneelRollRight.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_KneelRollRight.h"
bool FX_KneelRollRight(void* context)

{
    char* item_8 = "Kneel - Roll right";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 1, 1.0f);
    *(context + 0x3c80) = 0x3f800000;
    *(context + 0x3df4) = 0xffffffff;
    return Locomotion_GetState(context, 1);
}
