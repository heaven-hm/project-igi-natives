// IGI native provenance: Env_TriggerAlarm_13 - 0x0044FE50 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0044FE50-Env_TriggerAlarm_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Env_TriggerAlarm_13.h"
int32_t Env_TriggerAlarm_13(void* context, void** param_2)

{
    Camera_ApplyHandiCam_33(param_2);
    int32_t* data_val = param_2[0xb];

    if (data_val)
    {
        Qtask_UpdateList(data_val);
        param_2[0xb] = 0;
    }

    int32_t* data_1 = param_2[0xa];

    if (data_1)
    {
        Qtask_UpdateList(data_1);
        param_2[0xa] = 0;
    }

    param_2[1] = 0;
    *param_2 = nullptr;
    Camera_SetFieldOfView_33(context + 0x810, param_2);
    int32_t result = *(context + 0x8e0) - 1;
    *(context + 0x8e0) = result;
    return result;
}
