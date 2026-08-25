# Config_Compile

Address: 0x004F0CF0
Signature: int Config_Compile(int context, char* cfgName, int flags)
Data types: scalar/opaque ABI only

## Recovered behavior

Compiles a CONFIG script: validates context, then loads its compiled QVM via QvmLoad (0x4B80B0); references the Task_New name during task-table wiring. Params: context = config context id, cfgName = config path/name, flags = compile flags. Use when (re)loading game configuration programmatically.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
