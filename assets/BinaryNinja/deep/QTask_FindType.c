/* LOGIC NOTE (QTask_FindType @ 0x004015F0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : QTask_
   called by : AlarmLight_LoadParameters, AlarmLight_Parsed, AlarmLight_Setup, Car_Cleanup, Car_Run
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_FindType.h"

int32_t QTask_FindType(int32_t* arg1)

{
    data_567c58 -= 1;
    int32_t tmp_1 = data_afa7e0;
    int32_t result = 0;

    if (tmp_1 > 0)
    {
        int32_t* ctx_1 = &data_afa6e0;

        do
        {
            if (*ctx_1 == arg1)
            {
                int32_t* tmp_2 = *arg1;
                void* ctx_5;

                if (!tmp_2)
                    ctx_5 = nullptr;
                else
                {
                    int32_t ctx_2 = *tmp_2;
                    int32_t ctx_3 = -(ctx_2);
                    ctx_5 = (ctx_3 - ctx_3) & tmp_2;
                }

                *((result << 2) + &data_afa6e0) = ctx_5;
                break;
            }

            result += 1;
            ctx_1 = &ctx_1[1];
        } while (result < tmp_1);
    }

    int32_t result_1 = 0;
    result_1 = arg1[7];
    int32_t result_2 = *((result_1 << 2) + &data_a97ce0);

    if (result_2)
        result_2(arg1);

    int32_t* i_1 = arg1[4];

    for (int32_t* i = i_1[1]; i; i = i[1])
    {
        QTask_FindType(i_1);
        i_1 = i;
    }

    int32_t ctx_6 = 0;
    ctx_6 = arg1[7];
    int32_t result_3 = *((ctx_6 << 2) + &data_a976e0);

    if (result_3)
        result_3(arg1);

    if (arg1[6])
    {
        int32_t result_5 = data_567c40;
        int32_t ctx_7 = 0;

        if (result_5 > 0)
        {
            do
            {
                int32_t obj_1 = data_567c38;
                int32_t* result_8 = *(data_567c3c + (ctx_7 << 2)) * data_567c48;

                if (*(result_8 + obj_1) == arg1)
                    *(result_8 + obj_1) = 0;

                ctx_7 += 1;
            } while (ctx_7 < result_5);
        }
    }

    QTask_AllocateEvent(arg1);

    if (!*(arg1 + 0x1e))
        return Sys_ExecuteBytecode_2(arg1);

    int32_t result_12 = 0;
    result_12 = arg1[7];
    int32_t result_14 = result_12 * 0x30;
    int32_t dst_1 = *(*(result_14 + 0xaf5f00) + arg1);
    *(result_14 + 0xaf5ef4) -= 1;
    int32_t result_15 = 0;
    result_15 = arg1[7];
    int32_t ctx_10 = result_15 * 0x30;
    int32_t result_16 = *(ctx_10 + 0xaf5ef4);

    if (dst_1 == result_16)
        return result_16;

    int32_t tmp_4 = *(ctx_10 + 0xaf5ef0);
    int32_t frame_3 = *(tmp_4 + (dst_1 << 2));
    int32_t result_19 = *(tmp_4 + (result_16 << 2)) * *(ctx_10 + 0xaf5efc) + *(ctx_10 + 0xaf5eec);
    int32_t obj_3 = *(*(ctx_10 + 0xaf5f00) + result_19);
    *(tmp_4 + (dst_1 << 2)) = *(tmp_4 + (obj_3 << 2));
    int32_t ctx_13 = 0;
    ctx_13 = arg1[7];
    *(*(ctx_13 * 0x30 + 0xaf5ef0) + (obj_3 << 2)) = frame_3;
    int32_t ctx_15 = 0;
    ctx_15 = arg1[7];
    *(*(ctx_15 * 0x30 + 0xaf5f00) + result_19) = dst_1;
    return result_19;
}
