/* LOGIC NOTE (QTask_ProcessQueue @ 0x00401890)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QTask_Init
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_ProcessQueue.h"

int32_t QTask_ProcessQueue(int16_t arg1, int32_t arg2)

{
    int32_t result = arg2 * 6;
    *(result + &data_54f932) = 1;
    *(result + 0x54f930) = arg1;
    *(result + 0x54f933) = 0;
    return result;
}
