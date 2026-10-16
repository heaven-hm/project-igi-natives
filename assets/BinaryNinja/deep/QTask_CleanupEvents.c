/* LOGIC NOTE (QTask_CleanupEvents @ 0x00401860)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QObj, QTask_Init, sub_4c5900, sub_4d0ef0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CleanupEvents.h"

uint32_t QTask_CleanupEvents(int16_t arg1, char arg2)

{
    uint32_t result = arg2 * 6;
    *(result + &data_54f932) = 1;
    *(result + 0x54f930) = arg1;
    *(result + 0x54f933) = 1;
    return result;
}
