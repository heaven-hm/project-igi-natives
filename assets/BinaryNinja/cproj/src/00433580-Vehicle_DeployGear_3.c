#include "gi_platform.h"
#include "00433580-Vehicle_DeployGear_3.h"
float Vehicle_DeployGear_3(float a1) __location("valA")

{
    float result = a1;
    a1 = 0.0f;
    void* tmpD = *(*(result + 0x1b4) + 0x2d4);

    if (*(tmpD + 0x28) > 0)
    {
        void* flagP1 = result + 0x748;
        void* ctxB1 = tmpD + 0x2c;
        bool cond_0_1;

        do
        {
            void* srcS1 = ctxB1;
            ctxB1 += 0x1c;
            memcpy(flagP1, srcS1, 0x1c);
            flagP1 += 0x1c;
            cond_0_1 = a1 + 1 < *(tmpD + 0x28);
            a1 += 1;
        } while (cond_0_1);
    }

    long double fpu7 = *(result + 0x780);
    int32_t flagP2 = *(result + 0x784);
    *(result + 0x7ac) = 0x46800000;
    long double x87_r7_1 = fpu7 * 0.5.0f;
    *(result + 0x7a0) = flagP2;
    int32_t flagP3 = *(result + 0x788);
    *(result + 0x7c8) = 0xc6800000;
    int32_t ctxB3 = *(result + 0x78c);
    *(result + 0x7a4) = flagP3;
    int32_t flagP4 = *(result + 0x784);
    *(result + 0x79c) = x87_r7_1;
    *(result + 0x7a8) = ctxB3;
    long double fpu6 = *(result + 0x794);
    *(result + 0x7b4) = *(result + 0x798);
    long double x87_r6_1 = -(fpu6);
    *(result + 0x7bc) = flagP4;
    int32_t flagP5 = *(result + 0x788);
    int32_t objC5 = *(result + 0x78c);
    *(result + 0x7b0) = x87_r6_1;
    *(result + 0x7c0) = flagP5;
    *(result + 0x7b8) = x87_r7_1;
    *(result + 0x7c4) = objC5;
    *(result + 0x7cc) = x87_r6_1;
    *(result + 0x7d0) = *(result + 0x798);
    memcpy(tmpD + 0x80, result + 0x79c, 0x1c);
    memcpy(tmpD + 0x9c, result + 0x7b8, 0x1c);
    return result;
}
