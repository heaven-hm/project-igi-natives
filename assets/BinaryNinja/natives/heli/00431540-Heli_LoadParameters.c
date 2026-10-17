// IGI native provenance: Heli_LoadParameters - 0x00431540 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00431540-Heli_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Heli_LoadParameters.h"
int32_t* Heli_LoadParameters(float context)

{
    Vehicle_InitHeli_2(context);
    return DynObj_QtasklistIsFull(Level_InitTextures_4(), context);
}
