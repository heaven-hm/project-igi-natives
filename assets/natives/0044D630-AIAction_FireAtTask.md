# AIAction_FireAtTask

Address: 0x0044D630
Signature: void AIAction_FireAtTask(int taskId, int p1, int p2, int p3, int p4)
Data types: AIContext

## Recovered behavior

Makes the AI fire AT a task/object entity. Params: taskId = target task/entity id, remaining 4 args = firing behaviour values (same layout family as FireAtNode). Use in combat handlers when target is an entity.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
