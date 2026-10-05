# SetActiveMaterial

Address: 0x00407DE0
Signature: unknown SetActiveMaterial(unknown param1, unknown param2)
Data types: None

## Recovered behavior

Registered at 0x407DA6 via registrar 0x4B8890 (push 0x407DE0 + 'SetActiveMaterial'), argc bounds push pair (0, -1) observed. Sets active material: reads param, calls fcn.004017C0-family init and stores through globals near 0x538518-0x53851A region.  Verified: r2 forced-analysis confirmed exact start (size 80); P3 byte-level name<->address binding at registrar callsite 0x407DA6 via 0x4B8890; P6 SHA-256(first 32 code bytes)=3864a4bd701c54dbda08164ffcb568244d07b4261f187408ffaf2e6694b65e70; re-agent reverser/checker loop ran on this native (C decompilation pending ARM64 native port).

## Evidence classification

retail-string

The native name is bound to this address by its registration string in the retail `igi.exe`. Unknown signature fields remain unknown.
