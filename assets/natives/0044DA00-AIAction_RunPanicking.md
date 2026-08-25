# AIAction_RunPanicking

| Field | Value |
|---|---|
| Address/hash | `0x0044DA00` |
| Signature | `void AIAction_RunPanicking(int param1, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sends the AI into PANIC running (civilians under fire). Params: param1 = panic target/context, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).

## How it was found

Retail evidence: AIAction_RunPanicking.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
