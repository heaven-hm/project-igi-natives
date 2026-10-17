// IGI native provenance: Gun_Cleanup - 0x00478290 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00478290-Gun_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Gun_Cleanup.h"
void* Gun_Cleanup(void* context)

{
    DynObj_LookupHashItem_6(Level_StartMission_4(), context, 0);
    *(context + 0xec) = 0;
    return DynObj_RegisterSymbol_8(Level_StartMission_4(), context, 0);
}
