# Log_Add

| Field | Value |
|---|---|
| Address/hash | `0x004BBC30` |
| Signature | `void Log_Add(char* format, ...)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Appends a formatted line to the engine log (variadic printf-style, giant 0x400 format buffer at esp+0x404). Only logs when log-enabled globals 0xA43EC8/0xA43ED4 are set. Param: format = printf-style string + substitution args. Gate your spammy logs behind the enable flags.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
