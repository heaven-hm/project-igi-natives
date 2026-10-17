// IGI native provenance: Weapon_UpdateBarrel_4 - 0x00476660 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00476660-Weapon_UpdateBarrel_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateBarrel_4.h"
uint32_t Weapon_UpdateBarrel_4()

{
    int32_t data_val;
    data_val = g_5be3b0;
    return QTask_CloseEvent_2(data_val);
}
