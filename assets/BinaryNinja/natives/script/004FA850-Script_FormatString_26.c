// IGI native provenance: Script_FormatString_26 - 0x004FA850 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA850-Script_FormatString_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_26.h"
int32_t* Script_FormatString_26(void* context, int32_t* param_2)

{
    Sys_ResolveSymbol_4(*(context + 4));
    void item_8;
    Resource_Unpack(*(context + 4), &item_8, 5);
    int32_t* result = param_2;
    int32_t item_7;
    *result = item_7;
    result = 1;
    return result;
}
