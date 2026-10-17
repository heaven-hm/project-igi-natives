// Original IGI.EXE function: Muzzle_Eye (VA 0x00462E50; static CFG gate PASS, CFG score 1.000).
#include "Muzzle_Eye.h"
void* Muzzle_Eye(void* context)

{
    void* dest_val = *(context + 0x4ec);
    *(context + 0x4d3) = 0;
    void* result;
    int32_t entity_val;
    result = Table_GetAt(context + 0x4c4, 0);

    if (result)
    {
        int32_t temp_val;
        void* data_1 = HumanPlayer_LoadParameters_13(result, temp_val, entity_val, result);
        double item_40;
        AI_FireWeapon_23(&item_40, *(context + 0x4ec));
        void item_28;
        AI_TakeCover_23(&item_28, *(context + 0x4ec));
        float item_48_1 = 0.0f;
        float item_44_1 = 0.0f;
        float data_3 = *(context + 0x688);
        item_40 = 0.0f + item_40;
        int32_t entity_2 = *(context + 0x68c);
        float item_88 = data_3;
        int32_t item_84_1 = entity_2;
        double item_38;
        double item_38_1 = item_48_1 + item_38;
        int32_t item_80_1 = *(context + 0x690);
        double item_30;
        double item_30_1 = item_44_1 + item_30;

        if (*(data_1 + 0x610) == 4)
        {
            long double fpu_val_7_7 = *(context + 0x4e0);
            long double fpu_val_6_1 = 3.0;
            fpu_val_6_1 - fpu_val_7_7;

            if (*(&((fpu_val_6_1 < fpu_val_7_7 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_1, fpu_val_7_7) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == fpu_val_7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_2 = 60.0;
                fpu_val_6_2 - fpu_val_7_7;

                if (*(&((fpu_val_6_2 < fpu_val_7_7 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_2, fpu_val_7_7) ? 1 : 0) << 0xa
                        | (fpu_val_6_2 == fpu_val_7_7 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    fpu_val_7_7 = 60.0;
            }
            else
                fpu_val_7_7 = 3.0;

            long double fpu_val_7_13 = (Camera_ApplyPostProcess_5(0.69999999999999996, fpu_val_7_7 * 50.0)
                + fpu_val_7_7 * 0.100000001f) * *(data_1 + 0x660);
            float item_24;
            item_88 = fpu_val_7_13 * item_24;
            float item_18;
            float item_84_2 = fpu_val_7_13 * item_18;
            float item_c;
            float item_80_2 = fpu_val_7_13 * item_c;
        }

        double* item_78_1 = &item_40;
        int32_t data_6 = *(context + 0x4d0);
        char item_7c = *(context + 0x4d1);
        void* item_74_1 = &item_28;
        int32_t item_68_1 = data_6;
        float* item_70_1 = &item_88;
        char item_7b_1 = 0;
        int32_t item_6c_1 = 0;
        int32_t item_64_1 = *(context + 0x4d2);
        int32_t item_60_1 = *(dest_val + 0x1ec);
        float item_5c_1 = 0.0f;
        float item_58_1 = 0.0f;
        void* item_50_1 = context;
        int32_t item_54_1 = *(context + 0x4d4);
        uint32_t data_9 = AI_AlertAllies_17();
        int32_t temp_5 = 0;
        temp_5 = *(result + 0x1c);
        result = (*(((data_9 * 0x180 + temp_5) << 2) + &g_a96ae0))(result, &item_7c);
        *(context + 0x4d1) = 0;
        *(context + 0x4d2) = 0;
        *(context + 0x4d3) = item_7b_1;
        *(dest_val + 0x128) = (item_5c_1 + *(dest_val + 0x128)) * 0.899999976f;
        *(dest_val + 0x134) = (item_58_1 + *(dest_val + 0x134)) * 0.899999976f;
    }

    return result;
}
