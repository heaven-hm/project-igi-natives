# CutScene_TaskUpdate

| Field | Value |
|---|---|
| Address/hash | `0x004F51D0` |
| Signature | `int CutScene_TaskUpdate(void* cutsceneTask)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Per-frame UPDATE of the running CutScene task. Alternative cutscene-kill point: force an immediate completion return here and any created cutscene ends on frame one. Verified: referenced as update cb inside CutScene_TaskCreate 0x4F4B00.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
