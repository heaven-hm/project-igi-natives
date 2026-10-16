#include "00433580-Vehicle_DeployGear_3.h"
/* 0x00433580 Vehicle_DeployGear_3 full linked: callers=1 callees=3 */
float Vehicle_DeployGear_3(float a1) __location("eax")

{
    float result = a1;
    a1 = 0f;
    void* edx = *(*(result + 0x1b4) + 0x2d4);

    if (*(edx + 0x28) > 0)
    {
        void* ebp_1 = result + 0x748;
        void* ebx_1 = edx + 0x2c;
        bool cond:0_1;

        do
        {
            void* esi_1 = ebx_1;
            ebx_1 += 0x1c;
            memcpy(ebp_1, esi_1, 0x1c);
            ebp_1 += 0x1c;
            cond:0_1 = a1 + 1 < *(edx + 0x28);
            a1 += 1;
        } while (cond:0_1);
    }

    long double x87_r7 = *(result + 0x780);
    int32_t ebp_2 = *(result + 0x784);
    *(result + 0x7ac) = 0x46800000;
    long double x87_r7_1 = x87_r7 * 0.5f;
    *(result + 0x7a0) = ebp_2;
    int32_t ebp_3 = *(result + 0x788);
    *(result + 0x7c8) = 0xc6800000;
    int32_t ebx_3 = *(result + 0x78c);
    *(result + 0x7a4) = ebp_3;
    int32_t ebp_4 = *(result + 0x784);
    *(result + 0x79c) = x87_r7_1;
    *(result + 0x7a8) = ebx_3;
    long double x87_r6 = *(result + 0x794);
    *(result + 0x7b4) = *(result + 0x798);
    long double x87_r6_1 = -(x87_r6);
    *(result + 0x7bc) = ebp_4;
    int32_t ebp_5 = *(result + 0x788);
    int32_t ecx_5 = *(result + 0x78c);
    *(result + 0x7b0) = x87_r6_1;
    *(result + 0x7c0) = ebp_5;
    *(result + 0x7b8) = x87_r7_1;
    *(result + 0x7c4) = ecx_5;
    *(result + 0x7cc) = x87_r6_1;
    *(result + 0x7d0) = *(result + 0x798);
    memcpy(edx + 0x80, result + 0x79c, 0x1c);
    memcpy(edx + 0x9c, result + 0x7b8, 0x1c);
    return result;
}
