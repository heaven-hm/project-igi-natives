/* LOGIC NOTE (QTask_HandleInput @ 0x004012A0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : AIConfig_UnableToCreateHumana, Define_Graph, Define_Group, Define_Sound, Define_TriggerOnce
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_HandleInput.h"

struct status_msg* QTask_HandleInput(void* ctx, int32_t kind, int32_t flags)

{
    int32_t* result = QTask_LinkEventHandler(ctx, kind);

    if (ctx)
        Camera_SetFieldOfView_33(ctx + 8, result);

    int32_t ctx = 0;
    ctx = result[7];
    int32_t result = *((ctx << 2) + &data_a96ae0);

    if (result)
        result(result, flags);

    return result;
}
