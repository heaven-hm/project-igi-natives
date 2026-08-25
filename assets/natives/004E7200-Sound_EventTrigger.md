# Sound_EventTrigger

| Field | Value |
|---|---|
| Address/hash | `0x004E7200` |
| Signature | `void Sound_EventTrigger(const char* eventName, uint32_t eventId, const uint32_t* params)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Dispatches a named sound/event through active object handlers and queues the resulting event. Ghidra/r2 CFG agreement: 15 basic blocks and 24 edges; see verification/natives_discovery_2026-08-26.json.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.

Ghidra CFG: `15` basic blocks, `24` edges, end `0x004E732C`.
r2 CFG: `15` basic blocks, `24` edges, end `0x004E732C`, calling convention `cdecl`.
The entry passed the static CFG gate. This does not claim runtime verification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
