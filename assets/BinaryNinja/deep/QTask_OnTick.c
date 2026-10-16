/* LOGIC NOTE (QTask_OnTick @ 0x00401270)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Warnin
   called by : QTask_Process
   data refs : none
   strings   : QTask event not deallocated
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_OnTick.h"

void QTask_OnTick()

{
    char* i = &data_54f932;

    do
    {
        if (*i)
            Warning_Show("QTask event not deallocated");

        i = &i[6];
    } while (i < &*(data_54ff24 + 2));
}
