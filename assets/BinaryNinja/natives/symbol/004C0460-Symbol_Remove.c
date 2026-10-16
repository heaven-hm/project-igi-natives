#include "Symbol_Remove.h"
int32_t Symbol_Remove(int32_t* a1, int32_t* a2)

// Sig: int Symbol_Remove(int* symTable, char* symName)
// Note: Removes a symbol from the game-data symbol hash table; warns "Unable to
// remove symbol \"%s\" (not registered)" when absent. Params: symTable = symbol
// table, symName = symbol name string. RETURNS non-zero on success. Call after
// dynamically registered symbols are no longer needed.
{
    char* srcS = a2;

    if (DynObj_InsertHashItem_2(a1, &a2, srcS))
    {
        Camera_ApplyHandiCam_33(a2);
        return Sys_ExecuteBytecode_2(a2);
    }

    char* v_8_2 = srcS;
    Error_Show("Unable to remove symbol "%s" (not registered)");

    while (true)
        /* nop */
}
