/* LOGIC NOTE (QTask_DeleteTask @ 0x004014B0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : QTask_CleanupEvents_2, QTask_CleanupTypes_2, QTask_RemoveEventCallback, QTask_TriggerEvent, TaskType_Register
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_DeleteTask.h"

int32_t QTask_DeleteTask()

{
    int32_t dst = 0;
    int16_t result;

    for (int16_t* i = &data_af5f08; i < 0xafa708; )
    {
        result = *(i - 3);

        if (result)
        {
            result = QTask_ChangeParent(dst);
            *i = result;
        }

        i = &i[0x18];
        dst += 1;
    }

    return result;
}
