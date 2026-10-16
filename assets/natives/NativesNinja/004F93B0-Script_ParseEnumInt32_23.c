#include "004F93B0-Script_ParseEnumInt32_23.h"
/* 0x004f93b0 Script_ParseEnumInt32_23 full linked: callers=1 callees=2 */
int32_t sub_4f93b0(void* a1, double* a2)

{
    char eax = *(a1 + 0x64);

    if (!eax)
    {
        memcpy(a1 + 0x20, a2, 0x18);
        return eax;
    }

    void* eax_1 = *(a1 + 0x14);
    long double x87_r7_1 = *a2 - *(eax_1 + 0x20);
    long double x87_r6_1 = a2[1] - *(eax_1 + 0x28);
    long double x87_r5_1 = a2[2] - *(eax_1 + 0x30);
    double var_18 =
        *(eax_1 + 0x88) * x87_r5_1 + *(eax_1 + 0x7c) * x87_r6_1 + *(eax_1 + 0x70) * x87_r7_1;
    double var_10 =
        *(eax_1 + 0x8c) * x87_r5_1 + *(eax_1 + 0x80) * x87_r6_1 + *(eax_1 + 0x74) * x87_r7_1;
    double var_8 =
        *(eax_1 + 0x90) * x87_r5_1 + *(eax_1 + 0x84) * x87_r6_1 + *(eax_1 + 0x78) * x87_r7_1;
    memcpy(a1 + 0x20, &var_18, 0x18);
    return eax_1;
}
