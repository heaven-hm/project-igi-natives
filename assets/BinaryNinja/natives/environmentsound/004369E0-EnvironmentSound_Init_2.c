#include "EnvironmentSound_Init_2.h"

char* EnvironmentSound_Init_2(void* pThis)

{
    void* eax = Level_StartMission_4();
    Display_OpenDevice_17(*(pThis + 0x20), eax);

    if (Script_EvaluateCondition_4(pThis) >= 0)
    {
        int32_t eax_3 = Script_SpawnNewTask_6();
        int32_t edx_1 = 0;
        edx_1 = *(pThis + 0x1c);
        int32_t eax_4 = *(((eax_3 * 0x180 + edx_1) << 2) + &g_a96ae0);

        if (eax_4)
            eax_4(pThis);
    }

    return Script_CallNativeHandler_6(pThis + 0x38);
}
