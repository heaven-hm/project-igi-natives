#include "00463640-AI_UpdateSensors_20.h"
/* 0x00463640 AI_UpdateSensors_20 full linked: callers=4 callees=2 */
int32_t* sub_463640(void* a1, int32_t* a2)

{
    int32_t* eax = *(a1 + 0x768);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x768) = 0;
    }

    int32_t* result = a2;

    if (result)
    {
        result = QTask_LinkEventHandler_2(result);
        *(a1 + 0x768) = result;
    }

    return result;
}
