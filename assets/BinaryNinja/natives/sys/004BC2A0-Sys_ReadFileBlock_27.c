// IGI native provenance: Sys_ReadFileBlock_27 - 0x004BC2A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BC2A0-Sys_ReadFileBlock_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ReadFileBlock_27.h"
int32_t Sys_ReadFileBlock_27(char* context, int32_t param_2, int32_t param_3)

{
    int32_t item_4 = param_3;
    int32_t item_8 = param_2;
    return Game_DataSymbolLoad(context, "%s%p");
}
