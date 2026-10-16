#include "gi_platform.h"
#include "004B7E80-SymbolRegister_Int16.h"
void* SymbolRegister_Int16(int32_t* a1, int32_t a2)

// Sig: void* SymbolRegister_Int16(int* table, char* name)
// Note: Registers an INT16-typed script variable slot. Params: table, name.
// RETURNS symbol entry. Sibling of SymbolRegister_Bool8/Int32/Real32 - same
// thunk shape, different type tag.
{
    return Q_TaskHashTableSet(a1, Sys_OpenFileStream_22, a2, 4, 0, 1, 1);
}
