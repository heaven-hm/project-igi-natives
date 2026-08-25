# QFile_DeviceIndex

Address: 0x004B11A0
Signature: int QFile_DeviceIndex(const char* path)
Data types: QFileAliasRecord, QFileDeviceRecord

## Recovered behavior

Scans the retail QFile device table and returns its 1-based matching device index, or zero. Ghidra/r2 CFG agreement: 6 basic blocks and 7 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
