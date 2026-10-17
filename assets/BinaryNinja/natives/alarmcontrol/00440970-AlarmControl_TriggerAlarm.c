// IGI native provenance: AlarmControl_TriggerAlarm - 0x00440970 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00440970-AlarmControl_TriggerAlarm.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AlarmControl_TriggerAlarm.h"

char* AlarmControl_TriggerAlarm(void* pThis)

{
    (*((Env_UpdateCameraLens_3() << 2) + &g_a976e0))(pThis);

    if (Script_EvaluateCondition_4(pThis) >= 0)
    {
        int32_t result_val_4 = Script_SpawnNewTask_6();
        int32_t counter_val_1 = 0;
        counter_val_1 = *(pThis + 0x1c);
        int32_t result_val_8 = *(((result_val_4 * 0x180 + counter_val_1) << 2) + &g_a96ae0);

        if (result_val_8)
            result_val_8(pThis);
    }

    Script_CallNativeHandler_6(pThis + 0x2ac);
    return Script_CallNativeHandler_6(pThis + 0x2fc);
}
