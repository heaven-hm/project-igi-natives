# Config_GameOptionsInputSetBloodEnabled

| Field | Value |
|---|---|
| Address/hash | `0x004042E0` |
| Signature | `void Config_GameOptionsInputSetBloodEnabled(int blood)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets blood-enabled in the config game-options write-out context. Param: blood = 1 on, 0 off.

## How it was found

Retail evidence: Config_GameOptionsInputSetBloodEnabled.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
