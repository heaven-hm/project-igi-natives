#include "00530220-CamTask_Init.h"
/* 0x00530220 CamTask_Init full linked: callers=1 callees=2 */
int32_t sub_530220()

{
    int32_t var_4 = 0;
    int16_t result = TaskType_Register("CamTask", 0x88, QTask_OpenEvent_2(), 0);
    g_54f768 = result;
    return result;
}
