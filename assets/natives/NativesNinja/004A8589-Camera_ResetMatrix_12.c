#include "004A8589-Camera_ResetMatrix_12.h"
/* 0x004a8589 Camera_ResetMatrix_12 full linked: callers=2 callees=6 */
long double sub_4a8589(int32_t a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, double a7, int32_t a8)

{
    int32_t eax = sub_4a8637(a2);
    int32_t var_20 = eax;
    int16_t x87control;

    if (!eax)
    {
        sub_4a87fc(x87control, a8, 0xffff);
        sub_4a8611(a1);
        return a7;
    }

    int32_t var_1c = a3;
    int32_t var_18 = a4;
    int32_t var_14 = a5;
    int32_t var_10 = a6;
    int32_t var_24 = a1;
    int32_t var_8 = *(&a7 + 4);
    sub_4a87fc(x87control, a8, 0xffff);
    int32_t* var_34 = &var_24;
    sub_4a8611(a1);
    return a7;
}
