#include "00497680-Display_CheckCapabilities_13.h"
/* 0x00497680 Display_CheckCapabilities_13 full linked: callers=10 callees=2 */
int32_t sub_497680(void* a1, int32_t* a2)

{
    *(a1 + 0x18) = *a2;
    *(a1 + 0x1c) = a2[1];
    *(a1 + 0x20) = a2[2];
    *(a1 + 0x24) = a2[3];
    *(a1 + 0x28) = a2[2] * 0.5f;
    *(a1 + 0x2c) = a2[3] * 0.5f;
    int32_t eax_1 = sub_491db0();
    float var_8 = *(a1 + 0x18);
    float var_4 = *(a1 + 0x1c);
    long double x87_r7_7 = *(a1 + 0x20) + *(a1 + 0x18);
    *(a1 + 0x10) = eax_1;
    float var_10 = x87_r7_7;
    float var_c = *(a1 + 0x24) + *(a1 + 0x1c);
    return sub_497520(a1, &var_8, &var_10);
}
