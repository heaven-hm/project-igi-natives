# QFile_DeviceIndex

| Field | Value |
|---|---|
| Address/hash | `0x004B11A0` |
| Signature | `int QFile_DeviceIndex(const char* path)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Scans the retail QFile device table and returns its 1-based matching device index, or zero. Ghidra/r2 CFG agreement: 6 basic blocks and 7 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `6` basic blocks, `7` edges, end `0x004B11F0`.
r2 CFG: `6` basic blocks, `7` edges, end `0x004B11F0`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
