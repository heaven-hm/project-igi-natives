// Original IGI.EXE function: CameraControlTask_Action (VA 0x004E7D70; static CFG gate PASS, CFG score 1.000).
#include "CameraControlTask_Action.h"
struct status_msg* CameraControlTask_Action(void* context, void* param_2, uint32_t param_3)

{
    struct status_msg* result = SoundSys_PlaySoundSample_15(context, param_3);
    *(param_2 + 0x28) = result;
    return result;
}
