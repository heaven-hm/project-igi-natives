# Config_Compile

| Field | Value |
|---|---|
| Address/hash | `0x004F0CF0` |
| Signature | `int Config_Compile(int context, char* cfgName, int flags)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Compiles a CONFIG script: validates context, then loads its compiled QVM via QvmLoad (0x4B80B0); references the Task_New name during task-table wiring. Params: context = config context id, cfgName = config path/name, flags = compile flags. Use when (re)loading game configuration programmatically.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
