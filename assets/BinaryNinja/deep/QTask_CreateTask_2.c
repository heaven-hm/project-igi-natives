/* LOGIC NOTE (QTask_CreateTask_2 @ 0x004018E0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : LINEUPMODE_NONE, sub_4d0c50, sub_4e63e0, sub_4e7500, sub_4f0a60
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CreateTask_2.h"

uint32_t QTask_CreateTask_2(int32_t arg1)

{
    return QTask_InitContext(arg1);
}
