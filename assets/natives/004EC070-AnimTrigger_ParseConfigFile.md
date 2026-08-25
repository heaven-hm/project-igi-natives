# AnimTrigger_ParseConfigFile

| Field | Value |
|---|---|
| Address/hash | `0x004EC070` |
| Signature | `void AnimTrigger_ParseConfigFile(uint* path)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Name from igi.exe error string INSIDE this function: "AnimTrigger_ParseConfigFile(): Couldn't load script: %s" @0x54DB98. Parses an animtrigger config file into trigger entries.

## How it was found

Retail evidence: AnimTrigger_ParseConfigFile(): Couldn't load script: %s.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
