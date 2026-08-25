# Warning_Show

| Field | Value |
|---|---|
| Address/hash | `0x004AF810` |
| Signature | `void Warning_Show(char* format, ...)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Shows a warning dialog - printf-style variadic like ErrorShow (retail: push str."QTasktype \"%s\"..."; push eax; call -> add esp,8). Param: format = printf-style string + substitution args.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
