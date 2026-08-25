# Define_TriggerOnce

| Field | Value |
|---|---|
| Address/hash | `0x004E9EC0` |
| Signature | `void Define_TriggerOnce(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a fire-once TRIGGER entry inside definition blocks - OpenIGI maps it to SoundDefinitionKind.TriggerOnce. Parser-context only.

## How it was found

Retail evidence: DefineTriggerOnce.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
