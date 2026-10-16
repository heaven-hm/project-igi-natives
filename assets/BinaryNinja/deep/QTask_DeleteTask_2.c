/* LOGIC NOTE (QTask_DeleteTask_2 @ 0x00401BE0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : Car_Run, MenuLoader_Setup, Menu_FormatScreen_22, Menu_LeaveMenus_21, Menu_Manager
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_DeleteTask_2.h"

int32_t* QTask_DeleteTask_2(void* arg1, int16_t arg2)

{
    int32_t* result = *(arg1 + 8);

    for (int32_t* i = *result; i; i = *i)
    {
        if (result[7] == arg2)
            return result;

        result = i;
    }

    return nullptr;
}
