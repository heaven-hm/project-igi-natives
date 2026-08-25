# Game_EnablePlayerInput

| Field | Value |
|---|---|
| Address/hash | `0x00415830` |
| Signature | `void Game_EnablePlayerInput(void)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Re-enables player input after Game_DisablePlayerInput. Takes no args.

## How it was found

Retail evidence: Game_EnablePlayerInput.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
