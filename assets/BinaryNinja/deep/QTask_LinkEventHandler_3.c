/* LOGIC NOTE (QTask_LinkEventHandler_3 @ 0x00401F80)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : sub_460b20, sub_4c4820, sub_4e43b0, sub_519650
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_LinkEventHandler_3.h"

int32_t QTask_LinkEventHandler_3(int32_t arg1)

{
    int32_t result = ~arg1;
    data_567c5c &= result;
    return result;
}
