# QFile_ReadWrite

Address: 0x004B1510
Signature: void* QFile_ReadWrite(char* vpath, char* mode)
Data types: QFileAliasRecord, QFileDeviceRecord

## Recovered behavior

VIRTUAL-filesystem open: parses the device prefix from vpath (errors "Illegal device name in path: \" and "Device not present: %s"), routes to the device handler chain (0x4B1620/0x4B1020/0x4B11A0) and returns a Q-file handle. Params: vpath = virtual path WITH device prefix (e.g. "LOCAL:...", "MENU:"), mode = access mode. RETURNS handle or 0. This is the correct opener for LOCAL:/MISSION: paths.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
