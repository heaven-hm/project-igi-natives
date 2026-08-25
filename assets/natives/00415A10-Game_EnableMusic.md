# Game_EnableMusic

| Field | Value |
|---|---|
| Address/hash | `0x00415A10` |
| Signature | `void Game_EnableMusic(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Starts/resumes the music engine. Takes no args.

## How it was found

Retail evidence: Game_EnableMusic.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
