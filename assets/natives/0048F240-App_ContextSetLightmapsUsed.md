# App_ContextSetLightmapsUsed

| Field | Value |
|---|---|
| Address/hash | `0x0048F240` |
| Signature | `void App_ContextSetLightmapsUsed(int8_t used)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Enables/disables OBJECT lightmaps globally (global 0x5C8BE4) - the verified retail lightmap setter. Param: used = 1 use object lightmaps, 0 flat-lit. Use for graphics enhancers (this is what IGIPatch's lightmap toggles call).

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
