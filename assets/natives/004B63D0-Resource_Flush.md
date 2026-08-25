# Resource_Flush

| Field | Value |
|---|---|
| Address/hash | `0x004B63D0` |
| Signature | `void Resource_Flush(void* resEntry)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Flushes/finalizes ONE resource entry: walks the global resource list (0x943E38), matches entry+0x34 against the argument, errors "Resource_Flush() : Couldn't locate resource at %p." when absent. Param: resEntry = resource pointer/address to flush.

## How it was found

Retail evidence: Resource_Flush() : Couldn't locate resource at %p..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
