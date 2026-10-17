// IGI native provenance: Graph_Cleanup - 0x004FAFE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FAFE0-Graph_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Graph_Cleanup.h"
int32_t Graph_Cleanup(int32_t context, int32_t param_2, int32_t param_3, int32_t* param_4)

{
    int32_t item_4 = param_3;
    item_4 = 0xffffffff;
    Script_ParseEnumString_24(param_4, &item_4, 0);
    int32_t data_val = item_4;

    if (data_val == 0xffffffff)
    {
        g_a77398 = 0;
        return data_val;
    }

    int32_t data_1 = DynObj_RemoveSymbol_11(g_a44344, data_val);
    g_a77398 = data_1;
    return data_1;
}
