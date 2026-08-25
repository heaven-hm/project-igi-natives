# Human_ViewCam

| Field | Value |
|---|---|
| Address/hash | `0x00463760` |
| Signature | `void Human_ViewCam(void* human, int camValue)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Sets the human's VIEW-CAMERA selector: stores camValue into human struct offset +0x4F0 (verified: mov [ecx+0x4F0],eax; ret - 5-byte setter). Params: human = Human/soldier struct ptr, camValue = camera mode index. Use to switch a soldier's view/camera state directly.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
