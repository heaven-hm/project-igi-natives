# QFile_AliasResolve

| Field | Value |
|---|---|
| Address/hash | `0x004B1020` |
| Signature | `int QFile_AliasResolve(char* outputPath, const char* inputPath, int maxDepth)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Resolves semicolon-separated QFile path aliases, copies the resolved path, and returns the alias depth. Ghidra/r2 CFG agreement: 17 basic blocks and 25 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `17` basic blocks, `25` edges, end `0x004B117E`.
r2 CFG: `17` basic blocks, `25` edges, end `0x004B117E`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
