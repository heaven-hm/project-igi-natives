# Mem_Alloc

| Field | Value |
|---|---|
| Address/hash | `0x004B0C60` |
| Signature | `void* Mem_Alloc(int numBytes,int tag)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Engine heap allocator. Params: numBytes = bytes to allocate, tag = allocation bucket shown in the 'Total allocated by user' accounting. RETURNS pointer or 0 on failure (error text: 'Mem_Alloc() failed to allocate %d bytes'). Pair with MemoryDealloc/MemDealloc free path.

## How it was found

Retail evidence: Mem_Alloc() failed to allocate %d bytes.  Total allocated by user: %d.  Total by Mem_Alloc():%d..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
