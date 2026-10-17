// Original IGI.EXE function: SymbolRegister_Int32 (VA 0x004B7FA0; static CFG gate PASS, CFG score 1.000).
#include "SymbolRegister_Int32.h"
void* SymbolRegister_Int32(int32_t* context, int32_t param_2)

// Sig: void* SymbolRegister_Int32(int* table, char* name)
// Note: Registers an INT32-typed script variable slot. Params: table, name.
// RETURNS symbol entry. This is the common integer script-variable registration
// used by AI/game scripts.
{
    return Q_TaskHashTableSet(context, Sys_OpenFileStream_22, param_2, 4, 0, 1, 1);
}
