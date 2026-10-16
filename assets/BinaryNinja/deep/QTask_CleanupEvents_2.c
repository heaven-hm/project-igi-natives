/* LOGIC NOTE (QTask_CleanupEvents_2 @ 0x00401D50)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : sub_4c5aa0, sub_4d1260
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CleanupEvents_2.h"

int32_t QTask_CleanupEvents_2(char arg1)

{
    uint32_t result = arg1;
    *(*(result + 0xa969e0) + &data_54ff24) = 0xff;
    *(result + 0xa969e0) = 0xff;
    /* tailcall */
    return QTask_DeleteTask();
}
