# GO_GameDiff

| Field | Value |
|---|---|
| Address/hash | `0x00403AC0` |
| Signature | `int GO_GameDiff(int difficulty)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets game difficulty for the current profile. Param: difficulty = 0 easy, 1 medium, 2 hard (retail order). Use in config scripts. Returns 1.

## How it was found

Retail evidence: GOGameDiff.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
