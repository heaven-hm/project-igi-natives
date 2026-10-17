// IGI native provenance: Symbol_Remove - 0x004C0460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C0460-Symbol_Remove.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Symbol_Remove.h"
int32_t Symbol_Remove(int32_t* context, int32_t* param_2)

// Sig: int Symbol_Remove(int* symTable, char* symName)
// Note: Removes a symbol from the game-data symbol hash table; warns "Unable to
// remove symbol \"%s\" (not registered)" when absent. Params: symTable = symbol
// table, symName = symbol name string. RETURNS non-zero on success. Call after
// dynamically registered symbols are no longer needed.
{
    char* source_val = param_2;

    if (DynObj_InsertHashItem_2(context, &param_2, source_val))
    {
        Camera_ApplyHandiCam_33(param_2);
        return Sys_ExecuteBytecode_2(param_2);
    }

    char* item_8_2 = source_val;
    Error_Show("Unable to remove symbol "%s" (not registered)");

    while (true)
        /* nop */
}
