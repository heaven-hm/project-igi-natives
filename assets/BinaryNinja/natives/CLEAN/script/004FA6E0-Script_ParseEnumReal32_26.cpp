// IGI native provenance: Script_ParseEnumReal32_26 - 0x004FA6E0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA6E0-Script_ParseEnumReal32_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_26.h"
int32_t Script_ParseEnumReal32_26(void* context, int32_t param_2)

{
    char item_1c = 8;
    void item_1b;
    memcpy(&item_1b, param_2, 0x18);
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t item_2c = 0x19;
    char* item_30 = &item_1c;
    int32_t* item_34 = *(context + 4);
    int32_t result = Sys_CloseFileStream_4(item_34, item_30, item_2c);
    result = 1;
    return result;
}
