// IGI native provenance: AI_FireWeapon_30 - 0x0046EC90 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0046EC90-AI_FireWeapon_30.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AI_FireWeapon_30.h"
void* AI_FireWeapon_30(double* context, float* param_2)

{
    void* result = Table_GetAt(context + 0x1c4, 0);

    if (result)
    {
        float item_94;
        Sys_DispatchOpcode_12(&item_94, context[0x38]);
        float item_88;
        float item_7c;
        float item_6c = item_7c * context[0x22] + item_94 * context[0x21] + item_88 * *(context + 0x10c);
        float item_90;
        float item_84;
        float item_78;
        float item_68_1 = item_78 * context[0x22] + item_90 * context[0x21] + item_84 * *(context + 0x10c);
        float item_8c;
        float item_80;
        float item_74;
        float item_64_1 = item_74 * context[0x22] + item_8c * context[0x21] + item_80 * *(context + 0x10c);
        float item_60_1 = item_7c * *(context + 0x11c) + item_94 * *(context + 0x114) + item_88 * context[0x23];
        float item_5c_1 = item_78 * *(context + 0x11c) + item_90 * *(context + 0x114) + item_84 * context[0x23];
        float item_58_1 = item_74 * *(context + 0x11c) + item_8c * *(context + 0x114) + item_80 * context[0x23];
        float item_54_1 = item_7c * context[0x25] + item_94 * context[0x24] + item_88 * *(context + 0x124);
        int32_t item_70;
        int32_t data_2 = *(context + 0x12c) + item_70 + 1;
        int32_t item_48_1 = data_2;
        float item_50_1 = item_78 * context[0x25] + item_90 * context[0x24] + item_84 * *(context + 0x124);
        float item_4c_1 = item_74 * context[0x25] + item_8c * context[0x24] + item_80 * *(context + 0x124);
        long double fpu_val_7_38 = item_54_1 * param_2[2];
        long double fpu_val_6_38 = item_60_1 * param_2[1];
        memcpy(&item_94, &item_6c, 0x28);
        float item_44 = fpu_val_7_38 + fpu_val_6_38 + item_6c * *param_2;
        float item_40_1 = item_50_1 * param_2[2] + item_5c_1 * param_2[1] + item_68_1 * *param_2;
        float item_3c_1 = item_4c_1 * param_2[2] + item_58_1 * param_2[1] + item_64_1 * *param_2;
        float item_38_1 = item_6c * param_2[3] + item_54_1 * param_2[5] + item_60_1 * param_2[4];
        float item_34_1 = item_68_1 * param_2[3] + item_50_1 * param_2[5] + item_5c_1 * param_2[4];
        int32_t item_b0_1 = 1;
        int32_t item_20_1 = param_2[9] + data_2 + 1;
        float item_30 = item_64_1 * param_2[3] + item_4c_1 * param_2[5] + item_58_1 * param_2[4];
        float item_2c_1 = item_6c * param_2[6] + item_54_1 * param_2[8] + item_60_1 * param_2[7];
        float item_28_1 = item_68_1 * param_2[6] + item_50_1 * param_2[8] + item_5c_1 * param_2[7];
        float item_24_1 = item_64_1 * param_2[6] + item_4c_1 * param_2[8] + item_58_1 * param_2[7];
        memcpy(&context[0xe], &item_44, 0x28);
        double item_18;
        WeaponType_UpdateAnim(&item_18, context, item_b0_1);
        float temp_2 = *(context + 0x1e4);
        float data_4 = *(context + 0x1bc);
        item_18 = item_18 + context[4];
        double item_10;
        double item_10_1 = item_10 + context[5];
        double item_8;
        double item_8_1 = item_8 + context[6];
        Sys_ReadFileBlock_12(&item_94, data_4, temp_2, context[0x38] + 3.14159274f);
        long double fpu_val_7_84 =
            item_7c * context[0x22] + item_94 * context[0x21] + item_88 * *(context + 0x10c);
        int32_t data_6 = *(context + 0x12c) + item_70 + 1;
        float item_68_2 = item_78 * context[0x22] + item_90 * context[0x21] + item_84 * *(context + 0x10c);
        float item_64_2 = item_74 * context[0x22] + item_8c * context[0x21] + item_80 * *(context + 0x10c);
        long double fpu_val_6_88 =
            item_7c * *(context + 0x11c) + item_94 * *(context + 0x114) + item_88 * context[0x23];
        float item_5c_2 = item_78 * *(context + 0x11c) + item_90 * *(context + 0x114) + item_84 * context[0x23];
        float item_58_2 = item_74 * *(context + 0x11c) + item_8c * *(context + 0x114) + item_80 * context[0x23];
        long double fpu_val_5_24 =
            item_7c * context[0x25] + item_94 * context[0x24] + item_88 * *(context + 0x124);
        float item_50_2 = item_78 * context[0x25] + item_90 * context[0x24] + item_84 * *(context + 0x124);
        float item_4c_2 = item_74 * context[0x25] + item_8c * context[0x24] + item_80 * *(context + 0x124);
        item_44 = fpu_val_7_84 * *param_2 + fpu_val_5_24 * param_2[2] + fpu_val_6_88 * param_2[1];
        float item_40_2 = item_68_2 * *param_2 + item_50_2 * param_2[2] + item_5c_2 * param_2[1];
        float item_3c_2 = item_64_2 * *param_2 + item_4c_2 * param_2[2] + item_58_2 * param_2[1];
        float item_38_2 = fpu_val_5_24 * param_2[5] + fpu_val_6_88 * param_2[4] + fpu_val_7_84 * param_2[3];
        float item_34_2 = item_50_2 * param_2[5] + item_5c_2 * param_2[4] + item_68_2 * param_2[3];
        item_30 = item_4c_2 * param_2[5] + item_58_2 * param_2[4] + item_64_2 * param_2[3];
        float item_2c_2 = fpu_val_7_84 * param_2[6] + fpu_val_5_24 * param_2[8] + fpu_val_6_88 * param_2[7];
        float item_28_2 = item_68_2 * param_2[6] + item_50_2 * param_2[8] + item_5c_2 * param_2[7];
        int32_t item_20_2 = param_2[9] + data_6 + 1;
        float item_24_2 = item_64_2 * param_2[6] + item_4c_2 * param_2[8] + item_58_2 * param_2[7];
        memcpy(&item_94, &item_44, 0x28);
        float* item_b8_2 = &item_94;
        double* item_bc = &item_18;
        result = Script_FormatString_12(result, item_bc, item_b8_2);
        memcpy(&context[0x2f], &item_18, 0x18);
        memcpy(&context[0x32], &item_94, 0x28);
    }

    return result;
}
