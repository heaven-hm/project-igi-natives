// IGI native provenance: Terrain_CalculateNormals_10 - 0x0051B3A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051B3A0-Terrain_CalculateNormals_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Terrain_CalculateNormals_10.h"
uint32_t Terrain_CalculateNormals_10()

{
    DynObj_CreateMagicObject_4(g_a83760);
    DynObj_CreateMagicObject_4(g_a83754);
    QTask_InitContext(g_54ed52);
    char data_val = g_54ed53;
    g_54ed52 = 0xff;
    QTask_InitContext(data_val);
    int16_t entity_1 = g_54ed50;
    g_54ed53 = 0xff;
    uint32_t result = QTask_CloseEvent_2(entity_1);
    g_54ed50 = 0x181;
    return result;
}
