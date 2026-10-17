// IGI native provenance: Weapon_CycleFireMode_2 - 0x004733E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004733E0-Weapon_CycleFireMode_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_CycleFireMode_2.h"
uint32_t Weapon_CycleFireMode_2()

{
    int32_t data_val;
    data_val = g_5be358;
    return QTask_CloseEvent_2(data_val);
}
