# Weapon_ConfigRead

| Field | Value |
|---|---|
| Address/hash | `0x004071E0` |
| Signature | `int Weapon_ConfigRead(int context, char* cfgText)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Reads weapon configuration entries from parsed config text: repeated repne-scasb string scans + block copies populate weapon structures. Params: context = weapon system context, cfgText = config text buffer. Use within weapon definition parsing flows.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
