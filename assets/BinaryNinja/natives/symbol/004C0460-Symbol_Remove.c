// Original IGI.EXE function: Symbol_Remove (VA 0x004C0460; static CFG gate PASS, CFG score 1.000).
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
