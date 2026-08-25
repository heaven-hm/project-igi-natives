# Config_GameOptionsInputGetMouseSensitivity

| Field | Value |
|---|---|
| Address/hash | `0x00404290` |
| Signature | `int Config_GameOptionsInputGetMouseSensitivity()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the stored mouse-sensitivity integer from the game-options config context. Takes no args.

## How it was found

Retail evidence: Config_GameOptionsInputGetMouseSensitivity.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
