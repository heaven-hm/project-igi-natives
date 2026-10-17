// IGI native provenance: Weapon_CheckAmmo_2 - 0x00473980 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00473980-Weapon_CheckAmmo_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_CheckAmmo_2.h"
uint32_t Weapon_CheckAmmo_2()

{
    int32_t data_val;
    data_val = g_5be36c;
    return QTask_CloseEvent_2(data_val);
}
