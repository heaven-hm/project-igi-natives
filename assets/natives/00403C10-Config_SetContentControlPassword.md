# Config_SetContentControlPassword

Address: 0x00403C10
Signature: int Config_SetContentControlPassword()
Data types: scalar/opaque ABI only

## Recovered behavior

Menu-script setter form (argc=0): same address registered twice by igi.exe - site 0x4034C1 pushes str "Config_SetContentControlPassword" -> registrar 0x4B8890. Password comes from the script context, not an explicit arg. Returns 1.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
