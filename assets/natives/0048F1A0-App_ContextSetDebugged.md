# App_ContextSetDebugged

| Field | Value |
|---|---|
| Address/hash | `0x0048F1A0` |
| Signature | `void App_ContextSetDebugged(int8_t state)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the app-level DEBUGGED flag (global 0x5C8BF8). Param: state = 1 mark debugger attached/debug mode, 0 clear. BlankName's IGIPatch calls this by name. Use to toggle engine debug paths.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
