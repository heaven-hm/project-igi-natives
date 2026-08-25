# MovieSubtitle_RegisterFont

| Field | Value |
|---|---|
| Address/hash | `0x004151E0` |
| Signature | `void MovieSubtitle_RegisterFont(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers a font used by in-game movie subtitles (16 callsites in body; argc unknown - parser context). Call from subtitle/font definition blocks before any MovieSubtitle_RegisterText that uses it.

## How it was found

Retail evidence: MovieSubtitle_RegisterFont.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
