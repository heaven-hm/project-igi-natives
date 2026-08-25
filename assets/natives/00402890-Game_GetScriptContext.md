# Game_GetScriptContext

| Field | Value |
|---|---|
| Address/hash | `0x00402890` |
| Signature | `void* Game_GetScriptContext(void)` |
| Catalog source | `parameter-context-inference` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Returns *(void**)(Game_GetContext()+0x20), the script/task context initialized during game setup. Level_Start passes it through the script-data wrapper; the main-menu path pushes its return value as Menu_Manager's first argument.

## How it was found

Retail evidence: Ghidra: returns *(undefined4 *)(DAT_00567C8C + 0x20), initialized during startup through the 0x004E7580 wrapper.; r2: mov eax,[0x00567C8C]; mov eax,[eax+0x20]; ret.; Ghidra Level_Start calls it with no arguments; r2 shows the main-menu site calling it, then pushing EAX as Menu_Manager's first argument. Menu_Manager uses that parameter in Script_SetSymbolContext("Task_New", param_1)..
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
