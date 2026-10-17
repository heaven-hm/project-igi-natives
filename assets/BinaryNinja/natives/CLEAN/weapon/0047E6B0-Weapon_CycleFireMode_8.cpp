// IGI native provenance: Weapon_CycleFireMode_8 - 0x0047E6B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0047E6B0-Weapon_CycleFireMode_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_CycleFireMode_8.h"
uint32_t Weapon_CycleFireMode_8()

{
    Sys_OpenFileStream_2(&g_5c1120);
    Sys_OpenFileStream_2(&g_5c1108);
    QTask_CloseEvent_2(g_5c1138);
    uint32_t result = QTask_InitContext(g_540904);
    g_540904 = 0xff;
    return result;
}
