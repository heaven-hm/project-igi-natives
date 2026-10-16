#include "Terrain_CalculateNormals_10.h"
uint32_t Terrain_CalculateNormals_10()

{
    DynObj_CreateMagicObject_4(g_a83760);
    DynObj_CreateMagicObject_4(g_a83754);
    QTask_InitContext(g_54ed52);
    char valA = g_54ed53;
    g_54ed52 = 0xff;
    QTask_InitContext(valA);
    int16_t objC1 = g_54ed50;
    g_54ed53 = 0xff;
    uint32_t result = QTask_CloseEvent_2(objC1);
    g_54ed50 = 0x181;
    return result;
}
