#include "gi_platform.h"
#include "004B80A0-Game_DataSymbolRemoveThunk.h"
int32_t Game_DataSymbolRemoveThunk(char* a1)

// Sig: void* Game_DataSymbolRemoveThunk(char* symBuf)
// Note: Thin remover for the game-data symbol table: forwards its single
// argument down the removal chain (verified pure thunk returning valA). Param:
// symBuf = symbol/buffer to unregister. Prefer this over direct internal calls.
{
    return Sys_CloseFileStream_23(a1);
}
