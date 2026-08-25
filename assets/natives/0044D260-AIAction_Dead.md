# AIAction_Dead

| Field | Value |
|---|---|
| Address/hash | `0x0044D260` |
| Signature | `void AIAction_Dead(int param)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Runs the DEATH handling action for the AI (plays death, releases tasks). Param: param = death context value passed by retail scripts. Use in AIEVENT_DEAD handler.

## How it was found

Retail evidence: AIAction_Dead.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
