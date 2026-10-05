# CreateTerrainMaterial

Address: 0x004C6670
Signature: unknown CreateTerrainMaterial(unknown param1, unknown param2)
Data types: None

## Recovered behavior

Registered at 0x4C6580 via registrar 0x4B8890 (push 0x4C6670 + 'CreateTerrainMaterial'). Pushes interleaved with inline strlen/rep-movs string setup; site also pushes 0x4C6670 at 0x4C655C.  Verified: r2 forced-analysis confirmed exact start (size 230); P3 byte-level name<->address binding at registrar callsite 0x4C6580 via 0x4B8890; P6 SHA-256(first 32 code bytes)=bd85673e252f99c903e7b8b25e1da01901ce82a84299e100833a25fef1c175b1; re-agent reverser/checker loop ran on this native (C decompilation pending ARM64 native port).

## Evidence classification

retail-string

The native name is bound to this address by its registration string in the retail `igi.exe`. Unknown signature fields remain unknown.
