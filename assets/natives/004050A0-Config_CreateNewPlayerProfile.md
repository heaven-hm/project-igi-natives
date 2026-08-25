# Config_CreateNewPlayerProfile

| Field | Value |
|---|---|
| Address/hash | `0x004050A0` |
| Signature | `int Config_CreateNewPlayerProfile(char* name, int sourceIndex)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Creates a new player profile. Params: name = new profile name (string), sourceIndex = existing profile index to copy initial settings from. RETURNS 1 on success, 0 on failure (e.g. name taken/slots full). Use on the create-profile screen.

## How it was found

Retail evidence: Config_CreateNewPlayerProfile.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
