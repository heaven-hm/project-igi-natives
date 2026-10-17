// IGI native provenance: GuardGenerator_Update - 0x00488200 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488200-GuardGenerator_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GuardGenerator_Update.h"
int32_t GuardGenerator_Update(void* context)

{
    Script_Isexists(context + 0x20, context);
    return FX_SmokeEmit_10(context);
}
