# LevelFlow_LevelFailed

| Field | Value |
|---|---|
| Address/hash | `0x00488E50` |
| Signature | `void LevelFlow_LevelFailed()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Signals that the level FAILED - triggers the retail failure flow (fail sound, restart/quit menu). Takes no args. Call when your scripted objective fails.

## How it was found

Retail evidence: LevelFlow_LevelFailed.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
