# GO_GfxPerformance

| Field | Value |
|---|---|
| Address/hash | `0x004040F0` |
| Signature | `int GO_GfxPerformance(int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets graphics performance/detail flags for the current profile. Param: flags = bitmask from the detail-level mapping (see Config_GraphicOptionsGetPerfFlagsFromLevel). Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOGfxPerformance.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
