# Config_GetActivePlayerProfileIndex

| Field | Value |
|---|---|
| Address/hash | `0x00405010` |
| Signature | `int Config_GetActivePlayerProfileIndex()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the index of the currently-active player profile (0-based). Takes no arguments. Use whenever you need which profile is selected, e.g. before Config_DeletePlayerProfile.

## How it was found

Retail evidence: Config_GetActivePlayerProfileIndex.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
