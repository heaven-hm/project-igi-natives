#include "HumanPlayer_ApplyPhysics_6.h"
int32_t* HumanPlayer_ApplyPhysics_6(void* a1 @ 0x8)

{
    AI_CombatTarget_21(a1);
    long double x87_r7_3 = -(*(a1 + 0xdac)) * 88.309761f + *(a1 + 0xdb0) * 0.99000001f;
    *(a1 + 0x664) = *(a1 + 0xda4);
    int32_t dstD1 = *(a1 + 0xda8);
    *(a1 + 0xdb0) = x87_r7_3;
    int32_t objC1 = *(a1 + 0xdac);
    *(a1 + 0x668) = dstD1;
    *(a1 + 0x66c) = objC1;
    *(a1 + 0x664) = x87_r7_3 * *(a1 + 0x664);
    *(a1 + 0x668) = x87_r7_3 * *(a1 + 0x668);
    *(a1 + 0x66c) = x87_r7_3 * *(a1 + 0x66c);
    return a1 + 0x664;
}
