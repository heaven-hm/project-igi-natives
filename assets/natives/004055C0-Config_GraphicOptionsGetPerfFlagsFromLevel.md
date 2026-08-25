# Config_GraphicOptionsGetPerfFlagsFromLevel

| Field | Value |
|---|---|
| Address/hash | `0x004055C0` |
| Signature | `int Config_GraphicOptionsGetPerfFlagsFromLevel(int level)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Converts a detail LEVEL number into its performance-flag bitmask. Param: level = 0..Config_GraphicOptionsNumPerfLevels()-1. Use when the user picks a named detail preset.

## How it was found

Retail evidence: Config_GraphicOptionsGetPerfFlagsFromLevel.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
