# File_Open

| Field | Value |
|---|---|
| Address/hash | `0x004A5350` |
| Signature | `void* File_Open(char* path, char* mode)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Low-level CRT-style file open used across the engine. Params: path = file path, mode = fopen-style mode string ("r","w","rb"...). RETURNS FILE* handle or 0. Prefer QFile_ReadWrite/QResource APIs unless you need raw stdio.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
