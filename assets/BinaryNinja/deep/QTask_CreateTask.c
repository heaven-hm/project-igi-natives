/* LOGIC NOTE (QTask_CreateTask @ 0x00401000)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Flow_C
   called by : sub_48f530
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CreateTask.h"

int32_t QTask_CreateTask()

{
    FX_ExplosionSpawn_23(&data_536144);
    FX_ExplosionSpawn_27(1);
    Flow_RunHandler();
    Flow_CreateHandler(nullptr);

    if (FX_ExplosionSpawn_25())
    {
        int32_t result_2 = Flow_SetState(2);
        result_2 = 1;
        return result_2;
    }

    int32_t result_1 = Flow_SetState(4);
    result_1 = 1;
    return result_1;
}
