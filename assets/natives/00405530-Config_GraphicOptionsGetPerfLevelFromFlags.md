# Config_GraphicOptionsGetPerfLevelFromFlags

| Field | Value |
|---|---|
| Address/hash | `0x00405530` |
| Signature | `int Config_GraphicOptionsGetPerfLevelFromFlags(int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Converts a performance-flag bitmask back into its detail LEVEL number. Param: flags = bitmask from the profile/performance setting. Use to show the current detail level in UI.

## How it was found

Retail evidence: Config_GraphicOptionsGetPerfLevelFromFlags.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
