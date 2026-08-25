# Game_DisableMusic

| Field | Value |
|---|---|
| Address/hash | `0x00415A60` |
| Signature | `void Game_DisableMusic(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Stops the music engine. Takes no args.

## How it was found

Retail evidence: Game_DisableMusic.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
