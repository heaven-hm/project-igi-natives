# GO_ActiveMission

| Field | Value |
|---|---|
| Address/hash | `0x00403750` |
| Signature | `int GO_ActiveMission(int mission)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the active (last-played) mission number for the current player profile. Param: mission = mission index 1..14. Use in profile/config scripts after GO_Player. Returns 1.

## How it was found

Retail evidence: GOActiveMission.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
