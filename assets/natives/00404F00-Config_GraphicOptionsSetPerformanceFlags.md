# Config_GraphicOptionsSetPerformanceFlags

| Field | Value |
|---|---|
| Address/hash | `0x00404F00` |
| Signature | `void Config_GraphicOptionsSetPerformanceFlags(int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the raw graphics performance/detail flag bits on the active profile. Param: flags = bitmask (get a valid one from Config_GraphicOptionsGetPerfFlagsFromLevel).

## How it was found

Retail evidence: Config_GraphicOptionsSetPerformanceFlags.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
