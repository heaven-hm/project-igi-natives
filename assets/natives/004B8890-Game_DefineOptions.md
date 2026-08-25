# Game_DefineOptions

| Field | Value |
|---|---|
| Address/hash | `0x004B8890` |
| Signature | `void Game_DefineOptions(int **option_str,int option_func_addr,int opt1,int opt2)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Define game options constants , Params: opt_str (int**)'DefineAmmoType'

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
