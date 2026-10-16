#include "004C0460-Symbol_Remove.h"
/* 0x004c0460 Symbol_Remove full linked: callers=3 callees=4 */
int32_t Symbol_Remove(int32_t* a1, int32_t* a2)

// Sig: int Symbol_Remove(int* symTable, char* symName)
// Note: Removes a symbol from the game-data symbol hash table; warns "Unable to
// remove symbol \"%s\" (not registered)" when absent. Params: symTable = symbol
// table, symName = symbol name string. RETURNS non-zero on success. Call after
// dynamically registered symbols are no longer needed.
{
    char* esi = a2;

    if (sub_4c04b0(a1, &a2, esi))
    {
        sub_4af960(a2);
        return sub_4b0d10(a2);
    }

    char* var_8_2 = esi;
    Error_Show("Unable to remove symbol "%s" (not registered)");

    while (true)
        /* nop */
}
