# Transcontext_SetActiveTransContext

| Field | Value |
|---|---|
| Address/hash | `0x00497E70` |
| Signature | `void Transcontext_SetActiveTransContext(void* ctx)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Installs a TRANSFORM CONTEXT as active: copies 0x2A dwords from ctx into global 0xBCAAE0 and bumps state counters at 0x6E5BB0/B4. Param: ctx = transform-context struct (IGIPatch uses this around custom rendering). Use when injecting your own render passes.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
