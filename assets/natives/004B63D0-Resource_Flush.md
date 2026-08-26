# Resource_Flush

Address: 0x004B63D0
Signature: void Resource_Flush(void* resEntry)
Data types: scalar/opaque ABI only

## Recovered behavior

Flushes/finalizes ONE resource entry: walks the global resource list (0x943E38), matches entry+0x34 against the argument, errors "Resource_Flush() : Couldn't locate resource at %p." when absent. Param: resEntry = resource pointer/address to flush.

## Evidence classification

retail-string-context

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
