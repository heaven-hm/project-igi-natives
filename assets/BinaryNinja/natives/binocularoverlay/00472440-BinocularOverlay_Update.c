#include "BinocularOverlay_Update.h"
int32_t BinocularOverlay_Update(void* a1, void* a2)

{
    void* valA1 = *(*(a2 + 0x2c) + 0x4ec);
    memcpy(a1 + 0x38, valA1 + 0xf8, 0x28);
    float v_50;
    Sys_ReadFileBlock_12(&v_50, 4.71238899f, 0f, 0f);
    float v_44;
    float v_38;
    float v_28 = v_38 * *(a1 + 0x40) + v_50 * *(a1 + 0x38) + v_44 * *(a1 + 0x3c);
    float v_4c;
    float v_40;
    float v_34;
    float v_24 = v_34 * *(a1 + 0x40) + v_4c * *(a1 + 0x38) + v_40 * *(a1 + 0x3c);
    float v_48;
    float v_3c;
    float v_30;
    float v_20 = v_30 * *(a1 + 0x40) + v_48 * *(a1 + 0x38) + v_3c * *(a1 + 0x3c);
    float v_1c = v_38 * *(a1 + 0x4c) + v_50 * *(a1 + 0x44) + v_44 * *(a1 + 0x48);
    float v_18 = v_34 * *(a1 + 0x4c) + v_4c * *(a1 + 0x44) + v_40 * *(a1 + 0x48);
    float v_14 = v_30 * *(a1 + 0x4c) + v_48 * *(a1 + 0x44) + v_3c * *(a1 + 0x48);
    int32_t v_2c;
    int32_t v_4 = *(a1 + 0x5c) + v_2c + 1;
    float v_10 = v_38 * *(a1 + 0x58) + v_50 * *(a1 + 0x50) + v_44 * *(a1 + 0x54);
    float v_c = v_34 * *(a1 + 0x58) + v_4c * *(a1 + 0x50) + v_40 * *(a1 + 0x54);
    float v_8 = v_30 * *(a1 + 0x58) + v_48 * *(a1 + 0x50) + v_3c * *(a1 + 0x54);
    memcpy(a1 + 0x38, &v_28, 0x28);
    memcpy(a1 + 0x60, valA1 + 0xe0, 0x18);
    int32_t result = *(valA1 + 0x1e4);
    *(a1 + 0x78) = result;
    return result;
}
