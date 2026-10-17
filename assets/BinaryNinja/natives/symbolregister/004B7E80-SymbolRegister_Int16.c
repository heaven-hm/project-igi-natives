// Original IGI.EXE function: SymbolRegister_Int16 (VA 0x004B7E80; static CFG gate PASS, CFG score 1.000).
#include "SymbolRegister_Int16.h"
void* SymbolRegister_Int16(int32_t* context, int32_t param_2)

// Sig: void* SymbolRegister_Int16(int* table, char* name)
// Note: Registers an INT16-typed script variable slot. Params: table, name.
// RETURNS symbol entry. Sibling of SymbolRegister_Bool8/Int32/Real32 - same
// thunk shape, different type tag.
{
    return Q_TaskHashTableSet(context, Sys_OpenFileStream_22, param_2, 4, 0, 1, 1);
}
