// IGI native provenance: Weapon_UpdateRecoil - 0x00470EB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470EB0-Weapon_UpdateRecoil.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateRecoil.h"
uint32_t Weapon_UpdateRecoil()

{
    int32_t data_val;
    data_val = g_5be33c;
    return QTask_CloseEvent_2(data_val);
}
