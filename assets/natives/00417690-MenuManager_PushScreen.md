# MenuManager_PushScreen

Address: 0x00417690
Signature: void MenuManager_PushScreen(int screenId)
Data types: scalar/opaque ABI only

## Recovered behavior

Pushes a screen onto the menu stack: allocates the screen object (objsize 0x2898) and stores it in the manager's screen stack at mgr+0x27EC (verified in igi.exe). Param: screenId = retail screen id. Remember to MenuManager_PopScreen when done.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
