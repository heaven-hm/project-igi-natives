// IGI native provenance: HumanSoldier_Action - 0x0045A5E0 - CFG score 97.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0045A5E0-HumanSoldier_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "HumanSoldier_Action.h"
int32_t HumanSoldier_Action(void* context, float* param_2)

{
    void* data_val = *(context + 0x800);
    double item_34;

    if (!data_val || !*(data_val + 0x3abc))
    {
        item_34 = *(context + 0x7c) * 4096.0;
        double item_2c_1 = *(context + 0x88) * 4096.0;
        double item_24_1 = *(context + 0x94) * 4096.0;
        double* data_2 = DynObj_UpdateDynTree_4(context);
        char* item_64 = param_2[1];
        double* data_4 = DynObj_UpdateDynTree_4(item_64);
        double item_4c = *data_2 - *data_4;
        void* data_5 = DynObj_UpdateDynTree_4(context);
        void* data_6 = DynObj_UpdateDynTree_4(param_2[1]);
        double item_44_1 = *(data_5 + 8) - *(data_6 + 8);
        void* data_7 = DynObj_UpdateDynTree_4(context);
        void* data_8 = DynObj_UpdateDynTree_4(param_2[1]);
        double item_3c_1 = *(data_7 + 0x10) - *(data_8 + 0x10);
        Sys_FreeMemory_11(&item_4c);
        int32_t dest_4 = 0xe;
        long double fpu_val_7_16 = item_3c_1 * item_24_1 + item_44_1 * item_2c_1 + item_4c * item_34;
        long double f0_1 = 0.0;
        fpu_val_7_16 - f0_1;

        if (*(&((fpu_val_7_16 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_16, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_16 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
            dest_4 = 0xd;

        item_64 = context + 0x254;
        *(context + 0x2e8) = dest_4;
        FX_FragmentSimulate_14(item_64, dest_4);
        long double fpu_val_7_18 = (context + 0x254)[dest_4 * 2 + 4] * *param_2;
        (context + 0x254)[dest_4 * 2 + 3] = fpu_val_7_18 + (context + 0x254)[dest_4 * 2 + 3];
        *(context + 0x254) = fpu_val_7_18 + *(context + 0x254);
        int32_t context_2 = *(context + 0x2f4);
        long double fpu_val_7_19 = fpu_val_7_18 + *(context + 0xd08);
        *(context + 0xd08) = fpu_val_7_19;
        long double fpu_val_6_9 = *(context + 0x254);
        long double f1_1 = *(context + 0x258);
        fpu_val_6_9 - f1_1;

        if (!(*(&((fpu_val_6_9 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_9, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_6_9 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            *(context + 0xd1c) = 2;
            memcpy(context + 0xd20, &item_4c, 0x18);
            context_2 |= 0x20000;
            *(context + 0xcf5) = 1;
        }
        else
        {
            long double f2_1 = *(context + 0xd04);
            fpu_val_7_19 - f2_1;

            if (!(*(&((fpu_val_7_19 < f2_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_19, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            {
                context_2 |= 0x10000;
                *(context + 0xd08) = 0;
            }

            int32_t item_60_3 = 3;
            item_64 = "ai_hit_";
            AI_MoveToNode_21(context, item_64, item_60_3);
        }

        *(context + 0x2f4) = context_2;
    }

    int32_t item_1c = 0xf;
    int32_t item_18 = 1;
    int32_t data_13 = param_2[1];
    int32_t item_8 = data_13;
    int32_t item_4 = data_13;
    int32_t item_14 = 0;
    double* item_c = &item_34;
    return AI_TakeCover(*(context + 0x800), &item_1c);
}
