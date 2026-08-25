# AIAction_FireAtTask

| Field | Value |
|---|---|
| Address/hash | `0x0044D630` |
| Signature | `void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Makes the AI fire AT a task/object entity. Params: taskId = target task/entity id, remaining 4 args = firing behaviour values (same layout family as FireAtNode). Use in combat handlers when target is an entity.

## How it was found

Retail evidence: AIAction_FireAtTask.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
