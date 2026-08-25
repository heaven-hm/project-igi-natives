# MovieSubtitle_RegisterText

| Field | Value |
|---|---|
| Address/hash | `0x00415260` |
| Signature | `void MovieSubtitle_RegisterText(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers one subtitle text entry (string + timing) shown over movies/briefings (argc unknown - parser context). Call after the font registration it should use.

## How it was found

Retail evidence: MovieSubtitle_RegisterText.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
