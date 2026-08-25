# QFile_DeviceHandlerLookup

| Field | Value |
|---|---|
| Address/hash | `0x004B1620` |
| Signature | `uint32_t QFile_DeviceHandlerLookup(const char* deviceName)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Matches a device name against the retail handler-name table and returns the corresponding handler value. Ghidra/r2 CFG agreement: 13 basic blocks and 18 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `13` basic blocks, `18` edges, end `0x004B1685`.
r2 CFG: `13` basic blocks, `18` edges, end `0x004B1685`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
