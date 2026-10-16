/* LOGIC NOTE (QTask_ProcessQueue_2 @ 0x00401D80)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : Level_Load, Menu_Manager, QTask_InitContext_2, QTask_ProcessQueue_2, sub_4edcc0
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_ProcessQueue_2.h"

int32_t QTask_ProcessQueue_2(void* arg1, int32_t arg2, int32_t arg3)

{
    int32_t result_4 = data_afa7e0;
    *((result_4 << 2) + &data_afa6e0) = arg1;
    int32_t result = result_4 + 1;
    int32_t tmp = 0;
    data_afa7e0 = result;
    tmp = *(arg1 + 0x1c);
    int32_t ctx_5 = *(((arg2 * 0x180 + tmp) << 2) + &data_a96ae0);

    if (ctx_5)
    {
        ctx_5(arg1, arg3);
        result = data_afa7e0;
    }

    if (arg1 == *((result << 2) + &data_afa6dc))
    {
        int32_t* i = *(arg1 + 8);

        if (*i && i)
        {
            do
            {
                int32_t* src_1 = *i;
                void* tmp_4;

                if (!src_1)
                    tmp_4 = nullptr;
                else
                {
                    int32_t tmp_1 = *src_1;
                    int32_t tmp_2 = -(tmp_1);
                    tmp_4 = (tmp_2 - tmp_2) & src_1;
                }

                *((result << 2) + &data_afa6e0) = tmp_4;
                data_afa7e0 = result + 1;
                QTask_ProcessQueue_2(i, arg2, arg3);
                result = data_afa7e0 - 1;
                data_afa7e0 = result;
                i = *((result << 2) + &data_afa6e0);
            } while (i);
        }
    }

    data_afa7e0 = result - 1;
    return result - 1;
}
