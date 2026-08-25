# Config_GraphicOptionsGetGamma

| Field | Value |
|---|---|
| Address/hash | `0x00404910` |
| Signature | `float Config_GraphicOptionsGetGamma()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the active profile's gamma as a float. Use to initialise your own gamma slider/UI.

## How it was found

Retail evidence: Config_GraphicOptionsGetGamma.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
