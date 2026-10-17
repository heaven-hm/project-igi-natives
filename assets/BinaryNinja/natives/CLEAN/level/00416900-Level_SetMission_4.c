// IGI native provenance: Level_SetMission_4 - 0x00416900 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416900-Level_SetMission_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Level_SetMission_4.h"
int32_t Level_SetMission_4(void* context)

{
    int32_t kind;
    kind = g_57b1a2;
    QTask_HandleInput(context, kind, 0);
    return g_57babc;
}
