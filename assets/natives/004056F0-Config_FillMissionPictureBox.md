# Config_FillMissionPictureBox

| Field | Value |
|---|---|
| Address/hash | `0x004056F0` |
| Signature | `void Config_FillMissionPictureBox()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Fills the current picture box with the selected mission's briefing image. Use inside the mission-picture control's script right after a mission row is chosen.

## How it was found

Retail evidence: Config_FillMissionPictureBox.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
