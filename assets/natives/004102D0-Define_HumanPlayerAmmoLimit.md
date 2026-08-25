# Define_HumanPlayerAmmoLimit

| Field | Value |
|---|---|
| Address/hash | `0x004102D0` |
| Signature | `void Define_HumanPlayerAmmoLimit(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Registers an ammo-limit entry (max carried ammo class) for the human player during a humanplayer definition block (argc unknown - parser context).

## How it was found

Retail evidence: DefineHumanPlayerAmmoLimit.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
