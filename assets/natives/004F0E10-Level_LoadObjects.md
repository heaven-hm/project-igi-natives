# Level_LoadObjects

| Field | Value |
|---|---|
| Address/hash | `0x004F0E10` |
| Signature | `void Level_LoadObjects(int level_path,int level_len)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Loads all OBJECTS for the level: reads the level object set and instantiates each object entity in the world. Takes the level/path argument from the calling load script. Use during level-load flow before Level_Start. [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
