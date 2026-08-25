# QScript_Assemble

| Field | Value |
|---|---|
| Address/hash | `0x004BB270` |
| Signature | `int QScript_Assemble(char* srcText, int srcLen2)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

ASSEMBLER stage of the script pipeline: strips comments via regex "{.*:(.*//)*}.*", initialises the parser ("Initialising parser."), generates assembly code and WRITES IT TO "LOCAL:qvmbin.tmp" (also referenced as /0qvmbin.tmp). Params: srcText = script source buffer, srcLen2 = secondary length/context arg. Returns assembly result.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
