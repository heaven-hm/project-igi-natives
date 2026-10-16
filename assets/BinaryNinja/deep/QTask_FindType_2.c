/* LOGIC NOTE (QTask_FindType_2 @ 0x00401CC0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : TaskTy
   called by : Vehicle_DeployGear_6, sub_4453e0, sub_4474e0, sub_474ae0, sub_4f2d50
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_FindType_2.h"

void* QTask_FindType_2(void* arg1, int16_t arg2)

{
    void* i;

    for (i = *(arg1 + 0x14); i; i = *(i + 0x14))
    {
        int32_t ctx;
        ctx = *(i + 0x1c);
        char result;
        result = TaskType_IsDerivedFrom(ctx, arg2);

        if (result)
            break;
    }

    return i;
}
