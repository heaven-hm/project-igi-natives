# GO_GfxGamma

Address: 0x00404080
Signature: int GO_GfxGamma(float gamma)
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Sets gamma for the current profile. Param: gamma = float, retail default 1.0 (range ~0.5-3.0 clamped elsewhere). Use in config scripts. Returns 1.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
