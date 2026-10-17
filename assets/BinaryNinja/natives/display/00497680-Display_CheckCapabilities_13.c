// Original IGI.EXE function: Display_CheckCapabilities_13 (VA 0x00497680; static CFG gate PASS, CFG score 1.000).
#include "Display_CheckCapabilities_13.h"
int32_t Display_CheckCapabilities_13(void* context, int32_t* param_2)

{
    *(context + 0x18) = *param_2;
    *(context + 0x1c) = param_2[1];
    *(context + 0x20) = param_2[2];
    *(context + 0x24) = param_2[3];
    *(context + 0x28) = param_2[2] * 0.5f;
    *(context + 0x2c) = param_2[3] * 0.5f;
    int32_t data_1 = Display_SetGammaRamp_4();
    float item_8 = *(context + 0x18);
    float item_4 = *(context + 0x1c);
    long double fpu_val_7_7 = *(context + 0x20) + *(context + 0x18);
    *(context + 0x10) = data_1;
    float item_10 = fpu_val_7_7;
    float item_c = *(context + 0x24) + *(context + 0x1c);
    return Display_CloseDevice_13(context, &item_8, &item_10);
}
