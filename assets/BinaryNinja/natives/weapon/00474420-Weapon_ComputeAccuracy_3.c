// IGI native provenance: Weapon_ComputeAccuracy_3 - 0x00474420 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00474420-Weapon_ComputeAccuracy_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ComputeAccuracy_3.h"
void* Weapon_ComputeAccuracy_3(double* context)

{
    void* result = Table_GetAt(context + 0x20c, 0);
    void* result_1 = result;

    if (result)
    {
        Sys_DispatchOpcode_12(&context[0xe], *(context + 0x204));
        long double fpu_val_7_4 =
            context[0x21] * context[0xe] + context[0x22] * context[0x11] + *(context + 0x10c) * *(context + 0x7c);
        float item_28 = fpu_val_7_4;
        long double fpu_val_7_8 = context[0x22] * *(context + 0x8c) + *(context + 0x10c) * context[0x10]
            + context[0x21] * *(context + 0x74);
        float item_24_1 = fpu_val_7_8;
        long double fpu_val_7_12 =
            context[0x22] * context[0x12] + *(context + 0x10c) * *(context + 0x84) + context[0x21] * context[0xf];
        float item_20_1 = fpu_val_7_12;
        long double fpu_val_7_16 = context[0x11] * *(context + 0x11c) + context[0x23] * *(context + 0x7c)
            + context[0xe] * *(context + 0x114);
        float item_1c_1 = fpu_val_7_16;
        long double fpu_val_7_20 = context[0x23] * context[0x10] + *(context + 0x11c) * *(context + 0x8c)
            + *(context + 0x114) * *(context + 0x74);
        float item_18_1 = fpu_val_7_20;
        long double fpu_val_7_24 = context[0x23] * *(context + 0x84) + *(context + 0x11c) * context[0x12]
            + *(context + 0x114) * context[0xf];
        float item_14_1 = fpu_val_7_24;
        long double fpu_val_7_28 =
            *(context + 0x124) * *(context + 0x7c) + context[0x25] * context[0x11] + context[0x24] * context[0xe];
        float item_10_1 = fpu_val_7_28;
        int32_t* data_2 = *(context + 0x6c);
        int32_t item_4_1 = *(context + 0x12c) + *(context + 0x94) + 1;
        long double fpu_val_7_32 = context[0x25] * *(context + 0x8c) + context[0x24] * *(context + 0x74)
            + context[0x10] * *(context + 0x124);
        float item_c_1 = fpu_val_7_32;
        long double fpu_val_7_36 =
            context[0x25] * context[0x12] + context[0x24] * context[0xf] + *(context + 0x84) * *(context + 0x124);
        float item_8_1 = fpu_val_7_36;
        memcpy(&context[0xe], &item_28, 0x28);
        int32_t data_4;

        if (!data_2 || *(*(*(*data_2 + 0xc) + 0xc) + 0x7c) >= 1)
            data_4 = 1;
        else
            data_4 = 0;

        double item_68;
        WeaponType_UpdateAnim(&item_68, context, data_4);
        float data_5 = context[0x40];
        item_68 = item_68 + context[4];
        double item_60;
        double item_60_1 = item_60 + context[5];
        double item_58;
        double item_58_1 = item_58 + context[6];
        float item_50;
        Sys_ReadFileBlock_12(&item_50, data_5, 0.0f, 3.14159274f);
        float item_44;
        float item_38;
        item_28 = item_50 * context[0xe] + item_38 * context[0xf] + item_44 * *(context + 0x74);
        float item_4c;
        float item_40;
        float item_34;
        float item_24_2 = item_4c * context[0xe] + item_34 * context[0xf] + item_40 * *(context + 0x74);
        float item_48;
        float item_3c;
        float item_30;
        float item_20_2 = item_48 * context[0xe] + item_30 * context[0xf] + item_3c * *(context + 0x74);
        float item_1c_2 = item_50 * *(context + 0x7c) + item_38 * *(context + 0x84) + item_44 * context[0x10];
        float item_18_2 = item_4c * *(context + 0x7c) + item_34 * *(context + 0x84) + item_40 * context[0x10];
        float item_14_2 = item_48 * *(context + 0x7c) + item_30 * *(context + 0x84) + item_3c * context[0x10];
        int32_t item_2c;
        int32_t item_4_2 = *(context + 0x94) + item_2c + 1;
        float item_10_2 = item_50 * context[0x11] + item_38 * context[0x12] + item_44 * *(context + 0x8c);
        float item_c_2 = item_4c * context[0x11] + item_34 * context[0x12] + item_40 * *(context + 0x8c);
        float item_8_2 = item_48 * context[0x11] + item_30 * context[0x12] + item_3c * *(context + 0x8c);
        memcpy(&item_50, &item_28, 0x28);
        result = Script_FormatString_12(result_1, &item_68, &item_50);
        memcpy(&context[0x2e], &item_68, 0x18);
        void* context_1 = context[0x41];
        memcpy(&context[0x31], &item_50, 0x28);

        if (context_1)
        {
            float item_70_1 = item_3c * 819.200012f - item_40 * 2048.0f;
            float item_6c_1 = item_30 * 819.200012f - item_34 * 2048.0f;
            item_68 = item_48 * 819.200012f - item_4c * 2048.0f + item_68;
            double item_60_2 = item_70_1 + item_60_1;
            double item_58_2 = item_6c_1 + item_58_1;
            return AI_AlertAllies_23(*(context_1 + 0x4ec), &item_68, &item_50);
        }
    }

    return result;
}
