// Original IGI.EXE function: Light_SetLightColor_8 (VA 0x0052BCC0; static CFG gate FAIL, CFG score 0.833).
#include "Light_SetLightColor_8.h"
int32_t Light_SetLightColor_8(int32_t context, int32_t param_2, void* param_3)

{
    long double fpu7 = param_2;
    double item_a0 = -(fpu7);
    double item_bc;
    memcpy(&item_bc, param_3, 0x18);
    double item_c8 = fpu7 * 0.5;
    item_bc = item_bc - item_c8;
    int32_t item_d0 = 0;
    int32_t item_94 = context;
    double item_b4;
    double item_b4_1 = item_b4 - item_c8;
    int32_t data_2;
    int32_t temp_val;
    temp_val = HIGHD(param_2);
    data_2 = LOWD(param_2);
    double item_ac = item_c8 + item_ac;
    int32_t context_1 = (data_2 + (temp_val & 0xfff)) >> 0xc;

    if (context_1 > 0)
    {
        bool flag_1_1;

        do
        {
            int32_t item_cc_1 = 0;

            if (context_1 > 0)
            {
                bool flag_2_1;

                do
                {
                    void item_78;
                    DynObj_UpdateDynTree_10(g_a44344, &item_78, &item_bc, 1, &item_a0, 0xff, nullptr,
                        0x80000000);
                    int32_t item_20;

                    if (!item_20)
                        return 2;

                    long double fpu_val_7_9 = -(item_a0);
                    double item_18;
                    long double f0_1 = item_18;
                    fpu_val_7_9 - f0_1;

                    if (*(&((fpu_val_7_9 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
                        return 2;

                    int32_t temp_2 = g_a44344;
                    double item_90;
                    void item_70;
                    memcpy(&item_90, &item_70, 0x18);
                    double item_60;
                    double item_80_1 = item_60 + 40.960000000000001;
                    void* item_a4;
                    void item_98;
                    DynObj_RemoveSymbol_9(temp_2, &item_a4, &item_90, 1, 0xc, &item_98, 0xffffffff);
                    long double fpu_val_7_12 = *(item_a4 + 0xc);
                    long double f1_1 = 0.0f;
                    fpu_val_7_12 - f1_1;

                    if (*(&((fpu_val_7_12 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_12, f1_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_12 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        return 2;

                    flag_2_1 = item_cc_1 + 1 < context_1;
                    item_cc_1 += 1;
                    item_b4_1 = item_b4_1 + 4096.0;
                } while (flag_2_1);
            }

            flag_1_1 = item_d0 + 1 < context_1;
            item_d0 += 1;
            item_b4_1 = *(param_3 + 8) - item_c8;
            item_bc = item_bc + 4096.0;
        } while (flag_1_1);
    }

    return 1;
}
