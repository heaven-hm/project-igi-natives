#include "Rain_Init.h"
int32_t* Rain_Init()

{
    Sys_ResolveSymbol_13(0xc311d0);
    int32_t v_8 = 0;
    int16_t valA1 = TaskType_Register("Rain", 0x56d0, g_54875c, 0);
    g_c311c0 = valA1;
    QTask_RemoveEventCallback(valA1, 4, sub_498b80);
    return Display_CloseDevice_8(sub_498b00);
}
