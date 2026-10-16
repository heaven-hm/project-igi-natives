#include "00472440-BinocularOverlay_Update.h"
/* 0x00472440 BinocularOverlay_Update full linked: callers=0 callees=4 */
int32_t sub_472440(void* a1, void* a2)

{
    void* eax_1 = *(*(a2 + 0x2c) + 0x4ec);
    memcpy(a1 + 0x38, eax_1 + 0xf8, 0x28);
    float var_50;
    sub_4b38e0(&var_50, 4.71238899f, 0f, 0f);
    float var_44;
    float var_38;
    float var_28 = var_38 * *(a1 + 0x40) + var_50 * *(a1 + 0x38) + var_44 * *(a1 + 0x3c);
    float var_4c;
    float var_40;
    float var_34;
    float var_24 = var_34 * *(a1 + 0x40) + var_4c * *(a1 + 0x38) + var_40 * *(a1 + 0x3c);
    float var_48;
    float var_3c;
    float var_30;
    float var_20 = var_30 * *(a1 + 0x40) + var_48 * *(a1 + 0x38) + var_3c * *(a1 + 0x3c);
    float var_1c = var_38 * *(a1 + 0x4c) + var_50 * *(a1 + 0x44) + var_44 * *(a1 + 0x48);
    float var_18 = var_34 * *(a1 + 0x4c) + var_4c * *(a1 + 0x44) + var_40 * *(a1 + 0x48);
    float var_14 = var_30 * *(a1 + 0x4c) + var_48 * *(a1 + 0x44) + var_3c * *(a1 + 0x48);
    int32_t var_2c;
    int32_t var_4 = *(a1 + 0x5c) + var_2c + 1;
    float var_10 = var_38 * *(a1 + 0x58) + var_50 * *(a1 + 0x50) + var_44 * *(a1 + 0x54);
    float var_c = var_34 * *(a1 + 0x58) + var_4c * *(a1 + 0x50) + var_40 * *(a1 + 0x54);
    float var_8 = var_30 * *(a1 + 0x58) + var_48 * *(a1 + 0x50) + var_3c * *(a1 + 0x54);
    memcpy(a1 + 0x38, &var_28, 0x28);
    memcpy(a1 + 0x60, eax_1 + 0xe0, 0x18);
    int32_t result = *(eax_1 + 0x1e4);
    *(a1 + 0x78) = result;
    return result;
}
