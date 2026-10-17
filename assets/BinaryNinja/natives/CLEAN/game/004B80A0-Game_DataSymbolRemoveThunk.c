// IGI native provenance: Game_DataSymbolRemoveThunk - 0x004B80A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004B80A0-Game_DataSymbolRemoveThunk.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_DataSymbolRemoveThunk.h"
int32_t Game_DataSymbolRemoveThunk(char* context)

// Sig: void* Game_DataSymbolRemoveThunk(char* symBuf)
// Note: Thin remover for the game-data symbol table: forwards its single
// argument down the removal chain (verified pure thunk returning data_val). Param:
// symBuf = symbol/buffer to unregister. Prefer this over direct internal calls.
{
    return Sys_CloseFileStream_23(context);
}
