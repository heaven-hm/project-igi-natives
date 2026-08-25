# GO_ContentControlPW

| Field | Value |
|---|---|
| Address/hash | `0x00403C10` |
| Signature | `int GO_ContentControlPW(char* password)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Config-writer form (argc=1): sets the content-control password while a config file is parsed. Param: password = string. Returns 1.

## How it was found

Retail evidence: Config_SetContentControlPassword.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
