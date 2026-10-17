// Original IGI.EXE function: FX_ExplosionSpawn_3 (VA 0x00482A40; static CFG gate FAIL, CFG score 0.722).
#include "FX_ExplosionSpawn_3.h"
int32_t FX_ExplosionSpawn_3(void* context)

{
    void item_18;
    memcpy(&item_18, context + 0x70, 0x18);
    float item_94;
    memcpy(&item_94, context + 0x88, 0x28);
    int32_t result = *(context + 0xb0);
    float item_a4 = -1.57079637f;
    memcpy(context + 0xf0, context + 0x70, 0x18);
    float item_6c;
    Sys_CloseFileStream_12(&item_6c, item_a4);
    float item_90;
    float item_8c;
    float item_60;
    float item_54;
    float item_40 = item_54 * item_8c + item_60 * item_90 + item_6c * item_94;
    float item_68;
    float item_5c;
    float item_50;
    float item_3c = item_50 * item_8c + item_5c * item_90 + item_68 * item_94;
    float item_64;
    float item_58;
    float item_4c;
    float item_38 = item_4c * item_8c + item_58 * item_90 + item_64 * item_94;
    float item_88;
    float item_84;
    float item_80;
    float item_34 = item_80 * item_54 + item_84 * item_60 + item_88 * item_6c;
    float item_30 = item_80 * item_50 + item_84 * item_5c + item_88 * item_68;
    float item_2c = item_80 * item_4c + item_84 * item_58 + item_88 * item_64;
    int32_t item_70;
    int32_t item_48;
    int32_t item_1c = item_48 + item_70 + 1;
    float item_7c;
    long double fpu_val_6_27 = item_7c * item_6c;
    memcpy(context + 0x20, &item_18, 0x18);
    float item_78;
    float item_74;
    float item_28 = item_74 * item_54 + item_78 * item_60 + fpu_val_6_27;
    *(context + 0x60) = result;
    float item_24 = item_74 * item_50 + item_78 * item_5c + item_7c * item_68;
    float item_20 = item_74 * item_4c + item_78 * item_58 + item_7c * item_64;
    memcpy(context + 0x38, &item_40, 0x28);
    return result;
}
