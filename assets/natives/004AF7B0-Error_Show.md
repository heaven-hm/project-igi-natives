# Error_Show

| Field | Value |
|---|---|
| Address/hash | `0x004AF7B0` |
| Signature | `void Error_Show(char* format, ...)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Shows a fatal-error dialog: printf-style FORMAT STRING + variadic args (e.g. push "Level_Load(): Couldn't load script: %s"; push scriptPath; call). Param: format = printf-style string, followed by substitution args. Variadic - proven by retail call sites (add esp,8 cleanup) and vsprintf helper fcn.004A5702.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
