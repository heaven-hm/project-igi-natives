#include "AlarmLight_Trigger.h"

int32_t AlarmLight_Trigger(void* pThis, int32_t* param)

{
    *param = pThis + 0x20;
    param[1] = pThis + 0x70;
    int32_t result = *(pThis + 0x1a4);
    param[2] = result;
    return result;
}
