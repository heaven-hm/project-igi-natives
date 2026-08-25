# Config_IsGermany

| Field | Value |
|---|---|
| Address/hash | `0x00403B30` |
| Signature | `int Config_IsGermany()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS 1 when running the GERMAN retail build (censored variant), 0 otherwise. Takes no args. German builds gate blood/gore - check before forcing such effects.

## How it was found

Retail evidence: Config_IsGermany.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
