# GO_InRemap

| Field | Value |
|---|---|
| Address/hash | `0x004037C0` |
| Signature | `int GO_InRemap(int key1, int key2, int action)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Adds one input binding (key remap) to the current profile. Params: key1 = primary key code, key2 = secondary key code, action = in-game action id being bound. Use in input/config scripts, repeat once per binding. Returns 1.

## How it was found

Retail evidence: GOInRemap.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
