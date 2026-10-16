#include "0052B1D0-EditHazinglayer_LoadParameters.h"
/* 0x0052b1d0 EditHazinglayer_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_52b1d0(void* a1)

{
    int32_t eax = 0x40000000 >> (*(a1 + 0x70) & 0x1f);
    double var_20;
    memcpy(&var_20, a1 + 0x28, 0x18);
    int64_t var_38 = var_20;
    int32_t eax_1 = eax << 1;
    int32_t var_30 = eax_1;
    int32_t eax_2 = -(eax_1);
    var_38 &= eax_2;
    long double x87_r7_1 = var_38;
    *(a1 + 0x40) = x87_r7_1;
    double var_18;
    var_38 = var_18;
    var_38 &= eax_2;
    long double x87_r6_1 = var_38;
    double var_28 = x87_r6_1;
    *(a1 + 0x48) = x87_r6_1;
    double var_10;
    var_38 = var_10;
    var_38 &= eax_2;
    void* edx_4 = *(a1 + 0x20);
    long double x87_r6_3 = var_38;
    var_38 = x87_r6_3;
    *(a1 + 0x50) = x87_r6_3;
    var_30 = var_30;
    *(a1 + 0x58) = var_30 + x87_r7_1;
    *(a1 + 0x60) = var_30 + var_28;
    *(a1 + 0x68) = var_30 + var_38;
    long double x87_r7_8 = *(a1 + 0x80) + *(a1 + 0x38);

    if (edx_4)
        return sub_4da0a0(edx_4, a1 + 0x40, a1 + 0x58, nullptr, *(a1 + 0x74),
            *(a1 + 0x78) + *(a1 + 0x38), x87_r7_8);

    struct status_msg* result = sub_4d9fc0(a1 + 0x40, a1 + 0x58, nullptr, *(a1 + 0x74),
        *(a1 + 0x78) + *(a1 + 0x38), x87_r7_8);
    *(a1 + 0x20) = result;
    return result;
}
