// Original IGI.EXE function: Human_ViewCam (VA 0x00463760; static CFG gate PASS, CFG score 1.000).
#include "Human_ViewCam.h"
int32_t Human_ViewCam(void* context, int32_t param_2)

// Sig: void Human_ViewCam(HumanPlayer* human, int camValue)
// Note: Sets the human's VIEW-CAMERA selector: stores camValue into human
// struct offset +0x4F0 (verified: mov [entity_val+0x4F0],data_val; ret - 5-byte setter).
// Params: human = Human/soldier struct ptr, camValue = camera mode index. Use
// to switch a soldier's view/camera state directly.
{
    *(context + 0x4f0) = param_2;
    return param_2;
}
