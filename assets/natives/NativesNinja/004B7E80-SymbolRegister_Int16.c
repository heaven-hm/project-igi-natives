#include "004B7E80-SymbolRegister_Int16.h"
/* 0x004b7e80 SymbolRegister_Int16 full linked: callers=13 callees=1 */
void* SymbolRegister_Int16(int32_t* a1, int32_t a2)

// Sig: void* SymbolRegister_Int16(int* table, char* name)
// Note: Registers an INT16-typed script variable slot. Params: table, name.
// RETURNS symbol entry. Sibling of SymbolRegister_Bool8/Int32/Real32 - same
// thunk shape, different type tag.
{
    return Q_TaskHashTableSet(a1, sub_4b7ea0, a2, 4, 0, 1, 1);
}
