// Original IGI.EXE function: Display_RestoreDevice_19 (VA 0x0049CBE0; static CFG gate PASS, CFG score 1.000).
#include "Display_RestoreDevice_19.h"
int32_t Display_RestoreDevice_19(void* a1, void* a2)

{
    long double x87_r7_3 = *(a1 + 0x78) * *(a2 + 0x38) + *(a1 + 0x74) * *(a2 + 0x34)
        + *(a1 + 0x70) * *(a2 + 0x30);
    long double x87_r6_7 = *(a1 + 0x84) * *(a2 + 0x38) + *(a1 + 0x80) * *(a2 + 0x34)
        + *(a1 + 0x7c) * *(a2 + 0x30);
    long double x87_r6_11 = *(a1 + 0x90) * *(a2 + 0x38) + *(a1 + 0x8c) * *(a2 + 0x34)
        + *(a1 + 0x88) * *(a2 + 0x30);
    double v_18 = x87_r7_3 + *(a1 + 0x20);
    double v_10 = x87_r6_7 + *(a1 + 0x28);
    double v_8 = x87_r6_11 + *(a1 + 0x30);
    return Display_CreateSurface_18(&v_18, *(a2 + 0x3c));
}
