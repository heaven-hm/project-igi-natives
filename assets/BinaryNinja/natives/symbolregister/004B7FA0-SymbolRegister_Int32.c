#include "SymbolRegister_Int32.h"
void* SymbolRegister_Int32(int32_t* a1, int32_t a2)

// Sig: void* SymbolRegister_Int32(int* table, char* name)
// Note: Registers an INT32-typed script variable slot. Params: table, name.
// RETURNS symbol entry. This is the common integer script-variable registration
// used by AI/game scripts.
{
    return Q_TaskHashTableSet(a1, Sys_OpenFileStream_22, a2, 4, 0, 1, 1);
}
