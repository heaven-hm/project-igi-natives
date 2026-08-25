# Human_FindNextCamera

| Field | Value |
|---|---|
| Address/hash | `0x004828D0` |
| Signature | `void Human_FindNextCamera(void* human)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Debug camera cycler: advances to the next camera/view target attached to the human player (decompiled body polls input keys). Param: human = human-player pointer. Pass1-verified function start; restored - it existed only in the Natives.hpp enum and was never serialized to JSON.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
