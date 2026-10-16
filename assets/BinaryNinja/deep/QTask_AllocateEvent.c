/* LOGIC NOTE (QTask_AllocateEvent @ 0x004015D0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : sub_4a
   called by : QTask_FindType, QTask_RemoveEventCallback_2
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_AllocateEvent.h"

int32_t* QTask_AllocateEvent(int32_t* arg1)

{
    int32_t* result = arg1;

    if (result[5])
        result = Camera_ApplyHandiCam_33(result);

    return result;
}
