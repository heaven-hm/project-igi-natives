# GO_GfxDevice

| Field | Value |
|---|---|
| Address/hash | `0x00404010` |
| Signature | `int GO_GfxDevice(int deviceIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets render-device (D3D device/GUID) selection for the current profile. Param: deviceIndex = index into the render-device list filled by Config_FillRenderDeviceListBox. Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOGfxDevice.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
