# Break_Script

| Field | Value |
|---|---|
| Address/hash | `0x004B8C10` |
| Signature | `void Break_Script()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Breaks/aborts the currently-executing script at this point (70-byte function). Takes no args. Use as an early-exit inside .qsc scripts.

## How it was found

Retail evidence: BreakScript.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
