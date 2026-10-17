// IGI native provenance: SymbolRegister_Bool8 - 0x004B7EE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7EE0-SymbolRegister_Bool8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SymbolRegister_Bool8.h"
void* SymbolRegister_Bool8(int32_t* context, int32_t param_2)

// Sig: void* SymbolRegister_Bool8(int* table, char* name)
// Note: Registers a BOOL8-TYPED script variable slot in the game-data symbol
// table (2-arg typed thunk family; each sibling hardcodes its type size).
// Params: table = symbol table, name = variable name. RETURNS the registered
// symbol entry. Script code can then read/write it as a bool.
{
    return Q_TaskHashTableSet(context, Sys_ReadFileBlock_22, param_2, 1, 0, 1, 1);
}
