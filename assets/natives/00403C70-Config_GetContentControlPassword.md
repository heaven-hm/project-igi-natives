# Config_GetContentControlPassword

| Field | Value |
|---|---|
| Address/hash | `0x00403C70` |
| Signature | `char* Config_GetContentControlPassword()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the stored content-control (parental lock) password string. Takes no args. Compare against user input or pass to Config_VerifyContentControlPassword.

## How it was found

Retail evidence: Config_GetContentControlPassword.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
