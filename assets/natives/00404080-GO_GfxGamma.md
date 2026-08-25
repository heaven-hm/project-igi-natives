# GO_GfxGamma

| Field | Value |
|---|---|
| Address/hash | `0x00404080` |
| Signature | `int GO_GfxGamma(float gamma)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets gamma for the current profile. Param: gamma = float, retail default 1.0 (range ~0.5-3.0 clamped elsewhere). Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOGfxGamma.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
