// IGI native provenance: Explosion0_Action - 0x00480F00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00480F00-Explosion0_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Explosion0_Action.h"
void* Explosion0_Action(void* context)

{
    Render_SkinBones_2(context + 0xc0);
    return DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
}
