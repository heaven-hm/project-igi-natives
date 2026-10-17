// Original IGI.EXE function: Graph_Cleanup_3 (VA 0x004FB0D0; static CFG gate PASS, CFG score 1.000).
#include "Graph_Cleanup_3.h"
int32_t* Graph_Cleanup_3(int32_t* a1)

{
    Script_ParseEnumString_24(a1, &g_a76d24, 0);
    int32_t* result = Script_SpawnNewTask_24(a1[1], g_a77258, g_a77254, g_a76d24);
    a1[3] = result;
    return result;
}
