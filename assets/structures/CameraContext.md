# CameraContext

Kind: partial
Size: unknown
Root: camera context passed to Camera_SubmitFrame and Camera_ResetFrameCounters
C++ type: IGI::CameraContext
Status: PROVEN_STATIC

Camera frame-selection state with only the reset fields typed; the remaining camera object is opaque.

## Proven fields

| Field | Offset | Type | Evidence |
|---|---|---|---|
| frameSelection | 0x04C | int32_t | 0x004D9950, 0x004D9870 |
| frameCounter | 0x050 | uint32_t | 0x004D9950, 0x004D9870 |

## Native references

0x004828D0, 0x004D9870, 0x004D9950
