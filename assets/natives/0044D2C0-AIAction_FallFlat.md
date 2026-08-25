# AIAction_FallFlat

| Field | Value |
|---|---|
| Address/hash | `0x0044D2C0` |
| Signature | `void AIAction_FallFlat(int param1, int param2)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Knocks the AI flat on the ground (ragdoll-ish fall, e.g. after explosion/surrender). Params: two ints observed in retail calls (pass 0,0 unless mapping specific values). Use for scripted knockdowns.

## How it was found

Retail evidence: AIAction_FallFlat.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
