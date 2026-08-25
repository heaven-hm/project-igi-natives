# Human_RunUpdate

| Field | Value |
|---|---|
| Address/hash | `0x004109A0` |
| Signature | `void Human_RunUpdate(void* human)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Main HUMAN PLAYER RUN/MOVEMENT UPDATE - large handler; reads human struct field +0x2EC (lea edi,[esi+0x2ec], matching the documented param-ptr slot) and drives movement state. Hooked by IGI-MP as HumanPlayer_RunUpdate.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
