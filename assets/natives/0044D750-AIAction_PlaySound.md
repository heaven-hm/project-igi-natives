# AIAction_PlaySound

| Field | Value |
|---|---|
| Address/hash | `0x0044D750` |
| Signature | `void AIAction_PlaySound(int soundId, int param2, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Plays a sound from the AI (voice barks etc.). Params: soundId = sound/event id, param2 = observed 0 in retail, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).

## How it was found

Retail evidence: AIAction_PlaySound.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
