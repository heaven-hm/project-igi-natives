// IGI native provenance: CloseCombat - 0x0048DBB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048DBB0-CloseCombat.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CloseCombat.h"
bool CloseCombat(void* context)

{
    char* item_8 = "Stand - CloseCombat Trigger";
    int32_t item_c = 0xffffffff;
    void* item_10 = context;
    AI_WriteChannel(context, 9, 1.0f);
    return !Locomotion_GetState(context, 0);
}
