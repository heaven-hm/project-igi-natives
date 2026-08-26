# Display_SetBackgroundColourFn

Address: 0x00491E70
Signature: void Display_SetBackgroundColourFn(int8_t r, int8_t g, int8_t b)
Data types: DisplayMode

## Recovered behavior

Sets the 3D-view BACKGROUND COLOUR (clear colour) - masks each arg to a byte into globals 0xBCADF0/R,G,B. Params: r,g,b = 0-255 colour channels. Use for custom sky/clear colour effects.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
