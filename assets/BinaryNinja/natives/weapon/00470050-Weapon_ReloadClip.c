// IGI native provenance: Weapon_ReloadClip - 0x00470050 - CFG score 85.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 00470050-Weapon_ReloadClip.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Weapon_ReloadClip.h"
int32_t Weapon_ReloadClip(double* context)

{
    void* data_1 = Table_GetAt(context + 0x1c4, 0);
    double item_18;
    WeaponType_UpdateAnim(&item_18, context, 1);
    float temp_val = context[0x38];
    float data_2 = *(context + 0x1bc);
    item_18 = item_18 + context[4];
    double item_10;
    double item_10_1 = item_10 + context[5];
    double item_8;
    double item_8_1 = item_8 + context[6];
    float item_94;
    Sys_ReadFileBlock_12(&item_94, data_2, 0.0f, temp_val);
    void* data_3 = context[0x26];
    float item_88;
    float item_7c;
    float item_44 = item_88 * *(data_3 + 0x74) + item_7c * *(data_3 + 0x78) + item_94 * *(data_3 + 0x70);
    float item_90;
    float item_84;
    float item_78;
    float item_40 = item_84 * *(data_3 + 0x74) + item_78 * *(data_3 + 0x78) + item_90 * *(data_3 + 0x70);
    float item_8c;
    float item_80;
    float item_74;
    float item_3c = item_80 * *(data_3 + 0x74) + item_74 * *(data_3 + 0x78) + item_8c * *(data_3 + 0x70);
    float item_38 = item_7c * *(data_3 + 0x84) + item_94 * *(data_3 + 0x7c) + item_88 * *(data_3 + 0x80);
    int32_t temp_1 = *(data_3 + 0x94);
    float item_34 = item_78 * *(data_3 + 0x84) + item_90 * *(data_3 + 0x7c) + item_84 * *(data_3 + 0x80);
    float item_30 = item_74 * *(data_3 + 0x84) + item_8c * *(data_3 + 0x7c) + item_80 * *(data_3 + 0x80);
    float item_2c = item_88 * *(data_3 + 0x8c) + item_7c * *(data_3 + 0x90) + item_94 * *(data_3 + 0x88);
    float item_28 = item_84 * *(data_3 + 0x8c) + item_78 * *(data_3 + 0x90) + item_90 * *(data_3 + 0x88);
    int32_t item_70;
    int32_t item_20 = temp_1 + item_70 + 1;
    float item_24 = item_80 * *(data_3 + 0x8c) + item_74 * *(data_3 + 0x90) + item_8c * *(data_3 + 0x88);
    long double fpu_val_7_42 = *(context + 0x1e4);
    float item_6c;
    memcpy(&item_6c, &item_44, 0x28);
    long double f0 = 0.0f;
    fpu_val_7_42 - f0;

    if (!(*(&((fpu_val_7_42 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_42, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_42 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        Sys_ExecuteBytecode_12(&item_94, fpu_val_7_42);
        float item_68;
        float item_64;
        item_44 = item_64 * item_7c + item_68 * item_88 + item_6c * item_94;
        float item_40_1 = item_64 * item_78 + item_68 * item_84 + item_6c * item_90;
        float item_3c_1 = item_64 * item_74 + item_68 * item_80 + item_6c * item_8c;
        float item_60;
        float item_5c;
        float item_58;
        float item_38_1 = item_58 * item_7c + item_5c * item_88 + item_60 * item_94;
        float item_34_1 = item_58 * item_78 + item_5c * item_84 + item_60 * item_90;
        item_30 = item_58 * item_74 + item_5c * item_80 + item_60 * item_8c;
        float item_54;
        float item_50;
        float item_4c;
        float item_2c_1 = item_4c * item_7c + item_50 * item_88 + item_54 * item_94;
        int32_t item_48;
        int32_t item_20_1 = item_48 + item_70 + 1;
        float item_28_1 = item_4c * item_78 + item_50 * item_84 + item_54 * item_90;
        float item_24_1 = item_4c * item_74 + item_50 * item_80 + item_54 * item_8c;
        memcpy(&item_6c, &item_44, 0x28);
    }

    int32_t result = Script_FormatString_12(data_1, &item_18, &item_6c);
    memcpy(&context[0x2f], &item_18, 0x18);
    memcpy(&context[0x32], &item_6c, 0x28);
    return result;
}
