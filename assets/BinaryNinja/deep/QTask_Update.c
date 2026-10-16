/* LOGIC NOTE (QTask_Update @ 0x004011B0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : QTask_Init
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_Update.h"

int32_t* QTask_Update()

{
    int32_t* i;

    for (i = &data_af5ee0; i < &data_afa6e0; i = &i[0xc])
    {
        *(i + 0x25) = 0;
        *i = 0;
    }

    return i;
}
