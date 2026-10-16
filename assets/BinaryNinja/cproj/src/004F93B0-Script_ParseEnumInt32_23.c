#include "gi_platform.h"
#include "004F93B0-Script_ParseEnumInt32_23.h"
int32_t Script_ParseEnumInt32_23(void* a1, double* a2)

{
    char valA = (*(int32_t*)(uintptr_t)(a1 + 0x64));

    if (!valA)
    {
        memcpy(a1 + 0x20, a2, 0x18);
        return valA;
    }

    void* valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x14));
    long double x87_r7_1 = *a2 - *(valA1 + 0x20);
    long double x87_r6_1 = a2[1] - *(valA1 + 0x28);
    long double x87_r5_1 = a2[2] - *(valA1 + 0x30);
    double v_18 =
        *(valA1 + 0x88) * x87_r5_1 + *(valA1 + 0x7c) * x87_r6_1 + *(valA1 + 0x70) * x87_r7_1;
    double v_10 =
        *(valA1 + 0x8c) * x87_r5_1 + *(valA1 + 0x80) * x87_r6_1 + *(valA1 + 0x74) * x87_r7_1;
    double v_8 =
        *(valA1 + 0x90) * x87_r5_1 + *(valA1 + 0x84) * x87_r6_1 + *(valA1 + 0x78) * x87_r7_1;
    memcpy(a1 + 0x20, &v_18, 0x18);
    return valA1;
}
