# Qsc_Compile

| Field | Value |
|---|---|
| Address/hash | `0x004B8410` |
| Signature | `int Qsc_Compile(char* qscPath)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Compiles a .qsc SCRIPT SOURCE into a .qvm binary: resolves the path (fcn_004B5B60), pulls the source through ResourceLoad (0x4B5F00), allocates a 0x94-byte compiler context via Mem_Alloc, emits ".qvm" output. Param: qscPath = script source path. RETURNS result object/flag.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
