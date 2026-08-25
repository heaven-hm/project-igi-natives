# AIFunction_SetScriptRealValue

| Field | Value |
|---|---|
| Address/hash | `0x0044E790` |
| Signature | `void AIFunction_SetScriptRealValue(int varId, float value)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Writes an AI-script real (float) variable. Params: varId = script variable index, value = float. Pairs with AIFunction_GetScriptRealValue.

## How it was found

Retail evidence: AIFunction_SetScriptRealValue.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
