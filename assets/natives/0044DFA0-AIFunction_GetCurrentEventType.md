# AIFunction_GetCurrentEventType

| Field | Value |
|---|---|
| Address/hash | `0x0044DFA0` |
| Signature | `int AIFunction_GetCurrentEventType()` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

RETURNS the AIEVENT_* value currently being handled - the backbone of every AI script's if/else chain. Enum: CREATE=0, DELETE=1, DEAD=2, ANIMATION=3, IDLE=4, ALERT=5, ALERT_RESPONSE=6, COMBAT=7, ALARMON=8, ALARMOFF=9, WALK=10, GROUNDIMPACT=11, DOOR=12, FENCE=13, LADDER=14, TAKINGDAMAGE=15, GUNSHOT=16, GRENADETHROWN=17, GRENADELAND=18, FLASHBANG=19, GUNSHOTMISS=20, EXPLOSION=21, ENEMYDETECTION=22, FRIENDLYDETECTION=23. Takes no args.

## How it was found

Retail evidence: AIFunction_GetCurrentEventType.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
