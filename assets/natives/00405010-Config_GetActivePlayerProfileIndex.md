# Config_GetActivePlayerProfileIndex

Address: 0x00405010
Signature: int Config_GetActivePlayerProfileIndex()
Data types: ProfileRecord

## Recovered behavior

RETURNS the index of the currently-active player profile (0-based). Takes no arguments. Use whenever you need which profile is selected, e.g. before Config_DeletePlayerProfile.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
