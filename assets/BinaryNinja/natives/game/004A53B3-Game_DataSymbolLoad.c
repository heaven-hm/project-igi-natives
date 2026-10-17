// IGI native provenance: Game_DataSymbolLoad - 0x004A53B3 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004A53B3-Game_DataSymbolLoad.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_DataSymbolLoad.h"
int32_t Game_DataSymbolLoad(char* context, char* param_2)

// Sig: int Game_DataSymbolLoad(char* symBuf, char* symPath, char* symName)
// Note: Parses game-data SYMBOL DEFINITIONS from a buffer into the symbol
// table: tokenizes via 0x4A7720 with per-name limit 0x42 (66 bytes) and count
// cap 0x7FFFFFFF, null-terminates each parsed name. Params: symBuf = symbol
// buffer base, symPath = source path ref, symName = initial name entry. RETURNS
// parse status. Feeds the table that Symbol_Register*/GameData_SymbolRemove
// operate on.
{
    char* item_1c = context;
    char* item_24 = context;
    int32_t item_18 = 0x42;
    void arg_c;
    void* item_2c = &arg_c;
    int32_t item_20 = 0x7fffffff;
    int32_t result = Camera_ApplyWideScreen_11(&item_24, param_2);
    int32_t item_20_1 = item_20 - 1;

    if (item_20 - 1 < 0)
    {
        int32_t item_30_1 = 0;
        Camera_ApplyHandiCam_11(&item_24);
    }
    else
        *item_24 = 0;

    return result;
}
