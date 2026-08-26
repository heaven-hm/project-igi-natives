# GO_GfxDisp

Address: 0x00403950
Signature: int GO_GfxDisp(int displayMode)
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Sets display-mode selection for the current profile. Param: displayMode = mode index from the retail display list (see Display_GetActiveMode/display table). Use in config scripts. igi.exe registers it with argc=3 at its site; the extra args go unused by the setter itself.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
