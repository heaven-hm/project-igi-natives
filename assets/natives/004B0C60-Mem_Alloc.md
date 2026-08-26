# Mem_Alloc

Address: 0x004B0C60
Signature: void* Mem_Alloc(int numBytes,int tag)
Data types: scalar/opaque ABI only

## Recovered behavior

Engine heap allocator. Params: numBytes = bytes to allocate, tag = allocation bucket shown in the 'Total allocated by user' accounting. RETURNS pointer or 0 on failure (error text: 'Mem_Alloc() failed to allocate %d bytes'). Pair with MemoryDealloc/MemDealloc free path.

## Evidence classification

retail-string-context

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
