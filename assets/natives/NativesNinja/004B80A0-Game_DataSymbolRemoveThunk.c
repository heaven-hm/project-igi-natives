#include "004B80A0-Game_DataSymbolRemoveThunk.h"
/* 0x004b80a0 Game_DataSymbolRemoveThunk full linked: callers=109 callees=1 */
int32_t Game_DataSymbolRemoveThunk(char* a1)

// Sig: void* Game_DataSymbolRemoveThunk(char* symBuf)
// Note: Thin remover for the game-data symbol table: forwards its single
// argument down the removal chain (verified pure thunk returning eax). Param:
// symBuf = symbol/buffer to unregister. Prefer this over direct internal calls.
{
    return sub_4b8920(a1);
}
