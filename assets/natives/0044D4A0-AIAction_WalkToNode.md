# AIAction_WalkToNode

| Field | Value |
|---|---|
| Address/hash | `0x0044D4A0` |
| Signature | `void AIAction_WalkToNode(int nodeId, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Walks the AI to a nav node. Params: nodeId = graph/node id from the level nav data, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1). Use for calm movement in AI scripts.

## How it was found

Retail evidence: AIAction_WalkToNode.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
