// Original IGI.EXE function: HumanSoldierPistol_Process (VA 0x0045A230; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierPistol_Process.h"
int32_t HumanSoldierPistol_Process(float context, int32_t* param_2)

{
    int32_t* context_val = param_2;
    float source_val = context;
    context = 0;
    void* data_val = *(source_val + 0x800);

    if (data_val)
        context = *(data_val + 0x3abd);

    if (!data_val || !*(data_val + 0x3abc))
    {
        int32_t data_2 = FX_000011(source_val, context_val);
        *(source_val + 0x2e8) = data_2;
        FX_FragmentSimulate_14(source_val + 0x254, data_2);

        if (data_2 == 0xf)
        {
            if (!context)
                context = (source_val + 0x254)[data_2 * 2 + 4] * context_val[1];
            else
                context = context_val[1];
        }
        else if (data_2 != 0x10 || !context)
            context = (source_val + 0x254)[data_2 * 2 + 4] * context_val[1];
        else
            context = context_val[1];

        (source_val + 0x254)[data_2 * 2 + 3] = context + (source_val + 0x254)[data_2 * 2 + 3];
        *(source_val + 0x254) = context + *(source_val + 0x254);
        AI_UpdateOrders_21(source_val, &context_val[2], *context_val);
        long double fpu_val_7_8 = context + *(source_val + 0xd08);
        int32_t* entity_3 = *(source_val + 0x2f4);
        param_2 = entity_3;
        *(source_val + 0xd08) = fpu_val_7_8;
        long double fpu_val_6_1 = *(source_val + 0x254);
        long double f0_1 = *(source_val + 0x258);
        fpu_val_6_1 - f0_1;
        int32_t* entity_5;

        if (!(*(&((fpu_val_6_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(source_val + 0xd20) = context_val[2];
            *(source_val + 0xd28) = context_val[3];
            *(source_val + 0xd30) = context_val[4];

            if (*(context_val[6] + 0x610) != 2)
                *(source_val + 0xd1c) = 2;
            else
                *(source_val + 0xd1c) = 1;

            entity_5 = entity_3 | 0x20000;
            *(source_val + 0xcf5) = 1;
        }
        else
        {
            long double f1_1 = *(source_val + 0xd04);
            fpu_val_7_8 - f1_1;

            if (!(*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                *(source_val + 0xd08) = 0;
                param_2 = entity_3 | 0x10000;
            }

            AI_MoveToNode_21(source_val, "ai_hit_", 3);
            entity_5 = param_2;
        }

        *(source_val + 0x2f4) = entity_5;
    }

    void* temp_3 = *(source_val + 0x800);
    int32_t context_1 = context_val[5];
    int32_t item_1c = 0xf;
    int32_t item_18 = 1;
    int32_t item_14 = 0;
    int32_t item_8 = context_1;
    int32_t item_4 = context_1;
    void item_34;
    void* item_c = &item_34;
    return AI_TakeCover(temp_3, &item_1c);
}
