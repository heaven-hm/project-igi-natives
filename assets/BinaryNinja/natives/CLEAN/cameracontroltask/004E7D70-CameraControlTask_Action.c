// IGI native provenance: CameraControlTask_Action - 0x004E7D70 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004E7D70-CameraControlTask_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "CameraControlTask_Action.h"
struct status_msg* CameraControlTask_Action(void* context, void* param_2, uint32_t param_3)

{
    struct status_msg* result = SoundSys_PlaySoundSample_15(context, param_3);
    *(param_2 + 0x28) = result;
    return result;
}
