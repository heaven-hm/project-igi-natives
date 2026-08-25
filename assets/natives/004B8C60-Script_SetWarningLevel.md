# Script_SetWarningLevel

Address: 0x004B8C60
Signature: void Script_SetWarningLevel(int level)
Data types: scalar/opaque ABI only

## Recovered behavior

Sets how loudly the script system reports warnings while parsing/running (igi.exe embeds its name WITH leading underscore: '_Script_SetWarningLevel'). Param: level = warning verbosity threshold. Use at the top of scripts you want silenced or extra-chatty.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
