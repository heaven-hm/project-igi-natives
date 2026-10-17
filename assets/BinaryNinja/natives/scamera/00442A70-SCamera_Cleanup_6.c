// Original IGI.EXE function: SCamera_Cleanup_6 (VA 0x00442A70; static CFG gate PASS, CFG score 1.000).
#include "SCamera_Cleanup_6.h"
int32_t SCamera_Cleanup_6(float context)

{
    float source_val = context;
    void* dest_val = *(source_val + 0x25d0);

    if (*(dest_val + 0x168))
    {
        double item_18;
        WeaponType_UpdateAnim(&item_18, source_val, 0);
        item_18 = item_18 + *(source_val + 0x20);
        double item_10;
        double item_10_1 = item_10 + *(source_val + 0x28);
        double item_8;
        double item_8_1 = item_8 + *(source_val + 0x30);
        float item_38;
        Display_RestoreDevice_15(&item_38, &context, &item_18);
        long double fpu_val_7_7 = context;
        long double f0_1 = 0.0f;
        fpu_val_7_7 - f0_1;
        int16_t data_2 = (fpu_val_7_7 < f0_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_7, f0_1) ? 1 : 0) << 0xa | (fpu_val_7_7 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&data_2 + 1) & 0x41))
        {
            data_2 = *(dest_val + 0x169);
            float item_50_1;
            float item_4c_1;
            float item_40;
            float item_3c_1;

            if (data_2 || *(dest_val + 0x16c))
            {
                item_4c_1 = 128.0f;
                item_50_1 = 0.0f;

                if (!*(source_val + 0x25d8))
                {
                    item_40 = 512.0f;
                    item_3c_1 = 512.0f;
                }
                else
                {
                    item_40 = 1433.59998f;
                    item_3c_1 = 1433.59998f;
                }
            }
            else
            {
                item_4c_1 = 0.0f;
                item_50_1 = 128.0f;

                if (!*(source_val + 0x25d8))
                {
                    item_40 = 307.200012f;
                    item_3c_1 = 307.200012f;
                    item_4c_1 = 0.0f;
                    item_50_1 = 64.0f;
                }
                else
                {
                    item_40 = 819.200012f;
                    item_3c_1 = 819.200012f;
                }
            }

            Display_SetGammaRamp_15(&item_40, &item_40, context);
            long double fpu_val_7_9 = item_38 - item_40;
            float item_34;
            long double fpu_val_6_2 = item_34 - item_3c_1;
            long double fpu_val_5_2 = item_38 + item_40;
            long double fpu_val_7_11 = item_34 + item_3c_1;
            Qsprite_Register4Az(g_57c17c + 0x18, fpu_val_7_9, fpu_val_6_2, fpu_val_5_2, fpu_val_6_2,
                fpu_val_7_9, fpu_val_7_11, fpu_val_5_2, fpu_val_7_11, item_4c_1, item_50_1, 0.0f, context, 0x3f000000,
                0, 0x1040008, 0);
        }
    }

    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(source_val, 0);
}
