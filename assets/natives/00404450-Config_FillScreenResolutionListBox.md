# Config_FillScreenResolutionListBox

| Field | Value |
|---|---|
| Address/hash | `0x00404450` |
| Signature | `void Config_FillScreenResolutionListBox(int deviceIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Fills the currently-active menu list box with the screen resolutions available for a device. Param: deviceIndex = render-device index. Use only inside a menu list box 'collect items' script so the items land in that control.

## How it was found

Retail evidence: Config_FillScreenResolutionListBox.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
