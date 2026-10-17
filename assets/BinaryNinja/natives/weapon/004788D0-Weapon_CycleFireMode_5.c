// IGI native provenance: Weapon_CycleFireMode_5 - 0x004788D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004788D0-Weapon_CycleFireMode_5.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_CycleFireMode_5.h"
int32_t Weapon_CycleFireMode_5(void* context)

{
    char result = *(context + 0xf0);

    if (result)
    {
        result = DynObj_RegisterSymbol_9(Level_StartMission_4(), context);
        *(context + 0xf0) = 0;
    }

    return result;
}
