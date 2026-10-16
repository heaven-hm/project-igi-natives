#include "00449BA0-Glass_Update.h"
/* 0x00449ba0 Glass_Update full linked: callers=0 callees=2 */
int32_t sub_449ba0(float a1, float a2)

{
    float esi = a1;
    void* ecx = **(esi + 0x6c);
    int32_t var_38 = 0;
    void* eax_1 = *(*(ecx + 0xc) + 0xc);
    long double x87_r7_3 = *(esi + 0x78) * *(eax_1 + 0x38) + *(esi + 0x74) * *(eax_1 + 0x34)
        + *(eax_1 + 0x30) * *(esi + 0x70);
    long double x87_r6_7 = *(esi + 0x84) * *(eax_1 + 0x38) + *(esi + 0x80) * *(eax_1 + 0x34)
        + *(esi + 0x7c) * *(eax_1 + 0x30);
    long double x87_r6_11 = *(esi + 0x90) * *(eax_1 + 0x38) + *(esi + 0x8c) * *(eax_1 + 0x34)
        + *(esi + 0x88) * *(eax_1 + 0x30);
    double var_18 = x87_r7_3 + *(esi + 0x20);
    double var_10 = x87_r6_7 + *(esi + 0x28);
    double var_8 = x87_r6_11 + *(esi + 0x30);
    float edx_1 = *(*(*(ecx + 0xc) + 0xc) + 0x3c);
    a1 = edx_1;
    float var_44 = esi;
    long double st0 = Level_CheckQTaskID_5(a2, &var_18, edx_1);
    *(esi + 0x13c) = st0 + *(esi + 0x13c);
    long double temp0 = 0f;
    st0 - temp0;
    int16_t result = (st0 < temp0 ? 1 : 0) << 8 | (FCMP_UO(st0, temp0) ? 1 : 0) << 0xa
        | (st0 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 0x40))
    {
        result = *(esi + 0x144);

        if (!result)
        {
            uint32_t ecx_2 = *(esi + 0x6c);
            *(esi + 0x144) = 1;
            int32_t var_3c_1 = *(a2 + 0x10);
            return sub_44bd70(ecx_2, esi + 0x70, esi + 0x20, *(a2 + 4), 409.600006f);
        }
    }

    return result;
}
