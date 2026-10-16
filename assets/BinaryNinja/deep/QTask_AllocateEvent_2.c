/* LOGIC NOTE (QTask_AllocateEvent_2 @ 0x00401C80)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : none
   called by : sub_4fec10, sub_5008f0, sub_500de0, sub_500ef0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_AllocateEvent_2.h"

void* const QTask_AllocateEvent_2(void* arg1, int16_t arg2)

{
    void* const result = *(arg1 + 4);

    if (result && *(result + 4))
    {
        if (!result)
            return result;

        while (true)
        {
            if (*(result + 0x1c) == arg2)
                return result;

            result = *(result + 4);

            if (!result)
                return nullptr;

            if (!*(result + 4))
                return nullptr;

            if (!result)
                return result;
        }
    }

    return nullptr;
}
