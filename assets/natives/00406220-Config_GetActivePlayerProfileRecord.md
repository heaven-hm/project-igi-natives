# Config_GetActivePlayerProfileRecord

Address: 0x00406220
Signature: ProfileRecord* Config_GetActivePlayerProfileRecord()
Data types: ProfileRecord

## Recovered behavior

RETURNS pointer to the ACTIVE PROFILE's graphic-options/config record: computed as 0xBC2388 + 0xD14*[0xBC2384] (verified against retail defaults-reset fcn.00403B70 which walks the same layout). Takes no args. Despite the historical name this returns a record pointer, not a bool. Old analyst name IsPlayerProfileActive was wrong - it returns the record pointer, not a bool.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
