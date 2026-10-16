/* LOGIC NOTE (QTask_CreateTask_3 @ 0x00401E70)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : QTask_CreateTask_3, sub_527320
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_CreateTask_3.h"

int32_t QTask_CreateTask_3(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)

{
    int32_t result_4 = data_afa7e0;
    *((result_4 << 2) + &data_afa6e0) = arg1;
    int32_t result = result_4 + 1;
    data_afa7e0 = result;
    int16_t ctx = *(arg1 + 0x1c);

    if (ctx == arg3)
    {
        int32_t ctx_2 = *(((arg2 * 0x180 + ctx) << 2) + &data_a96ae0);

        if (ctx_2)
        {
            ctx_2(arg1, arg4);
            result = data_afa7e0;
        }
    }

    if (arg1 == *((result << 2) + &data_afa6dc))
    {
        int32_t* i = *(arg1 + 8);

        if (*i && i)
        {
            do
            {
                int32_t* src_1 = *i;
                void* tmp_9;

                if (!src_1)
                    tmp_9 = nullptr;
                else
                {
                    int32_t tmp_6 = *src_1;
                    int32_t tmp_7 = -(tmp_6);
                    tmp_9 = (tmp_7 - tmp_7) & src_1;
                }

                *((result << 2) + &data_afa6e0) = tmp_9;
                data_afa7e0 = result + 1;
                QTask_CreateTask_3(i, arg2, arg3, arg4);
                result = data_afa7e0 - 1;
                data_afa7e0 = result;
                i = *((result << 2) + &data_afa6e0);
            } while (i);
        }
    }

    data_afa7e0 = result - 1;
    return result - 1;
}
