# AIFunction_SetScriptIntegerValue

| Field | Value |
|---|---|
| Address/hash | `0x0044E6D0` |
| Signature | `void AIFunction_SetScriptIntegerValue(int varId, int value)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Writes an AI-script integer variable. Params: varId = script variable index, value = new integer. Use for custom AI state communication between scripts.

## How it was found

Retail evidence: AIFunction_SetScriptIntegerValue.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
