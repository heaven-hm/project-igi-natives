# Script_SetWarningLevel

| Field | Value |
|---|---|
| Address/hash | `0x004B8C60` |
| Signature | `void Script_SetWarningLevel(int level)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets how loudly the script system reports warnings while parsing/running (igi.exe embeds its name WITH leading underscore: '_Script_SetWarningLevel'). Param: level = warning verbosity threshold. Use at the top of scripts you want silenced or extra-chatty.

## How it was found

Retail evidence: _Script_SetWarningLevel.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
