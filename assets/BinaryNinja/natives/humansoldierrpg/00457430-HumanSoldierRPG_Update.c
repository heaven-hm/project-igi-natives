// Original IGI.EXE function: HumanSoldierRPG_Update (VA 0x00457430; static CFG gate PASS, CFG score 1.000).
#include "HumanSoldierRPG_Update.h"
uint32_t HumanSoldierRPG_Update(void* context, float param_2)

{
    void* data_val = *(context + 0x800);

    if (*(context + 0xcf6) && (!data_val || !*(data_val + 0x3abc)))
    {
        double item_30;
        int32_t entity_1 = AI_FireWeapon_23(&item_30, *(context + 0x4ec));
        double* data_2 = *(param_2 + 4);
        double item_18 = *data_2 - item_30;
        double item_28;
        double item_10_1 = data_2[1] - item_28;
        double item_20;
        double item_8_1 = data_2[2] - item_20;
        long double fpu_val_7_8 = Sys_OpenFileStream_11(&item_18) - *(param_2 + 0xc) * 3.0f;
        long double f0_1 = 0.0f;
        fpu_val_7_8 - f0_1;
        long double fpu_val_7_10;

        if (!(*(&((fpu_val_7_8 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            fpu_val_7_10 = 1.0f - fpu_val_7_8 / (*(param_2 + 0xc) * 6.0f);
            long double f1_1 = 0.0f;
            fpu_val_7_10 - f1_1;

            if (!(*(&((fpu_val_7_10 < f1_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_10, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_10 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f2_1 = 0.0f;
                fpu_val_7_10 - f2_1;

                if (!(*(&((fpu_val_7_10 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_10, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_10 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_457505;
            }
        }
        else
        {
            fpu_val_7_10 = 1.0f;
        label_457505:
            int32_t item_48_2 = entity_1;
            int32_t item_4c_2 = entity_1;
            AI_CheckSector_23(*(context + 0x4ec), fpu_val_7_10 * 204.800003f, fpu_val_7_10 * 0.0261799395f,
                *(param_2 + 0x14));
        }
        *(context + 0x2e8) = 0xd;
        int32_t item_44_3 = 1;
        int32_t item_48_5 = FX_FragmentSimulate_14(context + 0x254, 0xd);
        void* item_50_2 = context;
        long double fp0_2;
        fp0_2 = Level_CheckQTaskID_5(param_2, context + 0x20, *(context + 0xa0) * 0.333333343f);
        long double f3_1 = 0.0f;
        fp0_2 - f3_1;
        data_val = (fp0_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f3_1) ? 1 : 0) << 0xa
            | (fp0_2 == f3_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&data_val + 1) & 0x40))
        {
            long double fpu_val_7_17 = fp0_2 * *(context + 0x2cc);
            *(context + 0x2c8) = fpu_val_7_17 + *(context + 0x2c8);
            long double fpu_val_7_18 = fpu_val_7_17 + *(context + 0x254);
            *(context + 0x254) = fpu_val_7_18;
            long double f4 = *(context + 0x258);
            fpu_val_7_18 - f4;
            int32_t entity_4 = *(context + 0x2f4);

            if (*(&((fpu_val_7_18 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_18, f4) ? 1 : 0) << 0xa
                | (fpu_val_7_18 == f4 ? 1 : 0) << 0xe) + 1) & 1)
            {
                uint32_t data_7 = AI_MoveToNode_21(context, "ai_xplhit_", 3);
                *(context + 0x2f4) = entity_4 | 0x10000;
                return data_7;
            }

            long double fpu_val_7_19 = *(context + 0x20);
            *(context + 0xd08) = 0;
            *(context + 0xd10) = fpu_val_7_19 - **(param_2 + 4);
            void* data_8 = *(param_2 + 4);
            *(context + 0xd18) = *(context + 0x28) - *(data_8 + 8);
            long double fpu_val_7_24 = *(context + 0x30) - *(*(param_2 + 4) + 0x10);
            *(context + 0xcf5) = 1;
            *(context + 0xd20) = fpu_val_7_24;
            *(context + 0x2f4) = entity_4 | 0x20000;
            return data_8;
        }
    }

    return data_val;
}
