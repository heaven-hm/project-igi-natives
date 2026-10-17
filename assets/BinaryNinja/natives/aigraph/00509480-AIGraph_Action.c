// IGI native provenance: AIGraph_Action - 0x00509480 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00509480-AIGraph_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AIGraph_Action.h"
int32_t AIGraph_Action(void* context )

{
    void* source_val = context;
    Script_FormatString_26(*(source_val + 4), &context);
    int32_t dest_val = 0;
    void item_4;

    if (context > 0)
    {
        do
        {
            Script_FormatString_26(*(source_val + 4), &item_4);
            Script_FormatString_26(*(source_val + 4), &item_4);
            dest_val += 1;
        } while (dest_val < context);
    }

    int32_t result_1;
    Script_FormatString_26(*(source_val + 4), &result_1);
    int32_t result = result_1;
    int32_t dest_1 = 0;

    if (result > 0)
    {
        do
        {
            Script_FormatString_26(*(source_val + 4), &item_4);
            Script_FormatString_26(*(source_val + 4), &item_4);
            result = result_1;
            dest_1 += 1;
        } while (dest_1 < result);
    }

    return result;
}
