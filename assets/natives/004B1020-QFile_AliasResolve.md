# QFile_AliasResolve

Address: 0x004B1020
Signature: int QFile_AliasResolve(char* outputPath, const char* inputPath, int maxDepth)
Data types: QFileAliasRecord, QFileDeviceRecord

## Recovered behavior

Resolves semicolon-separated QFile path aliases, copies the resolved path, and returns the alias depth. Ghidra/r2 CFG agreement: 17 basic blocks and 25 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
