# Resource_Load

| Field | Value |
|---|---|
| Address/hash | `0x004B5F00` |
| Signature | `int* Resource_Load(char* resourcePath, char** outBuffer)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Loads a resource into memory WITH CACHE CHECK: first asks IsResourceLoaded (0x4B5B90); if cached returns the existing entry, otherwise loads and registers it. Params: resourcePath = virtual resource path, outBuffer = receives the data pointer. RETURNS resource entry pointer.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
