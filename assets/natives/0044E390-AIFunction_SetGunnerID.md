# AIFunction_SetGunnerID

| Field | Value |
|---|---|
| Address/hash | `0x0044E390` |
| Signature | `void AIFunction_SetGunnerID(int gunnerId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Assigns which mounted-gunner slot this AI mans. Param: gunnerId = gunner position id. Use in AI init for turret/mounted-gun NPCs.

## How it was found

Retail evidence: AIFunction_SetGunnerID.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
