// Original IGI.EXE function: Display_RestoreDevice_19 (VA 0x0049CBE0; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_19.h"
int32_t Display_RestoreDevice_19(void* context, void* param_2)

{
    long double fpu_val_7_3 = *(context + 0x78) * *(param_2 + 0x38) + *(context + 0x74) * *(param_2 + 0x34)
        + *(context + 0x70) * *(param_2 + 0x30);
    long double fpu_val_6_7 = *(context + 0x84) * *(param_2 + 0x38) + *(context + 0x80) * *(param_2 + 0x34)
        + *(context + 0x7c) * *(param_2 + 0x30);
    long double fpu_val_6_11 = *(context + 0x90) * *(param_2 + 0x38) + *(context + 0x8c) * *(param_2 + 0x34)
        + *(context + 0x88) * *(param_2 + 0x30);
    double item_18 = fpu_val_7_3 + *(context + 0x20);
    double item_10 = fpu_val_6_7 + *(context + 0x28);
    double item_8 = fpu_val_6_11 + *(context + 0x30);
    return Display_CreateSurface_18(&item_18, *(param_2 + 0x3c));
}
