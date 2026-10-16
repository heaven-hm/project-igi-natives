#include "004B7FC0-SymbolRegister_Real32.h"
/* 0x004b7fc0 SymbolRegister_Real32 full linked: callers=8 callees=1 */
void* SymbolRegister_Real32(int32_t* a1, int32_t a2)

// Sig: void* SymbolRegister_Real32(int* table, char* name)
// Note: Registers a REAL32 (float)-typed script variable slot. Params: table,
// name. RETURNS symbol entry. Pairs with AIFunction_Set/GetScriptRealValue for
// float storage.
{
    return Q_TaskHashTableSet(a1, sub_4b7fe0, a2, 8, 0, 2, 1);
}
