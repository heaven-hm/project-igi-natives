# Mem_DeallocAll

| Field | Value |
|---|---|
| Address/hash | `0x004B0BE0` |
| Signature | `void Mem_DeallocAll(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Deallocate allocated memory. Frees EVERY tracked heap block (walks allocation list via 0x4B0D10), then warns "%d block(s) of memory have not been deallocated." Takes no args - NOT a single-pointer free.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
