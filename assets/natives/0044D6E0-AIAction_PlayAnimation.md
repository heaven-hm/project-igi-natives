# AIAction_PlayAnimation

| Field | Value |
|---|---|
| Address/hash | `0x0044D6E0` |
| Signature | `void AIAction_PlayAnimation(int animationId, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Plays an animation on the AI. Params: animationId = animation entry id (see AIFunction_AddAnimationEntry), flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).

## How it was found

Retail evidence: AIAction_PlayAnimation.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
