// IGI native provenance: Terrain_UpdateWaterWaves_9 - 0x00519650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00519650-Terrain_UpdateWaterWaves_9.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_UpdateWaterWaves_9.h"
uint32_t Terrain_UpdateWaterWaves_9()

{
    Script_SpawnNewTask_8(g_a80300);
    DynObj_CreateMagicObject_4(g_a80304);
    QTask_LinkEventHandler_3(0x40000000);
    return QTask_CloseEvent_2(g_a81014);
}
