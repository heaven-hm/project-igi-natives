// Original IGI.EXE function: Game_DataSymbolLoad (VA 0x004A53B3; static CFG gate PASS, CFG score 1.000).
#include "Game_DataSymbolLoad.h"
int32_t Game_DataSymbolLoad(char* a1, char* a2)

// Sig: int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName)
// Note: Parses game-data SYMBOL DEFINITIONS from a buffer into the symbol
// table: tokenizes via 0x4A7720 with per-name limit 0x42 (66 bytes) and count
// cap 0x7FFFFFFF, null-terminates each parsed name. Params: symBuf = symbol
// buffer base, symPath = source path ref, symName = initial name entry. RETURNS
// parse status. Feeds the table that Symbol_Register*/GameData_SymbolRemove
// operate on.
{
    char* v_1c = a1;
    char* v_24 = a1;
    int32_t v_18 = 0x42;
    void arg_c;
    void* v_2c = &arg_c;
    int32_t v_20 = 0x7fffffff;
    int32_t result = Camera_ApplyWideScreen_11(&v_24, a2);
    int32_t v_20_1 = v_20 - 1;

    if (v_20 - 1 < 0)
    {
        int32_t v_30_1 = 0;
        Camera_ApplyHandiCam_11(&v_24);
    }
    else
        *v_24 = 0;

    return result;
}
