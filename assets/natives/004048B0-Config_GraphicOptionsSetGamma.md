# Config_GraphicOptionsSetGamma

| Field | Value |
|---|---|
| Address/hash | `0x004048B0` |
| Signature | `void Config_GraphicOptionsSetGamma(float gamma)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets and immediately applies gamma to the active profile (also feeds the live lighting math through the profile record +0x220). Param: gamma = float (retail default 1.0). Use in video-options screen script or your own gamma slider.

## How it was found

Retail evidence: Config_GraphicOptionsSetGamma.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
