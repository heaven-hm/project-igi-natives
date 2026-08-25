# Qvm_Execute

| Field | Value |
|---|---|
| Address/hash | `0x004B85B0` |
| Signature | `int Qvm_Execute(void* qvm)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

EXECUTES a loaded QVM script program (the interpreter entry - despite the old analyst label QvmRead). On runtime failure reports "Error in QVM program: %s" / "An error occured in script file: %s". Param: qvm = pointer from Qvm_Load. RETURNS script result value.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
