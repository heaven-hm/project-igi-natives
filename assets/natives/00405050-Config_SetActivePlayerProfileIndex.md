# Config_SetActivePlayerProfileIndex

| Field | Value |
|---|---|
| Address/hash | `0x00405050` |
| Signature | `void Config_SetActivePlayerProfileIndex(int index)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Makes 'index' the active player profile. Param: index = 0-based profile index (must exist; see Config_GetNumberOfPlayerProfiles).

## How it was found

Retail evidence: Config_SetActivePlayerProfileIndex.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
