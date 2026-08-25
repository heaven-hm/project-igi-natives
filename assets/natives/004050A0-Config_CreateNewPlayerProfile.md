# Config_CreateNewPlayerProfile

Address: 0x004050A0
Signature: int Config_CreateNewPlayerProfile(char* name, int sourceIndex)
Data types: ProfileRecord

## Recovered behavior

Creates a new player profile. Params: name = new profile name (string), sourceIndex = existing profile index to copy initial settings from. RETURNS 1 on success, 0 on failure (e.g. name taken/slots full). Use on the create-profile screen.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
