# Resource_Load

Address: 0x004B5F00
Signature: int* Resource_Load(char* resourcePath, char** outBuffer)
Data types: scalar/opaque ABI only

## Recovered behavior

Loads a resource into memory WITH CACHE CHECK: first asks IsResourceLoaded (0x4B5B90); if cached returns the existing entry, otherwise loads and registers it. Params: resourcePath = virtual resource path, outBuffer = receives the data pointer. RETURNS resource entry pointer.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
