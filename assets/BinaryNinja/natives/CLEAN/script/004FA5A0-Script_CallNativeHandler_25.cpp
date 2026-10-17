// IGI native provenance: Script_CallNativeHandler_25 - 0x004FA5A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA5A0-Script_CallNativeHandler_25.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_25.h"
int32_t Script_CallNativeHandler_25(int32_t context, int32_t param_2, int32_t param_3, void* param_4, int16_t param_5)

{
    int32_t item_4 = param_3;
    item_4 = 3;
    *(&item_4 + 1) = param_5;
    Sys_ResolveSymbol_4(*(param_4 + 4));
    int32_t result = Sys_CloseFileStream_4(*(param_4 + 4), &item_4, 3);
    result = 1;
    return result;
}
