# Config_GraphicOptionsSetResolution

| Field | Value |
|---|---|
| Address/hash | `0x00404510` |
| Signature | `void Config_GraphicOptionsSetResolution(int modeIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Applies a screen resolution to the active profile and re-initialises the display. Param: modeIndex = index from Config_FillScreenResolutionListBox entries. Use in the video-options screen script.

## How it was found

Retail evidence: Config_GraphicOptionsSetResolution.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
