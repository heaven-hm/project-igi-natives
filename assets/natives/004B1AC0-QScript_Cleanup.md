# QScript_Cleanup

| Field | Value |
|---|---|
| Address/hash | `0x004B1AC0` |
| Signature | `void QScript_Cleanup(int* script)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Cleans up/frees a parsed .qsc script structure (pass1: 5 calls, valid exit). Param: script = pointer to the loaded script object. Call when done with a script loaded via the Qvm/Qsc loaders to release its memory.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
