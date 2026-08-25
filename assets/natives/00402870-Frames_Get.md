# Frames_Get

| Field | Value |
|---|---|
| Address/hash | `0x00402870` |
| Signature | `int Frames_Get(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns the configured game frame limit from the global context field +0x3C written by Frames_Set. Menu_Manager stores this value as its frame-rate limit.

## How it was found

Retail evidence: Ghidra: returns *(undefined4 *)(DAT_00567C8C + 0x3C), the field written by Frames_Set(0x00402820).; r2: mov eax,[0x00567C8C]; mov eax,[eax+0x3C]; ret.; Ghidra callers: Menu_Manager stores the return value as its frame-rate limit; FUN_00489470 uses it as the frame divisor..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
