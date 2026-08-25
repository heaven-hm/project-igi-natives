# Transcontext_SetActiveTransContext

Address: 0x00497E70
Signature: void Transcontext_SetActiveTransContext(void* ctx)
Data types: TransContext

## Recovered behavior

Installs a TRANSFORM CONTEXT as active: copies 0x2A dwords from ctx into global 0xBCAAE0 and bumps state counters at 0x6E5BB0/B4. Param: ctx = transform-context struct (IGIPatch uses this around custom rendering). Use when injecting your own render passes.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
