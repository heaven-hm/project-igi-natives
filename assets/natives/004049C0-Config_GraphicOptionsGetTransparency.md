# Config_GraphicOptionsGetTransparency

| Field | Value |
|---|---|
| Address/hash | `0x004049C0` |
| Signature | `int Config_GraphicOptionsGetTransparency()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns 1 if transparency is enabled for the active profile, else 0.

## How it was found

Retail evidence: Config_GraphicOptionsGetTransparency.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
