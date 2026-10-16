/* LOGIC NOTE (QTask_RegisterEventCallback_2 @ 0x00401B90)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QTask_Action, QTask_QtaskTypeSNotDefined, sub_4f1270
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_RegisterEventCallback_2.h"

int32_t QTask_RegisterEventCallback_2(int16_t arg1)

{
    return *(arg1 * 0x30 + &data_af5ee0);
}
