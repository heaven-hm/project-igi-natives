#include "0051B3A0-Terrain_CalculateNormals_10.h"
/* 0x0051b3a0 Terrain_CalculateNormals_10 full linked: callers=1 callees=5 */
uint32_t sub_51b3a0()

{
    sub_4c1830(g_a83760);
    sub_4c1830(g_a83754);
    QTask_InitContext(g_54ed52);
    char eax = g_54ed53;
    g_54ed52 = 0xff;
    QTask_InitContext(eax);
    int16_t ecx_1 = g_54ed50;
    g_54ed53 = 0xff;
    uint32_t result = QTask_CloseEvent_2(ecx_1);
    g_54ed50 = 0x181;
    return result;
}
