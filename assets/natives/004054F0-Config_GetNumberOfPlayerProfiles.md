# Config_GetNumberOfPlayerProfiles

| Field | Value |
|---|---|
| Address/hash | `0x004054F0` |
| Signature | `int Config_GetNumberOfPlayerProfiles()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS how many player profiles exist. Use to bounds-check indexes and to size profile lists.

## How it was found

Retail evidence: Config_GetNumberOfPlayerProfiles.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
