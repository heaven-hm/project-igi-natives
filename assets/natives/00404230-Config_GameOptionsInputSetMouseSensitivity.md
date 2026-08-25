# Config_GameOptionsInputSetMouseSensitivity

| Field | Value |
|---|---|
| Address/hash | `0x00404230` |
| Signature | `void Config_GameOptionsInputSetMouseSensitivity(int value)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets mouse-sensitivity in the config game-options write-out context. Param: value = sensitivity as stored by the options screen (integer scale).

## How it was found

Retail evidence: Config_GameOptionsInputSetMouseSensitivity.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
