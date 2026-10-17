// Original IGI.EXE function: HumanSoldierRPG_OnEvent (VA 0x00457620; static CFG gate PASS, CFG score 0.970).
#include "HumanSoldierRPG_OnEvent.h"
int32_t HumanSoldierRPG_OnEvent(void* context, float* param_2)

{
    void* flagP = context;
    void* data_val = *(flagP + 0x800);
    double item_34;

    if (!data_val || !*(data_val + 0x3abc))
    {
        item_34 = *(flagP + 0x7c) * 4096.0;
        double item_2c_1 = *(flagP + 0x88) * 4096.0;
        double item_24_1 = *(flagP + 0x94) * 4096.0;
        double* data_2 = DynObj_UpdateDynTree_4(flagP);
        char* item_64 = param_2[1];
        double* data_4 = DynObj_UpdateDynTree_4(item_64);
        double item_4c = *data_2 - *data_4;
        void* data_5 = DynObj_UpdateDynTree_4(flagP);
        void* data_6 = DynObj_UpdateDynTree_4(param_2[1]);
        double item_44_1 = *(data_5 + 8) - *(data_6 + 8);
        void* data_7 = DynObj_UpdateDynTree_4(flagP);
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

        item_64 = flagP + 0x254;
        *(flagP + 0x2e8) = dest_4;
        FX_FragmentSimulate_14(item_64, dest_4);
        long double fpu_val_7_18 = (flagP + 0x254)[dest_4 * 2 + 4] * *param_2;
        (flagP + 0x254)[dest_4 * 2 + 3] = fpu_val_7_18 + (flagP + 0x254)[dest_4 * 2 + 3];
        long double fpu_val_7_19 = fpu_val_7_18 + *(flagP + 0x254);
        *(flagP + 0x254) = fpu_val_7_19;
        long double f1_1 = *(flagP + 0x258);
        fpu_val_7_19 - f1_1;
        void* dest_5 = *(flagP + 0x2f4);
        void* dest_6;

        if (!(*(&((fpu_val_7_19 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_19 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            memcpy(flagP + 0xd10, &item_4c, 0x18);
            void* data_14 = dest_5 | 0x20000;
            *(flagP + 0xd08) = 2;
            context = data_14;
            *(flagP + 0xcf5) = 1;
            dest_6 = data_14;
        }
        else
        {
            int32_t item_60_3 = 3;
            item_64 = "ai_hit_";
            dest_6 = dest_5 | 0x10000;
            AI_MoveToNode_21(flagP, item_64, item_60_3);
        }

        *(flagP + 0x2f4) = dest_6;
    }

    int32_t data_15 = param_2[1];
    int32_t item_8 = data_15;
    int32_t item_4 = data_15;
    void* data_16 = *(flagP + 0x800);
    int32_t item_1c;
    int32_t* saved_target = &item_1c;
    item_1c = 0xf;
    int32_t item_18 = 1;
    int32_t item_14 = 0;
    double* item_c = &item_34;
    return AI_TakeCover(data_16, saved_target);
}
