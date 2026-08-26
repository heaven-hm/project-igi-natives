# Game_DataSymbolRemoveThunk

Address: 0x004B80A0
Signature: void* Game_DataSymbolRemoveThunk(char* symBuf)
Data types: scalar/opaque ABI only

## Recovered behavior

Thin remover for the game-data symbol table: forwards its single argument down the removal chain (verified pure thunk returning eax). Param: symBuf = symbol/buffer to unregister. Prefer this over direct internal calls.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
