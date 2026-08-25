# Flow_RequestEvent

Address: 0x00402780
Signature: void Flow_RequestEvent(int eventId)
Data types: scalar/opaque ABI only

## Recovered behavior

Requests a flow-task event by id (drives the level's flow state machine). Param: eventId = flow event number used in the level flow script. Use from mission flow scripts to trigger scripted transitions. FLOW_EVENT enum: None=0, QUIT=1, INTRO=2, MAINMENU=3, GAME=4, RESTART_GAME=5 (events 6-8 exist internally but have no registered constants).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
