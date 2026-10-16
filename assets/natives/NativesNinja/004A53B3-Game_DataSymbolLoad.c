#include "004A53B3-Game_DataSymbolLoad.h"
/* 0x004a53b3 Game_DataSymbolLoad full linked: callers=484 callees=2 */
int32_t Game_DataSymbolLoad(char* a1, char* a2)

// Sig: int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName)
// Note: Parses game-data SYMBOL DEFINITIONS from a buffer into the symbol
// table: tokenizes via 0x4A7720 with per-name limit 0x42 (66 bytes) and count
// cap 0x7FFFFFFF, null-terminates each parsed name. Params: symBuf = symbol
// buffer base, symPath = source path ref, symName = initial name entry. RETURNS
// parse status. Feeds the table that Symbol_Register*/GameData_SymbolRemove
// operate on.
{
    char* var_1c = a1;
    char* var_24 = a1;
    int32_t var_18 = 0x42;
    void arg_c;
    void* var_2c = &arg_c;
    int32_t var_20 = 0x7fffffff;
    int32_t result = sub_4a7720(&var_24, a2);
    int32_t var_20_1 = var_20 - 1;

    if (var_20 - 1 < 0)
    {
        int32_t var_30_1 = 0;
        sub_4a760b(&var_24);
    }
    else
        *var_24 = 0;

    return result;
}
