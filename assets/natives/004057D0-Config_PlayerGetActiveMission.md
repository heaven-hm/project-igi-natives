# Config_PlayerGetActiveMission

| Field | Value |
|---|---|
| Address/hash | `0x004057D0` |
| Signature | `int Config_PlayerGetActiveMission(int profileIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the active (reached) mission number of ANY profile. Param: profileIndex = 0-based profile index. Use on the profile/mission screens to show progress without switching profiles.

## How it was found

Retail evidence: Config_PlayerGetActiveMission.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
