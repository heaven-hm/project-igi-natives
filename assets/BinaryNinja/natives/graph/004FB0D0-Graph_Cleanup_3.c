// IGI native provenance: Graph_Cleanup_3 - 0x004FB0D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FB0D0-Graph_Cleanup_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Graph_Cleanup_3.h"
int32_t* Graph_Cleanup_3(int32_t* context)

{
    Script_ParseEnumString_24(context, &g_a76d24, 0);
    int32_t* result = Script_SpawnNewTask_24(context[1], g_a77258, g_a77254, g_a76d24);
    context[3] = result;
    return result;
}
