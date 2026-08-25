# AIFunction_SetViewLength

| Field | Value |
|---|---|
| Address/hash | `0x0044DC40` |
| Signature | `void AIFunction_SetViewLength(int length)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets this AI's VIEW LENGTH - how far it can see. Param: length = view distance in engine units. Use in AI init (AIEVENT_CREATE) to buff/nerf vision.

## How it was found

Retail evidence: AIFunction_SetViewLength.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
