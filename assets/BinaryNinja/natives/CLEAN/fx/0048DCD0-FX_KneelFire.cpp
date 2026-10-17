// IGI native provenance: FX_KneelFire - 0x0048DCD0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DCD0-FX_KneelFire.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_KneelFire.h"
bool FX_KneelFire(void* context)

{
    char* item_8 = "Kneel - Fire";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 1, 1.0f);
    AI_UpdatePatrol_3(context + 0x3e88, context);
    return Combat_RunFire(context);
}
