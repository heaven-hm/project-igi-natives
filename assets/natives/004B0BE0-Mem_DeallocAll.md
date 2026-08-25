# Mem_DeallocAll

Address: 0x004B0BE0
Signature: void Mem_DeallocAll(void)
Data types: scalar/opaque ABI only

## Recovered behavior

Deallocate allocated memory. Frees EVERY tracked heap block (walks allocation list via 0x4B0D10), then warns "%d block(s) of memory have not been deallocated." Takes no args - NOT a single-pointer free.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
