# Camera_SubmitFrame

| Field | Value |
|---|---|
| Address/hash | `0x004D9870` |
| Signature | `void Camera_SubmitFrame(void* camCtx)` |
| Catalog source | `syntax-fallback` |
| Runtime state | `VALIDATED_STATIC` unless separately marked in the evidence manifest |

## Recovered behavior

Submits/presents the camera frame: increments frame counters at camCtx+0x50 against limit at +0x4C. IGI-MP hooks this as Camera_Submit for the lobby camera.

## How it was found

This record uses the branch evidence classification and the address-specific note in the canonical catalog.
See the per-symbol audit manifest for the exact retail-string, syntax, or context evidence classification.

## Usage boundary

Use the exact x86 address and the catalogued prototype. Do not infer undocumented fields or call parser-context functions outside their retail script context.
