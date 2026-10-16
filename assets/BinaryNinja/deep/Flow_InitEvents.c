/* LOGIC NOTE (Flow_InitEvents @ 0x004027E0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : Flow_DeleteHandler
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "Flow_InitEvents.h"

uint32_t Flow_InitEvents()

{
    int32_t result;
    result = data_567c7c;
    return QTask_CloseEvent_2(result);
}
