# DefineQ_Material

| Field | Value |
|---|---|
| Address/hash | `0x00407E30` |
| Signature | `void DefineQ_Material(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a Q-material (surface material) entry while a material definition block is parsed. Called BY the engine's own define-block parser - call only from material .qsc definition contexts; arg layout follows the Define block grammar (registration argc unknown).

## How it was found

Retail evidence: DefineQMaterial.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
