# Qsprite_Register4Az

Address: 0x004B53B0
Signature: void Qsprite_Register4Az(/*14 args*/)
Data types: scalar/opaque ABI only

## Recovered behavior

Registers a QUAD-SPRITE with full transform data: 14 args, float parameters scaled by constant 0x534AB0, writes sprite tables 0xA84A50/0xA84A58 (verified). Low-level renderer API - map arg layout from callers before use.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
