# Mission_Open

| Field | Value |
|---|---|
| Address/hash | `0x00484E60` |
| Signature | `void Mission_Open(char **ptr_file)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Name from igi.exe error string inside function: "Mission_Open(): Couldn't load script: %s". Opens a mission definition script and builds its task tree.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
