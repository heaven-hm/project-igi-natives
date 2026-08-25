# Config_DeletePlayerProfile

| Field | Value |
|---|---|
| Address/hash | `0x00405400` |
| Signature | `int Config_DeletePlayerProfile(int index)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Deletes a player profile. Param: index = 0-based profile index to delete. RETURNS 1 on success, 0 on failure. Do not delete the last remaining profile; refresh your list box afterwards.

## How it was found

Retail evidence: Config_DeletePlayerProfile.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
