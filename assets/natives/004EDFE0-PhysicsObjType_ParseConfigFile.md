# PhysicsObjType_ParseConfigFile

| Field | Value |
|---|---|
| Address/hash | `0x004EDFE0` |
| Signature | `void PhysicsObjType_ParseConfigFile(char* cfg_file)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Name from igi.exe error string inside function: "PhysicsObjType_ParseConfigFile(): Couldn't load script" @0x54DC7C. Parses a physicsobj type config.

## How it was found

Retail evidence: PhysicsObjType_ParseConfigFile(): Couldn't load script: %s.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
