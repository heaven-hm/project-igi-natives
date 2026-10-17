// IGI native provenance: Sys_ResolveSymbol - 0x004B09C0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B09C0-Sys_ResolveSymbol.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_ResolveSymbol.h"
int32_t Sys_ResolveSymbol(int32_t* context, int32_t* param_2, int32_t* param_3, char* param_4, int32_t param_5, int32_t param_6)

{
    void item_200;
    Sys_PopStack(&item_200, param_4);
    return Sys_DispatchOpcode(context, param_2, param_3, &item_200, param_5, param_6);
}
