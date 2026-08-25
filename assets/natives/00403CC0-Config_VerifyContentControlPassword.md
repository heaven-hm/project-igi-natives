# Config_VerifyContentControlPassword

| Field | Value |
|---|---|
| Address/hash | `0x00403CC0` |
| Signature | `int Config_VerifyContentControlPassword(char* password)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Checks a password attempt against the stored content-control password. Param: password = string to test. RETURNS non-zero when correct, 0 when wrong. Use before unlocking violent-content options.

## How it was found

Retail evidence: Config_VerifyContentControlPassword.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
