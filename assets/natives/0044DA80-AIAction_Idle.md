# AIAction_Idle

| Field | Value |
|---|---|
| Address/hash | `0x0044DA80` |
| Signature | `void AIAction_Idle(int param)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Puts the AI into IDLE (stands, resumes idle animation countdown). Param: idle context value (retail scripts pass their idle value). Use in AIEVENT_IDLE handler instead of Patrol for stationary guards.

## How it was found

Retail evidence: AIAction_Idle.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
