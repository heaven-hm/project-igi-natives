#include "0049CBE0-Display_RestoreDevice_19.h"
/* 0x0049cbe0 Display_RestoreDevice_19 full linked: callers=4 callees=1 */
int32_t sub_49cbe0(void* a1, void* a2)

{
    long double x87_r7_3 = *(a1 + 0x78) * *(a2 + 0x38) + *(a1 + 0x74) * *(a2 + 0x34)
        + *(a1 + 0x70) * *(a2 + 0x30);
    long double x87_r6_7 = *(a1 + 0x84) * *(a2 + 0x38) + *(a1 + 0x80) * *(a2 + 0x34)
        + *(a1 + 0x7c) * *(a2 + 0x30);
    long double x87_r6_11 = *(a1 + 0x90) * *(a2 + 0x38) + *(a1 + 0x8c) * *(a2 + 0x34)
        + *(a1 + 0x88) * *(a2 + 0x30);
    double var_18 = x87_r7_3 + *(a1 + 0x20);
    double var_10 = x87_r6_7 + *(a1 + 0x28);
    double var_8 = x87_r6_11 + *(a1 + 0x30);
    return sub_49b2d0(&var_18, *(a2 + 0x3c));
}
