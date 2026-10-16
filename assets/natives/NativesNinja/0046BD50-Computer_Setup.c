#include "0046BD50-Computer_Setup.h"
/* 0x0046bd50 Computer_Setup full linked: callers=0 callees=4 */
int32_t sub_46bd50(void* a1)

{
    void* ebx = *(a1 + 0x14);
    sub_465800(a1 + 0xf0, *(ebx + 0x4ec));
    sub_465880(a1 + 0x108, *(ebx + 0x4ec));
    float var_58 = *(a1 + 0x118) * 532.47998f - *(a1 + 0x11c) * 40.9599991f;
    float var_54 = *(a1 + 0x124) * 532.47998f - *(a1 + 0x128) * 40.9599991f;
    *(a1 + 0x20) = *(a1 + 0x10c) * 532.47998f - *(a1 + 0x110) * 40.9599991f + *(a1 + 0xf0);
    *(a1 + 0x28) = var_58 + *(a1 + 0xf8);
    *(a1 + 0x30) = var_54 + *(a1 + 0x100);
    float var_50;
    sub_4b3b60(&var_50, 1.57079637f);
    float var_44;
    float var_38;
    float var_28 = var_44 * *(a1 + 0x10c) + var_50 * *(a1 + 0x108) + var_38 * *(a1 + 0x110);
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_40 * *(a1 + 0x10c) + var_4c * *(a1 + 0x108) + var_34 * *(a1 + 0x110);
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_3c * *(a1 + 0x10c) + var_48 * *(a1 + 0x108) + var_30 * *(a1 + 0x110);
    int32_t result = *(a1 + 0x12c);
    int32_t var_2c;
    int32_t var_4 = result + var_2c + 1;
    float var_1c = var_44 * *(a1 + 0x118) + var_38 * *(a1 + 0x11c) + var_50 * *(a1 + 0x114);
    float var_18 = var_40 * *(a1 + 0x118) + var_34 * *(a1 + 0x11c) + var_4c * *(a1 + 0x114);
    float var_14 = var_3c * *(a1 + 0x118) + var_30 * *(a1 + 0x11c) + var_48 * *(a1 + 0x114);
    float var_10 = var_38 * *(a1 + 0x128) + var_50 * *(a1 + 0x120) + var_44 * *(a1 + 0x124);
    float var_c = var_34 * *(a1 + 0x128) + var_4c * *(a1 + 0x120) + var_40 * *(a1 + 0x124);
    float var_8 = var_30 * *(a1 + 0x128) + var_48 * *(a1 + 0x120) + var_3c * *(a1 + 0x124);
    memcpy(a1 + 0x70, &var_28, 0x28);
    return result;
}
