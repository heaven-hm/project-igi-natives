# LevelFlow_GetBreakCutSceneKey

| Field | Value |
|---|---|
| Address/hash | `0x00488E00` |
| Signature | `int LevelFlow_GetBreakCutSceneKey()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the key code currently bound to 'skip/break cutscene'. Takes no args. Use in cutscene player loops to detect the skip key press.

## How it was found

Retail evidence: LevelFlow_GetBreakCutSceneKey.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
