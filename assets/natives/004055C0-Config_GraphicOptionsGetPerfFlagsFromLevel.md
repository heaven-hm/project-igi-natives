# Config_GraphicOptionsGetPerfFlagsFromLevel

Address: 0x004055C0
Signature: int Config_GraphicOptionsGetPerfFlagsFromLevel(int level)
Data types: GraphicOptions, ProfileRecord

## Recovered behavior

Converts a detail LEVEL number into its performance-flag bitmask. Param: level = 0..Config_GraphicOptionsNumPerfLevels()-1. Use when the user picks a named detail preset.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
