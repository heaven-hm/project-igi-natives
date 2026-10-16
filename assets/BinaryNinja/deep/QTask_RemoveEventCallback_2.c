/* LOGIC NOTE (QTask_RemoveEventCallback_2 @ 0x00401BB0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : sub_46bb10
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_RemoveEventCallback_2.h"

void* QTask_RemoveEventCallback_2(int32_t* arg1, void* arg2)

{
    int32_t obj = *(arg2 + 0x14);
    QTask_AllocateEvent(arg1);
    void* result = Camera_ApplyWideScreen_33(arg2, arg1);
    arg1[5] = obj;
    return result;
}
