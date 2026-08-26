# Display_SetMode

Address: 0x00491A90
Signature: int Display_SetMode(void* modeStruct)
Data types: DisplayMode

## Recovered behavior

Switches the DISPLAY MODE at runtime: validates mode fields vs current (0xC28B44...), repositions/resizes the window (GetSystemMetrics), copies the mode into the active-mode struct. Param: modeStruct = pointer to a display-mode struct (same layout Display_GetActiveMode returns). RETURNS 0 on failure, non-zero on success.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
