#include "gi_platform.h"
#include "004E7D70-CameraControlTask_Action.h"
struct status_msg* CameraControlTask_Action(void* a1, void* a2, uint32_t a3)

{
    struct status_msg* result = SoundSys_PlaySoundSample_15(a1, a3);
    (*(int32_t*)(uintptr_t)(a2 + 0x28)) = result;
    return result;
}
