# Human_ViewCam

Address: 0x00463760
Signature: void Human_ViewCam(HumanPlayer* human, int camValue)
Data types: HumanPlayer

## Recovered behavior

Sets the human's VIEW-CAMERA selector: stores camValue into human struct offset +0x4F0 (verified: mov [ecx+0x4F0],eax; ret - 5-byte setter). Params: human = Human/soldier struct ptr, camValue = camera mode index. Use to switch a soldier's view/camera state directly.

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
