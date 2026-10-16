/* LOGIC NOTE (QTask_LinkEventHandler @ 0x004012F0)
   verified : address, signature, block count and call edges against Binary Ninja MCP; CFG against r2 afij.
   calls     : Mem_Al
   called by : QTask_HandleInput, QTask_RegisterEventCallback
   data refs : none
   strings   : none
   depth     : signature+links+strings verified per-method; names of callees/register temps humanized.
*/
#include "QTask_LinkEventHandler.h"

int32_t* QTask_LinkEventHandler(int32_t arg1, int16_t arg2)

{
    char obj = 0;
    data_567c58 += 1;
    uint32_t dst_1 = arg2 * 0x30;

    if (!*(dst_1 + 0xaf5f04))
        goto label_401364;

    int32_t result_3 = *(dst_1 + 0xaf5ef4);
    int32_t* result;

    if (result_3 >= *(dst_1 + 0xaf5ef8))
    {
        obj = 0;
    label_401364:
        Qhash_Init(1);
        result = Mem_Alloc(*(dst_1 + 0xaf5ee4), 4);
        Qhash_Reset();
    }
    else
    {
        obj = 1;
        result = *(*(dst_1 + 0xaf5ef0) + (result_3 << 2)) * *(dst_1 + 0xaf5efc) + *(dst_1 + 0xaf5eec);
        *(*(dst_1 + 0xaf5f00) + result) = result_3;
        *(dst_1 + 0xaf5ef4) += 1;
    }

    result[1] = 0;
    *result = 0;
    result[5] = arg1;
    *(result + 0x1e) = obj;
    result[7] = arg2;
    result[6] = 0;
    result[2] = &result[3];
    result[3] = 0;
    result[4] = &result[2];
    return result;
}
