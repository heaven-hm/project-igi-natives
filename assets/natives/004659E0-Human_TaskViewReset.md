# Human_TaskViewReset

| Field | Value |
|---|---|
| Address/hash | `0x004659E0` |
| Signature | `void Human_TaskViewReset(void* human)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Resets the human's VIEW TANGENT fields to retail defaults: computes tan() of the half-FOV globals 0x5335E8/0x5339C0 (the same globals ENHANCER::FOV_SET writes) and stores them into human+0x1E4 and human+0x1E8, clearing human+0x1EC. Param: human = Human/soldier struct ptr. This is THE retail restore path - call after custom FOV/binocular zoom to return to normal view.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
