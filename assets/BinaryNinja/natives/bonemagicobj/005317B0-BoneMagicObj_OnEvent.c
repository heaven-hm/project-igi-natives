// IGI native provenance: BoneMagicObj_OnEvent - 0x005317B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005317B0-BoneMagicObj_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "BoneMagicObj_OnEvent.h"
void* BoneMagicObj_OnEvent(void* context)

{
    Render_DrawSplineMesh_12(context);
    return DynObj_RegisterSymbol_9(g_a44344, context);
}
