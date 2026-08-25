# Config_GetActivePlayerProfileRecord

| Field | Value |
|---|---|
| Address/hash | `0x00406220` |
| Signature | `void* Config_GetActivePlayerProfileRecord()` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS pointer to the ACTIVE PROFILE's graphic-options/config record: computed as 0xBC2388 + 0xD14*[0xBC2384] (verified against retail defaults-reset fcn.00403B70 which walks the same layout). Takes no args. Despite the historical name this returns a record pointer, not a bool. Old analyst name IsPlayerProfileActive was wrong - it returns the record pointer, not a bool.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
