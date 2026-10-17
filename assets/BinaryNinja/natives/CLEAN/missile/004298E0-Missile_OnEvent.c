// IGI native provenance: Missile_OnEvent - 0x004298E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004298E0-Missile_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Missile_OnEvent.h"
int32_t Missile_OnEvent(int32_t* context )

{
    Sys_ResolveSymbol_23(context[1], context[2], *context, 0x10);
    int32_t result = context[2] + 1;
    context[2] = result;
    return result;
}
