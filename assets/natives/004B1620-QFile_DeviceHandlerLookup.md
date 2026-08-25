# QFile_DeviceHandlerLookup

Address: 0x004B1620
Signature: uint32_t QFile_DeviceHandlerLookup(const char* deviceName)
Data types: QFileAliasRecord, QFileDeviceRecord

## Recovered behavior

Matches a device name against the retail handler-name table and returns the corresponding handler value. Ghidra/r2 CFG agreement: 13 basic blocks and 18 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
