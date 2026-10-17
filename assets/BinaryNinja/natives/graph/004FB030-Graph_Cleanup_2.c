// Original IGI.EXE function: Graph_Cleanup_2 (VA 0x004FB030; static CFG gate PASS, CFG score 1.000).
#include "Graph_Cleanup_2.h"
int32_t* Graph_Cleanup_2(int32_t* context)

{
    Script_ParseEnumString_24(context, 0xa77294, 0x100);
    int32_t item_14 = 0;
    int32_t* result =
        Script_GraphnodeIdAlreadyUs(context[1], g_a77260, 0xa77268, g_a77280, g_a77284, g_a77398, 0xa77294);
    context[2] = result;
    return result;
}
