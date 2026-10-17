// Original IGI.EXE function: SymbolRegister_Real32 (VA 0x004B7FC0; static CFG gate PASS, CFG score 1.000).
#include "SymbolRegister_Real32.h"
void* SymbolRegister_Real32(int32_t* context, int32_t param_2)

// Sig: void* SymbolRegister_Real32(int* table, char* name)
// Note: Registers a REAL32 (float)-typed script variable slot. Params: table,
// name. RETURNS symbol entry. Pairs with AIFunction_Set/GetScriptRealValue for
// float storage.
{
    return Q_TaskHashTableSet(context, Sys_DispatchOpcode_22, param_2, 8, 0, 2, 1);
}
