# Display_SetMode

| Field | Value |
|---|---|
| Address/hash | `0x00491A90` |
| Signature | `int Display_SetMode(void* modeStruct)` |
| Catalog source | `retail-string` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Switches the DISPLAY MODE at runtime: validates mode fields vs current (0xC28B44...), repositions/resizes the window (GetSystemMetrics), copies the mode into the active-mode struct. Param: modeStruct = pointer to a display-mode struct (same layout Display_GetActiveMode returns). RETURNS 0 on failure, non-zero on success.

## How it was found

Retail evidence: DisplaySetMode.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
