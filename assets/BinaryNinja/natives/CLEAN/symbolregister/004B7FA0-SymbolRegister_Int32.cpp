// IGI native provenance: SymbolRegister_Int32 - 0x004B7FA0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B7FA0-SymbolRegister_Int32.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SymbolRegister_Int32.h"
void* SymbolRegister_Int32(int32_t* context, int32_t param_2)

// Sig: void* SymbolRegister_Int32(int* table, char* name)
// Note: Registers an INT32-typed script variable slot. Params: table, name.
// RETURNS symbol entry. This is the common integer script-variable registration
// used by AI/game scripts.
{
    return Q_TaskHashTableSet(context, Sys_OpenFileStream_22, param_2, 4, 0, 1, 1);
}
