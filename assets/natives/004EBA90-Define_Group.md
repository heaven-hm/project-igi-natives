# Define_Group

| Field | Value |
|---|---|
| Address/hash | `0x004EBA90` |
| Signature | `void Define_Group(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a GROUP entry (sound-group/entity grouping) during definition parsing. Parser-context only.

## How it was found

Retail evidence: DefineGroup.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
