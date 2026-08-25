# App_ContextSetDebugtextState

| Field | Value |
|---|---|
| Address/hash | `0x0048F1E0` |
| Signature | `void App_ContextSetDebugtextState(int8_t state)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Toggles on-screen DEBUG TEXT output (global 0x5C8BF4). Param: state = 1 show engine debug text, 0 hide. Handy while reverse-engineering other systems.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
