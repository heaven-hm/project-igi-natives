# GO_Player

| Field | Value |
|---|---|
| Address/hash | `0x004036B0` |
| Signature | `int GO_Player(char* name)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Adds a player profile named 'name' to the config while a .cfg/GO script block is being read; subsequent GO_* settings apply to this profile. Param: name = profile display name (string). Use inside config/profile scripts, must come before that profile's GO_* settings. Returns 1.

## How it was found

Retail evidence: GOPlayer.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
