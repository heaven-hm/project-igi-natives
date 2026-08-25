# Game_GetScriptContext

Address: 0x00402890
Signature: void* Game_GetScriptContext(void)
Data types: ScriptContext

## Recovered behavior

Returns *(void**)(Game_GetContext()+0x20), the script/task context initialized during game setup. Level_Start passes it through the script-data wrapper; the main-menu path pushes its return value as Menu_Manager's first argument.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
