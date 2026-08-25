# AIFunction_DefaultHandler

Address: 0x0044E060
Signature: void AIFunction_DefaultHandler()
Data types: AIContext

## Recovered behavior

The default AI event handler: call this for any AIEVENT_* your script does not handle explicitly (retail template shows it as the else-branch body). Takes no args. Put inside every event if-else chain as fallback.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
