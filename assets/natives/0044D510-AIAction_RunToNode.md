# AIAction_RunToNode

| Field | Value |
|---|---|
| Address/hash | `0x0044D510` |
| Signature | `void AIAction_RunToNode(int nodeId, int flags)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Runs the AI to a nav node (fast). Same params as AIAction_WalkToNode: nodeId = node id, flags = AIACTIONFLAG (NONE=0/PUSHABLE=1).

## How it was found

Retail evidence: AIAction_RunToNode.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
