/* LOGIC NOTE (QTask_Action @ 0x00401230)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : QTask_Process
   data refs : none
   strings   : QTasktype ;  not deallocated
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_Action.h"

void QTask_Action()

{
    int32_t dst = 0;

    for (char* i = &data_af5f05; i < 0xafa705; )
    {
        if (*i)
        {
            int32_t v_10_1 = QTask_RegisterEventCallback_2(dst);
            Warning_Show("QTasktype "%s" not deallocated");
        }

        i = &i[0x30];
        dst += 1;
    }
}
