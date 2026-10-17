// IGI native provenance: Script_FormatString_25 - 0x004FA620 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA620-Script_FormatString_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_FormatString_25.h"
int32_t Script_FormatString_25(void* context, int32_t param_2)

{
    char item_8 = 5;
    int32_t item_7 = param_2;
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t result = Sys_CloseFileStream_4(*(context + 4), &item_8, 5);
    result = 1;
    return result;
}
