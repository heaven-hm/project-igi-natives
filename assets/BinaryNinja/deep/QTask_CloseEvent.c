/* LOGIC NOTE (QTask_CloseEvent @ 0x004010A0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : Flow_LoadParameters
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CloseEvent.h"

int32_t QTask_CloseEvent()

{
    Camera_ApplyBandFilter_3(0x54f8e0, 1);
    /* tailcall */
    return QTask_DispatchEvent();
}
