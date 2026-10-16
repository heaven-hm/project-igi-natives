#include "004ED510-InputPort_Init.h"
/* 0x004ed510 InputPort_Init full linked: callers=1 callees=3 */
int32_t sub_4ed510()

{
    int32_t var_8 = 0;
    int16_t eax_1 = TaskType_Register("InputPort", 0x20, QTask_OpenEvent_2(), 0);
    g_a5efa0 = eax_1;
    int32_t result = QTask_TriggerEvent(eax_1, 1, sub_4ed560);
    g_bc20a0 = 0;
    g_bc2150 = 0;
    g_bc2200 = 0;
    g_bc22b0 = 0;
    return result;
}
