# Config_GameOptionsInputSetInvertMouse

| Field | Value |
|---|---|
| Address/hash | `0x00404160` |
| Signature | `void Config_GameOptionsInputSetInvertMouse(int invert)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets invert-mouse in the GAME-OPTIONS block while a config file is parsed (the GO_* writer side; runtime getter/setter pair lives on the profile). Param: invert = 1 inverted, 0 normal. Use only inside config .qsc write-out contexts.

## How it was found

Retail evidence: Config_GameOptionsInputSetInvertMouse.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
