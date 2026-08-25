# Config_GameOptionsInputGetInvertMouse

| Field | Value |
|---|---|
| Address/hash | `0x004041D0` |
| Signature | `int Config_GameOptionsInputGetInvertMouse()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the invert-mouse setting when the engine writes/reads a config game-options block (1 = inverted, 0 = normal). Takes no args. Pairs with Config_GameOptionsInputSetInvertMouse.

## How it was found

Retail evidence: Config_GameOptionsInputGetInvertMouse.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
