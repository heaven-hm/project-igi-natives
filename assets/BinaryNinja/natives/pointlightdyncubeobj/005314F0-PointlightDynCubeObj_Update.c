// IGI native provenance: PointlightDynCubeObj_Update - 0x005314F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005314F0-PointlightDynCubeObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PointlightDynCubeObj_Update.h"
uint32_t PointlightDynCubeObj_Update()

{
    Sys_OpenFileStream_2(&g_afa800);
    Sys_OpenFileStream_2(0xafa820);
    QTask_CloseEvent_2(g_54f800);
    int16_t entity_val = g_54f802;
    g_54f800 = 0x181;
    uint32_t result = QTask_CloseEvent_2(entity_val);
    g_54f802 = 0x181;
    return result;
}
