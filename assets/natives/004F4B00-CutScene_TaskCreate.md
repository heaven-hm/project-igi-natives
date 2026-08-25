# CutScene_TaskCreate

| Field | Value |
|---|---|
| Address/hash | `0x004F4B00` |
| Signature | `void* CutScene_TaskCreate(void)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

CREATES the CutScene task during level load: allocates 632-byte "CutScene" object via class factory 0x401900, attaches vtable 0x4F4EE0 + update cb 0x4F51D0, registers TASKTYPE_CUTSCENE (@0x4F4EB8). TO DELETE CUTSCENES: early-return from this function so no CutScene task is ever instantiated - flow continues without them. Verified: prologue sub esp,0x278; string refs "1721_01_1","CutScene"; corroborated by IGI-MP plugin.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
