# LoadingScreen_Show

| Field | Value |
|---|---|
| Address/hash | `0x0048A440` |
| Signature | `void LoadingScreen_Show(int picVariant)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Shows the LOADING SCREEN: allocates a 0x1C-byte screen object, queries the active display mode (0x491CF0), and loads "LOCAL:menusystem/loadingscreen.res" with picture "LOCAL:menusystem/loading.pic" - or "loading_us.pic" for USA country builds. Param: picVariant = loading-screen type selector. Call before long loads so the player sees feedback.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
