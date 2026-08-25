# Flow_SetState

| Field | Value |
|---|---|
| Address/hash | `0x004028A0` |
| Signature | `void Flow_SetState(int stateId)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Stores a pending flow state in game-context field +0x2C. The main loop consumes it, copies it to +0x28, clears the pending field, and dispatches state IDs 1 through 8. Flow_RequestEvent reaches this setter after converting its event ID.

## How it was found

Retail evidence: Ghidra: writes its one parameter to DAT_00567C8C+0x2C.; r2: fcn.004028A0(int32_t arg_4h) stores [global+0x2C] = arg_4h.; Main-loop r2 disassembly consumes +0x2C, copies it to +0x28, clears +0x2C, and dispatches state IDs; Flow_RequestEvent calls this helper after converting its event ID..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
