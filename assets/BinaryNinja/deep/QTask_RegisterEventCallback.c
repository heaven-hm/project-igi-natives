/* LOGIC NOTE (QTask_RegisterEventCallback @ 0x004013B0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : Task_New
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_RegisterEventCallback.h"

int32_t* QTask_RegisterEventCallback(void* arg1, int16_t arg2, int32_t arg3)

{
    int32_t* result = QTask_LinkEventHandler(arg1, arg2);

    if (arg1)
        Camera_ApplyLineFilter_33(arg1 + 8, result);

    int32_t ctx = 0;
    ctx = result[7];
    int32_t result = *((ctx << 2) + &data_a96ae0);

    if (result)
        result(result, arg3);

    return result;
}
