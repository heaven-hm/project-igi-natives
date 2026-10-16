#include "gi_platform.h"
#include "00482A40-FX_ExplosionSpawn_3.h"
int32_t FX_ExplosionSpawn_3(void* a1)

{
    char v_18;
    memcpy(&v_18, a1 + 0x70, 0x18);
    float v_94;
    memcpy(&v_94, a1 + 0x88, 0x28);
    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0xb0));
    float v_a4 = -1.57079637.0f;
    memcpy(a1 + 0xf0, a1 + 0x70, 0x18);
    float v_6c;
    Sys_CloseFileStream_12(&v_6c, v_a4);
    float v_90;
    float v_8c;
    float v_60;
    float v_54;
    float v_40 = v_54 * v_8c + v_60 * v_90 + v_6c * v_94;
    float v_68;
    float v_5c;
    float v_50;
    float v_3c = v_50 * v_8c + v_5c * v_90 + v_68 * v_94;
    float v_64;
    float v_58;
    float v_4c;
    float v_38 = v_4c * v_8c + v_58 * v_90 + v_64 * v_94;
    float v_88;
    float v_84;
    float v_80;
    float v_34 = v_80 * v_54 + v_84 * v_60 + v_88 * v_6c;
    float v_30 = v_80 * v_50 + v_84 * v_5c + v_88 * v_68;
    float v_2c = v_80 * v_4c + v_84 * v_58 + v_88 * v_64;
    int32_t v_70;
    int32_t v_48;
    int32_t v_1c = v_48 + v_70 + 1;
    float v_7c;
    long double x87_r6_27 = v_7c * v_6c;
    memcpy(a1 + 0x20, &v_18, 0x18);
    float v_78;
    float v_74;
    float v_28 = v_74 * v_54 + v_78 * v_60 + x87_r6_27;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = result;
    float v_24 = v_74 * v_50 + v_78 * v_5c + v_7c * v_68;
    float v_20 = v_74 * v_4c + v_78 * v_58 + v_7c * v_64;
    memcpy(a1 + 0x38, &v_40, 0x28);
    return result;
}
