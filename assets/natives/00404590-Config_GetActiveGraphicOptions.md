# Config_GetActiveGraphicOptions

Address: 0x00404590
Signature: GraphicOptions* Config_GetActiveGraphicOptions()
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Returns a pointer to the ACTIVE PROFILE's graphic-options record inside the global config array. The record base is 0xBC2394 + 0xD14 * activeProfileIndex (verified in igi.exe). Useful for reading/writing raw graphic fields directly (gamma sits at record+0x220).

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
