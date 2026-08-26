# Config_DeletePlayerProfile

Address: 0x00405400
Signature: int Config_DeletePlayerProfile(int index)
Data types: ProfileRecord

## Recovered behavior

Deletes a player profile. Param: index = 0-based profile index to delete. RETURNS 1 on success, 0 on failure. Do not delete the last remaining profile; refresh your list box afterwards.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
