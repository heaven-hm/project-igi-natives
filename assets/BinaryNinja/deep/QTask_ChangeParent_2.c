/* LOGIC NOTE (QTask_ChangeParent_2 @ 0x00401C10)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : sub_51c5b0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_ChangeParent_2.h"

void* const QTask_ChangeParent_2(void* arg1, int16_t arg2)

{
    void* const result = *(arg1 + 0x10);

    for (void* i = *(result + 4); i; i = *(i + 4))
    {
        if (*(result + 0x1c) == arg2)
            return result;

        result = i;
    }

    return nullptr;
}
