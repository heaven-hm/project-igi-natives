# Resource_Unload

| Field | Value |
|---|---|
| Address/hash | `0x004B6380` |
| Signature | `void Resource_Unload(int *resource_file)` |
| Catalog source | `retail-string-context` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Name from igi.exe error string inside function: "Resource_Unload() : Resource '%s' is not loaded." Unloads a resource by name/path.

## How it was found

Retail evidence: Resource_Unload() : Resource '%s' is not loaded..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
