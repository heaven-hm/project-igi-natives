// IGI native provenance: EnvironmentSound_Init_2 - 0x004369E0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004369E0-EnvironmentSound_Init_2.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EnvironmentSound_Init_2.h"

char* EnvironmentSound_Init_2(void* pThis)

{
    void* result_val = Level_StartMission_4();
    Display_OpenDevice_17(*(pThis + 0x20), result_val);

    if (Script_EvaluateCondition_4(pThis) >= 0)
    {
        int32_t result_val_3 = Script_SpawnNewTask_6();
        int32_t scratch_val_1 = 0;
        scratch_val_1 = *(pThis + 0x1c);
        int32_t result_val_4 = *(((result_val_3 * 0x180 + scratch_val_1) << 2) + &g_a96ae0);

        if (result_val_4)
            result_val_4(pThis);
    }

    return Script_CallNativeHandler_6(pThis + 0x38);
}
