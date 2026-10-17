// Original IGI.EXE function: Script_SpawnNewTask_11 (VA 0x004F1F50; static CFG gate PASS, CFG score 1.000).
#include "Script_SpawnNewTask_11.h"
uint32_t Script_SpawnNewTask_11()

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
