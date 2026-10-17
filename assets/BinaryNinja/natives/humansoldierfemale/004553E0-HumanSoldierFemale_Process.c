// Original IGI.EXE function: HumanSoldierFemale_Process (VA 0x004553E0; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierFemale_Process.h"
int32_t HumanSoldierFemale_Process(float context, int32_t* param_2)

{
    float source_val = context;
    context = 0;
    void* data_val = *(source_val + 0x800);

    if (data_val)
        context = *(data_val + 0x3abd);

    if (!data_val || !*(data_val + 0x3abc))
    {
        int32_t data_2 = FX_000011(source_val, param_2);
        *(source_val + 0x2e8) = data_2;
        FX_FragmentSimulate_14(source_val + 0x254, data_2);

        if (data_2 == 0xf)
        {
            if (!context)
                context = (source_val + 0x254)[data_2 * 2 + 4] * param_2[1];
            else
                context = param_2[1];
        }
        else if (data_2 != 0x10 || !context)
            context = (source_val + 0x254)[data_2 * 2 + 4] * param_2[1];
        else
            context = param_2[1];

        (source_val + 0x254)[data_2 * 2 + 3] = context + (source_val + 0x254)[data_2 * 2 + 3];
        *(source_val + 0x254) = context + *(source_val + 0x254);
        AI_UpdateOrders_21(source_val, &param_2[2], *param_2);
        long double fpu_val_7_8 = context + *(source_val + 0xd08);
        int32_t* entity_3 = *(source_val + 0x2f4);
        *(source_val + 0xd08) = fpu_val_7_8;
        long double fpu_val_6_1 = *(source_val + 0x254);
        long double f0_1 = *(source_val + 0x258);
        fpu_val_6_1 - f0_1;
        int32_t* entity_4;

        if (!(*(&((fpu_val_6_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(source_val + 0xd20) = param_2[2];
            *(source_val + 0xd28) = param_2[3];
            *(source_val + 0xd30) = param_2[4];

            if (*(param_2[6] + 0x610) != 2)
                *(source_val + 0xd18) = 2;
            else
                *(source_val + 0xd18) = 1;

            entity_4 = entity_3 | 0x20000;
            *(source_val + 0xcf5) = 1;
        }
        else
        {
            long double f1_1 = *(source_val + 0xd04);
            fpu_val_7_8 - f1_1;

            if (!(*(&((fpu_val_7_8 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_8, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_8 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                *(source_val + 0xd08) = 0;

            AI_MoveToNode_21(source_val, "ai_hit_", 3);
            entity_4 = entity_3;
        }

        *(source_val + 0x2f4) = entity_4;
    }

    void* temp_3 = *(source_val + 0x800);
    int32_t context_1 = param_2[5];
    int32_t item_1c = 0xf;
    int32_t item_18 = 1;
    int32_t item_14 = 0;
    int32_t item_8 = context_1;
    int32_t item_4 = context_1;
    void item_34;
    void* item_c = &item_34;
    return AI_TakeCover(temp_3, &item_1c);
}
