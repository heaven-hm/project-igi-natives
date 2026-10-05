# DefineWeaponType

Address: 0x00413F90
Signature: unknown DefineWeaponType(unknown param1, unknown param2)
Data types: None

## Recovered behavior

Registered at 0x413E52 via registrar 0x4B8890 (push 0x413F90 + 'DefineWeaponType'), argc bounds (0, -1). Large (2165-byte) config parser; name corroborated by semantics consistent with cataloged WeaponType_Open / *ParseConfigFile family.  Verified: r2 forced-analysis confirmed exact start (size 2165); P3 byte-level name<->address binding at registrar callsite 0x413E52 via 0x4B8890; P6 SHA-256(first 32 code bytes)=55f13a150373436d3a68f7b8756852c048244c7749999f8ba7bfdccdb9cef313; re-agent reverser/checker loop ran on this native (C decompilation pending ARM64 native port).

## Evidence classification

retail-string

The native name is bound to this address by its registration string in the retail `igi.exe`. Unknown signature fields remain unknown.
