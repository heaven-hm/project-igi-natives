// Original IGI.EXE function: GunClip_Action (VA 0x004776C0; static CFG gate FAIL, CFG score 0.667).
#include "GunClip_Action.h"
void* GunClip_Action(void* context, int32_t* param_2)

{
    float* entity_val = param_2[1];
    double item_28 = entity_val[2] * *(context + 0x100) + entity_val[1] * *(context + 0xf8) + *entity_val * *(context + 0xf0);
    double item_20 = entity_val[5] * *(context + 0x100) + entity_val[4] * *(context + 0xf8) + entity_val[3] * *(context + 0xf0);
    double item_18 = entity_val[8] * *(context + 0x100) + entity_val[7] * *(context + 0xf8) + entity_val[6] * *(context + 0xf0);
    long double fpu_val_7_12 = item_28;
    double item_40;
    memcpy(&item_40, &item_28, 0x18);
    double* entity_1 = *param_2;
    item_40 = fpu_val_7_12 + *entity_1;
    double item_38;
    double item_38_1 = item_38 + entity_1[1];
    double item_30;
    double item_30_1 = item_30 + entity_1[2];
    long double fpu_val_7_18 = *(context + 0x114);
    memcpy(context + 0x20, &item_40, 0x18);
    float* entity_2 = param_2[1];
    item_28 = fpu_val_7_18 * entity_2[1] + entity_2[2] * *(context + 0x120) + *entity_2 * *(context + 0x108);
    *(&item_28 + 4) =
        *(context + 0x118) * entity_2[1] + entity_2[2] * *(context + 0x124) + *entity_2 * *(context + 0x10c);
    item_20 = *(context + 0x11c) * entity_2[1] + entity_2[2] * *(context + 0x128) + *entity_2 * *(context + 0x110);
    *(&item_20 + 4) =
        entity_2[5] * *(context + 0x120) + *(context + 0x114) * entity_2[4] + entity_2[3] * *(context + 0x108);
    item_18 = entity_2[5] * *(context + 0x124) + *(context + 0x118) * entity_2[4] + entity_2[3] * *(context + 0x10c);
    *(&item_18 + 4) =
        entity_2[5] * *(context + 0x128) + *(context + 0x11c) * entity_2[4] + entity_2[3] * *(context + 0x110);
    float item_10 =
        entity_2[8] * *(context + 0x120) + *(context + 0x114) * entity_2[7] + entity_2[6] * *(context + 0x108);
    float item_c =
        entity_2[8] * *(context + 0x124) + *(context + 0x118) * entity_2[7] + entity_2[6] * *(context + 0x10c);
    int32_t item_4 = entity_2[9] + *(context + 0x12c) + 1;
    float item_8 =
        entity_2[8] * *(context + 0x128) + *(context + 0x11c) * entity_2[7] + entity_2[6] * *(context + 0x110);
    memcpy(context + 0x70, &item_28, 0x28);
    return context;
}
