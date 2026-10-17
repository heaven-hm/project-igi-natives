// IGI native provenance: Physics_EvaluateAreaCriteria_8 - 0x00509650 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509650-Physics_EvaluateAreaCriteria_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_EvaluateAreaCriteria_8.h"
uint32_t Physics_EvaluateAreaCriteria_8()

{
    Terrain_SelectTerrainLOD_9(g_a7b2d8 | g_a7b2d4 | g_a7b2d0);
    int32_t temp_1 = DynObj_CreateMagicObject_4(g_a7b2cc);
    char data_2 = g_54e83e;

    if (data_2 != 0xff)
        QTask_InitContext(data_2);

    temp_1 = g_54e83c;
    return QTask_CloseEvent_2(temp_1);
}
