# Config_GetActiveGraphicOptions

| Field | Value |
|---|---|
| Address/hash | `0x00404590` |
| Signature | `void* Config_GetActiveGraphicOptions()` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns a pointer to the ACTIVE PROFILE's graphic-options record inside the global config array. The record base is 0xBC2394 + 0xD14 * activeProfileIndex (verified in igi.exe). Useful for reading/writing raw graphic fields directly (gamma sits at record+0x220).

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
