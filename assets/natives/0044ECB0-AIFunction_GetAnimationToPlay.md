# AIFunction_GetAnimationToPlay

| Field | Value |
|---|---|
| Address/hash | `0x0044ECB0` |
| Signature | `int AIFunction_GetAnimationToPlay()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS which animation entry the engine decided to play for the current event/action (useful to log or override reactions). Per retail table takes no script args; machine code also touches an [ebp+8] slot (internal context).

## How it was found

Retail evidence: AIFunction_GetAnimationToPlay.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
