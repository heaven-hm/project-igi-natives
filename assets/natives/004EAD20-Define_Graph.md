# Define_Graph

| Field | Value |
|---|---|
| Address/hash | `0x004EAD20` |
| Signature | `void Define_Graph(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a GRAPH (sound/graph transition graph) entry inside definition blocks - OpenIGI maps it to SoundDefinitionKind.Graph. Parser-context only.

## How it was found

Retail evidence: DefineGraph.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
