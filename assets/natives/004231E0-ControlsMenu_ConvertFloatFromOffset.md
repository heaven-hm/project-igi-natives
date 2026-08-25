# ControlsMenu_ConvertFloatFromOffset

| Field | Value |
|---|---|
| Address/hash | `0x004231E0` |
| Signature | `float ControlsMenu_ConvertFloatFromOffset(int offset)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Converts a controls-menu slider/storage OFFSET into its float value (0.0-1.0 range used by the control configuration bars). Param: offset = raw integer offset stored for that control binding. Use when reading/writing control bindings from script.

## How it was found

Retail evidence: ControlsMenu_ConvertFloatFromOffset.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
