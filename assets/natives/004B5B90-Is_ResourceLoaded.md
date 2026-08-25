# Is_ResourceLoaded

| Field | Value |
|---|---|
| Address/hash | `0x004B5B90` |
| Signature | `int Is_ResourceLoaded(char* resourcePath, char** outEntry)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Checks whether a resource path is ALREADY LOADED in the resource manager (walks path handling backslash 0x5C segments against the registry). Params: resourcePath = virtual path, outEntry = receives matching entry. RETURNS non-zero + fills outEntry when found. Resource_Load calls this first - use it to avoid double-loading.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
