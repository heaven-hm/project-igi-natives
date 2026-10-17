// IGI native provenance: EditorMagicObj_LoadParameters - 0x0051B540 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0051B540-EditorMagicObj_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditorMagicObj_LoadParameters.h"
int32_t EditorMagicObj_LoadParameters(void* context, void* param_2)

{
    float* entity_val = *(context + 0x138);
    int32_t item_7c = 0;
    int32_t dest_val = entity_val[1];
    int32_t source_val = entity_val[2];

    if (source_val != dest_val)
        item_7c = 0 % (source_val - dest_val) + dest_val;

    float* item_8c = entity_val;
    float item_50;
    Sys_DispatchOpcode_12(&item_50, item_7c * *entity_val);
    float item_44;
    float item_38;
    float item_78 = item_38 * *(context + 0x110) + item_50 * *(context + 0x108) + item_44 * *(context + 0x10c);
    float item_4c;
    float item_40;
    float item_34;
    float item_74 = item_34 * *(context + 0x110) + item_4c * *(context + 0x108) + item_40 * *(context + 0x10c);
    float item_48;
    float item_3c;
    float item_30;
    float item_70 = item_30 * *(context + 0x110) + item_48 * *(context + 0x108) + item_3c * *(context + 0x10c);
    float item_6c = item_38 * *(context + 0x11c) + item_50 * *(context + 0x114) + item_44 * *(context + 0x118);
    float item_68 = item_34 * *(context + 0x11c) + item_4c * *(context + 0x114) + item_40 * *(context + 0x118);
    float item_64 = item_30 * *(context + 0x11c) + item_48 * *(context + 0x114) + item_3c * *(context + 0x118);
    float item_60 = item_38 * *(context + 0x128) + item_50 * *(context + 0x120) + item_44 * *(context + 0x124);
    int32_t item_2c;
    int32_t temp_5 = *(context + 0x12c) + item_2c + 1;
    int32_t item_54 = temp_5;
    float item_5c = item_34 * *(context + 0x128) + item_4c * *(context + 0x120) + item_40 * *(context + 0x124);
    float item_58 = item_30 * *(context + 0x128) + item_48 * *(context + 0x120) + item_3c * *(context + 0x124);
    long double fpu_val_7_39 = item_60 * *(param_2 + 0x20);
    long double fpu_val_6_37 = item_78 * *(param_2 + 0x18);
    memcpy(&item_50, &item_78, 0x28);
    float item_28 = fpu_val_7_39 + fpu_val_6_37 + item_6c * *(param_2 + 0x1c);
    float item_24 = item_5c * *(param_2 + 0x20) + item_74 * *(param_2 + 0x18) + item_68 * *(param_2 + 0x1c);
    float item_20 = item_58 * *(param_2 + 0x20) + item_70 * *(param_2 + 0x18) + item_64 * *(param_2 + 0x1c);
    float item_1c = item_6c * *(param_2 + 0x28) + item_60 * *(param_2 + 0x2c) + item_78 * *(param_2 + 0x24);
    float item_18 = item_68 * *(param_2 + 0x28) + item_5c * *(param_2 + 0x2c) + item_74 * *(param_2 + 0x24);
    float item_14 = item_64 * *(param_2 + 0x28) + item_58 * *(param_2 + 0x2c) + item_70 * *(param_2 + 0x24);
    float item_10 = item_60 * *(param_2 + 0x38) + item_78 * *(param_2 + 0x30) + item_6c * *(param_2 + 0x34);
    float item_c = item_5c * *(param_2 + 0x38) + item_74 * *(param_2 + 0x30) + item_68 * *(param_2 + 0x34);
    int32_t item_4 = *(param_2 + 0x3c) + temp_5 + 1;
    float item_8 = item_58 * *(param_2 + 0x38) + item_70 * *(param_2 + 0x30) + item_64 * *(param_2 + 0x34);
    memcpy(context + 0x70, &item_28, 0x28);
    return (*((DynObj_LookupHashItem_5() << 2) + &g_a982e0))(context, 0);
}
