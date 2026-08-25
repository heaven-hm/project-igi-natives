# Camera_SubmitFrame

Address: 0x004D9870
Signature: void Camera_SubmitFrame(CameraContext* camCtx)
Data types: CameraContext

## Recovered behavior

Submits/presents the camera frame: increments frame counters at camCtx+0x50 against limit at +0x4C. IGI-MP hooks this as Camera_Submit for the lobby camera.

## Evidence classification

parameter-context-inference

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
