# AIAction_Combat

| Field | Value |
|---|---|
| Address/hash | `0x0044D160` |
| Signature | `void AIAction_Combat(int param)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Orders the AI into COMBAT behaviour vs its current enemy. Param: param = combat argument from the calling script (retail guard scripts pass their combat target/context value). Use in AIEVENT_COMBAT branches.

## How it was found

Retail evidence: AIAction_Combat.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
