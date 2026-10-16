#include "gi_platform.h"
#include "00530220-CamTask_Init.h"
int32_t CamTask_Init()

{
    int32_t v_4 = 0;
    int16_t result = TaskType_Register("CamTask", 0x88, QTask_OpenEvent_2(), 0);
    g_54f768 = result;
    return result;
}
