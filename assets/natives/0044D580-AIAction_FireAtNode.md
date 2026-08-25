# AIAction_FireAtNode

| Field | Value |
|---|---|
| Address/hash | `0x0044D580` |
| Signature | `void AIAction_FireAtNode(int nodeId, int p1, int p2, int p3, int p4)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Makes the AI fire AT a nav-node position. Params: nodeId = target node id, remaining 4 args = firing stance/behaviour values observed in retail AI scripts (map before inventing values). Use in combat handlers when target is a position.

## How it was found

Retail evidence: AIAction_FireAtNode.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
