// Original IGI.EXE function: Missile_Action (VA 0x00429920; static CFG gate PASS, CFG score 0.889).
#include "Missile_Action.h"
int32_t* Missile_Action(int32_t* context )

{
    void* data_1 = *(context[1] + 0x6e4);

    if (data_1)
    {
        Sys_ExecuteBytecode_2(data_1);
        *(context[1] + 0x6e4) = 0;
    }

    int32_t item_10 = g_53bcd8[0];
    int32_t* data_3 = Script_FormatString_31(*context, "Missile - Model");

    if (!data_3)
        data_3 = Script_EvaluateCondition_31(*context, "Missile - Model", &item_10);

    void* dest_val = &data_3[0x49];
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_3 = ~i;
    int32_t source_1;
    int32_t dest_2;
    dest_2 = memcpy(&item_10, dest_val - entity_3, entity_3 & 0xfffffffc);
    memcpy(dest_2, source_1, entity_3 & 3);
    *(context[1] + 0x6e4) = Mem_Alloc(0x10, 4);
    int32_t* result = *(context[1] + 0x6e4);
    *result = item_10;
    result[1] = g_53bcd8[4][0];
    result[2] = g_53bcd8[8][0];
    int32_t item_4;
    result[3] = item_4;
    return result;
}
