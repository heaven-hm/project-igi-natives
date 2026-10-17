// Original IGI.EXE function: BinocularOverlay_Update (VA 0x00472440; static CFG gate FAIL, CFG score 0.750).
#include "BinocularOverlay_Update.h"
int32_t BinocularOverlay_Update(void* context, void* param_2)

{
    void* data_1 = *(*(param_2 + 0x2c) + 0x4ec);
    memcpy(context + 0x38, data_1 + 0xf8, 0x28);
    float item_50;
    Sys_ReadFileBlock_12(&item_50, 4.71238899f, 0.0f, 0.0f);
    float item_44;
    float item_38;
    float item_28 = item_38 * *(context + 0x40) + item_50 * *(context + 0x38) + item_44 * *(context + 0x3c);
    float item_4c;
    float item_40;
    float item_34;
    float item_24 = item_34 * *(context + 0x40) + item_4c * *(context + 0x38) + item_40 * *(context + 0x3c);
    float item_48;
    float item_3c;
    float item_30;
    float item_20 = item_30 * *(context + 0x40) + item_48 * *(context + 0x38) + item_3c * *(context + 0x3c);
    float item_1c = item_38 * *(context + 0x4c) + item_50 * *(context + 0x44) + item_44 * *(context + 0x48);
    float item_18 = item_34 * *(context + 0x4c) + item_4c * *(context + 0x44) + item_40 * *(context + 0x48);
    float item_14 = item_30 * *(context + 0x4c) + item_48 * *(context + 0x44) + item_3c * *(context + 0x48);
    int32_t item_2c;
    int32_t item_4 = *(context + 0x5c) + item_2c + 1;
    float item_10 = item_38 * *(context + 0x58) + item_50 * *(context + 0x50) + item_44 * *(context + 0x54);
    float item_c = item_34 * *(context + 0x58) + item_4c * *(context + 0x50) + item_40 * *(context + 0x54);
    float item_8 = item_30 * *(context + 0x58) + item_48 * *(context + 0x50) + item_3c * *(context + 0x54);
    memcpy(context + 0x38, &item_28, 0x28);
    memcpy(context + 0x60, data_1 + 0xe0, 0x18);
    int32_t result = *(data_1 + 0x1e4);
    *(context + 0x78) = result;
    return result;
}
