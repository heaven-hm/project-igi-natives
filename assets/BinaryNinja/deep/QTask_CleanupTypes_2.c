/* LOGIC NOTE (QTask_CleanupTypes_2 @ 0x00401D30)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : sub_4c5900, sub_4d0ef0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CleanupTypes_2.h"

int32_t QTask_CleanupTypes_2(char arg1, int32_t arg2)

{
    *(arg2 + &data_54ff24) = arg1;
    *(arg1 + 0xa969e0) = arg2;
    /* tailcall */
    return QTask_DeleteTask();
}
