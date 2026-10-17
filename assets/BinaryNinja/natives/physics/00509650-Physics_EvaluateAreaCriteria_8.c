// Original IGI.EXE function: Physics_EvaluateAreaCriteria_8 (VA 0x00509650; static CFG gate PASS, CFG score 1.000).
#include "Physics_EvaluateAreaCriteria_8.h"
uint32_t Physics_EvaluateAreaCriteria_8()

{
    Terrain_SelectTerrainLOD_9(g_a7b2d8 | g_a7b2d4 | g_a7b2d0);
    int32_t tmpD1 = DynObj_CreateMagicObject_4(g_a7b2cc);
    char valA2 = g_54e83e;

    if (valA2 != 0xff)
        QTask_InitContext(valA2);

    tmpD1 = g_54e83c;
    return QTask_CloseEvent_2(tmpD1);
}
