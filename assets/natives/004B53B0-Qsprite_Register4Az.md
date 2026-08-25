# Qsprite_Register4Az

| Field | Value |
|---|---|
| Address/hash | `0x004B53B0` |
| Signature | `void Qsprite_Register4Az(/*14 args*/)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers a QUAD-SPRITE with full transform data: 14 args, float parameters scaled by constant 0x534AB0, writes sprite tables 0xA84A50/0xA84A58 (verified). Low-level renderer API - map arg layout from callers before use.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
