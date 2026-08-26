# GO_InRemap

Address: 0x004037C0
Signature: int GO_InRemap(int key1, int key2, int action)
Data types: scalar/opaque ABI only

## Recovered behavior

Adds one input binding (key remap) to the current profile. Params: key1 = primary key code, key2 = secondary key code, action = in-game action id being bound. Use in input/config scripts, repeat once per binding. Returns 1.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
