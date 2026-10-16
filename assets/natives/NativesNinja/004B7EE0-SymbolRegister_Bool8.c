#include "004B7EE0-SymbolRegister_Bool8.h"
/* 0x004b7ee0 SymbolRegister_Bool8 full linked: callers=75 callees=1 */
void* SymbolRegister_Bool8(int32_t* a1, int32_t a2)

// Sig: void* SymbolRegister_Bool8(int* table, char* name)
// Note: Registers a BOOL8-TYPED script variable slot in the game-data symbol
// table (2-arg typed thunk family; each sibling hardcodes its type size).
// Params: table = symbol table, name = variable name. RETURNS the registered
// symbol entry. Script code can then read/write it as a bool.
{
    return Q_TaskHashTableSet(a1, sub_4b7f00, a2, 1, 0, 1, 1);
}
