# Config_GraphicOptionsSetGamma

Address: 0x004048B0
Signature: void Config_GraphicOptionsSetGamma(float gamma)
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Sets and immediately applies gamma to the active profile (also feeds the live lighting math through the profile record +0x220). Param: gamma = float (retail default 1.0). Use in video-options screen script or your own gamma slider.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
