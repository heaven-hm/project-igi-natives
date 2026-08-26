# GO_Player

Address: 0x004036B0
Signature: int GO_Player(char* name)
Data types: scalar/opaque ABI only

## Recovered behavior

Adds a player profile named 'name' to the config while a .cfg/GO script block is being read; subsequent GO_* settings apply to this profile. Param: name = profile display name (string). Use inside config/profile scripts, must come before that profile's GO_* settings. Returns 1.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
