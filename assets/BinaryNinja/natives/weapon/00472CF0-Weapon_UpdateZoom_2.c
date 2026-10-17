// IGI native provenance: Weapon_UpdateZoom_2 - 0x00472CF0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00472CF0-Weapon_UpdateZoom_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_UpdateZoom_2.h"
uint32_t Weapon_UpdateZoom_2()

{
    int32_t data_val;
    data_val = g_5be350;
    return QTask_CloseEvent_2(data_val);
}
