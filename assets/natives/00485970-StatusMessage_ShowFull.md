# StatusMessage_ShowFull

Address: 0x00485970
Signature: void StatusMessage_ShowFull(int timer, char* message, char* sprite, int styleByte)
Data types: scalar/opaque ABI only

## Recovered behavior

Full-parameter status message: queues an on-screen HUD message with icon and styling (allocates via Mem_Alloc, reads current status word 0x540A8C). Params: timer = display duration, message = text, sprite = HUD sprite/icon ptr, styleByte = display style byte. Use MISC::STATUS_MESSAGE_SHOW wrapper for simple cases.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
