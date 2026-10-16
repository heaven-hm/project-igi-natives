#include "004860F0-FX_TrailUpdate_6.h"
/* 0x004860f0 FX_TrailUpdate_6 full linked: callers=1 callees=7 */
int32_t sub_4860f0(int32_t a1, int32_t a2, float a3, float a4)

{
    float var_4 = a3;
    float var_8 = a4;
    int32_t edx = a2 * 0x40b;
    void* esi = a1 + (edx << 2);
    int32_t* eax_6 = *(a1 + (edx << 2) + 0x3c);

    if (eax_6 && *(esi + 0x24) > 9)
        sub_4b4e00(eax_6, a3, a4, 128f, 128f, 128f, 0, 0, 0);

    void* eax_7 = *(esi + 0x3c);

    if (eax_7)
        a3 = sub_4b6ce0(eax_7) + a3;

    int32_t* esi_1 = esi + 0x30;
    int32_t i_1 = 3;
    long double x87_r7_6 = a4 + 2f;
    a4 = x87_r7_6;
    int32_t i;

    do
    {
        *(*esi_1 + 0x14) = 0;
        *(*esi_1 + 0x18) = 0x42f00000;
        *(*esi_1 + 0x1c) = 0;
        *(*esi_1 + 4) = a3 + 3f;
        *(*esi_1 + 8) = x87_r7_6;
        sub_4b6f50(*esi_1);
        long double x87_r7_7 = sub_4b7e00(*esi_1);
        esi_1 = &esi_1[1];
        i = i_1;
        i_1 -= 1;
        x87_r7_6 = x87_r7_7 + a4;
        a4 = x87_r7_6;
    } while (i != 1);
    return sub_486210(a1, a2, var_4, var_8, 0);
}
