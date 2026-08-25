# Qvm_Load

| Field | Value |
|---|---|
| Address/hash | `0x004B80B0` |
| Signature | `int* Qvm_Load(char* qvmPath)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Loads a COMPILED .qvm script binary from the virtual filesystem (appends/selects ".qvm"; big 0x130 stack frame builds the script object). Param: qvmPath = path like "LOCAL:common/ai/guard.qvm". RETURNS pointer to the loaded QVM object, 0 on failure (calls engine debug-state check 0x48F1D0 first). Use before executing/attaching scripts.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
