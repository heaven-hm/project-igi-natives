# Profile_ValueSet

| Field | Value |
|---|---|
| Address/hash | `0x004B8A50` |
| Signature | `void Profile_ValueSet(void* profile, int index)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets a profile value through the profile object/value-table path used by the retail music and sound-effects option setters. Ghidra/r2 CFG agreement: 3 basic blocks and 2 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `3` basic blocks, `2` edges, end `0x004B8A7B`.
r2 CFG: `3` basic blocks, `2` edges, end `0x004B8A7B`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
