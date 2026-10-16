/* LOGIC NOTE (QTask_InitContext_2 @ 0x00401E30)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : AIConfig_UnableToCreateHumana, sub_488000
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_InitContext_2.h"

void* QTask_InitContext_2(void* arg1, int32_t arg2, int32_t arg3)

{
    void* result = arg1;
    int32_t* i = *(result + 8);

    if (*i && i)
    {
        do
        {
            result = QTask_ProcessQueue_2(i, arg2, arg3);
            i = *i;

            if (!i)
                break;

            if (!*i)
                break;
        } while (i);
    }

    return result;
}
