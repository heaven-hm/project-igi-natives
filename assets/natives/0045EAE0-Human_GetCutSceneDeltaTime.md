# Human_GetCutSceneDeltaTime

Address: 0x0045EAE0
Signature: float (probable) Human_GetCutSceneDeltaTime(unknown param1)
Data types: None

## Recovered behavior

Registered at 0x45EA44 via registrar 0x4B8890 (push 0x45EAE0 + 'Human_GetCutSceneDeltaTime'). Getter: calls fcn.004F1030 then fld dword [eax+0x1B0] — returns float field +0x1B0 of the entity/time object. Semantics match name.  Verified: r2 forced-analysis confirmed exact start (size 76); P3 byte-level name<->address binding at registrar callsite 0x45EA44 via 0x4B8890; P6 SHA-256(first 32 code bytes)=de84a925c808fb88a1e592188af8c387bd82ca68b7338238665b3945930c0b22; re-agent reverser/checker loop ran on this native (C decompilation pending ARM64 native port).

## Evidence classification

retail-string

The native name is bound to this address by its registration string in the retail `igi.exe`. Unknown signature fields remain unknown.
