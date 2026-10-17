// IGI native provenance: FX_LiedownFire - 0x0048DDC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DDC0-FX_LiedownFire.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_LiedownFire.h"
bool FX_LiedownFire(void* context)

{
    char* item_8 = "LieDown - Fire";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 2, 1.0f);
    AI_UpdatePatrol_3(context + 0x3e88, context);
    return Combat_RunFire(context);
}
