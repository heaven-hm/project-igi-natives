# AIFunction_SetAlarmAccess

Address: 0x0044E330
Signature: void AIFunction_SetAlarmAccess(int access)
Data types: AIContext

## Recovered behavior

Sets HOW the AI treats the alarm route. Param: access = AIALARMACCESS enum: BEFORECOMBAT=0 (run for the alarm first), AFTERCOMBAT=1 (fight first, raise alarm after). Retail template: AIFunction_SetAlarmAccess(AIALARMACCESS_BEFORECOMBAT).

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
