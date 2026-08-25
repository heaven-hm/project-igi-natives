# App_ContextSetTerrainLightmapsUsed

| Field | Value |
|---|---|
| Address/hash | `0x0048F260` |
| Signature | `void App_ContextSetTerrainLightmapsUsed(int8_t used)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Enables/disables TERRAIN lightmaps globally (global 0x5C8BE8). Param: used = 1 lit terrain, 0 unlit. Pair with AppContext_SetLightmapsUsed for full lighting control.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
