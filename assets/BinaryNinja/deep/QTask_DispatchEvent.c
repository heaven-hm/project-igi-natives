/* LOGIC NOTE (QTask_DispatchEvent @ 0x004010B0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Flow_D
   called by : QTask_CloseEvent, sub_48f970
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_DispatchEvent.h"

int32_t QTask_DispatchEvent()

{
    if (QTask_DispatchEvent_2())
        QTask_FindType(Game_GetContext());

    /* tailcall */
    return Flow_DeleteHandler();
}
