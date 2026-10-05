# DefineHumanPlayerGeneral

Address: 0x00410070
Signature: unknown DefineHumanPlayerGeneral(unknown param1, unknown param2)
Data types: None

## Recovered behavior

Registered at 0x41001B via registrar 0x4B8890 (push 0x410070 + 'DefineHumanPlayerGeneral'), argc bounds (0, -1). Config-style Define* parser (326 bytes), same family as cataloged Define* / *ParseConfigFile natives.  Verified: r2 forced-analysis confirmed exact start (size 326); P3 byte-level name<->address binding at registrar callsite 0x41001B via 0x4B8890; P6 SHA-256(first 32 code bytes)=cea3d514b310551a5dcdc448e743fdd14a408a521345a0e885cddac78040f965; re-agent reverser/checker loop ran on this native (C decompilation pending ARM64 native port).

## Evidence classification

retail-string

The native name is bound to this address by its registration string in the retail `igi.exe`. Unknown signature fields remain unknown.
