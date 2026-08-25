# Config_IsContentControlPasswordEnabled

| Field | Value |
|---|---|
| Address/hash | `0x00403D90` |
| Signature | `int Config_IsContentControlPasswordEnabled()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS 1 if a content-control password is SET (parental lock active), else 0. Takes no args. Use to decide whether to ask for the password.

## How it was found

Retail evidence: Config_IsContentControlPasswordEnabled.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
