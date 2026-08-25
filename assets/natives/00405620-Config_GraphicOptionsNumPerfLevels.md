# Config_GraphicOptionsNumPerfLevels

| Field | Value |
|---|---|
| Address/hash | `0x00405620` |
| Signature | `int Config_GraphicOptionsNumPerfLevels()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the number of graphics detail levels the engine supports (constant). Use to build the detail-level slider/list.

## How it was found

Retail evidence: Config_GraphicOptionsNumPerfLevels.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
