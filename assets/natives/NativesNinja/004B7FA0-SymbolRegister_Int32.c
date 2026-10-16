#include "004B7FA0-SymbolRegister_Int32.h"
/* 0x004b7fa0 SymbolRegister_Int32 full linked: callers=12 callees=1 */
void* SymbolRegister_Int32(int32_t* a1, int32_t a2)

// Sig: void* SymbolRegister_Int32(int* table, char* name)
// Note: Registers an INT32-typed script variable slot. Params: table, name.
// RETURNS symbol entry. This is the common integer script-variable registration
// used by AI/game scripts.
{
    return Q_TaskHashTableSet(a1, sub_4b7ea0, a2, 4, 0, 1, 1);
}
