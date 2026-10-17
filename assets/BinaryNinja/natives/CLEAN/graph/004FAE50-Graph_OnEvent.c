// IGI native provenance: Graph_OnEvent - 0x004FAE50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FAE50-Graph_OnEvent.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Graph_OnEvent.h"
int32_t Graph_OnEvent(void* context, int32_t* param_2)

{
    int32_t source_val = *param_2;
    *(context + 0x68) = 0;
    *(context + 0x69) = 0;
    Script_GetArg(param_2[1], source_val);
    *(context + 0x58) = Script_GetArg(param_2[1], source_val + 1);
    Script_GetArg(param_2[1], source_val + 2);
    *(context + 0x5c) = 0;
    *(context + 0x60) = 0;
    int32_t item_430 = Script_EvaluateCondition_4(context);
    void item_400;
    Game_DataSymbolLoad(&item_400, "MISSION:graphs/graph%d.dat");
    void* item_440 = context;
    int32_t result = Graph_Open(&item_400);
    *param_2 = source_val + 3;
    return result;
}
