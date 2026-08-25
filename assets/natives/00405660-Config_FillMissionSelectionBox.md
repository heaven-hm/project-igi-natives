# Config_FillMissionSelectionBox

| Field | Value |
|---|---|
| Address/hash | `0x00405660` |
| Signature | `void Config_FillMissionSelectionBox()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Fills the current menu list box with missions selectable for the active profile (respects unlocked progress). Use inside the mission-selection list box collect-items script.

## How it was found

Retail evidence: Config_FillMissionSelectionBox.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
