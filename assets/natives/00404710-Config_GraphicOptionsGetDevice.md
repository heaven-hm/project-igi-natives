# Config_GraphicOptionsGetDevice

| Field | Value |
|---|---|
| Address/hash | `0x00404710` |
| Signature | `int Config_GraphicOptionsGetDevice()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the active profile's render-device index (index into the device list). Use in video-options UI scripts.

## How it was found

Retail evidence: Config_GraphicOptionsGetDevice.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
