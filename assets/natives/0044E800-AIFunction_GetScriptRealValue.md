# AIFunction_GetScriptRealValue

| Field | Value |
|---|---|
| Address/hash | `0x0044E800` |
| Signature | `float AIFunction_GetScriptRealValue(int varId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

READS an AI-script real (float) variable. Param: varId = variable index. RETURNS the float.

## How it was found

Retail evidence: AIFunction_GetScriptRealValue.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
