# AIFunction_GetCurrentEventType

Address: 0x0044DFA0
Signature: int AIFunction_GetCurrentEventType()
Data types: AIContext

## Recovered behavior

RETURNS the AIEVENT_* value currently being handled - the backbone of every AI script's if/else chain. Enum: CREATE=0, DELETE=1, DEAD=2, ANIMATION=3, IDLE=4, ALERT=5, ALERT_RESPONSE=6, COMBAT=7, ALARMON=8, ALARMOFF=9, WALK=10, GROUNDIMPACT=11, DOOR=12, FENCE=13, LADDER=14, TAKINGDAMAGE=15, GUNSHOT=16, GRENADETHROWN=17, GRENADELAND=18, FLASHBANG=19, GUNSHOTMISS=20, EXPLOSION=21, ENEMYDETECTION=22, FRIENDLYDETECTION=23. Takes no args.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
