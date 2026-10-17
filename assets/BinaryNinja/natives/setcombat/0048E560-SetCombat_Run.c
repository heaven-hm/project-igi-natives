// Original IGI.EXE function: SetCombat_Run (VA 0x0048E560; static CFG gate PASS, CFG score 1.000).
#include "SetCombat_Run.h"
int32_t* SetCombat_Run(void* context, int32_t* param_2)

{
    void* dest_val = *(context + 0x14);
    char* item_30 = "Set Combat";
    int32_t item_34 = 0xffffffff;
    void* item_38 = context;
    void* source_1 = param_2[0xa] + 8;
    int32_t item_1c = 7;
    int32_t item_18 = AI_CombatTarget_19(dest_val);
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    void* item_c = source_1;
    int32_t item_4 = 0;
    int32_t item_8 = 0;
    int32_t* data_1 = *(source_1 + 0x1c);

    if (data_1)
    {
        int32_t data_2 = *data_1;

        if (data_2)
            int32_t item_4_1 = data_2;
    }

    int32_t* source_2 = *(source_1 + 0x18);

    if (source_2)
    {
        int32_t source_3 = *source_2;

        if (source_3)
            int32_t item_8_1 = source_3;
    }

    AI_TakeCover(context, &item_1c);
    return AI_CombatTarget_2(context, param_2);
}
