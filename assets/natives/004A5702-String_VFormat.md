# String_VFormat

| Field | Value |
|---|---|
| Address/hash | `0x004A5702` |
| Signature | `int String_VFormat(char* buffer, const char* format, va_list args)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Bounded printf-style va_list formatter wrapper around the parser core at 0x004A7720. Catalogued for direct ABI-aware use; no generic NativeHelper wrapper is emitted. Ghidra/r2 CFG agreement: 4 basic blocks and 4 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `4` basic blocks, `4` edges, end `0x004A5752`.
r2 CFG: `4` basic blocks, `4` edges, end `0x004A5752`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
