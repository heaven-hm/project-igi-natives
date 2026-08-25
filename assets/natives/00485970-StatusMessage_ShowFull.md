# StatusMessage_ShowFull

| Field | Value |
|---|---|
| Address/hash | `0x00485970` |
| Signature | `void StatusMessage_ShowFull(int timer, char* message, char* sprite, int styleByte)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Full-parameter status message: queues an on-screen HUD message with icon and styling (allocates via Mem_Alloc, reads current status word 0x540A8C). Params: timer = display duration, message = text, sprite = HUD sprite/icon ptr, styleByte = display style byte. Use MISC::STATUS_MESSAGE_SHOW wrapper for simple cases.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
