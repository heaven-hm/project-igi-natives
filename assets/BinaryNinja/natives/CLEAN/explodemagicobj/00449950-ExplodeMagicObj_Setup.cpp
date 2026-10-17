// IGI native provenance: ExplodeMagicObj_Setup - 0x00449950 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00449950-ExplodeMagicObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ExplodeMagicObj_Setup.h"
void* ExplodeMagicObj_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_InitTextures_4(), context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
