#include "00433030-Vehicle_InitHeli_3.h"
/* 0x00433030 Vehicle_InitHeli_3 full linked: callers=1 callees=5 */
int32_t Vehicle_InitHeli_3(float* a1, int32_t* a2, int32_t* a3)

{
    float ebx = a3;
    long double x87_r0;
    long double x87_r1;
    long double x87_r2;
    long double x87_r3;
    long double x87_r4;
    long double x87_r5;
    long double x87_r6;
    long double x87_r7;
    sub_5031f0(x87_r0, x87_r1, x87_r2, x87_r3, x87_r4, x87_r5, x87_r6, x87_r7, a1, a2, ebx);
    int32_t eax = *a2;
    *a2 = eax + 1;
    int32_t eax_1 = sub_4b8a20(ebx, eax);
    int32_t i = 0;
    a1[0x46] = eax_1;

    if (eax_1 > 0)
    {
        a3 = &a1[0x47];

        do
        {
            int32_t eax_2 = *a2;
            *a2 = eax_2 + 1;
            i += 1;
            *a3 = sub_4b8a20(ebx, eax_2);
            a3 = &a3[1];
        } while (i < a1[0x46]);
    }

    int32_t eax_5 = *a2;
    *a2 = eax_5 + 1;
    int32_t result = sub_4b8a20(ebx, eax_5);
    int32_t ebp = 0;
    a1[0x54] = result;

    if (result > 0)
    {
        a3 = &a1[0x4a];

        do
        {
            int32_t eax_7 = *a2;
            *a2 = eax_7 + 1;
            ebp += 1;
            *a3 = sub_4b8a20(ebx, eax_7);
            result = a1[0x54];
            a3 = &a3[1];
        } while (ebp < result);
    }

    return result;
}
