# Config_FillRenderDeviceListBox

| Field | Value |
|---|---|
| Address/hash | `0x004046A0` |
| Signature | `void Config_FillRenderDeviceListBox()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Fills the currently-active menu list box with installed render devices (Direct3D device GUIDs/names). Use inside a list box collect-items script on the video-options screen.

## How it was found

Retail evidence: Config_FillRenderDeviceListBox.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
