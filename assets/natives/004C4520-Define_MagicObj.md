# Define_MagicObj

| Field | Value |
|---|---|
| Address/hash | `0x004C4520` |
| Signature | `void Define_MagicObj(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a MAGIC OBJECT type during magicobj definition parsing (pairs with the MAGICOBJ\ folder data). Parser-context only.

## How it was found

Retail evidence: DefineMagicObj.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
