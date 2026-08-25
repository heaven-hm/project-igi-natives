# Config_FillPlayerProfileListBox

| Field | Value |
|---|---|
| Address/hash | `0x00404FA0` |
| Signature | `void Config_FillPlayerProfileListBox()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Fills the current menu list box with all player profiles (name per row, row index = profile index). Use inside the profile-selection list box collect-items script.

## How it was found

Retail evidence: Config_FillPlayerProfileListBox.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
