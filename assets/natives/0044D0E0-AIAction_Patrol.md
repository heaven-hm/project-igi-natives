# AIAction_Patrol

| Field | Value |
|---|---|
| Address/hash | `0x0044D0E0` |
| Signature | `void AIAction_Patrol(int target, int mustBeZero, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Orders the AI into PATROL behaviour. Params: target = patrol goal/node reference from your script, mustBeZero = retail template always passes 0, flags = AIACTIONFLAG enum: NONE=0, PUSHABLE=1 (action may be replaced by higher priority). Use inside AI event handlers e.g. AIEVENT_IDLE branch. Template in igi.exe: AIAction_Patrol(xxxx, 0, AIACTIONFLAG_NONE).

## How it was found

Retail evidence: AIAction_Patrol.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
