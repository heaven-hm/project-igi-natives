# MenuManager_ActivatePopupScreen

Address: 0x00417900
Signature: void MenuManager_ActivatePopupScreen(int popupId)
Data types: scalar/opaque ABI only

## Recovered behavior

Activates a popup screen on top of the current menus (e.g. confirmation dialogs; retail scripts call MenuManager_ActivatePopupScreen(930)). Param: popupId = retail popup screen id. Use for custom confirmations.

## Evidence classification

retail-string

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
