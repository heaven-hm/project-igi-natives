// IGI native provenance: SymbolRegister_Real32 - 0x004B7FC0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7FC0-SymbolRegister_Real32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SymbolRegister_Real32.h"
void* SymbolRegister_Real32(int32_t* context, int32_t param_2)

// Sig: void* SymbolRegister_Real32(int* table, char* name)
// Note: Registers a REAL32 (float)-typed script variable slot. Params: table,
// name. RETURNS symbol entry. Pairs with AIFunction_Set/GetScriptRealValue for
// float storage.
{
    return Q_TaskHashTableSet(context, Sys_DispatchOpcode_22, param_2, 8, 0, 2, 1);
}
