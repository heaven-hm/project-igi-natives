#include "004F1F50-Script_SpawnNewTask_11.h"
/* 0x004f1f50 Script_SpawnNewTask_11 full linked: callers=1 callees=9 */
uint32_t sub_4f1f50()

{
    QTask_InitContext(g_a76c02);
    QTask_InitContext(g_a76c03);
    QTask_InitContext(g_a76c10);
    QTask_InitContext(g_a76c01);
    QTask_InitContext(g_a76c00);
    QTask_InitContext(g_a76c09);
    QTask_CreateTask_2(g_a76bfc);
    QTask_CreateTask_2(g_a76c04);
    return QTask_InitContext(g_a76c08);
}
