# Display_GetActiveMode

Address: 0x00491CF0
Signature: void* Display_GetActiveMode()
Data types: DisplayMode

## Recovered behavior

RETURNS pointer to the ACTIVE display-mode struct (global 0xC28B40): width/height/depth fields live at +0x4/+0x8/+0x10 per Display_SetMode comparisons. Takes no args. Read current resolution from here.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
