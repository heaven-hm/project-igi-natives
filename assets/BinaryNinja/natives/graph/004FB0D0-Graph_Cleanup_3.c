// Original IGI.EXE function: Graph_Cleanup_3 (VA 0x004FB0D0; static CFG gate PASS, CFG score 1.000).
#include "Graph_Cleanup_3.h"
int32_t* Graph_Cleanup_3(int32_t* context)

{
    Script_ParseEnumString_24(context, &g_a76d24, 0);
    int32_t* result = Script_SpawnNewTask_24(context[1], g_a77258, g_a77254, g_a76d24);
    context[3] = result;
    return result;
}
