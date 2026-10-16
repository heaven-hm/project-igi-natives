#include "gi_platform.h"
#include "004FD4E0-Script_ParseEnumInt32_30.h"
float Script_ParseEnumInt32_30(void* a1, float a2) __location("valA")

{
    long double fpu7 = 0.0f;
    long double fpu6 = 0.0f;
    float tmpD = g_b818a8;
    float v_8 = fpu6;
    long double fpu5 = 0.0f;
    float objC = g_b818a4;
    int32_t i_1 = g_b041e8;
    float v_4 = fpu5;

    if (i_1 > 0)
    {
        int32_t* objC1 = g_b041e4;
        int32_t dstD1 = g_b041e0;
        int32_t i;

        do
        {
            int32_t valA1 = *objC1;
            objC1 = &objC1[1];
            int32_t valA2 = valA1 * g_b041f0;
            fpu7 = fpu7 + *(valA2 + dstD1 + 0xc);
            fpu6 = fpu6 + *(valA2 + dstD1 + 0x10);
            fpu5 = fpu5 + *(valA2 + dstD1 + 0x14);
            i = i_1;
            i_1 -= 1;
        } while (i != 1);
        v_4 = fpu5;
        v_8 = fpu6;
    }

    long double x87_r7_2 = fpu7 + g_b818a0;
    *a2 = x87_r7_2;
    long double x87_r6_4 = objC + v_8;
    (*(int32_t*)(uintptr_t)(a2 + 4)) = x87_r6_4;
    long double x87_r6_6 = tmpD + v_4;
    (*(int32_t*)(uintptr_t)(a2 + 8)) = x87_r6_6;
    *a2 = x87_r7_2 * (*(int32_t*)(uintptr_t)(a1 + 0xdc)) * 255.0f;
    (*(int32_t*)(uintptr_t)(a2 + 4)) = x87_r6_4 * (*(int32_t*)(uintptr_t)(a1 + 0xdc)) * 255.0f;
    (*(int32_t*)(uintptr_t)(a2 + 8)) = x87_r6_6 * (*(int32_t*)(uintptr_t)(a1 + 0xdc)) * 255.0f;
    return a2;
}
