# Sound_EventTrigger

Address: 0x004E7200
Signature: void Sound_EventTrigger(const char* eventName, uint32_t eventId, const SoundEventParams* params)
Data types: SoundEventParams

## Recovered behavior

Dispatches a named sound/event through active object handlers and queues the resulting event. Ghidra/r2 CFG agreement: 15 basic blocks and 24 edges; see assets/IGI1-Native-Name-Evidence.json.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
