# Define_HumanPlayerWeaponCycle

| Field | Value |
|---|---|
| Address/hash | `0x004101C0` |
| Signature | `void Define_HumanPlayerWeaponCycle(...)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Collects the weapon-cycle list for the human player: loops the parsed entries and stores them into the cycle table at 0x56DF1C with count at 0x56DF18 (verified in igi.exe). Call within a humanplayer weapon-cycle definition block; argc unknown (parser context).

## How it was found

Retail evidence: DefineHumanPlayerWeaponCycle.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
