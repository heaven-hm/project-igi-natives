/* LOGIC NOTE (Flow_CreateHandler @ 0x00402800)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : QTask_CreateTask
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Flow_CreateHandler.h"

struct status_msg* Flow_CreateHandler(void* arg1)

{
    int32_t kind;
    kind = data_567c7c;
    return QTask_HandleInput(arg1, kind, 0);
}
