/* LOGIC NOTE (QTask_CleanupTypes @ 0x00401780)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : Car_ExplosionTick, Level_SetMission_6, Qtask_Update, sub_46ac30, sub_4789c0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CleanupTypes.h"

int32_t* QTask_CleanupTypes(void* arg1)

{
    int32_t* result = *(arg1 + 8);

    if (*result && result)
    {
        int32_t* i;

        do
        {
            int32_t* ctx_1 = *result;

            if (!ctx_1)
                i = nullptr;
            else
            {
                int32_t src_1 = *ctx_1;
                int32_t src_2 = -(src_1);
                i = (src_2 - src_2) & ctx_1;
            }

            QTask_FindType(result);
            result = i;
        } while (i);
    }

    return result;
}
