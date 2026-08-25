# Config_FillMissionTextBox

| Field | Value |
|---|---|
| Address/hash | `0x00405760` |
| Signature | `void Config_FillMissionTextBox()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Fills the current text box with the selected mission's briefing text. Use inside the mission-briefing text control's script.

## How it was found

Retail evidence: Config_FillMissionTextBox.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
