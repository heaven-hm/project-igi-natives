# GO_GfxDisp

| Field | Value |
|---|---|
| Address/hash | `0x00403950` |
| Signature | `int GO_GfxDisp(int displayMode)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets display-mode selection for the current profile. Param: displayMode = mode index from the retail display list (see Display_GetActiveMode/display table). Use in config scripts. igi.exe registers it with argc=3 at its site; the extra args go unused by the setter itself.

## How it was found

Retail evidence: GOGfxDisp.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
