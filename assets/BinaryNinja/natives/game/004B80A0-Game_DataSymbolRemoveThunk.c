// Original IGI.EXE function: Game_DataSymbolRemoveThunk (VA 0x004B80A0; static CFG gate PASS, CFG score 1.000).
#include "Game_DataSymbolRemoveThunk.h"
int32_t Game_DataSymbolRemoveThunk(char* a1)

// Sig: void* Game_DataSymbolRemoveThunk(char* symBuf)
// Note: Thin remover for the game-data symbol table: forwards its single
// argument down the removal chain (verified pure thunk returning valA). Param:
// symBuf = symbol/buffer to unregister. Prefer this over direct internal calls.
{
    return Sys_CloseFileStream_23(a1);
}
