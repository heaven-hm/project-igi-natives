# AIFunction_IsEventBehind

| Field | Value |
|---|---|
| Address/hash | `0x0044E860` |
| Signature | `int AIFunction_IsEventBehind()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS non-zero if the current event came from BEHIND the AI (direction test used for reaction animations). Takes no script args per retail table (engine reads an internal slot via ebp+8). Use in alert/detection handlers.

## How it was found

Retail evidence: AIFunction_IsEventBehind.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
