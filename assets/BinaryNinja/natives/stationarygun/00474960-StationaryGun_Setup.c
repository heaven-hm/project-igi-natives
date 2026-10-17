// IGI native provenance: StationaryGun_Setup - 0x00474960 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474960-StationaryGun_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StationaryGun_Setup.h"
void* StationaryGun_Setup(void* context)

{
    DynObj_TryingToRemoveUnrigi(Level_StartMission_3(), context);
    return DynObj_RegisterSymbol_9(*(context + 0x68), context);
}
