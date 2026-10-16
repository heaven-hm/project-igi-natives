#include "0043E7A0-GenericPhysicsMagicObj_Update.h"
/* 0x0043e7a0 GenericPhysicsMagicObj_Update full linked: callers=0 callees=1 */
void* GenericPhysicsMagicObj_Update(void* a1, void* a2)

{
    double* ecx = *(a2 + 4);
    long double x87_r7_1 = *(a1 + 0x20) - *ecx;
    double var_10 = *(a1 + 0x28) - ecx[1];
    double var_8 = *(a1 + 0x30) - ecx[2];
    long double x87_r6_4 = var_10;
    long double x87_r5 = var_8;
    float var_24 = x87_r5 * *(a1 + 0x88) + x87_r6_4 * *(a1 + 0x7c) + x87_r7_1 * *(a1 + 0x70);
    long double x87_r4_5 = x87_r5 * *(a1 + 0x8c);
    long double x87_r3_5 = x87_r6_4 * *(a1 + 0x80);
    float var_18 = var_24;
    float var_20 = x87_r4_5 + x87_r3_5 + x87_r7_1 * *(a1 + 0x74);
    float var_1c = x87_r5 * *(a1 + 0x90) + x87_r6_4 * *(a1 + 0x84) + x87_r7_1 * *(a1 + 0x78);
    long double x87_r7_4 = var_1c;
    long double x87_r6_9 = var_20;
    long double x87_r5_4 = var_24;
    var_10 = var_1c;
    long double x87_r7_7 = *(*(a1 + 0x1b4) + 8) * 200f
        / sqrtl(x87_r5_4 * x87_r5_4 + x87_r6_9 * x87_r6_9 + x87_r7_4 * x87_r7_4);
    var_18 = var_24 * x87_r7_7;
    float var_14_1 = var_20 * x87_r7_7;
    var_10 = var_10 * x87_r7_7;
    *(&var_10 + 4) = 0;
    var_8 = 0;
    *(&var_8 + 4) = 0;
    return sub_4ecf50(a1 + 0xf0, &var_18);
}
