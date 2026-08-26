# Is_ResourceLoaded

Address: 0x004B5B90
Signature: int Is_ResourceLoaded(char* resourcePath, char** outEntry)
Data types: scalar/opaque ABI only

## Recovered behavior

Checks whether a resource path is ALREADY LOADED in the resource manager (walks path handling backslash 0x5C segments against the registry). Params: resourcePath = virtual path, outEntry = receives matching entry. RETURNS non-zero + fills outEntry when found. Resource_Load calls this first - use it to avoid double-loading.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
