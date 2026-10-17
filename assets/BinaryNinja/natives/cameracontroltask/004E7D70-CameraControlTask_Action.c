// Original IGI.EXE function: CameraControlTask_Action (VA 0x004E7D70; static CFG gate PASS, CFG score 1.000).
#include "CameraControlTask_Action.h"
struct status_msg* CameraControlTask_Action(void* a1, void* a2, uint32_t a3)

{
    struct status_msg* result = SoundSys_PlaySoundSample_15(a1, a3);
    *(a2 + 0x28) = result;
    return result;
}
