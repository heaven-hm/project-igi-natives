# Config_GraphicOptionsSetTransparency

| Field | Value |
|---|---|
| Address/hash | `0x00404960` |
| Signature | `void Config_GraphicOptionsSetTransparency(int onOff)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Toggles transparency for the active profile. Param: onOff = 1 enable, 0 disable. Video-options screen.

## How it was found

Retail evidence: Config_GraphicOptionsSetTransparency.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
