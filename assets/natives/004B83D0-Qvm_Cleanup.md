# Qvm_Cleanup

| Field | Value |
|---|---|
| Address/hash | `0x004B83D0` |
| Signature | `void Qvm_Cleanup(void* qvm)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Frees a loaded QVM script object: reads qvm+0x8C and releases the program block when non-zero. Param: qvm = pointer from Qvm_Load. Pair with Qvm_Load to avoid leaks.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
