# Config_GraphicOptionsSetDevice

| Field | Value |
|---|---|
| Address/hash | `0x004047F0` |
| Signature | `void Config_GraphicOptionsSetDevice(int deviceIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Applies a render device to the active profile. Param: deviceIndex = index from Config_FillRenderDeviceListBox. Use in video-options screen script.

## How it was found

Retail evidence: Config_GraphicOptionsSetDevice.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
