// IGI native provenance: Vehicle_UpdateCockpit_4 - 0x00434F50 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00434F50-Vehicle_UpdateCockpit_4.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_UpdateCockpit_4.h"
int32_t Vehicle_UpdateCockpit_4(void* context, float* param_2)

{
    float item_50;
    Sys_CloseFileStream_12(&item_50, *(context + 0x13c));
    float item_44;
    float item_38;
    long double fpu_val_7_3 =
        item_38 * *(context + 0x110) + item_44 * *(context + 0x10c) + item_50 * *(context + 0x108);
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_34 * *(context + 0x110) + item_40 * *(context + 0x10c) + item_4c * *(context + 0x108);
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_30 * *(context + 0x110) + item_3c * *(context + 0x10c) + item_48 * *(context + 0x108);
    long double fpu_val_6_15 =
        item_50 * *(context + 0x114) + item_38 * *(context + 0x11c) + item_44 * *(context + 0x118);
    float item_18 = item_4c * *(context + 0x114) + item_34 * *(context + 0x11c) + item_40 * *(context + 0x118);
    float item_14 = item_48 * *(context + 0x114) + item_30 * *(context + 0x11c) + item_3c * *(context + 0x118);
    long double fpu_val_5_23 =
        item_50 * *(context + 0x120) + item_38 * *(context + 0x128) + item_44 * *(context + 0x124);
    int32_t item_2c;
    int32_t entity_val = *(context + 0x12c) + item_2c + 1;
    float item_c = item_4c * *(context + 0x120) + item_34 * *(context + 0x128) + item_40 * *(context + 0x124);
    float item_8 = item_48 * *(context + 0x120) + item_30 * *(context + 0x128) + item_3c * *(context + 0x124);
    item_50 = fpu_val_5_23 * param_2[2] + fpu_val_6_15 * param_2[1] + fpu_val_7_3 * *param_2;
    float item_4c_1 = item_c * param_2[2] + item_18 * param_2[1] + item_24 * *param_2;
    float item_48_1 = item_8 * param_2[2] + item_14 * param_2[1] + item_20 * *param_2;
    float item_44_1 = fpu_val_5_23 * param_2[5] + fpu_val_6_15 * param_2[4] + fpu_val_7_3 * param_2[3];
    float item_40_1 = item_c * param_2[5] + item_18 * param_2[4] + item_24 * param_2[3];
    float item_3c_1 = item_8 * param_2[5] + item_14 * param_2[4] + item_20 * param_2[3];
    float item_38_1 = fpu_val_7_3 * param_2[6] + fpu_val_5_23 * param_2[8] + fpu_val_6_15 * param_2[7];
    float item_34_1 = item_24 * param_2[6] + item_c * param_2[8] + item_18 * param_2[7];
    int32_t result = param_2[9] + entity_val + 1;
    int32_t result_1 = result;
    float item_30_1 = item_20 * param_2[6] + item_8 * param_2[8] + item_14 * param_2[7];
    memcpy(context + 0x70, &item_50, 0x28);
    return result;
}
