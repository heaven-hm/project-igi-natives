# Game_DataSymbolRemoveThunk

| Field | Value |
|---|---|
| Address/hash | `0x004B80A0` |
| Signature | `void* Game_DataSymbolRemoveThunk(char* symBuf)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Thin remover for the game-data symbol table: forwards its single argument down the removal chain (verified pure thunk returning eax). Param: symBuf = symbol/buffer to unregister. Prefer this over direct internal calls.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
