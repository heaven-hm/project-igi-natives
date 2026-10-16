/* LOGIC NOTE (QTask_OnEvent @ 0x004011D0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QTask_Init
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_OnEvent.h"

char* QTask_OnEvent()

{
    char* i = &data_54f932;

    do
    {
        *i = 0;
        i = &i[6];
    } while (i < &*(data_54ff24 + 2));

    return i;
}
