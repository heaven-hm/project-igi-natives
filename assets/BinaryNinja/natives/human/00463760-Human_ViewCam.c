#include "Human_ViewCam.h"
int32_t Human_ViewCam(void* a1, int32_t a2)

// Sig: void Human_ViewCam(HumanPlayer* human, int camValue)
// Note: Sets the human's VIEW-CAMERA selector: stores camValue into human
// struct offset +0x4F0 (verified: mov [objC+0x4F0],valA; ret - 5-byte setter).
// Params: human = Human/soldier struct ptr, camValue = camera mode index. Use
// to switch a soldier's view/camera state directly.
{
    *(a1 + 0x4f0) = a2;
    return a2;
}
