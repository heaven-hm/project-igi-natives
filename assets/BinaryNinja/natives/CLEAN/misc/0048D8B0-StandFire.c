// IGI native provenance: StandFire - 0x0048D8B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048D8B0-StandFire.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StandFire.h"
bool StandFire(void* context)

{
    char* item_8 = "Stand - Fire";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_UpdatePatrol_3(context + 0x3e88, context);
    return Combat_RunFire(context);
}
