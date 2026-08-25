# ControlsMenu_ConvertOffsetFromFloat

| Field | Value |
|---|---|
| Address/hash | `0x00423240` |
| Signature | `int ControlsMenu_ConvertOffsetFromFloat(float value)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Inverse of ControlsMenu_ConvertFloatFromOffset: converts a float control value into the raw storage offset. Param: value = float 0.0-1.0. Use when saving a modified binding back.

## How it was found

Retail evidence: ControlsMenu_ConvertOffsetFromFloat.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
