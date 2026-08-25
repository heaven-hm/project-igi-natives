# Display_GetActiveMode

| Field | Value |
|---|---|
| Address/hash | `0x00491CF0` |
| Signature | `void* Display_GetActiveMode()` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS pointer to the ACTIVE display-mode struct (global 0xC28B40): width/height/depth fields live at +0x4/+0x8/+0x10 per Display_SetMode comparisons. Takes no args. Read current resolution from here.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
