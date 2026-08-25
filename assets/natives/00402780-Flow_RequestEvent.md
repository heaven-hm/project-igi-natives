# Flow_RequestEvent

| Field | Value |
|---|---|
| Address/hash | `0x00402780` |
| Signature | `void Flow_RequestEvent(int eventId)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Requests a flow-task event by id (drives the level's flow state machine). Param: eventId = flow event number used in the level flow script. Use from mission flow scripts to trigger scripted transitions. FLOW_EVENT enum: None=0, QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5 (events 6-8 exist internally but have no registered constants).

## How it was found

Retail evidence: Flow_RequestEvent.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
