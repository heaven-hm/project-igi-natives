# QScript_ParseAndAssemble

| Field | Value |
|---|---|
| Address/hash | `0x004BBCB0` |
| Signature | `int QScript_ParseAndAssemble(char* srcText, int options)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

PARSE+CODEGEN driver: logs "Parsing script and generating assembly code.", runs parser state globals (0xA442D0..), writes output ("Failed to open file '%s' for writing."). Params: srcText = script source, options = parser option word. Part of the QscCompile pipeline feeding QScript_Assemble.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
