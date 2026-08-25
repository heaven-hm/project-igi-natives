# Define_Mission

| Field | Value |
|---|---|
| Address/hash | `0x00484F60` |
| Signature | `void Define_Mission(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Defines a MISSION entry during mission-list parsing (480-byte parser). Called by the engine's mission definition grammar; do NOT call from gameplay scripts.

## How it was found

Retail evidence: DefineMission.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
