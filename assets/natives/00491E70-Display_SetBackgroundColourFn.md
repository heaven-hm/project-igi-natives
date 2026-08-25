# Display_SetBackgroundColourFn

| Field | Value |
|---|---|
| Address/hash | `0x00491E70` |
| Signature | `void Display_SetBackgroundColourFn(int8_t r, int8_t g, int8_t b)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the 3D-view BACKGROUND COLOUR (clear colour) - masks each arg to a byte into globals 0xBCADF0/R,G,B. Params: r,g,b = 0-255 colour channels. Use for custom sky/clear colour effects.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
