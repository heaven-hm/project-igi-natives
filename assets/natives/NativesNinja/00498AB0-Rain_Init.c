#include "00498AB0-Rain_Init.h"
/* 0x00498ab0 Rain_Init full linked: callers=1 callees=4 */
int32_t* sub_498ab0()

{
    sub_4b4720(0xc311d0);
    int32_t var_8 = 0;
    int16_t eax_1 = TaskType_Register("Rain", 0x56d0, g_54875c, 0);
    g_c311c0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_498b80);
    return sub_495200(sub_498b00);
}
