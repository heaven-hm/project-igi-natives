# QFile_ReadWrite

| Field | Value |
|---|---|
| Address/hash | `0x004B1510` |
| Signature | `void* QFile_ReadWrite(char* vpath, char* mode)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

VIRTUAL-filesystem open: parses the device prefix from vpath (errors "Illegal device name in path: \" and "Device not present: %s"), routes to the device handler chain (0x4B1620/0x4B1020/0x4B11A0) and returns a Q-file handle. Params: vpath = virtual path WITH device prefix (e.g. "LOCAL:...", "MENU:"), mode = access mode. RETURNS handle or 0. This is the correct opener for LOCAL:/MISSION: paths.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
