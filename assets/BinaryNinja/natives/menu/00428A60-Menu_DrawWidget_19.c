// Original IGI.EXE function: Menu_DrawWidget_19 (VA 0x00428A60; static CFG gate PASS, CFG score 0.889).
#include "Menu_DrawWidget_19.h"
int32_t Menu_DrawWidget_19(void* context, double* param_2)

{
    double item_18;
    double* item_28 = &item_18;
    item_18 = *param_2 - *(context + 0x20);
    double item_10 = param_2[1] - *(context + 0x28);
    double item_8 = param_2[2] - *(context + 0x30);
    long double fpu_val_7_7 = Sys_OpenFileStream_11(item_28) * 0.125;
    memcpy(&item_18, param_2, 0x18);
    double item_8_1 = fpu_val_7_7 + item_8;
    double* item_2c = &item_18;
    void* item_30 = context;
    long double fpu0;
    long double fpu1;
    return Menu_RequestScreen_20(fpu0, fpu1, item_30, item_2c);
}
